// rea decompile_all
// name: FUN_005966e0
// address: 0x5966e0
// body: available
// range: 0x5966e0-0x597000 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00596e66) */
/* WARNING: Removing unreachable block (ram,0x00596e72) */
/* WARNING: Removing unreachable block (ram,0x00596dce) */
/* WARNING: Removing unreachable block (ram,0x00596dda) */
/* WARNING: Removing unreachable block (ram,0x00596c9e) */
/* WARNING: Removing unreachable block (ram,0x00596caa) */
/* WARNING: Removing unreachable block (ram,0x00596a8e) */
/* WARNING: Removing unreachable block (ram,0x00596a9a) */
/* WARNING: Removing unreachable block (ram,0x0059693a) */
/* WARNING: Removing unreachable block (ram,0x00596945) */
/* WARNING: Removing unreachable block (ram,0x00596be9) */
/* WARNING: Removing unreachable block (ram,0x00596bf5) */
/* WARNING: Removing unreachable block (ram,0x00596d72) */
/* WARNING: Removing unreachable block (ram,0x00596d7e) */
/* WARNING: Removing unreachable block (ram,0x00596e1a) */
/* WARNING: Removing unreachable block (ram,0x00596e26) */
/* WARNING: Removing unreachable block (ram,0x00596eb2) */
/* WARNING: Removing unreachable block (ram,0x00596ebe) */

