// rea decompile_all
// name: FUN_0048b917
// address: 0x48b917
// body: available
// range: 0x48b917-0x48bd9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048b917(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_134 [16];
  int local_f4 [8];
  int local_d4 [8];
  int local_b4 [8];
  int local_94 [8];
  int local_74 [8];
  int local_54 [8];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar2 = *(int **)(param_2 + 0x50);
  iVar6 = *(int *)(param_1 + 0x120) + 0x80;
  local_24 = iVar6;
  piVar1 = local_134;
  local_14 = 8;
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      iVar7 = (int)*param_3 * *piVar2 * 4;
      *piVar1 = iVar7;
      piVar1[8] = iVar7;
      piVar1[0x10] = iVar7;
      piVar1[0x18] = iVar7;
      piVar1[0x20] = iVar7;
      piVar1[0x28] = iVar7;
      piVar1[0x30] = iVar7;
      piVar1[0x38] = iVar7;
    }
    else {
      iVar6 = ((int)param_3[0x30] * piVar2[0x30] + (int)param_3[0x10] * piVar2[0x10]) * 0x1151;
      iVar7 = (int)param_3[0x10] * piVar2[0x10] * 0x187e + iVar6;
      iVar6 = iVar6 + (int)param_3[0x30] * piVar2[0x30] * -0x3b21;
      iVar5 = ((int)param_3[0x20] * piVar2[0x20] + (int)*param_3 * *piVar2) * 0x2000;
      iVar8 = ((int)*param_3 * *piVar2 - (int)param_3[0x20] * piVar2[0x20]) * 0x2000;
      iVar9 = iVar7 + iVar5;
      local_34 = iVar9;
      local_30 = iVar5 - iVar7;
      local_28 = iVar8 + iVar6;
      iVar10 = (int)param_3[0x28] * piVar2[0x28];
      iVar7 = (int)param_3[8] * piVar2[8];
      iVar11 = (int)param_3[0x18] * piVar2[0x18];
      local_2c = iVar8 - iVar6;
      iVar8 = (int)param_3[0x38] * piVar2[0x38];
      local_1c = iVar7 + iVar10;
      local_20 = (local_1c + iVar11 + iVar8) * 0x25a1;
      iVar5 = (iVar7 + iVar8) * -0x1ccd;
      local_10 = (iVar10 + iVar11) * -0x5203;
      iVar6 = local_20 + (iVar11 + iVar8) * -0x3ec5;
      iVar8 = iVar8 * 0x98e + iVar5 + iVar6;
      local_20 = local_20 + local_1c * -0xc7c;
      iVar10 = iVar10 * 0x41b3 + local_20 + local_10;
      local_c = iVar11 * 0x6254 + iVar6 + local_10;
      iVar5 = iVar7 * 0x300b + local_20 + iVar5;
      local_8 = iVar5;
      *piVar1 = iVar5 + iVar9 >> 0xb;
      iVar6 = local_c;
      piVar1[0x38] = iVar9 - iVar5 >> 0xb;
      piVar1[8] = iVar6 + local_28 >> 0xb;
      piVar1[0x30] = local_28 - local_c >> 0xb;
      piVar1[0x28] = local_2c - iVar10 >> 0xb;
      piVar1[0x10] = iVar10 + local_2c >> 0xb;
      iVar6 = local_24;
      piVar1[0x18] = local_30 + iVar8 >> 0xb;
      piVar1[0x20] = local_30 - iVar8 >> 0xb;
    }
    param_3 = param_3 + 1;
    piVar2 = piVar2 + 1;
    piVar1 = piVar1 + 1;
    local_14 = local_14 + -1;
  } while (0 < local_14);
  piVar1 = local_134;
  local_14 = 0;
  do {
    puVar3 = (undefined1 *)(*(int *)(param_4 + local_14 * 4) + param_5);
    if ((((piVar1[1] == 0) && (piVar1[2] == 0)) &&
        ((piVar1[3] == 0 && (((piVar1[4] == 0 && (piVar1[5] == 0)) && (piVar1[6] == 0)))))) &&
       (piVar1[7] == 0)) {
      uVar4 = *(undefined1 *)((*piVar1 >> 5 & 0x3ffU) + iVar6);
      *puVar3 = uVar4;
      puVar3[1] = uVar4;
      puVar3[2] = uVar4;
      puVar3[3] = uVar4;
      puVar3[5] = uVar4;
      puVar3[6] = uVar4;
      puVar3[7] = uVar4;
    }
    else {
      local_10 = piVar1[2];
      local_8 = (piVar1[6] + local_10) * 0x1151;
      local_c = local_8 + piVar1[6] * -0x3b21;
      local_8 = local_10 * 0x187e + local_8;
      local_18 = (piVar1[4] + *piVar1) * 0x2000;
      local_2c = (*piVar1 - piVar1[4]) * 0x2000;
      local_34 = local_8 + local_18;
      local_30 = local_18 - local_8;
      local_28 = local_2c + local_c;
      local_2c = local_2c - local_c;
      iVar7 = piVar1[5];
      local_c = piVar1[3];
      local_18 = piVar1[7];
      local_10 = iVar7 + local_c;
      local_20 = (piVar1[1] + iVar7 + local_18 + local_c) * 0x25a1;
      local_8 = (local_18 + piVar1[1]) * -0x1ccd;
      local_10 = (iVar7 + local_c) * -0x5203;
      iVar5 = local_20 + (local_18 + local_c) * -0x3ec5;
      local_1c = local_20 + (piVar1[1] + iVar7) * -0xc7c;
      local_18 = local_18 * 0x98e + local_8 + iVar5;
      iVar7 = iVar7 * 0x41b3 + local_1c + local_10;
      local_c = local_c * 0x6254 + iVar5 + local_10;
      local_8 = piVar1[1] * 0x300b + local_1c + local_8;
      *puVar3 = *(undefined1 *)((local_8 + local_34 >> 0x12 & 0x3ffU) + iVar6);
      puVar3[7] = *(undefined1 *)((local_34 - local_8 >> 0x12 & 0x3ffU) + iVar6);
      puVar3[1] = *(undefined1 *)((local_c + local_28 >> 0x12 & 0x3ffU) + iVar6);
      puVar3[6] = *(undefined1 *)((local_28 - local_c >> 0x12 & 0x3ffU) + iVar6);
      puVar3[2] = *(undefined1 *)((iVar7 + local_2c >> 0x12 & 0x3ffU) + iVar6);
      puVar3[5] = *(undefined1 *)((local_2c - iVar7 >> 0x12 & 0x3ffU) + iVar6);
      puVar3[3] = *(undefined1 *)((local_18 + local_30 >> 0x12 & 0x3ffU) + iVar6);
      uVar4 = *(undefined1 *)((local_30 - local_18 >> 0x12 & 0x3ffU) + iVar6);
    }
    piVar1 = piVar1 + 8;
    local_14 = local_14 + 1;
    puVar3[4] = uVar4;
  } while (local_14 < 8);
  return;
}

