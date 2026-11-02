// rea decompile_all
// name: FUN_00675430
// address: 0x675430
// body: available
// range: 0x675430-0x67564f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00675430(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  void *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  float local_28;
  float local_20;
  float local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720646;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX[8] < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(in_ECX[6] + -4 + in_ECX[8] * 4);
  }
  if ((*(int *)(iVar2 + 0x18) == 0) && (*(int *)(iVar2 + 0x1c) == 0)) {
    FUN_00675f90(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (in_ECX[8] < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX[6] + -4 + in_ECX[8] * 4);
    }
    FUN_00675db0(*(undefined4 *)(iVar2 + 0x14));
    FUN_0046fbd0(local_2c);
    local_1c = local_28 + local_20;
    piVar3 = (int *)FUN_00620080();
    pcVar1 = *(code **)(*piVar3 + 0x14);
    if (pcVar1 == FUN_0062c8e0) {
      param_1 = CONCAT31(param_1._1_3_,0x20);
      (**(code **)(*piVar3 + 0x10))(&param_1,1);
    }
    else {
      (*pcVar1)(0x20);
    }
    piVar3 = (int *)FUN_00620080();
    pcVar1 = *(code **)(*piVar3 + 0x14);
    if (pcVar1 == FUN_0062c8e0) {
      local_14[0] = 0x20;
      (**(code **)(*piVar3 + 0x10))(local_14,1);
    }
    else {
      (*pcVar1)(0x20);
    }
    piVar3 = (int *)FUN_00620080();
    pcVar1 = *(code **)(*piVar3 + 0x14);
    if (pcVar1 == FUN_0062c8e0) {
      local_18[0] = 0x20;
      (**(code **)(*piVar3 + 0x10))(local_18,1);
    }
    else {
      (*pcVar1)(0x20);
    }
    piVar3 = (int *)FUN_00620080();
    (**(code **)(*piVar3 + 0x10))(" rectfill\n",10);
    ExceptionList = local_10;
    return;
  }
  local_64 = (void *)0x0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = 1;
  local_8 = 0;
  FUN_00682020(*(undefined4 *)(param_1 + 0xc));
  local_34 = 0x3f800000;
  local_30 = 0;
  local_44 = 0x3f800000;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  (**(code **)(*in_ECX + 0x5c))(&local_64,&local_44);
  FID_conflict__free(local_64);
  ExceptionList = local_10;
  return;
}

