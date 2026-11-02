// rea decompile_all
// name: FUN_006d7060
// address: 0x6d7060
// body: available
// range: 0x6d7060-0x6d73a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006d7060(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *_Memory;
  void *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  void *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *local_1c;
  void *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0072763f;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  local_54 = (void *)0x0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_38 = 1;
  local_8 = 0;
  if (param_1 == 4) {
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0x3f800000;
    uStack_20 = 0x3f800000;
    FUN_00681a00(&uStack_2c);
    uStack_2c = 0x3f800000;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0x3f800000;
    FUN_00681a00(&uStack_2c);
    local_18 = operator_new(0x124);
    local_8._0_1_ = 1;
    FUN_0045c990("close",uVar2);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_14 = 1;
    uVar3 = FUN_004960a0(&param_1,0xffdd1100,&local_54,&local_54);
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 2) {
        uStack_2c = 0x3f000000;
        uStack_28 = 0;
        uStack_24 = 0x3f000000;
        uStack_20 = 0x3f800000;
        FUN_00681a00(&uStack_2c);
        uStack_2c = 0;
        uStack_28 = 0x3f000000;
        uStack_24 = 0x3f800000;
        uStack_20 = 0x3f000000;
        FUN_00681a00(&uStack_2c);
        local_74 = (void *)0x0;
        local_70 = 0;
        local_6c = 0;
        local_68 = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_5c = 0;
        local_58 = 1;
        local_8._0_1_ = 7;
        FUN_00682e50();
        FUN_00682d90();
        FUN_00682d90();
        FUN_00682d90();
        FUN_00682d90();
        FUN_00682020(0x42c80000);
        uStack_24 = 0x3f800000;
        local_34 = 0x3f800000;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_20 = 0;
        FUN_00677cd0(&local_74,&local_74,&local_34,0x3f800000);
        local_1c = operator_new(0x124);
        local_8._0_1_ = 8;
        FUN_0045c990("maximise");
        local_8 = CONCAT31(local_8._1_3_,9);
        local_14 = 4;
        uVar3 = FUN_004960a0(&param_1,0xff119911,&local_54,&local_74);
        FUN_00637c10();
        FID_conflict__free(local_74);
      }
      else {
        uVar3 = 0;
      }
      goto LAB_006d7389;
    }
    uStack_2c = 0;
    uStack_28 = 0x3f000000;
    uStack_24 = 0x3f800000;
    uStack_20 = 0x3f000000;
    FUN_00681a00(&uStack_2c);
    local_1c = operator_new(0x124);
    local_8._0_1_ = 4;
    FUN_0045c990("minimise");
    local_8 = CONCAT31(local_8._1_3_,5);
    local_14 = 2;
    uVar3 = FUN_004960a0(&param_1,0xffaa8811,&local_54,&local_54);
  }
  _Memory = (int *)(param_1 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
LAB_006d7389:
  FID_conflict__free(local_54);
  ExceptionList = local_10;
  return uVar3;
}

