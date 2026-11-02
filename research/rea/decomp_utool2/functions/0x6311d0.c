// rea decompile_all
// name: FUN_006311d0
// address: 0x6311d0
// body: available
// range: 0x6311d0-0x631333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006311d0(void)

{
  int iVar1;
  DWORDLONG dwlConditionMask;
  BOOL BVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_14c [4];
  _OSVERSIONINFOEXW local_148;
  int local_28 [9];
  
  local_28[7] = DAT_00c76070 ^ (uint)auStack_14c;
  local_28[0] = 0x207;
  local_28[1] = 0x206;
  local_28[2] = 0x205;
  local_28[3] = 0x204;
  local_28[4] = 0x203;
  iVar3 = 0;
  local_28[5] = 0x202;
  local_28[6] = 0x201;
  while( true ) {
    iVar1 = local_28[iVar3];
    _memset(&local_148,0,0x11c);
    local_148.dwOSVersionInfoSize = 0x11c;
    if (iVar1 < 0x207) {
      if (iVar1 < 0x203) {
        local_148.dwMajorVersion = 5;
        local_148.dwMinorVersion = (DWORD)(0x201 < iVar1);
      }
      else {
        local_148.dwMajorVersion = 6;
        switch(iVar1) {
        case 0x204:
          local_148.dwMinorVersion = 1;
          break;
        case 0x205:
          local_148.dwMinorVersion = 2;
          break;
        case 0x206:
          local_148.dwMinorVersion = 3;
        }
      }
    }
    else {
      local_148.dwMajorVersion = 10;
      local_148.dwMinorVersion = 0;
    }
    uVar4 = VerSetConditionMask(0,0,2,3);
    uVar4 = VerSetConditionMask(uVar4,1,3);
    uVar4 = VerSetConditionMask(uVar4,0x20,3);
    dwlConditionMask = (DWORDLONG)VerSetConditionMask(uVar4,0x10,3);
    BVar2 = VerifyVersionInfoW(&local_148,0x33,dwlConditionMask);
    if (BVar2 != 0) break;
    iVar3 = iVar3 + 1;
    if (6 < iVar3) {
      __security_check_cookie(local_28[7] ^ (uint)auStack_14c);
      return;
    }
  }
  __security_check_cookie(local_28[7] ^ (uint)auStack_14c);
  return;
}

