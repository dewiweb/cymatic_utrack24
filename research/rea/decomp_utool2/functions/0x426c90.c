// rea decompile_all
// name: FUN_00426c90
// address: 0x426c90
// body: available
// range: 0x426c90-0x426e04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00426c90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,void *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  bool bVar4;
  int in_stack_00000020;
  void *local_20;
  
  if ((in_EDX != param_1) && (param_2 != param_3)) {
    do {
      uVar1 = *in_EDX;
      iVar3 = FUN_00425020();
      puVar2 = *(undefined4 **)(in_stack_00000020 + 4);
      if (iVar3 < 0) {
        if (puVar2 < *(undefined4 **)(in_stack_00000020 + 8)) {
          uVar1 = *param_2;
          param_2 = param_2 + 1;
          *puVar2 = uVar1;
          *(int *)(in_stack_00000020 + 4) = *(int *)(in_stack_00000020 + 4) + 4;
          bVar4 = param_2 == param_3;
        }
        else {
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = *param_2;
          }
          *(int *)(in_stack_00000020 + 4) = *(int *)(in_stack_00000020 + 4) + 4;
          param_2 = param_2 + 1;
          bVar4 = param_2 == param_3;
          *(undefined4 *)(in_stack_00000020 + 8) = *(undefined4 *)(in_stack_00000020 + 4);
        }
      }
      else {
        if (puVar2 < *(undefined4 **)(in_stack_00000020 + 8)) {
          *puVar2 = uVar1;
          *(int *)(in_stack_00000020 + 4) = *(int *)(in_stack_00000020 + 4) + 4;
        }
        else {
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = uVar1;
          }
          *(int *)(in_stack_00000020 + 4) = *(int *)(in_stack_00000020 + 4) + 4;
          *(undefined4 *)(in_stack_00000020 + 8) = *(undefined4 *)(in_stack_00000020 + 4);
        }
        in_EDX = in_EDX + 1;
        bVar4 = in_EDX == param_1;
      }
    } while (!bVar4);
  }
  iVar3 = FUN_00426800(param_1,0,0,0,0,in_stack_00000020);
  uVar1 = *(undefined4 *)(iVar3 + 0x10);
  if (local_20 != (void *)0x0) {
    FID_conflict__free(local_20);
  }
  iVar3 = FUN_00426800(param_3,0,0,0,0,uVar1);
  uVar1 = *(undefined4 *)(iVar3 + 0x10);
  if (local_20 != (void *)0x0) {
    FID_conflict__free(local_20);
  }
  in_ECX[4] = uVar1;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  if (param_4 != (void *)0x0) {
    FID_conflict__free(param_4);
  }
  return in_ECX;
}

