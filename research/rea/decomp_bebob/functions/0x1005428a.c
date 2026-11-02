// rea decompile_all
// name: InsertBefore
// address: 0x1005428a
// body: available
// range: 0x1005428a-0x100542d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: struct __POSITION * __thiscall CStringList::InsertBefore(struct __POSITION *,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &)
    public: struct __POSITION * __thiscall CStringList::InsertBefore(struct __POSITION *,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &)
   
   Library: Visual Studio 2010 Release */

CNode * __thiscall InsertBefore(void *this,CNode *param_1,undefined4 *param_2)

{
  CNode *pCVar1;
  
  if (param_1 == (CNode *)0x0) {
    pCVar1 = AddHead(this,param_2);
  }
  else {
    pCVar1 = CStringList::NewNode(this,*(CNode **)(param_1 + 4),param_1);
    FUN_10007c90(pCVar1 + 8,param_2);
    if (*(undefined4 **)(param_1 + 4) == (undefined4 *)0x0) {
      *(CNode **)((int)this + 4) = pCVar1;
    }
    else {
      **(undefined4 **)(param_1 + 4) = pCVar1;
    }
    *(CNode **)(param_1 + 4) = pCVar1;
  }
  return pCVar1;
}

