//===- Object.cpp ---------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "Object.h"
#include "llvm/ADT/DenseSet.h"
#include <algorithm>

namespace llvm {
namespace objcopy {
namespace coff {

using namespace object;

void Object::addSymbols(ArrayRef<Symbol> NewSymbols) {
  for (Symbol S : NewSymbols) {
    S.UniqueId = NextSymbolUniqueId++;
    Symbols.emplace_back(S);
  }
  updateSymbols();
}

void Object::updateSymbols() {
  SymbolMap = DenseMap<size_t, Symbol *>(Symbols.size());
  for (Symbol &Sym : Symbols)
    SymbolMap[Sym.UniqueId] = &Sym;
}

const Symbol *Object::findSymbol(size_t UniqueId) const {
  auto It = SymbolMap.find(UniqueId);
  if (It == SymbolMap.end())
    return nullptr;
  return It->second;
}

void Object::removeSymbols(function_ref<bool(const Symbol &)> ToRemove) {
  Symbols.erase(
      std::remove_if(std::begin(Symbols), std::end(Symbols),
                     [ToRemove](const Symbol &Sym) { return ToRemove(Sym); }),
      std::end(Symbols));
  updateSymbols();
}

Error Object::markSymbols() {
  for (Symbol &Sym : Symbols)
    Sym.Referenced = false;
  for (const Section &Sec : Sections) {
    for (const Relocation &R : Sec.Relocs) {
      auto It = SymbolMap.find(R.Target);
      if (It == SymbolMap.end())
        return createStringError(object_error::invalid_symbol_index,
                                 "relocation target %zu not found", R.Target);
      It->second->Referenced = true;
    }
  }
  return Error::success();
}

void Object::addSections(ArrayRef<Section> NewSections) {
  for (Section S : NewSections) {
    S.UniqueId = NextSectionUniqueId++;
    Sections.emplace_back(S);
  }
  updateSections();
}

void Object::updateSections() {
  SectionMap = DenseMap<ssize_t, Section *>(Sections.size());
  size_t Index = 1;
  for (Section &S : Sections) {
    SectionMap[S.UniqueId] = &S;
    S.Index = Index++;
  }
}

const Section *Object::findSection(ssize_t UniqueId) const {
  auto It = SectionMap.find(UniqueId);
  if (It == SectionMap.end())
    return nullptr;
  return It->second;
}

void Object::removeSections(function_ref<bool(const Section &)> ToRemove) {
  DenseSet<ssize_t> AssociatedSections;
  auto RemoveAssociated = [&AssociatedSections](const Section &Sec) {
    return AssociatedSections.count(Sec.UniqueId) == 1;
  };
  do {
    DenseSet<ssize_t> RemovedSections;
    Sections.erase(
        std::remove_if(std::begin(Sections), std::end(Sections),
                       [ToRemove, &RemovedSections](const Section &Sec) {
                         bool Remove = ToRemove(Sec);
                         if (Remove)
                           RemovedSections.insert(Sec.UniqueId);
                         return Remove;
                       }),
        std::end(Sections));
    // Remove all symbols referring to the removed sections.
    AssociatedSections.clear();
    Symbols.erase(
        std::remove_if(
            std::begin(Symbols), std::end(Symbols),
            [&RemovedSections, &AssociatedSections](const Symbol &Sym) {
              // If there are sections that are associative to a removed
              // section,
              // remove those as well as nothing will include them (and we can't
              // leave them dangling).
              if (RemovedSections.count(Sym.AssociativeComdatTargetSectionId) ==
                  1)
                AssociatedSections.insert(Sym.TargetSectionId);
              return RemovedSections.count(Sym.TargetSectionId) == 1;
            }),
        std::end(Symbols));
    ToRemove = RemoveAssociated;
  } while (!AssociatedSections.empty());
  updateSections();
  updateSymbols();
}

void Object::truncateSections(function_ref<bool(const Section &)> ToTruncate) {
  for (Section &Sec : Sections) {
    if (ToTruncate(Sec)) {
      Sec.clearContents();
      Sec.Relocs.clear();
      Sec.Header.SizeOfRawData = 0;
    }
  }
}

} // end namespace coff
} // end namespace objcopy
} // end namespace llvm
