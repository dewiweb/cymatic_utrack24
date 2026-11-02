// rea decompile_all
// name: FUN_005a6df0
// address: 0x5a6df0
// body: available
// range: 0x5a6df0-0x5a740e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_005a6df0(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int *_Memory;
  undefined4 *puVar6;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071790e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  local_8 = 0;
  *in_ECX = PanelBase::vftable;
  FUN_006e0f90();
  puVar6 = in_ECX + 0x1c;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  *puVar6 = GlobalNotifierListener::vftable;
  local_14 = puVar6;
  iVar3 = FUN_00560890();
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x18));
  FUN_00447220();
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x18));
  in_ECX[0x1d] = ImportHeadComponent::Listener::vftable;
  in_ECX[0x1e] = juce::Button::Listener::vftable;
  in_ECX[0x1f] = juce::ChangeListener::vftable;
  in_ECX[0x20] = TargetExplorer::Listener::vftable;
  in_ECX[0x21] = ImportTask::Listener::vftable;
  in_ECX[0x22] = PushButton::Listener::vftable;
  local_8._0_1_ = 9;
  *in_ECX = PanelImportComponent::vftable;
  *puVar6 = PanelImportComponent::vftable;
  in_ECX[0x1d] = PanelImportComponent::vftable;
  in_ECX[0x1e] = PanelImportComponent::vftable;
  in_ECX[0x1f] = PanelImportComponent::vftable;
  in_ECX[0x20] = PanelImportComponent::vftable;
  in_ECX[0x21] = PanelImportComponent::vftable;
  in_ECX[0x22] = PanelImportComponent::vftable;
  *(undefined1 *)(in_ECX + 0x23) = 1;
  FUN_005a1a20();
  local_8._0_1_ = 10;
  FUN_0045c990("Source Explorer");
  FUN_004f99d0(10);
  local_8._0_1_ = 0xb;
  FUN_0045c990("Details");
  FUN_004f99d0(10);
  FUN_00553380();
  local_8._0_1_ = 0xd;
  FUN_0052df40();
  local_8._0_1_ = 0xe;
  FUN_005a4ea0();
  local_8._0_1_ = 0xf;
  FUN_004f83b0();
  local_14 = (undefined4 *)&DAT_00bfe12c;
  local_8._0_1_ = 0x11;
  FUN_006e3660();
  in_ECX[0xa39] = juce::TextButton::vftable;
  in_ECX[0xa55] = juce::TextButton::vftable;
  local_14 = (undefined4 *)&DAT_00bfe12c;
  local_8._0_1_ = 0x13;
  FUN_006e3660();
  in_ECX[0xa71] = juce::ToggleButton::vftable;
  in_ECX[0xa8d] = juce::ToggleButton::vftable;
  *(undefined1 *)((int)in_ECX + 0x2a9d) = 1;
  piVar1 = in_ECX + 0xaa9;
  local_14 = (undefined4 *)&DAT_00bfe12c;
  local_8._0_1_ = 0x15;
  FUN_006e3660();
  *piVar1 = (int)juce::TextButton::vftable;
  in_ECX[0xac5] = juce::TextButton::vftable;
  local_14 = (undefined4 *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x18);
  FUN_006e8b40();
  piVar5 = local_14 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  in_ECX[0xb15] = 0;
  in_ECX[0xb16] = 0;
  in_ECX[0xb17] = 0;
  in_ECX[0xb18] = 0;
  in_ECX[0xb19] = 0;
  in_ECX[0xb1a] = 0;
  in_ECX[0xb1b] = 0;
  in_ECX[0xb1c] = 0;
  local_8._0_1_ = 0x1e;
  (**(code **)(in_ECX[0x24] + 0x28))();
  FUN_006e5050(in_ECX + 0x24);
  FUN_0045c990();
  local_8._0_1_ = 0x1f;
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0x1e);
  piVar5 = local_14 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX != (undefined4 *)0xffffff88) {
    FUN_004097d0();
  }
  if ((*(byte *)((int)in_ECX + 0x294d) & 0x10) == 0) {
    *(byte *)((int)in_ECX + 0x294d) = *(byte *)((int)in_ECX + 0x294d) | 0x10;
    iVar3 = in_ECX[0xa3c];
    if (iVar3 != 0) {
      if ((*(byte *)(iVar3 + 0x69) & 0x10) != 0) goto LAB_005a715d;
      if (*(int *)(iVar3 + 0xc) != 0) {
        cVar2 = FUN_006e6320();
        if (cVar2 == '\0') goto LAB_005a715d;
      }
    }
    FUN_006cc240();
  }
