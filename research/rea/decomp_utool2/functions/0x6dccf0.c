// rea decompile_all
// name: FUN_006dccf0
// address: 0x6dccf0
// body: available
// range: 0x6dccf0-0x6dcf71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006dccf0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined **local_1c4 [36];
  undefined4 local_134;
  int local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  undefined1 local_f4 [120];
  undefined1 local_7c [8];
  int local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  int local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  void *local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  void *local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727cba;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  local_1c = operator_new(0x10c);
  local_8 = 0;
  FUN_0045c990(&DAT_00c05784,uVar3);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_18 = 1;
  local_18 = FUN_006c7c70(&local_14,3);
  piVar1 = (int *)(local_14 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  local_3c = (void *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_20 = 1;
  local_8 = 3;
  local_70 = 0x42480000;
  uStack_6c = 0x42c80000;
  uStack_68 = 0x42480000;
  uStack_64 = 0;
  FUN_006814d0(&local_70,0x42480000);
  FUN_006c02f0();
  local_1c4[0] = juce::DrawablePath::vftable;
  local_74 = 0;
  FUN_006842b0(&local_14);
  local_60 = local_14;
  local_5c = 0;
  local_58 = (undefined4 *)0x0;
  local_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  local_44 = 0x3f800000;
  local_40 = 0;
  local_8._0_1_ = 5;
  uVar4 = FUN_006bf6b0(&local_60);
  local_8._0_1_ = 6;
  FUN_006bffb0(local_f4,uVar4,local_7c);
  FUN_004ab120();
  local_8 = CONCAT31(local_8._1_3_,4);
  if (local_58 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_58 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_58)(1);
    }
  }
  iVar2 = local_5c;
  if (local_5c != 0) {
    FID_conflict__free(*(void **)(local_5c + 0x14));
    FUN_004bfe14(iVar2,0x20);
  }
  iVar2 = local_34;
  if (local_130 < local_34) {
    FUN_00409cf0(local_34 / 2 + 8 + local_34 & 0xfffffff8);
  }
  local_12c = iVar2;
  local_118 = local_20;
  local_128 = local_30;
  uStack_124 = uStack_2c;
  uStack_120 = uStack_28;
  uStack_11c = uStack_24;
  if (iVar2 != 0) {
    FUN_004c2c30(local_134,local_3c,iVar2 * 4);
  }
  FUN_006bfb60();
  FUN_006c7aa0(local_1c4,0);
  iVar2 = local_74;
  local_1c4[0] = juce::DrawablePath::vftable;
  if (local_74 != 0) {
    FUN_00407640();
    FUN_004bfe14(iVar2,0x10);
  }
  FUN_006c0110();
  FID_conflict__free(local_3c);
  ExceptionList = local_10;
  return local_18;
}

