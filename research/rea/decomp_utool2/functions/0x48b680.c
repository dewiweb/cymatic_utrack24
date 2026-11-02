// rea decompile_all
// name: FUN_0048b680
// address: 0x48b680
// body: available
// range: 0x48b680-0x48b7e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048b680(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  
  FUN_00476980(param_3);
  do {
    uVar6 = *(uint *)(in_ECX + 0x18);
    *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + *(int *)(in_ECX + 0x28);
    *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x20);
    if (0 < *(int *)(in_ECX + 0x24)) {
      *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
      *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) - *(int *)(in_ECX + 0x1c);
    }
    uVar9 = *(uint *)(in_ECX + 0x2c);
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + *(int *)(in_ECX + 0x3c);
    *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + *(int *)(in_ECX + 0x34);
    if (0 < *(int *)(in_ECX + 0x38)) {
      *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + 1;
      *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) - *(int *)(in_ECX + 0x30);
    }
    piVar1 = *(int **)(in_ECX + 0x4c);
    uVar7 = ((int)uVar6 >> 8) % piVar1[4];
    uVar4 = uVar7 + piVar1[4];
    if (-1 < (int)uVar7) {
      uVar4 = uVar7;
    }
    uVar8 = ((int)uVar9 >> 8) % piVar1[5];
    uVar7 = uVar8 + piVar1[5];
    if (-1 < (int)uVar8) {
      uVar7 = uVar8;
    }
    if (((*(int *)(in_ECX + 0x54) == 0) || (*(uint *)(in_ECX + 0x58) <= uVar4)) ||
       (*(uint *)(in_ECX + 0x5c) <= uVar7)) {
      uVar3 = *(undefined1 *)(piVar1[2] * uVar7 + piVar1[3] * uVar4 + *piVar1);
    }
    else {
      uVar9 = uVar9 & 0xff;
      uVar6 = uVar6 & 0xff;
      pbVar10 = (byte *)(piVar1[2] * uVar7 + piVar1[3] * uVar4 + *piVar1);
      iVar5 = 0x100 - uVar9;
      iVar2 = piVar1[3];
      uVar3 = (undefined1)
              ((pbVar10[piVar1[2] + iVar2 + 1] * uVar6 +
               (uint)pbVar10[(piVar1[2] + iVar2) - iVar2] * (0x100 - uVar6)) * uVar9 + 0x8000 +
               (uint)pbVar10[iVar2 + 1] * iVar5 * uVar6 + (uint)*pbVar10 * iVar5 * (0x100 - uVar6)
              >> 0x10);
    }
    *param_1 = uVar3;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  } while (0 < param_3);
  return;
}

