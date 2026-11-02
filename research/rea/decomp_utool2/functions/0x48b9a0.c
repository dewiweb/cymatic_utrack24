// rea decompile_all
// name: FUN_0048b9a0
// address: 0x48b9a0
// body: available
// range: 0x48b9a0-0x48baba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048b9a0(undefined1 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int in_ECX;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  
  FUN_00476980(param_3);
  do {
    uVar1 = *(uint *)(in_ECX + 0x18);
    *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + *(int *)(in_ECX + 0x28);
    *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x20);
    if (0 < *(int *)(in_ECX + 0x24)) {
      *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
      *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) - *(int *)(in_ECX + 0x1c);
    }
    uVar2 = *(uint *)(in_ECX + 0x2c);
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + *(int *)(in_ECX + 0x3c);
    *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + *(int *)(in_ECX + 0x34);
    if (0 < *(int *)(in_ECX + 0x38)) {
      *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + 1;
      *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) - *(int *)(in_ECX + 0x30);
    }
    piVar3 = *(int **)(in_ECX + 0x4c);
    uVar6 = ((int)uVar1 >> 8) % piVar3[4];
    uVar4 = uVar6 + piVar3[4];
    if (-1 < (int)uVar6) {
      uVar4 = uVar6;
    }
    uVar7 = ((int)uVar2 >> 8) % piVar3[5];
    uVar6 = uVar7 + piVar3[5];
    if (-1 < (int)uVar7) {
      uVar6 = uVar7;
    }
    if (((*(int *)(in_ECX + 0x54) == 0) || (*(uint *)(in_ECX + 0x58) <= uVar4)) ||
       (*(uint *)(in_ECX + 0x5c) <= uVar6)) {
      puVar5 = (undefined1 *)(piVar3[2] * uVar6 + piVar3[3] * uVar4 + *piVar3);
      *param_1 = *puVar5;
      param_1[1] = puVar5[1];
      param_1[2] = puVar5[2];
    }
    else {
      FUN_0048bcd0(param_1,piVar3[2] * uVar6 + piVar3[3] * uVar4 + *piVar3,uVar1 & 0xff,uVar2 & 0xff
                  );
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + -1;
  } while (0 < param_3);
  return;
}

