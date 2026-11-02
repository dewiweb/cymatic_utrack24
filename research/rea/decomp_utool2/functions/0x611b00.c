// rea decompile_all
// name: FUN_00611b00
// address: 0x611b00
// body: available
// range: 0x611b00-0x611c04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00611b00(void)

{
  DWORDLONG dwlConditionMask;
  int in_ECX;
  undefined8 uVar1;
  _OSVERSIONINFOEXW local_12c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  _memset(&local_12c,0,0x11c);
  local_12c.dwOSVersionInfoSize = 0x11c;
  if (in_ECX < 0x207) {
    if (in_ECX < 0x203) {
      local_12c.dwMajorVersion = 5;
      local_12c.dwMinorVersion = (DWORD)(0x201 < in_ECX);
    }
    else {
      local_12c.dwMajorVersion = 6;
      switch(in_ECX) {
      case 0x204:
        local_12c.dwMinorVersion = 1;
        break;
      case 0x205:
        local_12c.dwMinorVersion = 2;
        break;
      case 0x206:
        local_12c.dwMinorVersion = 3;
      }
    }
  }
  else {
    local_12c.dwMajorVersion = 10;
    local_12c.dwMinorVersion = 0;
  }
  uVar1 = VerSetConditionMask(0,0,2,3);
  uVar1 = VerSetConditionMask(uVar1,1,3);
  uVar1 = VerSetConditionMask(uVar1,0x20,3);
  dwlConditionMask = (DWORDLONG)VerSetConditionMask(uVar1,0x10,3);
  VerifyVersionInfoW(&local_12c,0x33,dwlConditionMask);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

