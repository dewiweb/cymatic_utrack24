// rea decompile_all
// name: FUN_0065cf30
// address: 0x65cf30
// body: available
// range: 0x65cf30-0x65d0a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065cf30(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = param_1[1];
  piVar2 = *(int **)(iVar1 + 0x44);
  for (piVar3 = piVar2; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[9]) {
    if (*piVar3 == 0) {
      iVar4 = iVar4 + piVar3[3] * piVar3[2];
    }
  }
  for (piVar3 = *(int **)(iVar1 + 0x48); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[9]) {
    if (*piVar3 == 0) {
      iVar4 = iVar4 + piVar3[3] * piVar3[2] * 0x80;
    }
  }
  if (0 < iVar4) {
    for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
      if (*piVar2 == 0) {
        if ((int)((piVar2[1] - 1U) / (uint)piVar2[3]) < 1000000000) {
          piVar2[4] = piVar2[1];
        }
        else {
          piVar2[4] = piVar2[3] * 1000000000;
          *(undefined4 *)(*param_1 + 0x14) = 0x31;
          (**(code **)*param_1)(param_1);
          *(undefined1 *)((int)piVar2 + 0x22) = 1;
        }
        iVar4 = FUN_0065d240(param_1,1,piVar2[2],piVar2[4]);
        *piVar2 = iVar4;
        piVar2[5] = *(int *)(iVar1 + 0x50);
        piVar2[6] = 0;
        piVar2[7] = 0;
        *(undefined1 *)((int)piVar2 + 0x21) = 0;
      }
    }
    for (piVar3 = *(int **)(iVar1 + 0x48); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[9]) {
      if (*piVar3 == 0) {
        if ((int)((piVar3[1] - 1U) / (uint)piVar3[3]) < 1000000000) {
          piVar3[4] = piVar3[1];
        }
        else {
          piVar3[4] = piVar3[3] * 1000000000;
          *(undefined4 *)(*param_1 + 0x14) = 0x31;
          (**(code **)*param_1)(param_1);
          *(undefined1 *)((int)piVar3 + 0x22) = 1;
        }
        iVar4 = FUN_0065d190(param_1,1,piVar3[2],piVar3[4]);
        *piVar3 = iVar4;
        piVar3[5] = *(int *)(iVar1 + 0x50);
        piVar3[6] = 0;
        piVar3[7] = 0;
        *(undefined1 *)((int)piVar3 + 0x21) = 0;
      }
    }
  }
  return;
}

