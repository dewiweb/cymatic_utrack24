// rea decompile_all
// name: FUN_1005971a
// address: 0x1005971a
// body: available
// range: 0x1005971a-0x1005972d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_1005971a(CMDIChildWnd *param_1)

{
  HWND hWnd;
  CMDIFrameWnd *pCVar1;
  uint uVar2;
  LONG dwNewLong;
  BOOL BVar3;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  pCVar1 = CMDIChildWnd::GetMDIFrame(param_1);
  hWnd = *(HWND *)(pCVar1 + 0x20);
  uVar2 = GetWindowLongW(hWnd,-0x10);
  dwNewLong = SetWindowLongW(hWnd,-0x10,uVar2 & 0xffff7fff);
  FUN_1005934f((int)param_1);
  BVar3 = IsWindow(hWnd);
  if (BVar3 != 0) {
    SetWindowLongW(hWnd,-0x10,dwNewLong);
    (**(code **)(*(int *)pCVar1 + 0x19c))(1);
  }
  return 1;
}

