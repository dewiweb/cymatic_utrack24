// rea decompile_all
// name: FUN_006d8760
// address: 0x6d8760
// body: available
// range: 0x6d8760-0x6d8fcd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006d8760(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined **local_4d0 [36];
  undefined4 local_440;
  int local_43c;
  int local_438;
  undefined4 local_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined1 local_424;
  undefined1 local_400 [120];
  undefined1 local_388 [8];
  int local_380;
  undefined **local_37c [12];
  int local_34c;
  undefined **local_2b8 [12];
  int local_288;
  undefined **local_1f4 [36];
  undefined4 local_164;
  int local_160;
  int local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148;
  undefined1 local_124 [120];
  undefined1 local_ac [8];
  int local_a4;
  undefined4 local_64;
  int local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_24;
  int local_20;
  void *local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00727886;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (int *)0x0;
  local_40 = (void *)0x0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  local_24 = 1;
  local_8 = 0;
  FUN_0067bc00(0xc1200000,0xc1200000,0x42f00000,0x42f00000);
  FUN_006c02f0(uVar2);
  local_438 = local_38;
  local_4d0[0] = juce::DrawablePath::vftable;
  local_380 = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_43c < local_38) {
    FUN_00409cf0(local_38 / 2 + 8 + local_38 & 0xfffffff8);
  }
  local_424 = local_24;
  local_434 = local_34;
  uStack_430 = uStack_30;
  uStack_42c = uStack_2c;
  uStack_428 = uStack_28;
  if (local_438 != 0) {
    FUN_004c2c30(local_440,local_40,local_438 * 4);
  }
  FUN_006bfb60();
  local_1c = (void *)0x99ffffff;
  local_64 = 0x99ffffff;
  local_60 = 0;
  local_5c = (undefined4 *)0x0;
  local_58 = 0x3f800000;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = 0x3f800000;
  local_44 = 0;
  local_8._0_1_ = 2;
  uVar3 = FUN_006bf6b0(&local_64);
  local_8._0_1_ = 3;
  FUN_006bffb0(local_400,uVar3,local_388);
  FUN_004ab120();
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_5c != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_5c + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_5c)(1);
    }
  }
  iVar1 = local_60;
  if (local_60 != 0) {
    FID_conflict__free(*(void **)(local_60 + 0x14));
    FUN_004bfe14(iVar1,0x20);
  }
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  local_34 = 0;
  FUN_0067bc00(0,0,0x42c80000,0x42c80000);
  FUN_00682020(0x41600000);
  FUN_00682020(0x41a80000);
  FUN_00682020(0x41a80000);
  local_24 = 0;
  FUN_006c02f0();
  local_15c = local_38;
  local_1f4[0] = juce::DrawablePath::vftable;
  local_a4 = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  if (local_160 < local_38) {
    FUN_00409cf0(local_38 / 2 + 8 + local_38 & 0xfffffff8);
  }
  local_148 = 0;
  local_158 = local_34;
  uStack_154 = uStack_30;
  uStack_150 = uStack_2c;
  uStack_14c = uStack_28;
  if (local_15c != 0) {
    FUN_004c2c30(local_164,local_40,local_15c * 4);
  }
  FUN_006bfb60();
  local_1c = (void *)0x59000000;
  local_64 = 0x59000000;
  local_60 = 0;
  local_5c = (undefined4 *)0x0;
  local_58 = 0x3f800000;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = 0x3f800000;
  local_44 = 0;
  local_8._0_1_ = 5;
  uVar3 = FUN_006bf6b0(&local_64);
  local_8._0_1_ = 6;
  FUN_006bffb0(local_124,uVar3,local_ac);
  FUN_004ab120();
  local_8 = CONCAT31(local_8._1_3_,4);
  if (local_5c != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_5c + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_5c)(1);
    }
  }
  iVar1 = local_60;
  if (local_60 != 0) {
    FID_conflict__free(*(void **)(local_60 + 0x14));
    FUN_004bfe14(iVar1,0x20);
  }
  FUN_006c5460();
  local_8._0_1_ = 7;
  piVar4 = operator_new(0x154);
  local_8._0_1_ = 8;
  local_14 = piVar4;
  FUN_006c0190(local_4d0);
  *piVar4 = (int)juce::DrawablePath::vftable;
  piVar4[0x54] = 0;
  local_8 = CONCAT31(local_8._1_3_,10);
  if (local_380 == 0) {
    FUN_006825f0(&local_440);
    FUN_006bfb60();
  }
  else {
    FUN_006c24c0(local_380);
  }
  local_8._0_1_ = 7;
  (**(code **)(*piVar4 + 0x28))(1);
  FUN_006e5050(piVar4,0xffffffff);
  piVar4 = operator_new(0x154);
  local_8._0_1_ = 0xb;
  local_14 = piVar4;
  FUN_006c0190(local_1f4);
  *piVar4 = (int)juce::DrawablePath::vftable;
  piVar4[0x54] = 0;
  local_8 = CONCAT31(local_8._1_3_,0xd);
  if (local_a4 == 0) {
    FUN_006825f0(&local_164);
    FUN_006bfb60();
  }
  else {
    FUN_006c24c0(local_a4);
  }
  local_8._0_1_ = 7;
  (**(code **)(*piVar4 + 0x28))(1);
  FUN_006e5050(piVar4,0xffffffff);
  local_1c = (void *)0xcc000000;
  local_64 = 0xcc000000;
  local_60 = 0;
  local_5c = (undefined4 *)0x0;
  local_58 = 0x3f800000;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = 0x3f800000;
  local_44 = 0;
  local_8._0_1_ = 0xe;
  uVar3 = FUN_006bf6b0(&local_64);
  local_8._0_1_ = 0xf;
  FUN_006bffb0(local_124,uVar3,local_ac);
  FUN_004ab120();
  local_8 = CONCAT31(local_8._1_3_,7);
  if (local_5c != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_5c + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_5c)(1);
    }
  }
  iVar1 = local_60;
  if (local_60 != 0) {
    FID_conflict__free(*(void **)(local_60 + 0x14));
    FUN_004bfe14(iVar1,0x20);
  }
  FUN_006c5460();
  local_8._0_1_ = 0x10;
  piVar4 = operator_new(0x154);
  local_8._0_1_ = 0x11;
  local_14 = piVar4;
  FUN_006c0190(local_4d0);
  *piVar4 = (int)juce::DrawablePath::vftable;
  piVar4[0x54] = 0;
  local_8 = CONCAT31(local_8._1_3_,0x13);
  if (local_380 == 0) {
    FUN_006825f0(&local_440);
    FUN_006bfb60();
  }
  else {
    FUN_006c24c0(local_380);
  }
  local_8._0_1_ = 0x10;
  (**(code **)(*piVar4 + 0x28))(1);
  FUN_006e5050(piVar4,0xffffffff);
  piVar4 = operator_new(0x154);
  local_8._0_1_ = 0x14;
  local_14 = piVar4;
  FUN_006c0190(local_1f4);
  *piVar4 = (int)juce::DrawablePath::vftable;
  piVar4[0x54] = 0;
  local_8 = CONCAT31(local_8._1_3_,0x16);
  if (local_a4 == 0) {
    FUN_006825f0(&local_164);
    FUN_006bfb60();
  }
  else {
    FUN_006c24c0(local_a4);
  }
  local_8._0_1_ = 0x10;
  (**(code **)(*piVar4 + 0x28))(1);
  FUN_006e5050(piVar4,0xffffffff);
  local_1c = operator_new(0x10c);
  local_8._0_1_ = 0x17;
  FUN_0045c990(&DAT_00c05778);
  local_8 = CONCAT31(local_8._1_3_,0x18);
  local_14 = (int *)0x1;
  local_14 = (int *)FUN_006c7c70(&local_20,0);
  local_8 = 0x10;
  piVar4 = (int *)(local_20 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_006c7aa0(local_37c,local_2b8);
  local_8._0_1_ = 0x1a;
  local_2b8[0] = juce::DrawableComposite::vftable;
  while (0 < local_288) {
    puVar5 = (undefined4 *)FUN_006cf0a0(local_288 + -1,1,1);
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
  }
  FUN_0069fda0();
  FUN_0069fda0();
  FUN_0069e440();
  local_2b8[0] = juce::Drawable::vftable;
  FUN_006ea0b0();
  local_8 = CONCAT31(local_8._1_3_,0x1b);
  local_37c[0] = juce::DrawableComposite::vftable;
  while (0 < local_34c) {
    puVar5 = (undefined4 *)FUN_006cf0a0(local_34c + -1,1,1);
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
  }
  FUN_0069fda0();
  FUN_0069fda0();
  FUN_0069e440();
  local_37c[0] = juce::Drawable::vftable;
  FUN_006ea0b0();
  iVar1 = local_a4;
  local_1f4[0] = juce::DrawablePath::vftable;
  if (local_a4 != 0) {
    FUN_00407640();
    FUN_004bfe14(iVar1,0x10);
  }
  FUN_006c0110();
  iVar1 = local_380;
  local_4d0[0] = juce::DrawablePath::vftable;
  if (local_380 != 0) {
    FUN_00407640();
    FUN_004bfe14(iVar1,0x10);
  }
  FUN_006c0110();
  FID_conflict__free(local_40);
  ExceptionList = local_10;
  return local_14;
}

