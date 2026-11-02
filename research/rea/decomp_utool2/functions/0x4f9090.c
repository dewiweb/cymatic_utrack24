// rea decompile_all
// name: FUN_004f9090
// address: 0x4f9090
// body: available
// range: 0x4f9090-0x4f93b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004f9090(int *param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  int *_Memory;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_ECX;
  int extraout_ECX;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007066f1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  *(undefined ***)(extraout_ECX + 0x70) = PnPDetector::Listener::vftable;
  *(undefined ***)(extraout_ECX + 0x74) = juce::ComboBox::Listener::vftable;
  puVar1 = (undefined4 *)(extraout_ECX + 0x78);
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  *puVar1 = GlobalNotifierListener::vftable;
  local_14 = puVar1;
  iVar4 = FUN_00560890();
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x18));
  FUN_00447220(&local_14);
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x18));
  in_ECX[0x1f] = PushButton::Listener::vftable;
  *in_ECX = ExtDriveSelectorComponent::vftable;
  in_ECX[0x1c] = ExtDriveSelectorComponent::vftable;
  in_ECX[0x1d] = ExtDriveSelectorComponent::vftable;
  *puVar1 = ExtDriveSelectorComponent::vftable;
  in_ECX[0x1f] = ExtDriveSelectorComponent::vftable;
  local_14 = (undefined4 *)&DAT_00bfe12c;
  local_8._0_1_ = 6;
  piVar2 = in_ECX + 0x20;
  FUN_006e8840(&local_14);
  local_8._0_1_ = 8;
  FUN_004f83b0();
  local_8._0_1_ = 9;
  FUN_004f83b0();
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xed));
  in_ECX[0xf3] = param_1;
  *(undefined1 *)(in_ECX + 0xf4) = 0;
  in_ECX[0xf5] = 0;
  in_ECX[0xf6] = 0;
  in_ECX[0xf7] = 0;
  local_8 = CONCAT31(local_8._1_3_,0xc);
  FUN_0045c990("No removable drive");
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  LOCK();
  iVar4 = in_ECX[0x51];
  in_ECX[0x51] = param_1;
  UNLOCK();
  _Memory = (int *)(iVar4 + -8);
  param_1 = piVar5;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar4 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  if (param_1 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(param_1);
    }
  }
  FUN_0045c990("Select removable drive");
  local_8._0_1_ = 0xd;
  FUN_006e2900(&param_1);
  local_8._0_1_ = 0xc;
  piVar5 = param_1 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX + 0x1d != (undefined4 *)0x0) {
    FUN_004097d0(in_ECX + 0x1d);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x28))(1);
    FUN_006e5050(piVar2,0xffffffff);
  }
  if ((char)param_3 == '\0') {
    in_ECX[0x90] = 0x14;
    if (in_ECX + 0x1f != (undefined4 *)0x0) {
      FUN_004097d0(in_ECX + 0x1f);
    }
    (**(code **)(in_ECX[0x53] + 0x28))(1);
    FUN_006e5050(in_ECX + 0x53,0xffffffff);
  }
  if (DAT_00c8a5e8 == 0) {
    param_3 = operator_new(0x34);
    local_8._0_1_ = 0xe;
    DAT_00c8a5e8 = FUN_005b6bb0();
    local_8._0_1_ = 0xc;
  }
  if (in_ECX + 0x1c != (undefined4 *)0x0) {
    FUN_004097d0(in_ECX + 0x1c);
  }
  if (DAT_00c8a5e8 == 0) {
    param_3 = operator_new(0x34);
    local_8._0_1_ = 0x10;
    DAT_00c8a5e8 = FUN_005b6bb0();
    local_8._0_1_ = 0xc;
  }
  iVar3 = DAT_00c8a5e8;
  iVar4 = DAT_00c8a5e8 + 4;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  if (*(int *)(iVar3 + 0xc) == 0) {
    *(undefined4 *)(iVar3 + 8) = 500;
    *(undefined4 *)(iVar3 + 0xc) = 500;
    local_8._0_1_ = 0x11;
    if (DAT_00c8a668 == 0) {
      operator_new(0x54);
      DAT_00c8a668 = FUN_004635f0();
    }
    FUN_00463c00(iVar4);
  }
  else {
    FUN_00463b90();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  ExceptionList = local_10;
  return in_ECX;
}

