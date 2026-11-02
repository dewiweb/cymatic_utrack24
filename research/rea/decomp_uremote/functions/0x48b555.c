// rea decompile_all
// name: FUN_0048b555
// address: 0x48b555
// body: available
// range: 0x48b555-0x48b916 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048b555(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_128 [16];
  int local_e8 [8];
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  int local_68 [8];
  int local_48 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar5 = *(int **)(param_2 + 0x50);
  iVar8 = *(int *)(param_1 + 0x120) + 0x80;
  local_c = iVar8;
  piVar1 = local_128;
  param_2 = 8;
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      iVar2 = (int)*param_3 * *piVar5;
      *piVar1 = iVar2;
      piVar1[8] = iVar2;
      piVar1[0x10] = iVar2;
      piVar1[0x18] = iVar2;
      piVar1[0x20] = iVar2;
      piVar1[0x28] = iVar2;
      piVar1[0x30] = iVar2;
      piVar1[0x38] = iVar2;
    }
    else {
      iVar6 = (int)param_3[0x20] * piVar5[0x20] + (int)*param_3 * *piVar5;
      iVar7 = (int)param_3[0x30] * piVar5[0x30] + (int)param_3[0x10] * piVar5[0x10];
      iVar9 = (int)*param_3 * *piVar5 - (int)param_3[0x20] * piVar5[0x20];
      iVar8 = (((int)param_3[0x10] * piVar5[0x10] - (int)param_3[0x30] * piVar5[0x30]) * 0x16a >> 8)
              - iVar7;
      iVar2 = iVar7 + iVar6;
      local_24 = iVar2;
      local_10 = iVar6 - iVar7;
      local_14 = iVar9 - iVar8;
      local_28 = iVar8 + iVar9;
      local_1c = (int)param_3[0x18] * piVar5[0x18] + (int)param_3[0x28] * piVar5[0x28];
      iVar6 = (int)param_3[0x28] * piVar5[0x28] - (int)param_3[0x18] * piVar5[0x18];
      iVar8 = (int)param_3[0x38] * piVar5[0x38] + (int)param_3[8] * piVar5[8];
      iVar7 = (int)param_3[8] * piVar5[8] - (int)param_3[0x38] * piVar5[0x38];
      iVar9 = local_1c + iVar8;
      local_18 = (iVar7 + iVar6) * 0x1d9 >> 8;
      iVar6 = ((iVar6 * -0x29d >> 8) - iVar9) + local_18;
      iVar8 = ((iVar8 - local_1c) * 0x16a >> 8) - iVar6;
      local_8 = ((iVar7 * 0x115 >> 8) - local_18) + iVar8;
      *piVar1 = iVar9 + iVar2;
      piVar1[0x38] = iVar2 - iVar9;
      piVar1[0x30] = local_28 - iVar6;
      piVar1[8] = iVar6 + local_28;
      piVar1[0x10] = iVar8 + local_14;
      piVar1[0x28] = local_14 - iVar8;
      iVar8 = local_c;
      piVar1[0x20] = local_8 + local_10;
      piVar1[0x18] = local_10 - local_8;
    }
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 1;
    piVar1 = piVar1 + 1;
    param_2 = param_2 + -1;
  } while (0 < param_2);
  piVar1 = local_128;
  param_2 = 0;
  do {
    puVar3 = (undefined1 *)(*(int *)(param_4 + param_2 * 4) + param_5);
    if ((((piVar1[1] == 0) && (piVar1[2] == 0)) &&
        ((piVar1[3] == 0 && (((piVar1[4] == 0 && (piVar1[5] == 0)) && (piVar1[6] == 0)))))) &&
       (piVar1[7] == 0)) {
      uVar4 = *(undefined1 *)((*piVar1 >> 5 & 0x3ffU) + iVar8);
      *puVar3 = uVar4;
      puVar3[1] = uVar4;
      puVar3[2] = uVar4;
      puVar3[4] = uVar4;
      puVar3[5] = uVar4;
      puVar3[6] = uVar4;
      puVar3[7] = uVar4;
    }
    else {
      local_8 = piVar1[4] + *piVar1;
      local_c = *piVar1 - piVar1[4];
      local_10 = piVar1[6] + piVar1[2];
      local_14 = ((piVar1[2] - piVar1[6]) * 0x16a >> 8) - local_10;
      local_24 = local_10 + local_8;
      local_10 = local_8 - local_10;
      local_28 = local_14 + local_c;
      local_14 = local_c - local_14;
      local_1c = piVar1[3] + piVar1[5];
      iVar2 = piVar1[5] - piVar1[3];
      local_c = piVar1[7] + piVar1[1];
      iVar6 = piVar1[1] - piVar1[7];
      iVar7 = local_c + local_1c;
      local_18 = (iVar6 + iVar2) * 0x1d9 >> 8;
      local_20 = ((iVar2 * -0x29d >> 8) - iVar7) + local_18;
      iVar2 = ((local_c - local_1c) * 0x16a >> 8) - local_20;
      local_8 = ((iVar6 * 0x115 >> 8) - local_18) + iVar2;
      *puVar3 = *(undefined1 *)((iVar7 + local_24 >> 5 & 0x3ffU) + iVar8);
      puVar3[7] = *(undefined1 *)((local_24 - iVar7 >> 5 & 0x3ffU) + iVar8);
      puVar3[1] = *(undefined1 *)((local_20 + local_28 >> 5 & 0x3ffU) + iVar8);
      puVar3[6] = *(undefined1 *)((local_28 - local_20 >> 5 & 0x3ffU) + iVar8);
      puVar3[2] = *(undefined1 *)((iVar2 + local_14 >> 5 & 0x3ffU) + iVar8);
      puVar3[5] = *(undefined1 *)((local_14 - iVar2 >> 5 & 0x3ffU) + iVar8);
      puVar3[4] = *(undefined1 *)((local_8 + local_10 >> 5 & 0x3ffU) + iVar8);
      uVar4 = *(undefined1 *)((local_10 - local_8 >> 5 & 0x3ffU) + iVar8);
    }
    piVar1 = piVar1 + 8;
    param_2 = param_2 + 1;
    puVar3[3] = uVar4;
  } while (param_2 < 8);
  return;
}

