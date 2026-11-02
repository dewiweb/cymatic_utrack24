// rea decompile_all
// name: FUN_006a7910
// address: 0x6a7910
// body: available
// range: 0x6a7910-0x6a7c25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006a7910(int param_1)

{
  int iVar1;
  uint uVar2;
  int *_Memory;
  undefined4 uVar3;
  void *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50;
  void *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007232a3;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (void *)0x0;
  local_4c = (void *)0x0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 1;
  local_8 = 0;
  if (param_1 == 4) {
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0x3f800000;
    uStack_18 = 0x3f800000;
    FUN_00681a00(&uStack_24);
    uStack_24 = 0x3f800000;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0x3f800000;
    FUN_00681a00(&uStack_24);
    local_14 = operator_new(0x124);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0045c990("close",uVar2);
    uVar3 = 0xffdd1100;
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 2) {
        uStack_24 = 0x3f000000;
        uStack_20 = 0;
        uStack_1c = 0x3f000000;
        uStack_18 = 0x3f800000;
        FUN_00681a00(&uStack_24);
        uStack_24 = 0;
        uStack_20 = 0x3f000000;
        uStack_1c = 0x3f800000;
        uStack_18 = 0x3f000000;
        FUN_00681a00(&uStack_24);
        local_6c = (void *)0x0;
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        local_50 = 1;
        local_8._0_1_ = 3;
        FUN_00682e50();
        FUN_00682d90();
        FUN_00682d90();
        FUN_00682d90();
        FUN_00682d90();
        FUN_00682020(0x42c80000);
        uStack_1c = 0x3f800000;
        local_2c = 0x3f800000;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_18 = 0;
        FUN_00677cd0(&local_6c,&local_6c,&local_2c,0x3f800000);
        local_14 = operator_new(0x124);
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_0045c990("maximise");
        uVar3 = FUN_00495cd0(&param_1,0xff119911,&local_4c,&local_6c);
        FUN_00637c10();
        FID_conflict__free(local_6c);
      }
      else {
        uVar3 = 0;
      }
      goto LAB_006a7c07;
    }
    uStack_24 = 0;
    uStack_20 = 0x3f000000;
    uStack_1c = 0x3f800000;
    uStack_18 = 0x3f000000;
    FUN_00681a00(&uStack_24);
    local_14 = operator_new(0x124);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_0045c990("minimise");
    uVar3 = 0xffaa8811;
  }
  uVar3 = FUN_00495cd0(&param_1,uVar3,&local_4c,&local_4c);
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
LAB_006a7c07:
  FID_conflict__free(local_4c);
  ExceptionList = local_10;
  return uVar3;
}

