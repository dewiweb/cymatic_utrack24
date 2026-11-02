// rea decompile_all
// name: thunk_FUN_10056a2b
// address: 0x100225c0
// body: available
// range: 0x100225c0-0x100225c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */

void __fastcall thunk_FUN_10056a2b(CFrameWnd *param_1)

{
  _AFX_THREAD_STATE *p_Var1;
  
  *(undefined ***)param_1 = CFrameWnd::vftable;
  CFrameWnd::RemoveFrameWnd(param_1);
  p_Var1 = AfxGetThreadState();
  while (*(CFrameWnd **)(p_Var1 + 0x14c) == param_1) {
    FUN_10054ab3(*(undefined4 **)(p_Var1 + 0x150));
  }
  if (*(void **)(param_1 + 0xdc) != (void *)0x0) {
    FUN_100085b9(*(void **)(param_1 + 0xdc));
  }
  FUN_10056b48();
  return;
}

