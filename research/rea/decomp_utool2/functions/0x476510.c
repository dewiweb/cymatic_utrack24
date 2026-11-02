// rea decompile_all
// name: FUN_00476510
// address: 0x476510
// body: available
// range: 0x476510-0x4766b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00476510(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_00476980(param_3);
  do {
    uVar5 = *(uint *)(in_ECX + 0x18);
    *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + *(int *)(in_ECX + 0x28);
    *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x20);
    if (0 < *(int *)(in_ECX + 0x24)) {
      *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
      *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) - *(int *)(in_ECX + 0x1c);
    }
    uVar4 = *(uint *)(in_ECX + 0x2c);
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + *(int *)(in_ECX + 0x3c);
    *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + *(int *)(in_ECX + 0x34);
    if (0 < *(int *)(in_ECX + 0x38)) {
      *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + 1;
      *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) - *(int *)(in_ECX + 0x30);
    }
    uVar2 = (int)uVar4 >> 8;
    uVar3 = (int)uVar5 >> 8;
    if (*(int *)(in_ECX + 0x54) == 0) {
LAB_00476665:
      piVar1 = *(int **)(in_ECX + 0x4c);
      uVar5 = 0;
      if (-1 < (int)uVar3) {
        uVar5 = uVar3;
      }
      uVar4 = 0;
      if (-1 < (int)uVar2) {
        uVar4 = uVar2;
      }
      if (*(int *)(in_ECX + 0x58) < (int)uVar5) {
        uVar5 = *(uint *)(in_ECX + 0x58);
      }
      if (*(int *)(in_ECX + 0x5c) < (int)uVar4) {
        uVar4 = *(uint *)(in_ECX + 0x5c);
      }
      *param_1 = *(undefined4 *)(piVar1[2] * uVar4 + piVar1[3] * uVar5 + *piVar1);
    }
    else if (uVar3 < *(uint *)(in_ECX + 0x58)) {
      if (uVar2 < *(uint *)(in_ECX + 0x5c)) {
        piVar1 = *(int **)(in_ECX + 0x4c);
        FUN_00476c20(param_1,piVar1[2] * uVar2 + piVar1[3] * uVar3 + *piVar1,uVar5 & 0xff,
                     uVar4 & 0xff);
      }
      else if ((int)uVar2 < 0) {
        FUN_00476b80(param_1,(*(int **)(in_ECX + 0x4c))[3] * uVar3 + **(int **)(in_ECX + 0x4c),
                     uVar5 & 0xff);
      }
      else {
        piVar1 = *(int **)(in_ECX + 0x4c);
        FUN_00476b80(param_1,piVar1[2] * *(uint *)(in_ECX + 0x5c) + piVar1[3] * uVar3 + *piVar1,
                     uVar5 & 0xff);
      }
    }
    else {
      if (*(uint *)(in_ECX + 0x5c) <= uVar2) goto LAB_00476665;
      if ((int)uVar3 < 0) {
        FUN_00476ae0(param_1,(*(int **)(in_ECX + 0x4c))[2] * uVar2 + **(int **)(in_ECX + 0x4c),
                     uVar4 & 0xff);
      }
      else {
        piVar1 = *(int **)(in_ECX + 0x4c);
        FUN_00476ae0(param_1,piVar1[3] * *(uint *)(in_ECX + 0x58) + piVar1[2] * uVar2 + *piVar1,
                     uVar4 & 0xff);
      }
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
    if (param_3 < 1) {
      return;
    }
  } while( true );
}

