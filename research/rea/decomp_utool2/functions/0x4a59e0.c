// rea decompile_all
// name: FUN_004a59e0
// address: 0x4a59e0
// body: available
// range: 0x4a59e0-0x4a5adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a59e0(int *param_1,undefined1 param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  HWND hWnd;
  uint uFlags;
  int *in_ECX;
  tagRECT local_40;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  char local_9;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  *(undefined1 *)(in_ECX + 0x16) = param_2;
  FUN_004af390(&local_20,param_1);
  if (((*(byte *)(in_ECX[1] + 0x68) & 4) == 0) &&
     (hWnd = GetParent((HWND)in_ECX[0xe]), hWnd != (HWND)0x0)) {
    GetWindowRect(hWnd,&local_40);
    local_1c = local_1c + local_40.top;
    local_20 = local_20 + local_40.left;
  }
  local_10 = local_1c;
  (**(code **)(*in_ECX + 0x1c))(&local_30);
  if ((local_30 == *param_1) && (local_2c == param_1[1])) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((local_28 == param_1[2]) && (local_24 == param_1[3])) {
    local_9 = '\0';
  }
  else {
    local_9 = '\x01';
  }
  uVar1 = (uint)!bVar2 * 2 + 0x214;
  uFlags = uVar1 | 1;
  if (local_9 != '\0') {
    uFlags = uVar1;
  }
  SetWindowPos((HWND)in_ECX[0xe],(HWND)0x0,local_20,local_10,local_18,local_14,uFlags);
  if ((local_9 != '\0') && (cVar3 = FUN_0068da80(), cVar3 != '\0')) {
    FUN_004a5970();
    FUN_004a5920();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

