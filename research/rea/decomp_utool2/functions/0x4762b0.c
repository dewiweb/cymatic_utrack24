// rea decompile_all
// name: FUN_004762b0
// address: 0x4762b0
// body: available
// range: 0x4762b0-0x476505 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004762b0(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  
  FUN_00476980(param_3);
  do {
    uVar7 = *(uint *)(in_ECX + 0x18);
    *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + *(int *)(in_ECX + 0x28);
    *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x20);
    if (0 < *(int *)(in_ECX + 0x24)) {
      *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
      *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) - *(int *)(in_ECX + 0x1c);
    }
    uVar10 = *(uint *)(in_ECX + 0x2c);
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + *(int *)(in_ECX + 0x3c);
    *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + *(int *)(in_ECX + 0x34);
    if (0 < *(int *)(in_ECX + 0x38)) {
      *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + 1;
      *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) - *(int *)(in_ECX + 0x30);
    }
    uVar6 = (int)uVar7 >> 8;
    uVar8 = (int)uVar10 >> 8;
    if (*(int *)(in_ECX + 0x54) == 0) {
LAB_004764b4:
      uVar7 = 0;
      if (-1 < (int)uVar6) {
        uVar7 = uVar6;
      }
      piVar1 = *(int **)(in_ECX + 0x4c);
      uVar10 = 0;
      if (-1 < (int)uVar8) {
        uVar10 = uVar8;
      }
      if (*(int *)(in_ECX + 0x58) < (int)uVar7) {
        uVar7 = *(uint *)(in_ECX + 0x58);
      }
      if (*(int *)(in_ECX + 0x5c) < (int)uVar10) {
        uVar10 = *(uint *)(in_ECX + 0x5c);
      }
      uVar4 = *(undefined1 *)(piVar1[2] * uVar10 + piVar1[3] * uVar7 + *piVar1);
    }
    else if (uVar6 < *(uint *)(in_ECX + 0x58)) {
      if (uVar8 < *(uint *)(in_ECX + 0x5c)) {
        piVar1 = *(int **)(in_ECX + 0x4c);
        uVar7 = uVar7 & 0xff;
        pbVar9 = (byte *)(piVar1[2] * uVar8 + piVar1[3] * uVar6 + *piVar1);
        iVar5 = 0x100 - (uVar10 & 0xff);
        iVar2 = piVar1[3];
        iVar3 = *(int *)(*(int *)(in_ECX + 0x4c) + 8) + iVar2;
        uVar4 = (undefined1)
                ((pbVar9[iVar3 + 1] * uVar7 + (uint)pbVar9[iVar3 - iVar2] * (0x100 - uVar7)) *
                 (uVar10 & 0xff) + 0x8000 +
                 (uint)pbVar9[iVar2 + 1] * iVar5 * uVar7 + (uint)*pbVar9 * iVar5 * (0x100 - uVar7)
                >> 0x10);
      }
      else if ((int)uVar8 < 0) {
        piVar1 = *(int **)(in_ECX + 0x4c);
        pbVar9 = (byte *)(piVar1[3] * uVar6 + *piVar1);
        uVar4 = (undefined1)
                ((uint)*pbVar9 * (0x100 - (uVar7 & 0xff)) + 0x80 +
                 (uint)pbVar9[piVar1[3]] * (uVar7 & 0xff) >> 8);
      }
      else {
        piVar1 = *(int **)(in_ECX + 0x4c);
        pbVar9 = (byte *)(piVar1[2] * *(int *)(in_ECX + 0x5c) + piVar1[3] * uVar6 + *piVar1);
        uVar4 = (undefined1)
                ((uint)*pbVar9 * (0x100 - (uVar7 & 0xff)) + 0x80 +
                 (uint)pbVar9[piVar1[3]] * (uVar7 & 0xff) >> 8);
      }
    }
    else {
      if (*(uint *)(in_ECX + 0x5c) <= uVar8) goto LAB_004764b4;
      if ((int)uVar6 < 0) {
        piVar1 = *(int **)(in_ECX + 0x4c);
        pbVar9 = (byte *)(piVar1[2] * uVar8 + *piVar1);
        uVar4 = (undefined1)
                ((uint)*pbVar9 * (0x100 - (uVar10 & 0xff)) + 0x80 +
                 (uint)pbVar9[piVar1[2]] * (uVar10 & 0xff) >> 8);
      }
      else {
        piVar1 = *(int **)(in_ECX + 0x4c);
        pbVar9 = (byte *)(piVar1[3] * *(int *)(in_ECX + 0x58) + piVar1[2] * uVar8 + *piVar1);
        uVar4 = (undefined1)
                ((uint)*pbVar9 * (0x100 - (uVar10 & 0xff)) + 0x80 +
                 (uint)pbVar9[piVar1[2]] * (uVar10 & 0xff) >> 8);
      }
    }
    *param_1 = uVar4;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
    if (param_3 < 1) {
      return;
    }
  } while( true );
}

