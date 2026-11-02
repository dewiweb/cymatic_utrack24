// rea decompile_all
// name: FUN_0051c850
// address: 0x51c850
// body: available
// range: 0x51c850-0x51cbdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051c850(undefined1 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined4 *puVar4;
  undefined1 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00709f83;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (undefined4 *)0x0;
  local_18 = &DAT_00bfe12c;
  local_8 = 0;
  if ((int)param_1 < 9) {
    if (param_1 != (undefined1 *)0x8) {
      if (param_1 == (undefined1 *)0x0) goto LAB_0051cb80;
      if (param_1 != (undefined1 *)0x1) {
        if (param_1 != (undefined1 *)0x4) goto LAB_0051cb80;
        iVar1 = FUN_0051cbe0(4);
        puVar4 = local_14;
        if (iVar1 == 0) {
LAB_0051c8e9:
          param_1 = (undefined1 *)((uint)param_1 & 0xffffff);
        }
        else {
          piVar2 = (int *)FUN_00413340(&local_14);
          puVar4 = (undefined4 *)0x2;
          if (*piVar2 == 0) goto LAB_0051c8e9;
          param_1 = (undefined1 *)CONCAT13(1,param_1._0_3_);
        }
        if (((uint)puVar4 & 2) != 0) {
          FUN_004030d0();
        }
        if (param_1._3_1_ != '\0') {
          FUN_00413340(&local_14);
          FUN_00410ea0(&param_1);
          local_8._0_1_ = 4;
          FUN_0051bf40();
          FUN_005069f0();
          FUN_0040ea50();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_004030d0();
        }
        goto LAB_0051cb80;
      }
      iVar1 = FUN_0051cc30(in_ECX);
      puVar4 = local_14;
      if (iVar1 == 0) {
LAB_0051c976:
        param_1 = (undefined1 *)((uint)param_1 & 0xffffff);
      }
      else {
        piVar2 = (int *)FUN_00413320(&local_14);
        puVar4 = (undefined4 *)0x1;
        if (*piVar2 == 0) goto LAB_0051c976;
        param_1 = (undefined1 *)CONCAT13(1,param_1._0_3_);
      }
      if (((uint)puVar4 & 1) != 0) {
        FUN_004030d0();
      }
      if (param_1._3_1_ != '\0') {
        FUN_00413320(&local_14);
        FUN_00410ea0(&param_1);
        local_8._0_1_ = 2;
        uVar3 = FUN_0051bf40();
        FUN_004fad30(uVar3);
        FUN_0040ea50();
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_004030d0();
      }
      goto LAB_0051cb80;
    }
    iVar1 = FUN_0051cbe0(3);
    puVar4 = local_14;
    if (iVar1 == 0) {
LAB_0051ca0f:
      param_1 = (undefined1 *)((uint)param_1 & 0xffffff);
    }
    else {
      piVar2 = (int *)FUN_00413340(&local_14);
      puVar4 = (undefined4 *)0x4;
      if (*piVar2 == 0) goto LAB_0051ca0f;
      param_1 = (undefined1 *)CONCAT13(1,param_1._0_3_);
    }
    if ((((uint)puVar4 & 4) != 0) && (local_14 != (undefined4 *)0x0)) {
      LOCK();
      piVar2 = local_14 + 1;
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*local_14)(1);
      }
    }
    if (param_1._3_1_ == '\0') goto LAB_0051cb80;
    FUN_00413340(&local_14);
    FUN_00410ea0(&param_1);
    local_8 = CONCAT31(local_8._1_3_,6);
  }
  else {
    if (param_1 != (undefined1 *)0x10) {
      if (param_1 == (undefined1 *)0x4000) {
        (**(code **)(*in_ECX + 100))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
      }
      else if (param_1 == (undefined1 *)0x8000) {
        param_1 = &DAT_00bfe12c;
        local_8._0_1_ = 9;
        local_8._1_3_ = 0;
        (**(code **)(*in_ECX + 0x68))(&param_1);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_0040ea50();
      }
      goto LAB_0051cb80;
    }
    iVar1 = FUN_0051cbe0(5);
    puVar4 = local_14;
    if (iVar1 == 0) {
LAB_0051cad8:
      param_1 = (undefined1 *)((uint)param_1 & 0xffffff);
    }
    else {
      piVar2 = (int *)FUN_00413340(&local_14);
      puVar4 = (undefined4 *)0x8;
      if (*piVar2 == 0) goto LAB_0051cad8;
      param_1 = (undefined1 *)CONCAT13(1,param_1._0_3_);
    }
    if ((((uint)puVar4 & 8) != 0) && (local_14 != (undefined4 *)0x0)) {
      LOCK();
      piVar2 = local_14 + 1;
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*local_14)(1);
      }
    }
    if (param_1._3_1_ == '\0') goto LAB_0051cb80;
    FUN_00413340(&local_14);
    FUN_00410ea0(&param_1);
    local_8 = CONCAT31(local_8._1_3_,8);
  }
  FUN_006f6dd6(in_ECX[1],0,&juce::TreeView::RTTI_Type_Descriptor,
               &ProjectExplorer::RTTI_Type_Descriptor,0);
  FUN_005069f0();
  piVar2 = (int *)(param_1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  local_8 = local_8 & 0xffffff00;
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar2 = local_14 + 1;
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_14)(1);
    }
  }
LAB_0051cb80:
  FUN_006f6dd6(in_ECX[1],0,&juce::TreeView::RTTI_Type_Descriptor,
               &ProjectExplorer::RTTI_Type_Descriptor,0);
  FUN_00519470(&local_18,0,0);
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
  ExceptionList = local_10;
  return;
}

