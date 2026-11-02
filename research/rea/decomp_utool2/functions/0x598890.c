// rea decompile_all
// name: FUN_00598890
// address: 0x598890
// body: available
// range: 0x598890-0x599650 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00598890(undefined1 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_ECX;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  int *piVar4;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int *local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071550c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_30 = (int *)*param_2;
  piVar3 = (int *)((int)local_30 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  puStack_34 = (undefined4 *)0x2;
  puStack_38 = (undefined4 *)0x5988dd;
  FUN_004f99d0();
  local_8 = 0;
  in_ECX[0x2f] = juce::SettableTooltipClient::vftable;
  in_ECX[0x30] = &DAT_00bfe12c;
  puVar1 = in_ECX + 0x31;
  *puVar1 = TargetSelector::Listener::vftable;
  in_ECX[0x32] = juce::ChangeListener::vftable;
  in_ECX[0x33] = juce::ComboBox::Listener::vftable;
  in_ECX[0x34] = ExportTask::Listener::vftable;
  *in_ECX = QueuedExportJob::vftable;
  in_ECX[0x2f] = QueuedExportJob::vftable;
  *puVar1 = QueuedExportJob::vftable;
  in_ECX[0x32] = QueuedExportJob::vftable;
  in_ECX[0x33] = QueuedExportJob::vftable;
  in_ECX[0x34] = QueuedExportJob::vftable;
  in_ECX[0x35] = param_1;
  FUN_006ea2c0();
  *extraout_ECX = TableComponent::vftable;
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x1e] = 0;
  FUN_006ea2c0();
  *extraout_ECX_00 = TableComponent::vftable;
  extraout_ECX_00[0x1c] = 0;
  extraout_ECX_00[0x1d] = 0;
  extraout_ECX_00[0x1e] = 0;
  param_1 = &DAT_00bfe12c;
  param_2 = (int *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,9);
  local_30 = (int *)&param_2;
  puStack_34 = (undefined4 *)0x5989d0;
  FUN_006e8b40();
  piVar3 = (int *)((int)param_2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x5989f2;
      FID_conflict__free(piVar3);
    }
  }
  local_8._0_1_ = 0xc;
  local_30 = (int *)0x598a0a;
  FUN_0045c990();
  local_8._0_1_ = 0xd;
  local_30 = (int *)0x598a1e;
  FUN_0045c990();
  local_30 = (int *)0x1;
  puStack_38 = &param_1;
  local_8 = CONCAT31(local_8._1_3_,0xe);
  puStack_34 = puVar1;
  FUN_005080b0(&PTR_DAT_00c7ed68,&param_2);
  piVar3 = (int *)((int)param_2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x598a5d;
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x598a80;
      FID_conflict__free(piVar3);
    }
  }
  param_1 = &DAT_00bfe12c;
  param_2 = (int *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x13);
  local_30 = (int *)&param_2;
  puStack_34 = (undefined4 *)0x598aa8;
  FUN_006e8b40();
  piVar3 = (int *)((int)param_2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x598ac8;
      FID_conflict__free(piVar3);
    }
  }
  param_2 = (int *)&DAT_00bfe12c;
  local_8._0_1_ = 0x17;
  piVar3 = in_ECX + 0x3ea;
  local_30 = (int *)0x598ae7;
  FUN_006e8840();
  param_1 = &DAT_00bfe12c;
  param_2 = (int *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x1b);
  local_30 = (int *)&param_2;
  puStack_34 = (undefined4 *)0x598b0c;
  FUN_006e8b40();
  piVar4 = (int *)((int)param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x598b2c;
      FID_conflict__free(piVar4);
    }
  }
  param_1 = &DAT_00bfe12c;
  param_2 = (int *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x20);
  local_30 = (int *)&param_2;
  puStack_34 = (undefined4 *)0x598b54;
  FUN_006e8b40();
  piVar4 = (int *)((int)param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x598b74;
      FID_conflict__free(piVar4);
    }
  }
  param_1 = &DAT_00bfe12c;
  param_2 = (int *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x25);
  local_30 = (int *)&param_2;
  puStack_34 = (undefined4 *)0x598b9c;
  FUN_006e8b40();
  piVar4 = (int *)((int)param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x598bbc;
      FID_conflict__free(piVar4);
    }
  }
  param_1 = &DAT_00bfe12c;
  param_2 = (int *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x2a);
  local_30 = (int *)&param_2;
  puStack_34 = (undefined4 *)0x598be4;
  FUN_006e8b40();
  piVar4 = (int *)((int)param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x598c04;
      FID_conflict__free(piVar4);
    }
  }
  param_1 = &DAT_00bfe12c;
  param_2 = (int *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x2f);
  local_30 = (int *)&param_2;
  puStack_34 = (undefined4 *)0x598c2c;
  FUN_006e8b40();
  piVar4 = (int *)((int)param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x598c4c;
      FID_conflict__free(piVar4);
    }
  }
  param_1 = &DAT_00bfe12c;
  param_2 = (int *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x34);
  local_30 = (int *)&param_2;
  puStack_34 = (undefined4 *)0x598c74;
  FUN_006e8b40();
  piVar4 = (int *)((int)param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x598c94;
      FID_conflict__free(piVar4);
    }
  }
  local_8._0_1_ = 0x37;
  local_30 = (int *)0x598ca7;
  FUN_005978e0();
  local_8._0_1_ = 0x38;
  local_30 = (int *)0x598cb7;
  FUN_00597570();
  in_ECX[0x8b0] = 0;
  in_ECX[0x8b1] = 0;
  in_ECX[0x8b2] = 0;
  in_ECX[0x8b3] = 0;
  in_ECX[0x8b4] = 0;
  in_ECX[0x8b5] = 0;
  *(undefined2 *)(in_ECX + 0x8b8) = 0;
  *(undefined1 *)((int)in_ECX + 0x22e2) = 0;
  in_ECX[0x8b9] = 0;
  FUN_00553380();
  local_30 = in_ECX + 0x36;
  local_8._0_1_ = 0x3a;
  puStack_34 = (undefined4 *)0x598d2c;
  FUN_004f9860();
  local_30 = (int *)0x598d39;
  param_1 = (undefined1 *)FUN_004f9f70();
  local_30 = (int *)0x598d45;
  FUN_004f9dd0();
  local_30 = (int *)0x598d59;
  FUN_0045c990();
  local_30 = (int *)&param_2;
  local_8._0_1_ = 0x3b;
  puStack_34 = (undefined4 *)0x598d71;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x3a);
  piVar4 = (int *)((int)param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (undefined4 *)0x598d95;
      FID_conflict__free(piVar4);
    }
  }
  if (in_ECX[0x9b] != 0x22) {
    in_ECX[0x9b] = 0x22;
    FUN_006e6400(&puStack_38);
    FUN_006ce9f0(1);
  }
  local_30 = (int *)0x46;
  puStack_34 = (undefined4 *)in_ECX[0x79];
  puStack_38 = (undefined4 *)in_ECX[0x78];
  FUN_006e9790();
  if (in_ECX + 0x74 != (int *)0x0) {
    local_30 = (int *)0x598df2;
    (**(code **)(in_ECX[0x74] + 0x28))();
    local_30 = in_ECX + 0x74;
    puStack_34 = (undefined4 *)0x598e03;
    FUN_006e5050();
  }
  local_30 = (int *)0x598e0d;
  param_2 = (int *)FUN_004f9dd0();
  local_30 = (int *)0x26c;
  puStack_34 = (undefined4 *)in_ECX[0xad];
  puStack_38 = (undefined4 *)in_ECX[0xac];
  FUN_006e9790();
  if (in_ECX + 0xa8 != (int *)0x0) {
    local_30 = (int *)0x598e3f;
    (**(code **)(in_ECX[0xa8] + 0x28))();
    local_30 = in_ECX + 0xa8;
    puStack_34 = (undefined4 *)0x598e50;
    FUN_006e5050();
  }
  local_30 = (int *)0x598e5a;
  param_2 = (int *)FUN_004f9dd0();
  local_30 = (int *)0x14;
  puStack_34 = (undefined4 *)in_ECX[0x55b];
  puStack_38 = (undefined4 *)in_ECX[0x55a];
  FUN_006e9790();
  if (in_ECX + 0x556 != (int *)0x0) {
    local_30 = (int *)0x598e89;
    (**(code **)(in_ECX[0x556] + 0x28))();
    local_30 = in_ECX + 0x556;
    puStack_34 = (undefined4 *)0x598e9a;
    FUN_006e5050();
  }
  local_30 = (int *)0x598ea7;
  param_2 = (int *)FUN_004f9f70();
  local_30 = (int *)0x598eb3;
  FUN_004f9dd0();
  local_30 = (int *)0x598ec7;
  FUN_0045c990();
  local_30 = (int *)&param_1;
  local_8._0_1_ = 0x3c;
  puStack_34 = (undefined4 *)0x598edf;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x3a);
  piVar4 = (int *)((int)param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (undefined4 *)0x598f03;
      FID_conflict__free(piVar4);
    }
  }
  if (in_ECX[0x445] != 0x22) {
    in_ECX[0x445] = 0x22;
    FUN_006e6400(&puStack_38);
    FUN_006ce9f0(1);
  }
  local_30 = (int *)0x46;
  puStack_34 = (undefined4 *)in_ECX[0x423];
  puStack_38 = (undefined4 *)in_ECX[0x422];
  FUN_006e9790();
  if (in_ECX + 0x41e != (int *)0x0) {
    local_30 = (int *)0x598f60;
    (**(code **)(in_ECX[0x41e] + 0x28))();
    local_30 = in_ECX + 0x41e;
    puStack_34 = (undefined4 *)0x598f71;
    FUN_006e5050();
  }
  local_30 = (int *)0x598f7b;
  FUN_004f9dd0();
  local_30 = (int *)0x598f8f;
  FUN_0045c990();
  local_30 = (int *)&param_1;
  local_8._0_1_ = 0x3d;
  puStack_34 = (undefined4 *)0x598fa7;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x3a);
  piVar4 = (int *)((int)param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x598fcb;
      FID_conflict__free(piVar4);
    }
  }
  local_30 = (int *)0x64;
  puStack_34 = (undefined4 *)in_ECX[0x457];
  puStack_38 = (undefined4 *)in_ECX[0x456];
  FUN_006e9790();
  if (in_ECX + 0x452 != (int *)0x0) {
    local_30 = (int *)0x598ffa;
    (**(code **)(in_ECX[0x452] + 0x28))();
    local_30 = in_ECX + 0x452;
    puStack_34 = (undefined4 *)0x59900b;
    FUN_006e5050();
  }
  local_30 = (int *)0x599015;
  FUN_004f9dd0();
  local_30 = (int *)0x599029;
  FUN_0045c990();
  local_30 = (int *)&param_1;
  local_8._0_1_ = 0x3e;
  puStack_34 = (undefined4 *)0x599041;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x3a);
  piVar4 = (int *)((int)param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (undefined4 *)0x599065;
      FID_conflict__free(piVar4);
    }
  }
  if (in_ECX[0x4ad] != 0x22) {
    in_ECX[0x4ad] = 0x22;
    FUN_006e6400(&puStack_38);
    FUN_006ce9f0(1);
  }
  local_30 = (int *)0x32;
  puStack_34 = (undefined4 *)in_ECX[0x48b];
  puStack_38 = (undefined4 *)in_ECX[0x48a];
  FUN_006e9790();
  if (in_ECX + 0x486 != (int *)0x0) {
    local_30 = (int *)0x5990c2;
    (**(code **)(in_ECX[0x486] + 0x28))();
    local_30 = in_ECX + 0x486;
    puStack_34 = (undefined4 *)0x5990d3;
    FUN_006e5050();
  }
  local_30 = (int *)0x5990dd;
  FUN_004f9dd0();
  local_30 = (int *)0x5990f1;
  FUN_0045c990();
  local_30 = (int *)&param_1;
  local_8._0_1_ = 0x3f;
  puStack_34 = (undefined4 *)0x599109;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x3a);
  piVar4 = (int *)((int)param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x59912d;
      FID_conflict__free(piVar4);
    }
  }
  local_30 = (int *)0x64;
  puStack_34 = (undefined4 *)in_ECX[0x4bf];
  puStack_38 = (undefined4 *)in_ECX[0x4be];
  FUN_006e9790();
  if (in_ECX + 0x4ba != (int *)0x0) {
    local_30 = (int *)0x59915c;
    (**(code **)(in_ECX[0x4ba] + 0x28))();
    local_30 = in_ECX + 0x4ba;
    puStack_34 = (undefined4 *)0x59916d;
    FUN_006e5050();
  }
  local_30 = (int *)0x599177;
  FUN_004f9dd0();
  local_30 = (int *)0x59918b;
  FUN_0045c990();
  local_30 = (int *)&param_1;
  local_8._0_1_ = 0x40;
  puStack_34 = (undefined4 *)0x5991a3;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x3a);
  piVar4 = (int *)((int)param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (undefined4 *)0x5991c7;
      FID_conflict__free(piVar4);
    }
  }
  if (in_ECX[0x515] != 0x22) {
    in_ECX[0x515] = 0x22;
    FUN_006e6400(&puStack_38);
    FUN_006ce9f0(1);
  }
  local_30 = (int *)0x78;
  puStack_34 = (undefined4 *)in_ECX[0x4f3];
  puStack_38 = (undefined4 *)in_ECX[0x4f2];
  FUN_006e9790();
  if (in_ECX + 0x4ee != (int *)0x0) {
    local_30 = (int *)0x599224;
    (**(code **)(in_ECX[0x4ee] + 0x28))();
    local_30 = in_ECX + 0x4ee;
    puStack_34 = (undefined4 *)0x599235;
    FUN_006e5050();
  }
  local_30 = (int *)0x59923f;
  FUN_004f9dd0();
  local_30 = (int *)0x599253;
  FUN_0045c990();
  local_30 = (int *)&param_1;
  local_8._0_1_ = 0x41;
  puStack_34 = (undefined4 *)0x59926b;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x3a);
  piVar4 = (int *)((int)param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x59928f;
      FID_conflict__free(piVar4);
    }
  }
  local_30 = (int *)0x64;
  puStack_34 = (undefined4 *)in_ECX[0x527];
  puStack_38 = (undefined4 *)in_ECX[0x526];
  FUN_006e9790();
  if (in_ECX + 0x522 != (int *)0x0) {
    local_30 = (int *)0x5992be;
    (**(code **)(in_ECX[0x522] + 0x28))();
    local_30 = in_ECX + 0x522;
    puStack_34 = (undefined4 *)0x5992cf;
    FUN_006e5050();
  }
  local_30 = (int *)0x5992d9;
  FUN_004f9dd0();
  if (in_ECX[0x3dd] != 0x22) {
    in_ECX[0x3dd] = 0x22;
    FUN_006e6400(&puStack_38);
    FUN_006ce9f0(1);
  }
  local_30 = (int *)0x599321;
  FUN_0045c990();
  local_30 = (int *)&param_1;
  local_8._0_1_ = 0x42;
  puStack_34 = (undefined4 *)0x599339;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x3a);
  piVar4 = (int *)((int)param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x59935d;
      FID_conflict__free(piVar4);
    }
  }
  local_30 = (int *)0x32;
  puStack_34 = (undefined4 *)in_ECX[0x3bb];
  puStack_38 = (undefined4 *)in_ECX[0x3ba];
  FUN_006e9790();
  if (in_ECX + 0x3b6 != (int *)0x0) {
    local_30 = (int *)0x59938c;
    (**(code **)(in_ECX[0x3b6] + 0x28))();
    local_30 = in_ECX + 0x3b6;
    puStack_34 = (undefined4 *)0x59939d;
    FUN_006e5050();
  }
  local_30 = (int *)0x5993a7;
  param_1 = (undefined1 *)FUN_004f9dd0();
  local_30 = (int *)0x5993bb;
  FUN_0045c990();
  local_8._0_1_ = 0x43;
  local_30 = (int *)0x5993cd;
  FUN_006e2900();
  local_8._0_1_ = 0x3a;
  piVar4 = (int *)((int)param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x5993f1;
      FID_conflict__free(piVar4);
    }
  }
  local_30 = (int *)0x599405;
  FUN_0045c990();
  local_30 = (int *)&param_2;
  local_8._0_1_ = 0x44;
  puStack_34 = (undefined4 *)0x599419;
  FUN_006e8760();
  local_8._0_1_ = 0x3a;
  piVar4 = (int *)((int)param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x59943d;
      FID_conflict__free(piVar4);
    }
  }
  local_30 = (int *)0x599451;
  FUN_0045c990();
  local_30 = (int *)&param_2;
  local_8._0_1_ = 0x45;
  puStack_34 = (undefined4 *)0x599465;
  FUN_006e8760();
  local_8._0_1_ = 0x3a;
  piVar4 = (int *)((int)param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x599489;
      FID_conflict__free(piVar4);
    }
  }
  local_30 = (int *)0x59949d;
  FUN_0045c990();
  local_30 = (int *)&param_2;
  local_8._0_1_ = 0x46;
  puStack_34 = (undefined4 *)0x5994b1;
  FUN_006e8760();
  local_8._0_1_ = 0x3a;
  piVar4 = (int *)((int)param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x5994d5;
      FID_conflict__free(piVar4);
    }
  }
  local_30 = (int *)0x5994e9;
  FUN_0045c990();
  local_30 = (int *)&param_2;
  local_8._0_1_ = 0x47;
  puStack_34 = (undefined4 *)0x5994fd;
  FUN_006e8760();
  local_8 = CONCAT31(local_8._1_3_,0x3a);
  piVar4 = (int *)((int)param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_30 = (int *)0x59951e;
      FID_conflict__free(piVar4);
    }
  }
  local_30 = (int *)0x1;
  puStack_34 = (undefined4 *)0x59952c;
  FUN_006e83a0();
  if (in_ECX != (undefined4 *)0xffffff34) {
    local_30 = (int *)0x599542;
    FUN_004097d0();
  }
  local_30 = (int *)0x64;
  puStack_34 = (undefined4 *)in_ECX[0x3ef];
  puStack_38 = (undefined4 *)in_ECX[0x3ee];
  FUN_006e9790();
  if (piVar3 != (int *)0x0) {
    local_30 = (int *)0x599560;
    (**(code **)(*piVar3 + 0x28))();
    puStack_34 = (undefined4 *)0x59956b;
    local_30 = piVar3;
    FUN_006e5050();
  }
  local_30 = (int *)0x599578;
  FUN_004f9f70();
  local_30 = (int *)0x599583;
  FUN_004f9dd0();
  local_30 = (int *)0x2c6;
  puStack_34 = (undefined4 *)in_ECX[0x5a];
  puStack_38 = (undefined4 *)in_ECX[0x59];
  FUN_006e9790();
  if (in_ECX + 0x55 != (int *)0x0) {
    local_30 = (int *)0x5995b4;
    (**(code **)(in_ECX[0x55] + 0x28))();
    local_30 = in_ECX + 0x55;
    puStack_34 = (undefined4 *)0x5995c4;
    FUN_006e5050();
  }
  local_30 = (int *)0x5995d0;
  FUN_004f9dd0();
  local_30 = (int *)0x64;
  puStack_34 = (undefined4 *)in_ECX[0x57b];
  piVar3 = in_ECX + 0x576;
  puStack_38 = (undefined4 *)in_ECX[0x57a];
  FUN_006e9790();
  if (piVar3 != (int *)0x0) {
    local_30 = (int *)0x5995f9;
    (**(code **)(*piVar3 + 0x28))();
    puStack_34 = (undefined4 *)0x599603;
    local_30 = piVar3;
    FUN_006e5050();
  }
  local_30 = (int *)0x599614;
  (**(code **)(in_ECX[0x556] + 0x28))();
  local_30 = (int *)0x44;
  puStack_34 = (undefined4 *)0x64;
  puStack_38 = (undefined4 *)in_ECX[5];
  FUN_006e9790(in_ECX[4]);
  local_30 = in_ECX + 0x32;
  if (local_30 != (undefined4 *)0x0) {
    puStack_34 = (undefined4 *)0x59963b;
    FUN_004097d0();
  }
  ExceptionList = local_10;
  return;
}

