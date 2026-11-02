// rea decompile_all
// name: FUN_00449020
// address: 0x449020
// body: available
// range: 0x449020-0x4491da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00449020(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,void *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  bool bVar5;
  int in_stack_00000020;
  char in_stack_00000028;
  void *local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ff178;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((in_EDX != param_1) && (param_2 != param_3)) {
    do {
      iVar4 = FUN_00445dc0(*param_2,*in_EDX);
      puVar1 = *(undefined4 **)(in_stack_00000020 + 4);
      if (iVar4 < 0) {
        if (puVar1 < *(undefined4 **)(in_stack_00000020 + 8)) {
          uVar2 = *param_2;
          param_2 = param_2 + 1;
          *puVar1 = uVar2;
          *(int *)(in_stack_00000020 + 4) = *(int *)(in_stack_00000020 + 4) + 4;
          bVar5 = param_2 == param_3;
        }
        else {
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = *param_2;
          }
          *(int *)(in_stack_00000020 + 4) = *(int *)(in_stack_00000020 + 4) + 4;
          param_2 = param_2 + 1;
          bVar5 = param_2 == param_3;
          *(undefined4 *)(in_stack_00000020 + 8) = *(undefined4 *)(in_stack_00000020 + 4);
        }
      }
      else {
        if (puVar1 < *(undefined4 **)(in_stack_00000020 + 8)) {
          *puVar1 = *in_EDX;
          *(int *)(in_stack_00000020 + 4) = *(int *)(in_stack_00000020 + 4) + 4;
        }
        else {
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = *in_EDX;
          }
          *(int *)(in_stack_00000020 + 4) = *(int *)(in_stack_00000020 + 4) + 4;
          *(undefined4 *)(in_stack_00000020 + 8) = *(undefined4 *)(in_stack_00000020 + 4);
        }
        in_EDX = in_EDX + 1;
        bVar5 = in_EDX == param_1;
      }
    } while (!bVar5);
  }
  iVar4 = FUN_00426800(param_1,0,0,0,0,in_stack_00000020,uVar3);
  in_stack_00000020 = *(undefined4 *)(iVar4 + 0x10);
  if (local_2c != (void *)0x0) {
    FID_conflict__free(local_2c);
  }
  if (in_stack_00000028 == '\0') {
    iVar4 = FUN_00426800(param_3,0,0,0,0,in_stack_00000020,uVar3);
    in_stack_00000020 = *(undefined4 *)(iVar4 + 0x10);
    if (local_2c != (void *)0x0) {
      FID_conflict__free(local_2c);
    }
  }
  in_ECX[4] = in_stack_00000020;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  if (param_4 != (void *)0x0) {
    FID_conflict__free(param_4);
  }
  ExceptionList = local_10;
  return;
}

