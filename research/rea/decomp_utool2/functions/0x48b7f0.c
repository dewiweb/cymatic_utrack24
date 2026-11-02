// rea decompile_all
// name: FUN_0048b7f0
// address: 0x48b7f0
// body: available
// range: 0x48b7f0-0x48b998 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048b7f0(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_00476980(param_3);
  do {
    uVar6 = *(uint *)(in_ECX + 0x18);
    *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + *(int *)(in_ECX + 0x28);
    *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x20);
    if (0 < *(int *)(in_ECX + 0x24)) {
      *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
      *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) - *(int *)(in_ECX + 0x1c);
    }
    uVar5 = *(uint *)(in_ECX + 0x2c);
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + *(int *)(in_ECX + 0x3c);
    *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + *(int *)(in_ECX + 0x34);
    if (0 < *(int *)(in_ECX + 0x38)) {
      *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + 1;
      *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) - *(int *)(in_ECX + 0x30);
    }
    uVar2 = (int)uVar5 >> 8;
    uVar4 = (int)uVar6 >> 8;
    if (*(int *)(in_ECX + 0x54) == 0) {
LAB_0048b936:
      piVar1 = *(int **)(in_ECX + 0x4c);
      uVar6 = 0;
      if (-1 < (int)uVar4) {
        uVar6 = uVar4;
      }
      uVar5 = 0;
      if (-1 < (int)uVar2) {
        uVar5 = uVar2;
      }
      if (*(int *)(in_ECX + 0x58) < (int)uVar6) {
        uVar6 = *(uint *)(in_ECX + 0x58);
      }
      if (*(int *)(in_ECX + 0x5c) < (int)uVar5) {
        uVar5 = *(uint *)(in_ECX + 0x5c);
      }
      puVar3 = (undefined1 *)(piVar1[2] * uVar5 + piVar1[3] * uVar6 + *piVar1);
      *param_1 = *puVar3;
      param_1[1] = puVar3[1];
      param_1[2] = puVar3[2];
    }
    else if (uVar4 < *(uint *)(in_ECX + 0x58)) {
      if (uVar2 < *(uint *)(in_ECX + 0x5c)) {
        piVar1 = *(int **)(in_ECX + 0x4c);
        FUN_0048bcd0(param_1,piVar1[2] * uVar2 + piVar1[3] * uVar4 + *piVar1,uVar6 & 0xff,
                     uVar5 & 0xff);
      }
      else if ((int)uVar2 < 0) {
        FUN_0048bc50(param_1,(*(int **)(in_ECX + 0x4c))[3] * uVar4 + **(int **)(in_ECX + 0x4c),
                     uVar6 & 0xff);
      }
      else {
        piVar1 = *(int **)(in_ECX + 0x4c);
        FUN_0048bc50(param_1,piVar1[2] * *(int *)(in_ECX + 0x5c) + piVar1[3] * uVar4 + *piVar1,
                     uVar6 & 0xff);
      }
    }
    else {
      if (*(uint *)(in_ECX + 0x5c) <= uVar2) goto LAB_0048b936;
      if ((int)uVar4 < 0) {
        FUN_0048bbd0(param_1,(*(int **)(in_ECX + 0x4c))[2] * uVar2 + **(int **)(in_ECX + 0x4c),
                     uVar5 & 0xff);
      }
      else {
        piVar1 = *(int **)(in_ECX + 0x4c);
        FUN_0048bbd0(param_1,piVar1[3] * *(int *)(in_ECX + 0x58) + piVar1[2] * uVar2 + *piVar1,
                     uVar5 & 0xff);
      }
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + -1;
    if (param_3 < 1) {
      return;
    }
  } while( true );
}

