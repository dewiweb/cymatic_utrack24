// rea decompile_all
// name: FUN_0052c4c0
// address: 0x52c4c0
// body: available
// range: 0x52c4c0-0x52cbcc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0052c904) */
/* WARNING: Removing unreachable block (ram,0x0052c910) */

void FUN_0052c4c0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c6ce;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004eb7e0();
  in_ECX[0x4c] = juce::TableListBoxModel::vftable;
  in_ECX[0x4d] = juce::FileDragAndDropTarget::vftable;
  in_ECX[0x4e] = juce::Button::Listener::vftable;
  *in_ECX = PopupEditorStereoSong::vftable;
  in_ECX[0x1c] = PopupEditorStereoSong::vftable;
  in_ECX[0x4c] = PopupEditorStereoSong::vftable;
  in_ECX[0x4d] = PopupEditorStereoSong::vftable;
  in_ECX[0x4e] = PopupEditorStereoSong::vftable;
  iVar1 = *param_1;
  in_ECX[0x4f] = iVar1;
  piVar2 = (int *)(iVar1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  in_ECX[0x50] = param_2;
  param_2 = (undefined4 *)&DAT_00bfe12c;
  local_8 = 6;
  FUN_006e8b40();
  piVar2 = (int *)((int)param_2 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  param_2 = (undefined4 *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0xb);
  FUN_006e8b40();
  piVar2 = (int *)((int)param_2 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  param_2 = (undefined4 *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x10);
  FUN_006e8b40();
  piVar2 = (int *)((int)param_2 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  param_2 = (undefined4 *)&DAT_00bfe12c;
  local_8._0_1_ = 0x14;
  FUN_006e3660();
  in_ECX[0xed] = juce::TextButton::vftable;
  in_ECX[0x109] = juce::TextButton::vftable;
  param_2 = (undefined4 *)&DAT_00bfe12c;
  local_8._0_1_ = 0x16;
  FUN_006df330();
  in_ECX[0x156] = 0;
  in_ECX[0x157] = 0;
  in_ECX[0x158] = 0;
  local_8._0_1_ = 0x19;
  FUN_0045c990();
  local_8._0_1_ = 0x1a;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x19);
  piVar2 = (int *)((int)param_2 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  if (in_ECX[0x78] != 0x24) {
    in_ECX[0x78] = 0x24;
    FUN_006e6400();
    FUN_006ce9f0();
  }
  operator_new(0x28);
  param_2 = (undefined4 *)FUN_00468a40();
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    param_2[1] = param_2[1] + 1;
    UNLOCK();
  }
  local_8._0_1_ = 0x1b;
  FUN_006e4890();
  local_8 = CONCAT31(local_8._1_3_,0x19);
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar2 = param_2 + 1;
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_2)();
    }
  }
  FUN_006842b0();
  FUN_006e6170();
  (**(code **)(in_ECX[0x51] + 0x28))();
  FUN_006e5050();
  if (in_ECX[0xac] != 0x24) {
    in_ECX[0xac] = 0x24;
    FUN_006e6400(&stack0xffffffc0);
    FUN_006ce9f0(1);
  }
  operator_new(0x28);
  param_2 = (undefined4 *)FUN_00468a40();
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    param_2[1] = param_2[1] + 1;
    UNLOCK();
  }
  local_8._0_1_ = 0x1c;
  FUN_006e4890();
  local_8._0_1_ = 0x19;
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar2 = param_2 + 1;
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_2)();
    }
  }
  FUN_006842b0();
  FUN_006e6170();
  FUN_006e5050();
  FUN_005b2a40();
  local_8._0_1_ = 0x1d;
  FUN_005b4070();
  local_8._0_1_ = 0x1e;
  FUN_00637690();
  FUN_006377c0();
  local_8 = CONCAT31(local_8._1_3_,0x1f);
  FUN_006e4900();
  piVar2 = param_2 + -2;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  local_8._0_1_ = 0x19;
  piVar2 = (int *)(local_18 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  (**(code **)(in_ECX[0xb9] + 0x28))();
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x20;
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0x19);
  piVar2 = param_1 + -2;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_006c65e0();
  uVar3 = 0x52c9c4;
  FUN_006e9790(in_ECX[0xf1]);
  if (in_ECX != (undefined4 *)0xfffffec8) {
    FUN_004097d0();
  }
  (**(code **)(in_ECX[0xed] + 0x28))();
  uVar4 = 0x52c9ed;
  FUN_006e5050();
  if ((undefined4 *)in_ECX[0x153] != in_ECX + 0x4c) {
    in_ECX[0x153] = in_ECX + 0x4c;
    FUN_006e7e60();
  }
  FUN_0045c990();
  local_8._0_1_ = 0x21;
  FUN_006df470(&param_1,1,400,uVar3,uVar4);
  local_8._0_1_ = 0x19;
  piVar2 = param_1 + -2;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990();
  local_8._0_1_ = 0x22;
  FUN_006df470(&param_1,2,200,uVar3,uVar4);
  local_8._0_1_ = 0x19;
  piVar2 = param_1 + -2;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_006df410();
  *(undefined1 *)(in_ECX + 0x14c) = 1;
  (**(code **)(in_ECX[0x125] + 0x28))();
  FUN_006e5050(in_ECX + 0x125);
  FUN_0045c990();
  local_8._0_1_ = 0x23;
  FUN_004eabf0(1,&param_1);
  local_8._0_1_ = 0x19;
  piVar2 = param_1 + -2;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990();
  local_8._0_1_ = 0x24;
  FUN_004eabf0(0,&param_1);
  local_8 = CONCAT31(local_8._1_3_,0x19);
  piVar2 = param_1 + -2;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_004ea5c0(1);
  FUN_004ea730();
  FUN_004ea0c0();
  FUN_006e9910();
  ExceptionList = local_10;
  return;
}

