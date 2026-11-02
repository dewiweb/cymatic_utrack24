// rea decompile_all
// name: FUN_0066ff10
// address: 0x66ff10
// body: available
// range: 0x66ff10-0x6702f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066ff10(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int local_10c [65];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  pcVar2 = *(code **)(*(int *)(param_1 + 0x158) + 8);
  iVar3 = *(int *)(*(int *)(param_1 + 0x158) + 0xc + *(int *)(param_2 + 0x10) * 4);
  piVar1 = (int *)(param_3 + param_5 * 4);
  for (; param_7 != 0; param_7 = param_7 + -1) {
    pbVar6 = (byte *)(*piVar1 + param_6);
    local_10c[0] = *pbVar6 - 0x80;
    local_10c[1] = pbVar6[1] - 0x80;
    local_10c[2] = pbVar6[2] - 0x80;
    local_10c[3] = pbVar6[3] - 0x80;
    local_10c[4] = pbVar6[4] - 0x80;
    local_10c[5] = pbVar6[5] - 0x80;
    local_10c[6] = pbVar6[6] - 0x80;
    local_10c[7] = pbVar6[7] - 0x80;
    pbVar6 = (byte *)(piVar1[1] + param_6);
    local_10c[8] = *pbVar6 - 0x80;
    local_10c[9] = pbVar6[1] - 0x80;
    local_10c[10] = pbVar6[2] - 0x80;
    local_10c[0xb] = pbVar6[3] - 0x80;
    local_10c[0xc] = pbVar6[4] - 0x80;
    local_10c[0xd] = pbVar6[5] - 0x80;
    local_10c[0xe] = pbVar6[6] - 0x80;
    local_10c[0xf] = pbVar6[7] - 0x80;
    pbVar6 = (byte *)(piVar1[2] + param_6);
    local_10c[0x10] = *pbVar6 - 0x80;
    local_10c[0x11] = pbVar6[1] - 0x80;
    local_10c[0x12] = pbVar6[2] - 0x80;
    local_10c[0x13] = pbVar6[3] - 0x80;
    local_10c[0x14] = pbVar6[4] - 0x80;
    local_10c[0x15] = pbVar6[5] - 0x80;
    local_10c[0x16] = pbVar6[6] - 0x80;
    local_10c[0x17] = pbVar6[7] - 0x80;
    pbVar6 = (byte *)(piVar1[3] + param_6);
    local_10c[0x18] = *pbVar6 - 0x80;
    local_10c[0x19] = pbVar6[1] - 0x80;
    local_10c[0x1a] = pbVar6[2] - 0x80;
    local_10c[0x1b] = pbVar6[3] - 0x80;
    local_10c[0x1c] = pbVar6[4] - 0x80;
    local_10c[0x1d] = pbVar6[5] - 0x80;
    local_10c[0x1e] = pbVar6[6] - 0x80;
    local_10c[0x1f] = pbVar6[7] - 0x80;
    pbVar6 = (byte *)(piVar1[4] + param_6);
    local_10c[0x20] = *pbVar6 - 0x80;
    local_10c[0x21] = pbVar6[1] - 0x80;
    local_10c[0x22] = pbVar6[2] - 0x80;
    local_10c[0x23] = pbVar6[3] - 0x80;
    local_10c[0x24] = pbVar6[4] - 0x80;
    local_10c[0x25] = pbVar6[5] - 0x80;
    local_10c[0x26] = pbVar6[6] - 0x80;
    local_10c[0x27] = pbVar6[7] - 0x80;
    pbVar6 = (byte *)(piVar1[5] + param_6);
    local_10c[0x28] = *pbVar6 - 0x80;
    local_10c[0x29] = pbVar6[1] - 0x80;
    local_10c[0x2a] = pbVar6[2] - 0x80;
    local_10c[0x2b] = pbVar6[3] - 0x80;
    local_10c[0x2c] = pbVar6[4] - 0x80;
    local_10c[0x2d] = pbVar6[5] - 0x80;
    local_10c[0x2e] = pbVar6[6] - 0x80;
    local_10c[0x2f] = pbVar6[7] - 0x80;
    pbVar6 = (byte *)(piVar1[6] + param_6);
    local_10c[0x30] = *pbVar6 - 0x80;
    local_10c[0x31] = pbVar6[1] - 0x80;
    local_10c[0x32] = pbVar6[2] - 0x80;
    local_10c[0x33] = pbVar6[3] - 0x80;
    local_10c[0x34] = pbVar6[4] - 0x80;
    local_10c[0x35] = pbVar6[5] - 0x80;
    local_10c[0x36] = pbVar6[6] - 0x80;
    local_10c[0x37] = pbVar6[7] - 0x80;
    pbVar6 = (byte *)(piVar1[7] + param_6);
    local_10c[0x38] = *pbVar6 - 0x80;
    local_10c[0x39] = pbVar6[1] - 0x80;
    local_10c[0x3a] = pbVar6[2] - 0x80;
    local_10c[0x3b] = pbVar6[3] - 0x80;
    local_10c[0x3c] = pbVar6[4] - 0x80;
    local_10c[0x3d] = pbVar6[5] - 0x80;
    local_10c[0x3e] = pbVar6[6] - 0x80;
    local_10c[0x3f] = pbVar6[7] - 0x80;
    (*pcVar2)(local_10c);
    iVar8 = 0;
    do {
      iVar4 = *(int *)(iVar3 + iVar8 * 4);
      iVar7 = local_10c[iVar8];
      if (iVar7 < 0) {
        iVar7 = (iVar4 >> 1) - iVar7;
        if (iVar7 < iVar4) {
          sVar5 = 0;
        }
        else {
          sVar5 = -(short)(iVar7 / iVar4);
        }
      }
      else {
        iVar7 = iVar7 + (iVar4 >> 1);
        if (iVar7 < iVar4) {
          sVar5 = 0;
        }
        else {
          sVar5 = (short)(iVar7 / iVar4);
        }
      }
      *(short *)(param_4 + iVar8 * 2) = sVar5;
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x40);
    param_4 = param_4 + 0x80;
    param_6 = param_6 + 8;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