LAB_005a715d:
  uVar4 = FUN_006c65e0();
  FUN_006e9790(in_ECX[0xa3d],in_ECX[0xa3e],uVar4);
  FUN_004f9700(in_ECX + 0xa39,0,0,0x40340000,0);
  in_ECX[0x8a9] = in_ECX + 0x20;
  FUN_004f9860(in_ECX + 0x876);
  (**(code **)(in_ECX[0x800] + 0x28))();
  FUN_006e5050(in_ECX + 0x800,0xffffffff);
  FUN_004f9860(in_ECX + 0x8b4,0);
  (**(code **)(in_ECX[0x82f] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x82f,0xffffffff);
  FUN_0045c990("Import to Project Library");
  local_8._0_1_ = 0x20;
  piVar5 = in_ECX + 0xa71;
  FUN_006e54f0(&local_14);
  local_8 = CONCAT31(local_8._1_3_,0x1e);
  _Memory = local_14 + -2;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar3 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  (**(code **)(in_ECX[0xa8d] + 8))(&DAT_00c8a764);
  if (in_ECX + 0x1e != (undefined4 *)0x0) {
    FUN_004097d0(in_ECX + 0x1e);
  }
  FUN_006e9790(in_ECX[0xa75],in_ECX[0xa76],100,0x1e);
  iVar3 = FUN_006e9580();
  (**(code **)(*(int *)(iVar3 + 4) + 0x18))(piVar5);
  (**(code **)(*piVar5 + 0x28))(1);
  FUN_006e5050(piVar5,0xffffffff);
  FUN_0045c990("Import");
  local_8._0_1_ = 0x21;
  FUN_006e54f0(&local_14);
  local_8 = CONCAT31(local_8._1_3_,0x1e);
  piVar5 = local_14 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX + 0x1e != (undefined4 *)0x0) {
    FUN_004097d0(in_ECX + 0x1e);
  }
  if ((*(byte *)((int)in_ECX + 0x2b0d) & 0x10) == 0) {
    *(byte *)((int)in_ECX + 0x2b0d) = *(byte *)((int)in_ECX + 0x2b0d) | 0x10;
    iVar3 = in_ECX[0xaac];
    if (iVar3 != 0) {
      if ((*(byte *)(iVar3 + 0x69) & 0x10) != 0) goto LAB_005a7329;
      if (*(int *)(iVar3 + 0xc) != 0) {
        cVar2 = FUN_006e6320();
        if (cVar2 == '\0') goto LAB_005a7329;
      }
    }
    FUN_006cc240();
  }
LAB_005a7329:
  (**(code **)(*piVar1 + 0x28))(1);
  FUN_006e5050(piVar1,0xffffffff);
  FUN_006e6170(0x1000281,DAT_00c7ebb0);
  (**(code **)(in_ECX[0xae1] + 0x28))(1);
  FUN_006e5050(in_ECX + 0xae1,0xffffffff);
  in_ECX[0xa29] = 0x14;
  if (in_ECX + 0x22 != (undefined4 *)0x0) {
    FUN_004097d0(in_ECX + 0x22);
  }
  (**(code **)(in_ECX[0x9ec] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x9ec,0xffffffff);
  if (in_ECX + 0x1f != (undefined4 *)0x0) {
    FUN_004097d0(in_ECX + 0x1f);
  }
  in_ECX[0x8a9] = in_ECX + 0x20;
  in_ECX[0x8ab] = 0xff;
  in_ECX[0x8ac] = 1;
  in_ECX[0x8ad] = 5;
  FUN_0052ddf0();
  FUN_006e5380(1,1);
  ExceptionList = local_10;
  return in_ECX;
}

