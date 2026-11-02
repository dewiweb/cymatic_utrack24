// rea decompile_all
// name: CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>::AddTail
// address: 0x10095be7
// body: available
// range: 0x10095be7-0x10095c36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: struct __POSITION * __thiscall CList<struct CMFCRestoredTabInfo,struct
   CMFCRestoredTabInfo>::AddTail(struct CMFCRestoredTabInfo)
   
   Library: Visual Studio 2010 Release */

__POSITION * __thiscall
CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>::AddTail
          (CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo> *this,int param_2)

{
  CNode *pCVar1;
  
  pCVar1 = NewNode(this,*(CNode **)(this + 8),(CNode *)0x0);
  CMFCRestoredTabInfo::operator=
            ((CMFCRestoredTabInfo *)(pCVar1 + 8),(CMFCRestoredTabInfo *)&param_2);
  if (*(undefined4 **)(this + 8) == (undefined4 *)0x0) {
    *(CNode **)(this + 4) = pCVar1;
  }
  else {
    **(undefined4 **)(this + 8) = pCVar1;
  }
  *(CNode **)(this + 8) = pCVar1;
  FUN_10001030((undefined4 *)(param_2 + -0x10));
  return (__POSITION *)pCVar1;
}

