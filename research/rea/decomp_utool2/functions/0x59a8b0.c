// rea decompile_all
// name: FUN_0059a8b0
// address: 0x59a8b0
// body: available
// range: 0x59a8b0-0x59abab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0059a8b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007157b4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  local_8 = 0;
  *in_ECX = PanelBase::vftable;
  FUN_006e0f90();
  puVar4 = in_ECX + 0x1c;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  *puVar4 = GlobalNotifierListener::vftable;
  local_1c = puVar4;
  local_18 = puVar4;
  iVar2 = FUN_00560890();
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x18));
  FUN_00447220();
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x18));
  in_ECX[0x1d] = juce::ChangeListener::vftable;
  puVar1 = in_ECX + 0x1e;
  *puVar1 = TargetSelector::Listener::vftable;
  *in_ECX = PanelExternalEditComponent::vftable;
  *puVar4 = PanelExternalEditComponent::vftable;
  in_ECX[0x1d] = PanelExternalEditComponent::vftable;
  *puVar1 = PanelExternalEditComponent::vftable;
  FUN_00553380();
  local_8._0_1_ = 6;
  FUN_0045c990("Target Explorer");
  FUN_004f99d0(10);
  local_8._0_1_ = 7;
  FUN_0045c990("Details");
  FUN_004f99d0(10);
  local_8._0_1_ = 8;
  FUN_004f0600();
  local_8._0_1_ = 9;
  FUN_0045c990();
  local_8._0_1_ = 10;
  FUN_0045c990();
  local_8._0_1_ = 0xb;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  FUN_005080b0(&local_14,&local_18,&local_1c,puVar1);
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = local_18 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8._0_1_ = 0x10;
  piVar3 = local_1c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0052df40();
  local_8 = CONCAT31(local_8._1_3_,0x11);
  FUN_006e9790(in_ECX[0x1da],in_ECX[0x1db]);
  FUN_004f9700(in_ECX + 0x1d6,0,0,0x403e0000);
  FUN_004f9700(in_ECX + 0x4e4,0,0,0xbff00000);
  (**(code **)(in_ECX[0x37] + 0x28))();
  FUN_006e5050(in_ECX + 0x37);
  FUN_004f9700(in_ECX + 0x96,0,0,0xbff00000,0);
  (**(code **)(in_ECX[0x66] + 0x28))();
  FUN_006e5050(in_ECX + 0x66,0xffffffff);
  in_ECX[0xb3] = in_ECX + 0x4e4;
  in_ECX[0x51c] = in_ECX + 0x96;
  if (in_ECX + 0x1d != (undefined4 *)0x0) {
    FUN_004097d0(in_ECX + 0x1d);
  }
  in_ECX[0x519] = 0xff;
  in_ECX[0x51a] = 0xc;
  in_ECX[0x51b] = 5;
  FUN_0052ddf0();
  ExceptionList = local_10;
  return in_ECX;
}

