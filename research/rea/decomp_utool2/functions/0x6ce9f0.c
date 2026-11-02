// rea decompile_all
// name: FUN_006ce9f0
// address: 0x6ce9f0
// body: available
// range: 0x6ce9f0-0x6ceb21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ce9f0(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 in_stack_ffffff98;
  undefined4 in_stack_ffffff9c;
  undefined4 in_stack_ffffffa0;
  undefined4 *in_stack_ffffffa4;
  undefined1 local_4c [16];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [8];
  int local_14;
  int local_10;
  undefined4 local_c;
  
  local_c = 0;
  if ((*(byte *)(in_ECX + 0x68) & 2) != 0) {
    if (*(int **)(in_ECX + 0x40) != (int *)0x0) {
      iVar1 = **(int **)(in_ECX + 0x40);
      if (param_1 == '\0') {
        in_stack_ffffffa4 = &param_2;
        in_stack_ffffffa0 = 0x6cea2a;
        cVar2 = (**(code **)(iVar1 + 0xc))(in_stack_ffffffa4);
      }
      else {
        in_stack_ffffffa4 = (undefined4 *)0x6cea1f;
        cVar2 = (**(code **)(iVar1 + 8))();
      }
      if (cVar2 == '\0') {
        return;
      }
    }
    if ((*(byte *)(in_ECX + 0x68) & 1) == 0) {
      if (*(int *)(in_ECX + 0xc) != 0) {
        FUN_004b1390(param_2,param_3,param_4,param_5);
        FUN_006ceb30(in_stack_ffffff98,in_stack_ffffff9c,in_stack_ffffffa0,in_stack_ffffffa4);
      }
    }
    else {
      piVar3 = (int *)FUN_006d1d80();
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x1c))(local_1c);
        FUN_004b1470(&local_2c,(float)local_14 / (float)*(int *)(in_ECX + 0x18),
                     (float)local_10 / (float)*(int *)(in_ECX + 0x1c));
        if (*(int *)(in_ECX + 0x24) == 0) {
          local_3c = local_2c;
          uStack_38 = uStack_28;
          uStack_34 = uStack_24;
          uStack_30 = uStack_20;
          (**(code **)(*piVar3 + 0x70))(&local_3c);
          return;
        }
        uVar4 = FUN_004744d0(local_4c,*(int *)(in_ECX + 0x24));
        (**(code **)(*piVar3 + 0x70))(uVar4);
        return;
      }
    }
  }
  return;
}

