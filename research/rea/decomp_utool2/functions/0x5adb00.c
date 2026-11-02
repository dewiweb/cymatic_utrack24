// rea decompile_all
// name: FUN_005adb00
// address: 0x5adb00
// body: available
// range: 0x5adb00-0x5adfba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005adb00(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  int *piVar6;
  void *local_38 [9];
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00718394;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *in_ECX = PanelBase::vftable;
  FUN_006e0f90(extraout_ECX);
  puVar5 = in_ECX + 0x1c;
  *puVar5 = juce::Button::Listener::vftable;
  in_ECX[0x1d] = juce::ComponentListener::vftable;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  *in_ECX = PanelSupportComponent::vftable;
  *puVar5 = PanelSupportComponent::vftable;
  in_ECX[0x1d] = PanelSupportComponent::vftable;
  FUN_004f2860(in_ECX);
  local_8._0_1_ = 4;
  local_14 = in_ECX + 0xe2;
  FUN_006e3660(&PTR_DAT_00c7ed68);
  in_ECX[0xe2] = PanelSupportComponent::MyButton::vftable;
  in_ECX[0xfe] = PanelSupportComponent::MyButton::vftable;
  local_8._0_1_ = 5;
  local_14 = in_ECX + 0x11a;
  FUN_006e3660(&PTR_DAT_00c7ed68);
  in_ECX[0x11a] = PanelSupportComponent::MyButton::vftable;
  in_ECX[0x136] = PanelSupportComponent::MyButton::vftable;
  local_8._0_1_ = 6;
  local_14 = in_ECX + 0x152;
  FUN_006e3660(&PTR_DAT_00c7ed68);
  in_ECX[0x152] = PanelSupportComponent::MyButton::vftable;
  in_ECX[0x16e] = PanelSupportComponent::MyButton::vftable;
  local_8._0_1_ = 7;
  local_14 = in_ECX + 0x18a;
  FUN_006e3660(&PTR_DAT_00c7ed68);
  in_ECX[0x18a] = PanelSupportComponent::MyButton::vftable;
  in_ECX[0x1a6] = PanelSupportComponent::MyButton::vftable;
  local_8._0_1_ = 8;
  local_14 = in_ECX + 0x1c2;
  FUN_006e3660(&PTR_DAT_00c7ed68);
  in_ECX[0x1c2] = PanelSupportComponent::MyButton::vftable;
  in_ECX[0x1de] = PanelSupportComponent::MyButton::vftable;
  in_ECX[0x1fa] = 0;
  in_ECX[0x1fb] = 0;
  in_ECX[0x1fc] = 0;
  in_ECX[0x1fd] = 0;
  in_ECX[0x1fe] = 0;
  in_ECX[0x1ff] = 0;
  in_ECX[0x200] = 0;
  *(undefined1 *)(in_ECX + 0x201) = 1;
  local_8._0_1_ = 10;
  FUN_005aced0();
  local_8._0_1_ = 0xb;
  FUN_0045c990("Open the cymatic audio website");
  local_8._0_1_ = 0xc;
  FUN_006e9f90(&local_14);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  piVar6 = local_14 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (puVar5 != (undefined4 *)0x0) {
    FUN_004097d0(puVar5);
  }
  (**(code **)(in_ECX[0xe2] + 0x28))(1);
  FUN_006e5050(in_ECX + 0xe2,0xffffffff);
  FUN_0045c990("Open the User Manual");
  local_8._0_1_ = 0xd;
  FUN_006e9f90(&local_14);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  piVar6 = local_14 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (puVar5 != (undefined4 *)0x0) {
    FUN_004097d0(puVar5);
  }
  (**(code **)(in_ECX[0x11a] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x11a,0xffffffff);
  FUN_0045c990("Need help?\nGo to the forum");
  local_8._0_1_ = 0xe;
  FUN_006e9f90(&local_14);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  piVar6 = local_14 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (puVar5 != (undefined4 *)0x0) {
    FUN_004097d0(puVar5);
  }
  (**(code **)(in_ECX[0x152] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x152,0xffffffff);
  FUN_0045c990("Check for driver and firmware update");
  local_8._0_1_ = 0xf;
  FUN_006e9f90(&local_14);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  piVar6 = local_14 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (puVar5 != (undefined4 *)0x0) {
    FUN_004097d0(puVar5);
  }
  (**(code **)(in_ECX[0x18a] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x18a,0xffffffff);
  (**(code **)(in_ECX[0x202] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x202,0xffffffff);
  (**(code **)(in_ECX[0x1e] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x1e,0xffffffff);
  FUN_0045c990("Generate a Diagnostic Report");
  local_8._0_1_ = 0x10;
  FUN_006e9f90(&local_14);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  piVar6 = local_14 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (puVar5 != (undefined4 *)0x0) {
    FUN_004097d0(puVar5);
  }
  (**(code **)(in_ECX[0x1c2] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x1c2,0xffffffff);
  puVar5 = (undefined4 *)FUN_00562240(local_38,2,1);
  uVar2 = in_ECX[0x1fa];
  in_ECX[0x1fa] = *puVar5;
  *puVar5 = uVar2;
  in_ECX[0x1fb] = puVar5[1];
  in_ECX[0x1fc] = puVar5[2];
  uVar2 = puVar5[4];
  uVar3 = puVar5[5];
  uVar4 = puVar5[6];
  in_ECX[0x1fd] = puVar5[3];
  in_ECX[0x1fe] = uVar2;
  in_ECX[0x1ff] = uVar3;
  in_ECX[0x200] = uVar4;
  *(undefined1 *)(in_ECX + 0x201) = *(undefined1 *)(puVar5 + 7);
  FID_conflict__free(local_38[0]);
  if (in_ECX + 0x1d != (undefined4 *)0x0) {
    FUN_004097d0(in_ECX + 0x1d);
  }
  ExceptionList = local_10;
  return;
}

