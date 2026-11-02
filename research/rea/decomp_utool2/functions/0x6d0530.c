// rea decompile_all
// name: FUN_006d0530
// address: 0x6d0530
// body: available
// range: 0x6d0530-0x6d0d4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d0530(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined **local_1e4 [36];
  undefined4 local_154;
  int local_150;
  int local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_138;
  undefined1 local_114 [128];
  int local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void *local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  void *local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined1 *local_3c;
  int local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726c32;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = juce::SettableTooltipClient::vftable;
  in_ECX[0x1d] = &DAT_00bfe12c;
  in_ECX[0x1e] = juce::FileDragAndDropTarget::vftable;
  in_ECX[0x1f] = juce::Button::Listener::vftable;
  in_ECX[0x20] = juce::ListBoxModel::vftable;
  *in_ECX = juce::FileSearchPathListComponent::vftable;
  in_ECX[0x1c] = juce::FileSearchPathListComponent::vftable;
  in_ECX[0x1e] = juce::FileSearchPathListComponent::vftable;
  in_ECX[0x1f] = juce::FileSearchPathListComponent::vftable;
  in_ECX[0x20] = juce::FileSearchPathListComponent::vftable;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = &DAT_00bfe12c;
  local_14 = &DAT_00bfe12c;
  local_8._0_1_ = 7;
  local_8._1_3_ = 0;
  FUN_006e8060();
  local_8._0_1_ = 9;
  FUN_0045c990();
  local_8._0_1_ = 10;
  local_18 = in_ECX + 0x50;
  FUN_006e3660();
  in_ECX[0x50] = juce::TextButton::vftable;
  in_ECX[0x6c] = juce::TextButton::vftable;
  local_8._0_1_ = 0xc;
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
  FUN_0045c990();
  piVar3 = in_ECX + 0x88;
  local_8._0_1_ = 0xd;
  local_18 = piVar3;
  FUN_006e3660();
  *piVar3 = (int)juce::TextButton::vftable;
  in_ECX[0xa4] = juce::TextButton::vftable;
  local_8._0_1_ = 0xf;
  piVar4 = (int *)(local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_00637250();
  local_18 = in_ECX + 0xc0;
  local_8 = CONCAT31(local_8._1_3_,0x10);
  FUN_006e3660();
  in_ECX[0xc0] = juce::TextButton::vftable;
  in_ECX[0xdc] = juce::TextButton::vftable;
  piVar4 = (int *)(local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_14 = &DAT_00bfe12c;
  local_8._0_1_ = 0x13;
  FUN_006c7c70();
  local_14 = &DAT_00bfe12c;
  local_8._0_1_ = 0x16;
  FUN_006c7c70();
  local_8 = CONCAT31(local_8._1_3_,0x18);
  if ((undefined4 *)in_ECX[0x43] != in_ECX + 0x20) {
    in_ECX[0x43] = in_ECX + 0x20;
    FUN_006e6400();
    FUN_006ce9f0();
    FUN_006e7e60();
  }
  (**(code **)(in_ECX[0x25] + 0x28))();
  FUN_006e5050();
  FUN_006842b0();
  FUN_006e6170();
  FUN_006842b0();
  FUN_006e6170();
  in_ECX[0x4a] = 1;
  (**(code **)(in_ECX[0x25] + 0x84))();
  (**(code **)(in_ECX[0x50] + 0x28))();
  FUN_006e5050();
  if (in_ECX != (undefined4 *)0xffffff84) {
    FUN_004097d0();
  }
  if (in_ECX[0x7e] != 0xf) {
    in_ECX[0x7e] = 0xf;
    FUN_006e6400();
    FUN_006ce9f0();
  }
  (**(code **)(*piVar3 + 0x28))();
  FUN_006e5050();
  if (in_ECX != (undefined4 *)0xffffff84) {
    FUN_004097d0();
  }
  if (in_ECX[0xb6] != 0xf) {
    in_ECX[0xb6] = 0xf;
    FUN_006e6400(&stack0xfffffdb8);
    FUN_006ce9f0(1);
  }
  (**(code **)(in_ECX[0xc0] + 0x28))();
  FUN_006e5050();
  if (in_ECX != (undefined4 *)0xffffff84) {
    FUN_004097d0();
  }
  (**(code **)(in_ECX[0xf8] + 0x28))();
  FUN_006e5050();
  if (in_ECX != (undefined4 *)0xffffff84) {
    FUN_004097d0();
  }
  local_5c = (void *)0x0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 1;
  local_8._0_1_ = 0x19;
  local_90 = 0x42480000;
  uStack_8c = 0x42c80000;
  uStack_88 = 0x42480000;
  uStack_84 = 0;
  FUN_006814d0();
  FUN_006c02f0();
  local_1e4[0] = juce::DrawablePath::vftable;
  local_94 = 0;
  FUN_006842b0();
  local_3c = local_14;
  local_38 = 0;
  local_34 = (undefined4 *)0x0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_20 = 0x3f800000;
  local_1c = 0;
  local_8._0_1_ = 0x1b;
  FUN_006bf6b0();
  local_8._0_1_ = 0x1c;
  FUN_006bffb0(local_114);
  FUN_004ab120();
  local_8 = CONCAT31(local_8._1_3_,0x1a);
  if (local_34 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_34 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_34)();
    }
  }
  if (local_38 != 0) {
    FID_conflict__free(*(void **)(local_38 + 0x14));
    FUN_004bfe14(local_38);
  }
  if (local_150 < local_54) {
    FUN_00409cf0();
  }
  local_14c = local_54;
  local_138 = local_40;
  local_148 = local_50;
  uStack_144 = uStack_4c;
  uStack_140 = uStack_48;
  uStack_13c = uStack_44;
  if (local_54 != 0) {
    FUN_004c2c30(local_154);
  }
  FUN_006bfb60();
  uVar5 = 0;
  FUN_006c7aa0(local_1e4,0);
  local_1e4[0] = juce::DrawablePath::vftable;
  local_14 = (undefined1 *)local_94;
  if (local_94 != 0) {
    FUN_00407640();
    FUN_004bfe14();
  }
  FUN_006c0110();
  local_8 = CONCAT31(local_8._1_3_,0x18);
  FID_conflict__free(local_5c);
  (**(code **)(in_ECX[0x13b] + 0x28))();
  FUN_006e5050(in_ECX + 0x13b);
  if (in_ECX != (undefined4 *)0xffffff84) {
    FUN_004097d0();
  }
  local_7c = (void *)0x0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_60 = 1;
  local_8._0_1_ = 0x1d;
  local_90 = 0x42480000;
  uStack_8c = 0;
  uStack_88 = 0x42480000;
  uStack_84 = 0x42c80000;
  FUN_006814d0(&local_90);
  FUN_006c02f0();
  local_1e4[0] = juce::DrawablePath::vftable;
  local_94 = 0;
  FUN_006842b0();
  local_3c = local_14;
  local_38 = 0;
  local_34 = (undefined4 *)0x0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_20 = 0x3f800000;
  local_1c = 0;
  local_8._0_1_ = 0x1f;
  uVar2 = FUN_006bf6b0();
  local_8._0_1_ = 0x20;
  FUN_006bffb0(local_114,uVar2);
  FUN_004ab120();
  local_8 = CONCAT31(local_8._1_3_,0x1e);
  if (local_34 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_34 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_34)();
    }
  }
  iVar1 = local_38;
  if (local_38 != 0) {
    FID_conflict__free(*(void **)(local_38 + 0x14));
    FUN_004bfe14(iVar1,0x20);
  }
  iVar1 = local_74;
  if (local_150 < local_74) {
    FUN_00409cf0();
  }
  local_14c = iVar1;
  local_138 = local_60;
  local_148 = local_70;
  uStack_144 = uStack_6c;
  uStack_140 = uStack_68;
  uStack_13c = uStack_64;
  if (iVar1 != 0) {
    FUN_004c2c30(local_154,local_7c);
  }
  FUN_006bfb60();
  FUN_006c7aa0(local_1e4,0,uVar5);
  iVar1 = local_94;
  local_1e4[0] = juce::DrawablePath::vftable;
  if (local_94 != 0) {
    FUN_00407640();
    FUN_004bfe14(iVar1);
  }
  FUN_006c0110();
  local_8 = CONCAT31(local_8._1_3_,0x18);
  FID_conflict__free(local_7c);
  FUN_006b5ac0();
  ExceptionList = local_10;
  return;
}

