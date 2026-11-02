// rea decompile_all
// name: FUN_0042d004
// address: 0x42d004
// body: available
// range: 0x42d004-0x42d115 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042d004(undefined4 param_1,uint *param_2)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_c;
  uint local_8;
  
  iVar9 = 0;
  local_c = 0;
  uVar6 = FUN_00411266();
  local_8 = uVar6 & 0xff;
  *param_2 = local_8;
  if (local_8 == 0) {
    iVar7 = -1;
  }
  else {
    if ((char)uVar6 < '\0') {
      uVar8 = FUN_00411266();
      local_8 = uVar8 & 0xff | (uVar6 & 0x7f) << 8;
    }
    iVar7 = FUN_00411976(2,0,&local_c);
    if (local_c == 0) {
      if (0 < (int)local_8) {
        do {
          uVar8 = FUN_00411266();
          uVar6 = uVar8 & 0xff;
          if ((char)uVar8 < '\0') {
            uVar8 = uVar8 & 0x7f;
            sVar2 = FUN_00411277();
            *(short *)(iVar7 + iVar9 * 2) = sVar2;
            iVar9 = iVar9 + 1;
            if (uVar8 == 0) {
              return iVar7;
            }
            if ((int)local_8 <= (int)(uVar8 + iVar9)) {
              return iVar7;
            }
            for (; uVar8 != 0; uVar8 = uVar8 - 1) {
              sVar3 = FUN_00411277();
              sVar2 = sVar2 + sVar3;
              *(short *)(iVar7 + iVar9 * 2) = sVar2;
              iVar9 = iVar9 + 1;
            }
          }
          else {
            bVar1 = FUN_00411266();
            uVar4 = (ushort)bVar1;
            *(ushort *)(iVar7 + iVar9 * 2) = uVar4;
            iVar9 = iVar9 + 1;
            if (uVar6 == 0) {
              return iVar7;
            }
            if ((int)local_8 <= (int)(uVar6 + iVar9)) {
              return iVar7;
            }
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              uVar5 = FUN_00411266();
              uVar4 = uVar4 + (uVar5 & 0xff);
              *(ushort *)(iVar7 + iVar9 * 2) = uVar4;
              iVar9 = iVar9 + 1;
            }
          }
        } while (iVar9 < (int)local_8);
      }
    }
    else {
      iVar7 = 0;
    }
  }
  return iVar7;
}

