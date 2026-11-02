// rea decompile_all
// name: FUN_004a5ae0
// address: 0x4a5ae0
// body: available
// range: 0x4a5ae0-0x4a5b55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a5ae0(undefined4 param_1)

{
  HWND hWnd;
  int in_ECX;
  int local_40;
  int local_3c;
  tagRECT local_30;
  int local_20;
  int iStack_1c;
  LONG LStack_18;
  LONG LStack_14;
  
  GetWindowRect(*(HWND *)(in_ECX + 0x38),&local_30);
  local_20 = local_30.left;
  iStack_1c = local_30.top;
  LStack_18 = local_30.right;
  LStack_14 = local_30.bottom;
  FUN_00687970();
  hWnd = GetParent(*(HWND *)(in_ECX + 0x38));
  if (hWnd != (HWND)0x0) {
    GetWindowRect(hWnd,&local_30);
    local_40 = local_40 - local_30.left;
    local_3c = local_3c - local_30.top;
  }
  FUN_004107c0(param_1,&local_40);
  return param_1;
}

