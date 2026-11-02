// rea decompile_all
// name: FUN_006a3290
// address: 0x6a3290
// body: available
// range: 0x6a3290-0x6a37c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006a3290(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  void *_Memory;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined **local_1c4 [36];
  undefined4 local_134;
  int local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  undefined1 local_f4 [128];
  int local_74;
  int local_70;
  int local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  void *local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00722f0e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = 0;
  _Memory = (void *)0x0;
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
    local_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0x3f800000;
    uStack_20 = 0x3f800000;
    FUN_00681a00();
    local_2c = 0x3f800000;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0x3f800000;
    FUN_00681a00();
    operator_new(0x13c);
    local_8._0_1_ = 1;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,2);
    local_1c = 1;
    uVar5 = 0xd7ff3333;
    uVar4 = 0x7fff3333;
    uVar2 = FUN_006c6b30(&local_14,0x7fff3333,0xd7ff3333);
    local_8 = 0;
    piVar3 = (int *)(local_14 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        uVar5 = 0x6a33a4;
        FID_conflict__free(piVar3);
      }
    }
    FUN_006c6990(&local_4c,uVar4,uVar5);
    _Memory = local_4c;
  }
  else if (param_1 == 1) {
    local_2c = 0;
    uStack_28 = 0x3f000000;
    uStack_24 = 0x3f800000;
    uStack_20 = 0x3f000000;
    FUN_00681a00();
    operator_new(0x10c);
    local_8._0_1_ = 4;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,5);
    local_1c = 2;
    uVar2 = FUN_006c7c70(&local_14);
    local_8 = 0;
    piVar3 = (int *)(local_14 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    FUN_006c02f0();
    local_12c = local_44;
    local_1c4[0] = juce::DrawablePath::vftable;
    local_74 = 0;
    local_8 = CONCAT31(local_8._1_3_,7);
    if (local_130 < local_44) {
      FUN_00409cf0();
    }
    _Memory = local_4c;
    local_118 = local_30;
    local_128 = local_40;
    uStack_124 = uStack_3c;
    uStack_120 = uStack_38;
    uStack_11c = uStack_34;
    if (local_12c != 0) {
      FUN_004c2c30(local_134,local_4c);
    }
    FUN_006bfb60();
    FUN_006842b0();
    local_70 = local_14;
    local_6c = 0;
    local_68 = (undefined4 *)0x0;
    local_64 = 0x3f800000;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    local_54 = 0x3f800000;
    local_50 = 0;
    local_8._0_1_ = 8;
    uVar4 = FUN_006bf6b0();
    local_8._0_1_ = 9;
    FUN_006bffb0(local_f4,uVar4);
    FUN_004ab120();
    local_8 = CONCAT31(local_8._1_3_,7);
    if (local_68 != (undefined4 *)0x0) {
      LOCK();
      piVar3 = local_68 + 1;
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*local_68)();
      }
    }
    iVar1 = local_6c;
    if (local_6c != 0) {
      FID_conflict__free(*(void **)(local_6c + 0x14));
      FUN_004bfe14(iVar1,0x20);
    }
    FUN_006c7aa0(local_1c4,0);
    iVar1 = local_74;
    local_1c4[0] = juce::DrawablePath::vftable;
    if (local_74 != 0) {
      FUN_00407640();
      FUN_004bfe14(iVar1);
    }
    FUN_006c0110();
  }
  else if (param_1 == 2) {
    local_2c = 0x3f000000;
    uStack_28 = 0;
    uStack_24 = 0x3f000000;
    uStack_20 = 0x3f800000;
    FUN_00681a00();
    local_2c = 0;
    uStack_28 = 0x3f000000;
    uStack_24 = 0x3f800000;
    uStack_20 = 0x3f000000;
    FUN_00681a00();
    operator_new(0x10c);
    local_8._0_1_ = 10;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0xb);
    local_1c = 4;
    uVar2 = FUN_006c7c70(&local_14);
    local_8 = 0;
    FUN_00637c10();
    FUN_006c02f0();
    local_12c = local_44;
    local_1c4[0] = juce::DrawablePath::vftable;
    local_74 = 0;
    local_8 = CONCAT31(local_8._1_3_,0xd);
    if (local_130 < local_44) {
      FUN_00409cf0();
    }
    _Memory = local_4c;
    local_118 = local_30;
    local_128 = local_40;
    uStack_124 = uStack_3c;
    uStack_120 = uStack_38;
    uStack_11c = uStack_34;
    if (local_12c != 0) {
      FUN_004c2c30(local_134,local_4c);
    }
    FUN_006bfb60();
    FUN_006842b0(&stack0xfffffdf0);
    FUN_0067e8f0();
    local_8._0_1_ = 0xe;
    uVar4 = FUN_006bf6b0();
    local_8._0_1_ = 0xf;
    FUN_006bffb0(local_f4,uVar4);
    FUN_004ab120();
    local_8 = CONCAT31(local_8._1_3_,0xd);
    FUN_0067e690();
    FUN_006c7aa0(local_1c4,0);
    iVar1 = local_74;
    local_1c4[0] = juce::DrawablePath::vftable;
    if (local_74 != 0) {
      FUN_00407640();
      FUN_004bfe14(iVar1);
    }
    FUN_006c0110();
  }
  else {
    uVar2 = 0;
  }
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return uVar2;
}

