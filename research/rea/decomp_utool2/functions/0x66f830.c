// rea decompile_all
// name: FUN_0066f830
// address: 0x66f830
// body: available
// range: 0x66f830-0x66ff04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066f830(int param_1,int param_2,int param_3,float *param_4,int param_5,int param_6,
                 int param_7)

{
  float *pfVar1;
  float *pfVar2;
  code *pcVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  byte *pbVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float local_10c [65];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  pcVar3 = *(code **)(*(int *)(param_1 + 0x158) + 0x1c);
  pfVar4 = *(float **)(*(int *)(param_1 + 0x158) + 0x20 + *(int *)(param_2 + 0x10) * 4);
  for (; param_7 != 0; param_7 = param_7 + -1) {
    pbVar9 = (byte *)(*(int *)(param_3 + param_5 * 4) + param_6);
    local_10c[0] = (float)(int)(*pbVar9 - 0x80);
    local_10c[1] = (float)(int)(pbVar9[1] - 0x80);
    local_10c[2] = (float)(int)(pbVar9[2] - 0x80);
    local_10c[3] = (float)(int)(pbVar9[3] - 0x80);
    local_10c[4] = (float)(int)(pbVar9[4] - 0x80);
    local_10c[5] = (float)(int)(pbVar9[5] - 0x80);
    local_10c[6] = (float)(int)(pbVar9[6] - 0x80);
    local_10c[7] = (float)(int)(pbVar9[7] - 0x80);
    pbVar9 = (byte *)(*(int *)(param_3 + 4 + param_5 * 4) + param_6);
    local_10c[8] = (float)(int)(*pbVar9 - 0x80);
    local_10c[9] = (float)(int)(pbVar9[1] - 0x80);
    local_10c[10] = (float)(int)(pbVar9[2] - 0x80);
    local_10c[0xb] = (float)(int)(pbVar9[3] - 0x80);
    local_10c[0xc] = (float)(int)(pbVar9[4] - 0x80);
    local_10c[0xd] = (float)(int)(pbVar9[5] - 0x80);
    local_10c[0xe] = (float)(int)(pbVar9[6] - 0x80);
    local_10c[0xf] = (float)(int)(pbVar9[7] - 0x80);
    pbVar9 = (byte *)(*(int *)(param_3 + 8 + param_5 * 4) + param_6);
    local_10c[0x10] = (float)(int)(*pbVar9 - 0x80);
    local_10c[0x11] = (float)(int)(pbVar9[1] - 0x80);
    local_10c[0x12] = (float)(int)(pbVar9[2] - 0x80);
    local_10c[0x13] = (float)(int)(pbVar9[3] - 0x80);
    local_10c[0x14] = (float)(int)(pbVar9[4] - 0x80);
    local_10c[0x15] = (float)(int)(pbVar9[5] - 0x80);
    local_10c[0x16] = (float)(int)(pbVar9[6] - 0x80);
    local_10c[0x17] = (float)(int)(pbVar9[7] - 0x80);
    pbVar9 = (byte *)(*(int *)(param_3 + 0xc + param_5 * 4) + param_6);
    local_10c[0x18] = (float)(int)(*pbVar9 - 0x80);
    local_10c[0x19] = (float)(int)(pbVar9[1] - 0x80);
    local_10c[0x1a] = (float)(int)(pbVar9[2] - 0x80);
    local_10c[0x1b] = (float)(int)(pbVar9[3] - 0x80);
    local_10c[0x1c] = (float)(int)(pbVar9[4] - 0x80);
    local_10c[0x1d] = (float)(int)(pbVar9[5] - 0x80);
    local_10c[0x1e] = (float)(int)(pbVar9[6] - 0x80);
    local_10c[0x1f] = (float)(int)(pbVar9[7] - 0x80);
    pbVar9 = (byte *)(*(int *)(param_3 + 0x10 + param_5 * 4) + param_6);
    local_10c[0x20] = (float)(int)(*pbVar9 - 0x80);
    local_10c[0x21] = (float)(int)(pbVar9[1] - 0x80);
    local_10c[0x22] = (float)(int)(pbVar9[2] - 0x80);
    local_10c[0x23] = (float)(int)(pbVar9[3] - 0x80);
    local_10c[0x24] = (float)(int)(pbVar9[4] - 0x80);
    local_10c[0x25] = (float)(int)(pbVar9[5] - 0x80);
    local_10c[0x26] = (float)(int)(pbVar9[6] - 0x80);
    local_10c[0x27] = (float)(int)(pbVar9[7] - 0x80);
    pbVar9 = (byte *)(*(int *)(param_3 + 0x14 + param_5 * 4) + param_6);
    local_10c[0x28] = (float)(int)(*pbVar9 - 0x80);
    local_10c[0x29] = (float)(int)(pbVar9[1] - 0x80);
    local_10c[0x2a] = (float)(int)(pbVar9[2] - 0x80);
    local_10c[0x2b] = (float)(int)(pbVar9[3] - 0x80);
    local_10c[0x2c] = (float)(int)(pbVar9[4] - 0x80);
    local_10c[0x2d] = (float)(int)(pbVar9[5] - 0x80);
    local_10c[0x2e] = (float)(int)(pbVar9[6] - 0x80);
    local_10c[0x2f] = (float)(int)(pbVar9[7] - 0x80);
    pbVar9 = (byte *)(*(int *)(param_3 + 0x18 + param_5 * 4) + param_6);
    local_10c[0x30] = (float)(int)(*pbVar9 - 0x80);
    local_10c[0x31] = (float)(int)(pbVar9[1] - 0x80);
    local_10c[0x32] = (float)(int)(pbVar9[2] - 0x80);
    local_10c[0x33] = (float)(int)(pbVar9[3] - 0x80);
    local_10c[0x34] = (float)(int)(pbVar9[4] - 0x80);
    local_10c[0x35] = (float)(int)(pbVar9[5] - 0x80);
    local_10c[0x36] = (float)(int)(pbVar9[6] - 0x80);
    local_10c[0x37] = (float)(int)(pbVar9[7] - 0x80);
    pbVar9 = (byte *)(*(int *)(param_3 + 0x1c + param_5 * 4) + param_6);
    local_10c[0x38] = (float)(int)(*pbVar9 - 0x80);
    local_10c[0x39] = (float)(int)(pbVar9[1] - 0x80);
    local_10c[0x3a] = (float)(int)(pbVar9[2] - 0x80);
    local_10c[0x3b] = (float)(int)(pbVar9[3] - 0x80);
    local_10c[0x3c] = (float)(int)(pbVar9[4] - 0x80);
    local_10c[0x3d] = (float)(int)(pbVar9[5] - 0x80);
    local_10c[0x3e] = (float)(int)(pbVar9[6] - 0x80);
    local_10c[0x3f] = (float)(int)(pbVar9[7] - 0x80);
    (*pcVar3)(local_10c);
    iVar10 = 0;
    if (((local_10c + 0x3f < param_4) || ((float *)((int)param_4 + 0x7eU) < local_10c)) &&
       ((pfVar4 + 0x3f < param_4 || ((float *)((int)param_4 + 0x7eU) < pfVar4)))) {
      pfVar8 = pfVar4;
      do {
        pfVar1 = (float *)(((int)local_10c - (int)pfVar4) + (int)pfVar8);
        auVar11._0_4_ = (int)(*pfVar1 * *pfVar8 + 16384.5);
        auVar11._4_4_ = (int)(pfVar1[1] * pfVar8[1] + 16384.5);
        auVar11._8_4_ = (int)(pfVar1[2] * pfVar8[2] + 16384.5);
        auVar11._12_4_ = (int)(pfVar1[3] * pfVar8[3] + 16384.5);
        auVar11 = pshuflw(auVar11,auVar11,0xd8);
        auVar11 = pshufhw(auVar11,auVar11,0xd8);
        *(ulonglong *)((int)param_4 + iVar10 * 2) =
             CONCAT26(auVar11._10_2_ + -0x4000,
                      CONCAT24(auVar11._8_2_ + -0x4000,
                               CONCAT22(auVar11._2_2_ + -0x4000,auVar11._0_2_ + -0x4000)));
        pfVar1 = pfVar8 + 4;
        pfVar5 = pfVar8 + 5;
        pfVar6 = pfVar8 + 6;
        pfVar7 = pfVar8 + 7;
        pfVar2 = (float *)((int)local_10c + (0x10 - (int)pfVar4) + (int)pfVar8);
        pfVar8 = pfVar8 + 8;
        auVar12._0_4_ = (int)(*pfVar2 * *pfVar1 + 16384.5);
        auVar12._4_4_ = (int)(pfVar2[1] * *pfVar5 + 16384.5);
        auVar12._8_4_ = (int)(pfVar2[2] * *pfVar6 + 16384.5);
        auVar12._12_4_ = (int)(pfVar2[3] * *pfVar7 + 16384.5);
        auVar11 = pshuflw(auVar12,auVar12,0xd8);
        auVar11 = pshufhw(auVar11,auVar11,0xd8);
        *(ulonglong *)((int)param_4 + iVar10 * 2 + 8) =
             CONCAT26(auVar11._10_2_ + -0x4000,
                      CONCAT24(auVar11._8_2_ + -0x4000,
                               CONCAT22(auVar11._2_2_ + -0x4000,auVar11._0_2_ + -0x4000)));
        iVar10 = iVar10 + 8;
      } while (iVar10 < 0x40);
    }
    else {
      do {
        *(short *)((int)param_4 + iVar10 * 2) =
             (short)(int)(pfVar4[iVar10] * local_10c[iVar10] + 16384.5) + -0x4000;
        iVar10 = iVar10 + 1;
      } while (iVar10 < 0x40);
    }
    param_4 = param_4 + 0x20;
    param_6 = param_6 + 8;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

