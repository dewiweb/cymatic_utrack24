// rea decompile_all
// name: FUN_0048b129
// address: 0x48b129
// body: available
// range: 0x48b129-0x48b554 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048b129(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  undefined1 *puVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float local_128 [16];
  float local_e8 [8];
  float local_c8 [8];
  float local_a8 [8];
  float local_88 [8];
  float local_68 [8];
  float local_48 [8];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  
  fVar10 = (float10)1.4142135381698608;
  fVar11 = (float10)1.8477590084075928;
  fVar12 = (float10)2.613126039505005;
  fVar13 = (float10)1.0823922157287598;
  local_10 = *(int *)(param_1 + 0x120) + 0x80;
  pfVar8 = *(float **)(param_2 + 0x50);
  pfVar6 = local_128;
  local_14 = 8;
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      fVar1 = (float)(int)*param_3 * *pfVar8;
      *pfVar6 = fVar1;
      pfVar6[8] = fVar1;
      pfVar6[0x10] = fVar1;
      pfVar6[0x18] = fVar1;
      pfVar6[0x20] = fVar1;
      pfVar6[0x28] = fVar1;
      pfVar6[0x30] = fVar1;
      pfVar6[0x38] = fVar1;
    }
    else {
      fVar2 = (float)(int)param_3[0x20] * pfVar8[0x20] + (float)(int)*param_3 * *pfVar8;
      fVar3 = (float)(int)*param_3 * *pfVar8 - (float)(int)param_3[0x20] * pfVar8[0x20];
      fVar4 = (float)(int)param_3[0x30] * pfVar8[0x30] + (float)(int)param_3[0x10] * pfVar8[0x10];
      fVar1 = (float)(((float10)((float)(int)param_3[0x10] * pfVar8[0x10]) -
                      (float10)((float)(int)param_3[0x30] * pfVar8[0x30])) * fVar10 - (float10)fVar4
                     );
      local_1c = fVar4 + fVar2;
      local_18 = fVar2 - fVar4;
      local_24 = fVar1 + fVar3;
      local_20 = fVar3 - fVar1;
      fVar2 = pfVar8[8] * (float)(int)param_3[8];
      local_28 = (float)(int)param_3[0x28] * pfVar8[0x28] + (float)(int)param_3[0x18] * pfVar8[0x18]
      ;
      fVar3 = (float)(int)param_3[0x28] * pfVar8[0x28] - (float)(int)param_3[0x18] * pfVar8[0x18];
      fVar4 = (float)(int)param_3[0x38] * pfVar8[0x38] + fVar2;
      fVar2 = fVar2 - (float)(int)param_3[0x38] * pfVar8[0x38];
      fVar5 = fVar4 + local_28;
      fVar1 = (float)(((float10)fVar2 + (float10)fVar3) * fVar11);
      fVar3 = (float)((float10)fVar1 - (float10)fVar3 * fVar12) - fVar5;
      fVar4 = (float)(((float10)fVar4 - (float10)local_28) * fVar10) - fVar3;
      local_c = (float)((float10)fVar2 * fVar13 - (float10)fVar1);
      local_8 = local_c + fVar4;
      *pfVar6 = fVar5 + local_1c;
      pfVar6[0x38] = local_1c - fVar5;
      pfVar6[8] = fVar3 + local_24;
      pfVar6[0x30] = local_24 - fVar3;
      pfVar6[0x10] = fVar4 + local_20;
      pfVar6[0x28] = local_20 - fVar4;
      pfVar6[0x20] = local_8 + local_18;
      pfVar6[0x18] = local_18 - local_8;
    }
    pfVar8 = pfVar8 + 1;
    param_3 = param_3 + 1;
    pfVar6 = pfVar6 + 1;
    local_14 = local_14 + -1;
  } while (0 < local_14);
  local_14 = 0;
  pfVar6 = local_128 + 2;
  do {
    puVar9 = (undefined1 *)(*(int *)(param_4 + local_14 * 4) + param_5);
    fVar1 = pfVar6[4] + *pfVar6;
    local_8 = (float)(((float10)*pfVar6 - (float10)pfVar6[4]) * fVar10 - (float10)fVar1);
    local_1c = fVar1 + pfVar6[2] + pfVar6[-2];
    local_18 = (pfVar6[2] + pfVar6[-2]) - fVar1;
    local_24 = local_8 + (pfVar6[-2] - pfVar6[2]);
    local_20 = (pfVar6[-2] - pfVar6[2]) - local_8;
    local_28 = pfVar6[3] + pfVar6[1];
    fVar1 = (float)(((float10)(pfVar6[-1] - pfVar6[5]) + (float10)(pfVar6[3] - pfVar6[1])) * fVar11)
    ;
    local_c = (float)((float10)(pfVar6[-1] - pfVar6[5]) * fVar13 - (float10)fVar1);
    local_8 = local_c + ((float)(((float10)(pfVar6[5] + pfVar6[-1]) - (float10)local_28) * fVar10) -
                        ((float)((float10)fVar1 - (float10)(pfVar6[3] - pfVar6[1]) * fVar12) -
                        (pfVar6[5] + pfVar6[-1] + local_28)));
    iVar7 = FUN_005b3fb0();
    *puVar9 = *(undefined1 *)((iVar7 >> 3 & 0x3ffU) + local_10);
    iVar7 = FUN_005b3fb0();
    puVar9[7] = *(undefined1 *)((iVar7 >> 3 & 0x3ffU) + local_10);
    iVar7 = FUN_005b3fb0();
    puVar9[1] = *(undefined1 *)((iVar7 >> 3 & 0x3ffU) + local_10);
    iVar7 = FUN_005b3fb0();
    puVar9[6] = *(undefined1 *)((iVar7 >> 3 & 0x3ffU) + local_10);
    iVar7 = FUN_005b3fb0();
    puVar9[2] = *(undefined1 *)((iVar7 >> 3 & 0x3ffU) + local_10);
    iVar7 = FUN_005b3fb0();
    puVar9[5] = *(undefined1 *)((iVar7 >> 3 & 0x3ffU) + local_10);
    fVar10 = extraout_ST1;
    iVar7 = FUN_005b3fb0();
    puVar9[4] = *(undefined1 *)((iVar7 >> 3 & 0x3ffU) + local_10);
    fVar11 = extraout_ST1_00;
    iVar7 = FUN_005b3fb0();
    pfVar6 = pfVar6 + 8;
    local_14 = local_14 + 1;
    puVar9[3] = *(undefined1 *)((iVar7 >> 3 & 0x3ffU) + local_10);
    fVar13 = extraout_ST0;
    fVar12 = extraout_ST1_01;
  } while (local_14 < 8);
  return;
}

