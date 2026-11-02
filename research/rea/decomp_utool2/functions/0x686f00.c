// rea decompile_all
// name: FUN_00686f00
// address: 0x686f00
// body: available
// range: 0x686f00-0x686f82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00686f00(HWND param_1,undefined1 *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD local_48;
  tagWINDOWINFO local_44;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  BVar1 = IsWindowVisible(param_1);
  if (BVar1 != 0) {
    local_48 = 0;
    GetWindowThreadProcessId(param_1,&local_48);
    DVar2 = GetCurrentProcessId();
    if (local_48 == DVar2) {
      BVar1 = GetWindowInfo(param_1,&local_44);
      if ((BVar1 != 0) && (((byte)local_44.dwExStyle & 8) != 0)) {
        *param_2 = 1;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

