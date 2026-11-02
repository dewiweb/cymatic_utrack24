// rea decompile_all
// name: FUN_0065e010
// address: 0x65e010
// body: available
// range: 0x65e010-0x65e44c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065e010(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_11c;
  int local_118;
  int local_108 [32];
  int local_88 [32];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  piVar12 = local_108;
  local_118 = 8;
  iVar3 = *(int *)(param_1 + 0x120) + 0x80;
  piVar8 = *(int **)(param_2 + 0x50);
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      iVar4 = (int)*param_3 * *piVar8;
      *piVar12 = iVar4;
      piVar12[8] = iVar4;
      piVar12[0x10] = iVar4;
      piVar12[0x18] = iVar4;
      piVar12[0x28] = iVar4;
      piVar12[0x30] = iVar4;
      piVar12[0x38] = iVar4;
    }
    else {
      iVar13 = (int)param_3[0x20] * piVar8[0x20] + (int)*param_3 * *piVar8;
      iVar14 = (int)*param_3 * *piVar8 - (int)param_3[0x20] * piVar8[0x20];
      iVar4 = (int)param_3[0x30] * piVar8[0x30] + (int)param_3[0x10] * piVar8[0x10];
      iVar9 = iVar4 + iVar13;
      iVar13 = iVar13 - iVar4;
      iVar4 = (((int)param_3[0x10] * piVar8[0x10] - (int)param_3[0x30] * piVar8[0x30]) * 0x16a >> 8)
              - iVar4;
      iVar1 = iVar4 + iVar14;
      iVar14 = iVar14 - iVar4;
      iVar4 = (int)param_3[0x28] * piVar8[0x28] + (int)param_3[0x18] * piVar8[0x18];
      iVar15 = (int)param_3[0x28] * piVar8[0x28] - (int)param_3[0x18] * piVar8[0x18];
      iVar11 = (int)param_3[0x38] * piVar8[0x38] + (int)param_3[8] * piVar8[8];
      iVar10 = (int)param_3[8] * piVar8[8] - (int)param_3[0x38] * piVar8[0x38];
      iVar2 = iVar11 + iVar4;
      iVar5 = (iVar10 + iVar15) * 0x1d9 >> 8;
      iVar15 = ((iVar15 * -0x29d >> 8) - iVar2) + iVar5;
      iVar4 = ((iVar11 - iVar4) * 0x16a >> 8) - iVar15;
      iVar11 = ((iVar10 * 0x115 >> 8) - iVar5) + iVar4;
      piVar12[0x38] = iVar9 - iVar2;
      *piVar12 = iVar2 + iVar9;
      piVar12[8] = iVar15 + iVar1;
      piVar12[0x30] = iVar1 - iVar15;
      piVar12[0x10] = iVar4 + iVar14;
      piVar12[0x28] = iVar14 - iVar4;
      iVar4 = iVar11 + iVar13;
      piVar12[0x18] = iVar13 - iVar11;
    }
    piVar12[0x20] = iVar4;
    param_3 = param_3 + 1;
    piVar8 = piVar8 + 1;
    local_118 = local_118 + -1;
    piVar12 = piVar12 + 1;
  } while (0 < local_118);
  piVar12 = local_108;
  local_11c = 0;
  do {
    iVar13 = piVar12[1];
    puVar6 = (undefined1 *)(*(int *)(param_4 + local_11c * 4) + param_5);
    if ((((iVar13 == 0) && (piVar12[2] == 0)) &&
        ((piVar12[3] == 0 && (((piVar12[4] == 0 && (piVar12[5] == 0)) && (piVar12[6] == 0)))))) &&
       (piVar12[7] == 0)) {
      uVar7 = *(undefined1 *)((*piVar12 >> 5 & 0x3ffU) + iVar3);
      *puVar6 = uVar7;
      puVar6[1] = uVar7;
      puVar6[2] = uVar7;
      puVar6[4] = uVar7;
      puVar6[5] = uVar7;
      puVar6[6] = uVar7;
      puVar6[7] = uVar7;
    }
    else {
      iVar4 = *piVar12 + piVar12[4];
      iVar15 = *piVar12 - piVar12[4];
      iVar9 = piVar12[6] + piVar12[2];
      iVar1 = iVar9 + iVar4;
      iVar4 = iVar4 - iVar9;
      iVar9 = ((piVar12[2] - piVar12[6]) * 0x16a >> 8) - iVar9;
      iVar11 = iVar9 + iVar15;
      iVar15 = iVar15 - iVar9;
      iVar9 = piVar12[5] + piVar12[3];
      iVar14 = piVar12[5] - piVar12[3];
      iVar2 = piVar12[7] + iVar13;
      iVar13 = iVar13 - piVar12[7];
      iVar5 = iVar2 + iVar9;
      iVar10 = (iVar13 + iVar14) * 0x1d9 >> 8;
      iVar14 = ((iVar14 * -0x29d >> 8) - iVar5) + iVar10;
      iVar9 = ((iVar2 - iVar9) * 0x16a >> 8) - iVar14;
      iVar13 = ((iVar13 * 0x115 >> 8) - iVar10) + iVar9;
      *puVar6 = *(undefined1 *)((iVar1 + iVar5 >> 5 & 0x3ffU) + iVar3);
      puVar6[7] = *(undefined1 *)((iVar1 - iVar5 >> 5 & 0x3ffU) + iVar3);
      puVar6[1] = *(undefined1 *)((iVar14 + iVar11 >> 5 & 0x3ffU) + iVar3);
      puVar6[6] = *(undefined1 *)((iVar11 - iVar14 >> 5 & 0x3ffU) + iVar3);
      puVar6[2] = *(undefined1 *)((iVar9 + iVar15 >> 5 & 0x3ffU) + iVar3);
      puVar6[5] = *(undefined1 *)((iVar15 - iVar9 >> 5 & 0x3ffU) + iVar3);
      puVar6[4] = *(undefined1 *)((iVar13 + iVar4 >> 5 & 0x3ffU) + iVar3);
      uVar7 = *(undefined1 *)((iVar4 - iVar13 >> 5 & 0x3ffU) + iVar3);
    }
    puVar6[3] = uVar7;
    piVar12 = piVar12 + 8;
    local_11c = local_11c + 1;
  } while (local_11c < 8);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