undefined4 * FUN_005966e0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_ECX;
  int *extraout_EDX;
  undefined4 *puStack_54;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007150dc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  local_8 = 0;
  *in_ECX = PanelBase::vftable;
  FUN_006e0f90();
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  in_ECX[0x1c] = GlobalNotifierListener::vftable;
  iVar2 = FUN_00560890();
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x18));
  FUN_00447220();
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x18));
  in_ECX[0x1d] = ExportHeadComponent::Listener::vftable;
  in_ECX[0x1e] = ProjectExplorer::Listener::vftable;
  in_ECX[0x1f] = juce::Button::Listener::vftable;
  in_ECX[0x20] = juce::ChangeListener::vftable;
  in_ECX[0x21] = ExportTask::Listener::vftable;
  in_ECX[0x22] = PushButton::Listener::vftable;
  in_ECX[0x23] = juce::ComboBox::Listener::vftable;
  local_8._0_1_ = 10;
  *in_ECX = PanelExportComponent::vftable;
  in_ECX[0x1c] = PanelExportComponent::vftable;
  in_ECX[0x1d] = PanelExportComponent::vftable;
  in_ECX[0x1e] = PanelExportComponent::vftable;
  in_ECX[0x1f] = PanelExportComponent::vftable;
  in_ECX[0x20] = PanelExportComponent::vftable;
  in_ECX[0x21] = PanelExportComponent::vftable;
  in_ECX[0x22] = PanelExportComponent::vftable;
  in_ECX[0x23] = PanelExportComponent::vftable;
  *(undefined1 *)(in_ECX + 0x24) = 1;
  FUN_00592800();
  local_8._0_1_ = 0xb;
  FUN_0045c990();
  FUN_004f99d0();
  local_8._0_1_ = 0xc;
  FUN_0045c990();
  FUN_004f99d0();
  FUN_00553380();
  local_8._0_1_ = 0xe;
  FUN_005192f0();
  local_8._0_1_ = 0xf;
  FUN_0052df40();
  local_8._0_1_ = 0x11;
  FUN_006e3660();
  in_ECX[0x72a] = juce::TextButton::vftable;
  in_ECX[0x746] = juce::TextButton::vftable;
  local_8._0_1_ = 0x13;
  FUN_006e3660();
  in_ECX[0x762] = juce::TextButton::vftable;
  in_ECX[0x77e] = juce::TextButton::vftable;
  local_8._0_1_ = 0x15;
  FUN_006e3660();
  in_ECX[0x79a] = juce::TextButton::vftable;
  in_ECX[0x7b6] = juce::TextButton::vftable;
  local_8._0_1_ = 0x18;
  FUN_006e8b40();
  local_8._0_1_ = 0x1c;
  FUN_006e8840();
  local_8._0_1_ = 0x1e;
  FUN_00593800();
  local_8._0_1_ = 0x1f;
  FUN_004f83b0();
  local_8._0_1_ = 0x20;
  FUN_004f83b0();
  in_ECX[0x8f8] = 0;
  local_8._0_1_ = 0x22;
  FUN_00599d90();
  in_ECX[0x9c4] = &DAT_00bfe12c;
  in_ECX[0x9c5] = 1;
  in_ECX[0x9c6] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x9c7));
  in_ECX[0x9cd] = 0;
  in_ECX[0x9ce] = 0;
  in_ECX[0x9cf] = 0;
  in_ECX[0x9d0] = 0;
  in_ECX[0x9d1] = 0;
  in_ECX[0x9d2] = 0;
  in_ECX[0x9d3] = 0;
  in_ECX[0x9d4] = 0;
  in_ECX[0x9d5] = 0;
  local_8._0_1_ = 0x28;
  (**(code **)(in_ECX[0x26] + 0x28))();
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x29;
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0x28);
  if (in_ECX != (undefined4 *)0xffffff84) {
    FUN_004097d0();
  }
  if ((*(byte *)((int)in_ECX + 0x1d11) & 0x10) == 0) {
    *(byte *)((int)in_ECX + 0x1d11) = *(byte *)((int)in_ECX + 0x1d11) | 0x10;
    iVar2 = in_ECX[0x72d];
    if ((iVar2 == 0) ||
       (((*(byte *)(iVar2 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar2 + 0xc) == 0 || (cVar1 = FUN_006e6320(), cVar1 != '\0')))))) {
      FUN_006cc240();
    }
  }
  FUN_006c65e0();
  FUN_006e9790();
  FUN_004f9700();
  in_ECX[0x6c1] = in_ECX + 0x1e;
  FUN_004f9860();
  (**(code **)(in_ECX[0x616] + 0x28))();
  FUN_006e5050();
  FUN_004f9860();
  (**(code **)(in_ECX[0x645] + 0x28))();
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x2a;
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0x28);
  if (in_ECX != (undefined4 *)0xffffff84) {
    FUN_004097d0();
  }
  piVar3 = in_ECX + 0x762;
  if ((*(byte *)((int)in_ECX + 0x1df1) & 0x10) == 0) {
    *(byte *)((int)in_ECX + 0x1df1) = *(byte *)((int)in_ECX + 0x1df1) | 0x10;
    iVar2 = in_ECX[0x765];
    if ((iVar2 == 0) ||
       (((*(byte *)(iVar2 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar2 + 0xc) == 0 ||
         (cVar1 = FUN_006e6320(), piVar3 = extraout_EDX, cVar1 != '\0')))))) {
      FUN_006cc240();
      piVar3 = in_ECX + 0x762;
    }
  }
  (**(code **)(*piVar3 + 0x28))();
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x2b;
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0x28);
  if (in_ECX != (undefined4 *)0xffffff84) {
    FUN_004097d0();
  }
  if ((*(byte *)((int)in_ECX + 0x1ed1) & 0x10) == 0) {
    *(byte *)((int)in_ECX + 0x1ed1) = *(byte *)((int)in_ECX + 0x1ed1) | 0x10;
    iVar2 = in_ECX[0x79d];
    if ((iVar2 == 0) ||
       (((*(byte *)(iVar2 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar2 + 0xc) == 0 || (cVar1 = FUN_006e6320(), cVar1 != '\0')))))) {
      FUN_006cc240();
    }
  }
  (**(code **)(in_ECX[0x79a] + 0x28))();
  FUN_006e5050();
  if (in_ECX[0x7f9] != 0x22) {
    in_ECX[0x7f9] = 0x22;
    FUN_006e6400(&puStack_54);
    FUN_006ce9f0(1);
  }
  FUN_0045c990();
  local_8._0_1_ = 0x2c;
  FUN_006e4900();
  local_8._0_1_ = 0x28;
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x2d;
  FUN_006e8760();
  local_8._0_1_ = 0x28;
  FUN_0045c990();
  local_8._0_1_ = 0x2e;
  FUN_006e8760();
  local_8._0_1_ = 0x28;
  FUN_0045c990();
  local_8._0_1_ = 0x2f;
  FUN_006e8760();
  local_8._0_1_ = 0x28;
  FUN_0045c990();
  local_8._0_1_ = 0x30;
  FUN_006e8760();
  local_8 = CONCAT31(local_8._1_3_,0x28);
  FUN_006e83a0();
  if (in_ECX != (undefined4 *)0xffffff74) {
    FUN_004097d0();
  }
  FUN_006e5050();
  FUN_006e5050();
  in_ECX[0x89b] = 0x14;
  if (in_ECX != (undefined4 *)0xffffff78) {
    FUN_004097d0();
  }
  (**(code **)(in_ECX[0x85e] + 0x28))();
  puStack_54 = (undefined4 *)0x596f43;
  FUN_006e5050();
  in_ECX[0x8e8] = 0x14;
  if (in_ECX != (undefined4 *)0xffffff78) {
    FUN_004097d0();
  }
  (**(code **)(in_ECX[0x8ab] + 0x28))();
  puStack_54 = in_ECX + 0x8ab;
  FUN_006e5050();
  if (in_ECX != (undefined4 *)0xffffff80) {
    puStack_54 = (undefined4 *)0x596f90;
    FUN_004097d0();
  }
  in_ECX[0x722] = 0xff;
  in_ECX[0x723] = 0x18;
  in_ECX[0x724] = 5;
  FUN_0052ddf0();
  FUN_005b17a0();
  local_8 = CONCAT31(local_8._1_3_,0x31);
  FUN_00632db0();
  piVar3 = (int *)(local_18 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      puStack_54 = (undefined4 *)0x596fea;
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}

