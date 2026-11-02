// rea decompile_all
// name: CList<tagPOINT,tagPOINT>::AddHead
// address: 0x10033783
// body: available
// range: 0x10033783-0x100337b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct __POSITION * __thiscall CList<struct tagPOINT,struct tagPOINT>::AddHead(struct
   tagPOINT)
   
   Library: Visual Studio 2010 Release */

__POSITION * __thiscall
CList<tagPOINT,tagPOINT>::AddHead(CList<tagPOINT,tagPOINT> *this,tagPOINT param_1)

{
  CNode *pCVar1;
  
  pCVar1 = NewNode(this,(CNode *)0x0,*(CNode **)(this + 4));
  *(LONG *)(pCVar1 + 8) = param_1.x;
  *(LONG *)(pCVar1 + 0xc) = param_1.y;
  if (*(int *)(this + 4) == 0) {
    *(CNode **)(this + 8) = pCVar1;
  }
  else {
    *(CNode **)(*(int *)(this + 4) + 4) = pCVar1;
  }
  *(CNode **)(this + 4) = pCVar1;
  return (__POSITION *)pCVar1;
}

