// rea decompile_all
// name: FUN_0065dad0
// address: 0x65dad0
// body: available
// range: 0x65dad0-0x65e007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065dad0(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_114;
  int local_108 [24];
  int local_a8 [40];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  piVar5 = local_108;
  iVar1 = *(int *)(param_1 + 0x120) + 0x80;
  local_114 = 8;
  piVar8 = *(int **)(param_2 + 0x50);
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      iVar2 = (int)*param_3 * *piVar8 * 4;
      *piVar5 = iVar2;
      piVar5[8] = iVar2;
      piVar5[0x10] = iVar2;
      piVar5[0x20] = iVar2;
      piVar5[0x28] = iVar2;
      piVar5[0x30] = iVar2;
      piVar5[0x38] = iVar2;
    }
    else {
      iVar9 = ((int)param_3[0x30] * piVar8[0x30] + (int)param_3[0x10] * piVar8[0x10]) * 0x1151;
      iVar12 = iVar9 + (int)param_3[0x30] * piVar8[0x30] * -0x3b21;
      iVar9 = (int)param_3[0x10] * piVar8[0x10] * 0x187e + iVar9;
      iVar13 = ((int)param_3[0x20] * piVar8[0x20] + (int)*param_3 * *piVar8) * 0x2000;
      iVar10 = ((int)*param_3 * *piVar8 - (int)param_3[0x20] * piVar8[0x20]) * 0x2000;
      iVar2 = iVar13 + iVar9;
      iVar13 = iVar13 - iVar9;
      iVar9 = iVar10 + iVar12;
      iVar10 = iVar10 - iVar12;
      iVar12 = (int)param_3[0x28] * piVar8[0x28];
      iVar14 = (int)param_3[0x18] * piVar8[0x18];
      iVar16 = (int)param_3[0x38] * piVar8[0x38];
      iVar15 = (int)param_3[8] * piVar8[8];
      iVar17 = (iVar12 + iVar15 + iVar14 + iVar16) * 0x25a1;
      iVar7 = (iVar16 + iVar15) * -0x1ccd;
      iVar6 = (iVar12 + iVar14) * -0x5203;
      iVar11 = iVar17 + (iVar14 + iVar16) * -0x3ec5;
      iVar17 = iVar17 + (iVar12 + iVar15) * -0xc7c;
      iVar14 = iVar14 * 0x6254 + iVar11 + iVar6;
      iVar11 = iVar16 * 0x98e + iVar7 + iVar11;
      iVar7 = iVar15 * 0x300b + iVar17 + iVar7;
      iVar6 = iVar12 * 0x41b3 + iVar17 + iVar6;
      *piVar5 = iVar2 + iVar7 >> 0xb;
      piVar5[0x38] = iVar2 - iVar7 >> 0xb;
      piVar5[0x30] = iVar9 - iVar14 >> 0xb;
      piVar5[8] = iVar9 + iVar14 >> 0xb;
      piVar5[0x28] = iVar10 - iVar6 >> 0xb;
      piVar5[0x10] = iVar10 + iVar6 >> 0xb;
      iVar2 = iVar13 + iVar11 >> 0xb;
      piVar5[0x20] = iVar13 - iVar11 >> 0xb;
    }
    piVar5[0x18] = iVar2;
    param_3 = param_3 + 1;
    piVar8 = piVar8 + 1;
    local_114 = local_114 + -1;
    piVar5 = piVar5 + 1;
  } while (0 < local_114);
  piVar5 = local_108;
  local_114 = 0;
  do {
    puVar3 = (undefined1 *)(*(int *)(param_4 + local_114 * 4) + param_5);
    iVar2 = piVar5[1];
    if ((((iVar2 == 0) && (piVar5[2] == 0)) &&
        ((piVar5[3] == 0 && (((piVar5[4] == 0 && (piVar5[5] == 0)) && (piVar5[6] == 0)))))) &&
       (piVar5[7] == 0)) {
      uVar4 = *(undefined1 *)((*piVar5 >> 5 & 0x3ffU) + iVar1);
      *puVar3 = uVar4;
      puVar3[1] = uVar4;
      puVar3[2] = uVar4;
      puVar3[3] = uVar4;
      puVar3[5] = uVar4;
      puVar3[6] = uVar4;
      puVar3[7] = uVar4;
    }
    else {
      iVar12 = (piVar5[6] + piVar5[2]) * 0x1151;
      iVar11 = iVar12 + piVar5[6] * -0x3b21;
      iVar12 = piVar5[2] * 0x187e + iVar12;
      iVar13 = (*piVar5 - piVar5[4]) * 0x2000;
      iVar16 = (*piVar5 + piVar5[4]) * 0x2000;
      iVar9 = iVar16 + iVar12;
      iVar16 = iVar16 - iVar12;
      iVar12 = iVar13 + iVar11;
      iVar13 = iVar13 - iVar11;
      iVar14 = piVar5[7];
      iVar11 = piVar5[5] + iVar2;
      iVar6 = (iVar11 + piVar5[3] + iVar14) * 0x25a1;
      iVar7 = (iVar14 + iVar2) * -0x1ccd;
      iVar17 = (piVar5[3] + piVar5[5]) * -0x5203;
      iVar10 = iVar6 + (piVar5[3] + iVar14) * -0x3ec5;
      iVar6 = iVar6 + iVar11 * -0xc7c;
      iVar11 = iVar14 * 0x98e + iVar7 + iVar10;
      iVar14 = piVar5[5] * 0x41b3 + iVar6 + iVar17;
      iVar17 = piVar5[3] * 0x6254 + iVar10 + iVar17;
      iVar7 = iVar2 * 0x300b + iVar6 + iVar7;
      *puVar3 = *(undefined1 *)((iVar9 + iVar7 >> 0x12 & 0x3ffU) + iVar1);
      puVar3[7] = *(undefined1 *)((iVar9 - iVar7 >> 0x12 & 0x3ffU) + iVar1);
      puVar3[1] = *(undefined1 *)((iVar12 + iVar17 >> 0x12 & 0x3ffU) + iVar1);
      puVar3[6] = *(undefined1 *)((iVar12 - iVar17 >> 0x12 & 0x3ffU) + iVar1);
      puVar3[2] = *(undefined1 *)((iVar13 + iVar14 >> 0x12 & 0x3ffU) + iVar1);
      puVar3[5] = *(undefined1 *)((iVar13 - iVar14 >> 0x12 & 0x3ffU) + iVar1);
      puVar3[3] = *(undefined1 *)((iVar16 + iVar11 >> 0x12 & 0x3ffU) + iVar1);
      uVar4 = *(undefined1 *)((iVar16 - iVar11 >> 0x12 & 0x3ffU) + iVar1);
    }
    puVar3[4] = uVar4;
    local_114 = local_114 + 1;
    piVar5 = piVar5 + 8;
  } while (local_114 < 8);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

