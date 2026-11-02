// rea decompile_all
// name: FUN_00451960
// address: 0x451960
// body: available
// range: 0x451960-0x451b75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00451960(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int *piVar4;
  undefined4 *in_EDX;
  undefined1 local_1c [4];
  int local_18;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ffd00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)*in_EDX;
  if (*(code **)(iVar1 + 0x40) != FUN_004133b0) {
    pcVar2 = *(code **)(*in_ECX + 0x14);
    if (pcVar2 == FUN_0062c8e0) {
      local_14[0] = 0x22;
      (**(code **)(*in_ECX + 0x10))(local_14,1);
    }
    else {
      (*pcVar2)(0x22);
    }
    puVar3 = (undefined4 *)FUN_00635650(&local_18);
    local_8 = 0;
    FUN_00451c50(*puVar3);
    local_8 = 0xffffffff;
    piVar4 = (int *)(local_18 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    pcVar2 = *(code **)(*in_ECX + 0x14);
    if (pcVar2 == FUN_0062c8e0) {
      local_14[0] = 0x22;
      (**(code **)(*in_ECX + 0x10))(local_14,1);
      ExceptionList = local_10;
      return;
    }
    (*pcVar2)(0x22);
    ExceptionList = local_10;
    return;
  }
  if (*(code **)(iVar1 + 0x28) != FUN_004133b0) {
    (**(code **)(*in_ECX + 0x10))(&DAT_00c17688,4);
    ExceptionList = local_10;
    return;
  }
  if (*(code **)(iVar1 + 0x2c) != FUN_004133b0) {
    (**(code **)(*in_ECX + 0x10))("undefined",9);
    ExceptionList = local_10;
    return;
  }
  if (*(code **)(iVar1 + 0x38) != FUN_004133b0) {
    (**(code **)(iVar1 + 0x14))(in_EDX + 2);
    FUN_0062a950();
    ExceptionList = local_10;
    return;
  }
  if (*(code **)(iVar1 + 0x48) != FUN_004133b0) {
    (**(code **)(iVar1 + 0x1c))(in_EDX + 2);
    FUN_00451e40(param_1,param_2);
    ExceptionList = local_10;
    return;
  }
  if (*(code **)(iVar1 + 0x44) == FUN_004133b0) {
    FUN_00635650(local_1c);
    local_8 = 1;
    FUN_0062a920();
    FUN_00637c10();
  }
  else {
    piVar4 = (int *)FUN_00629120(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x20))();
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}

