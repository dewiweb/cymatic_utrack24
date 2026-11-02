// rea decompile_all
// name: FUN_005350d0
// address: 0x5350d0
// body: available
// range: 0x5350d0-0x535549 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005350d0(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070d421;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[0x1c] = juce::SettableTooltipClient::vftable;
  in_ECX[0x1d] = &DAT_00bfe12c;
  in_ECX[0x1e] = juce::Button::Listener::vftable;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  *in_ECX = ViewPort_TargetDeviceSelection::vftable;
  in_ECX[0x1c] = ViewPort_TargetDeviceSelection::vftable;
  in_ECX[0x1e] = ViewPort_TargetDeviceSelection::vftable;
  FUN_0045c990("Target Device:");
  local_8._0_1_ = 2;
  piVar4 = in_ECX + 0x20;
  local_14 = piVar4;
  operator_new(0x28);
  iVar3 = FUN_00468990();
  *piVar4 = iVar3;
  if (iVar3 != 0) {
    LOCK();
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    UNLOCK();
  }
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 9;
  local_14 = (int *)&DAT_00bfe12c;
  local_8._0_1_ = 5;
  FUN_006e8840(&local_14);
  local_14 = (int *)&DAT_00bfe12c;
  local_8._0_1_ = 8;
  FUN_006e3660(&local_14);
  in_ECX[0x5a] = juce::TextButton::vftable;
  in_ECX[0x76] = juce::TextButton::vftable;
  local_8 = CONCAT31(local_8._1_3_,9);
  operator_new(0x28);
  iVar3 = FUN_00468a40(0);
  if (iVar3 != 0) {
    LOCK();
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    UNLOCK();
  }
  puVar1 = (undefined4 *)*piVar4;
  *piVar4 = iVar3;
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar1 + 1;
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  if (param_4 != 0) {
    FUN_004097d0(param_4);
  }
  piVar4 = (int *)(*param_3 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  LOCK();
  iVar3 = in_ECX[0x29];
  in_ECX[0x29] = *param_3;
  UNLOCK();
  piVar4 = (int *)(iVar3 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_0045c990("Unknown");
  local_8._0_1_ = 10;
  FUN_006e8760(&param_4,0xffffffff);
  local_8._0_1_ = 9;
  piVar4 = (int *)(param_4 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  cVar2 = FUN_005b2750();
  if (cVar2 != '\0') {
    uVar5 = FUN_005bdda0();
    local_8._0_1_ = 0xb;
    FUN_006e8760(uVar5,3);
    local_8._0_1_ = 9;
    piVar4 = (int *)(param_4 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  cVar2 = FUN_005b2750();
  if (cVar2 != '\0') {
    uVar5 = FUN_005bdda0();
    local_8._0_1_ = 0xc;
    FUN_006e8760(uVar5,4);
    local_8._0_1_ = 9;
    piVar4 = (int *)(param_4 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  cVar2 = FUN_005b2750();
  if (cVar2 != '\0') {
    uVar5 = FUN_005bdda0();
    local_8._0_1_ = 0xd;
    FUN_006e8760(uVar5,1);
    local_8._0_1_ = 9;
    piVar4 = (int *)(param_4 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  cVar2 = FUN_005b2750();
  if (cVar2 != '\0') {
    uVar5 = FUN_005bdda0();
    local_8._0_1_ = 0xe;
    FUN_006e8760(uVar5,2);
    local_8._0_1_ = 9;
    piVar4 = (int *)(param_4 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  (**(code **)(in_ECX[0x27] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x27,0xffffffff);
  FUN_0045c990("Reset");
  local_8._0_1_ = 0xf;
  FUN_006e54f0(&param_4);
  local_8._0_1_ = 9;
  piVar4 = (int *)(param_4 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_0045c990("Reset the value provided by the source file.");
  local_8._0_1_ = 0x10;
  (**(code **)(in_ECX[0x76] + 8))(&param_4);
  local_8 = CONCAT31(local_8._1_3_,9);
  piVar4 = (int *)(param_4 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if (in_ECX + 0x1e != (undefined4 *)0x0) {
    FUN_004097d0(in_ECX + 0x1e);
  }
  (**(code **)(in_ECX[0x5a] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x5a,0xffffffff);
  FUN_006e9790(in_ECX[4],in_ECX[5],100,0x14);
  in_ECX[0x92] = param_1;
  if (param_2 != 0) {
    cVar2 = FUN_005b2750();
    if (cVar2 != '\0') {
      uVar5 = 0;
      goto LAB_0053552d;
    }
  }
  uVar5 = 3;
  param_2 = -1;
LAB_0053552d:
  FUN_006e83a0(param_2,uVar5);
  ExceptionList = local_10;
  return;
}

