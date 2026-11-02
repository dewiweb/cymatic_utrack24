// rea decompile_all
// name: FUN_00592800
// address: 0x592800
// body: available
// range: 0x592800-0x5935e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00592800(undefined1 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined4 *extraout_ECX;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 **ppuStack_3c;
  char *local_38;
  undefined1 **ppuStack_34;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714a31;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = juce::ComboBox::Listener::vftable;
  puVar1 = in_ECX + 0x1d;
  *puVar1 = TargetSelector::Listener::vftable;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  in_ECX[0x1e] = param_1;
  *in_ECX = ExportHeadComponent::vftable;
  in_ECX[0x1c] = ExportHeadComponent::vftable;
  *puVar1 = ExportHeadComponent::vftable;
  local_38 = "Settings";
  ppuStack_3c = (undefined1 **)0x592879;
  FUN_0045c990();
  local_38 = (char *)0xa;
  ppuStack_3c = (undefined1 **)0x592886;
  FUN_004f99d0();
  FUN_006ea2c0();
  *extraout_ECX = TableComponent::vftable;
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x1e] = 0;
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,6);
  ppuStack_34 = &param_1;
  local_38 = (char *)0x5928d1;
  FUN_006e8b40();
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x5928f3;
      FID_conflict__free(piVar4);
    }
  }
  param_1 = &DAT_00bfe12c;
  local_8._0_1_ = 10;
  ppuStack_34 = (undefined1 **)0x592910;
  FUN_006e8840();
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0xe);
  ppuStack_34 = &param_1;
  local_38 = (char *)0x592935;
  FUN_006e8b40();
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x592955;
      FID_conflict__free(piVar4);
    }
  }
  local_8._0_1_ = 0x11;
  ppuStack_34 = (undefined1 **)0x59296d;
  FUN_0045c990();
  local_8._0_1_ = 0x12;
  ppuStack_34 = (undefined1 **)0x592981;
  FUN_0045c990();
  ppuStack_34 = (undefined1 **)0x1;
  ppuStack_3c = &local_14;
  local_8 = CONCAT31(local_8._1_3_,0x13);
  local_38 = (char *)puVar1;
  FUN_005080b0(&PTR_DAT_00c7ed68,&param_1);
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x5929c0;
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x5929e3;
      FID_conflict__free(piVar4);
    }
  }
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x18);
  ppuStack_34 = &param_1;
  local_38 = (char *)0x592a0b;
  FUN_006e8b40();
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x592a2b;
      FID_conflict__free(piVar4);
    }
  }
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x1d);
  ppuStack_34 = &param_1;
  local_38 = (char *)0x592a53;
  FUN_006e8b40();
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x592a73;
      FID_conflict__free(piVar4);
    }
  }
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x22);
  ppuStack_34 = &param_1;
  local_38 = (char *)0x592a9b;
  FUN_006e8b40();
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x592abb;
      FID_conflict__free(piVar4);
    }
  }
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x27);
  ppuStack_34 = &param_1;
  local_38 = (char *)0x592ae3;
  FUN_006e8b40();
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x592b03;
      FID_conflict__free(piVar4);
    }
  }
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x2c);
  ppuStack_34 = &param_1;
  local_38 = (char *)0x592b2b;
  FUN_006e8b40();
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x592b4b;
      FID_conflict__free(piVar4);
    }
  }
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x31);
  ppuStack_34 = &param_1;
  local_38 = (char *)0x592b73;
  FUN_006e8b40();
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x592b93;
      FID_conflict__free(piVar4);
    }
  }
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x36);
  ppuStack_34 = &param_1;
  piVar4 = in_ECX + 0x54e;
  local_38 = (char *)0x592bbd;
  FUN_006e8b40();
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x592bdd;
      FID_conflict__free(piVar5);
    }
  }
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x3b);
  ppuStack_34 = &param_1;
  local_38 = (char *)0x592c05;
  FUN_006e8b40();
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x592c25;
      FID_conflict__free(piVar5);
    }
  }
  param_1 = &DAT_00bfe12c;
  local_8._0_1_ = 0x3f;
  ppuStack_34 = (undefined1 **)0x592c42;
  FUN_006e8840();
  local_8._0_1_ = 0x41;
  in_ECX[0x5ea] = 0;
  in_ECX[0x5eb] = 0;
  in_ECX[0x5ec] = 0;
  in_ECX[0x5ed] = 0;
  in_ECX[0x5ee] = 0;
  in_ECX[0x5ef] = 0;
  ppuStack_34 = (undefined1 **)0x592c8f;
  param_1 = (undefined1 *)FUN_004f9f70();
  ppuStack_34 = (undefined1 **)0x592c9b;
  FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x592caf;
  FUN_0045c990();
  ppuStack_34 = &local_14;
  local_8._0_1_ = 0x42;
  local_38 = (char *)0x592cc7;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x41);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x592ceb;
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX[0x94] != 0x22) {
    in_ECX[0x94] = 0x22;
    FUN_006e6400(&ppuStack_3c);
    FUN_006ce9f0(1);
  }
  ppuStack_34 = (undefined1 **)0x64;
  local_38 = (char *)in_ECX[0x72];
  ppuStack_3c = (undefined1 **)in_ECX[0x71];
  FUN_006e9790();
  if (in_ECX + 0x6d != (int *)0x0) {
    ppuStack_34 = (undefined1 **)0x592d48;
    (**(code **)(in_ECX[0x6d] + 0x28))();
    ppuStack_34 = (undefined1 **)(in_ECX + 0x6d);
    local_38 = (char *)0x592d59;
    FUN_006e5050();
  }
  ppuStack_34 = (undefined1 **)0x592d66;
  FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x12c;
  local_38 = (char *)in_ECX[0xa6];
  ppuStack_3c = (undefined1 **)in_ECX[0xa5];
  FUN_006e9790();
  if (in_ECX != (undefined4 *)0xffffff90) {
    ppuStack_34 = (undefined1 **)0x592d9a;
    FUN_004097d0();
  }
  if (in_ECX + 0xa1 != (int *)0x0) {
    ppuStack_34 = (undefined1 **)0x592dab;
    (**(code **)(in_ECX[0xa1] + 0x28))();
    ppuStack_34 = (undefined1 **)(in_ECX + 0xa1);
    local_38 = (char *)0x592dbc;
    FUN_006e5050();
  }
  ppuStack_34 = (undefined1 **)0x592dc6;
  FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x592dda;
  FUN_0045c990();
  ppuStack_34 = &local_14;
  local_8._0_1_ = 0x43;
  local_38 = (char *)0x592df2;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x41);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x592e16;
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX[0xfb] != 0x22) {
    in_ECX[0xfb] = 0x22;
    FUN_006e6400(&ppuStack_3c);
    FUN_006ce9f0(1);
  }
  ppuStack_34 = (undefined1 **)0x50;
  local_38 = (char *)in_ECX[0xd9];
  ppuStack_3c = (undefined1 **)in_ECX[0xd8];
  FUN_006e9790();
  if (in_ECX + 0xd4 != (int *)0x0) {
    ppuStack_34 = (undefined1 **)0x592e73;
    (**(code **)(in_ECX[0xd4] + 0x28))();
    ppuStack_34 = (undefined1 **)(in_ECX + 0xd4);
    local_38 = (char *)0x592e84;
    FUN_006e5050();
  }
  ppuStack_34 = (undefined1 **)0x592e91;
  param_1 = (undefined1 *)FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x12c;
  local_38 = (char *)in_ECX[0x10d];
  ppuStack_3c = (undefined1 **)in_ECX[0x10c];
  FUN_006e9790();
  if (in_ECX + 0x108 != (int *)0x0) {
    ppuStack_34 = (undefined1 **)0x592ec3;
    (**(code **)(in_ECX[0x108] + 0x28))();
    ppuStack_34 = (undefined1 **)(in_ECX + 0x108);
    local_38 = (char *)0x592ed4;
    FUN_006e5050();
  }
  ppuStack_34 = (undefined1 **)0x592ee1;
  param_1 = (undefined1 *)FUN_004f9f70();
  ppuStack_34 = (undefined1 **)0x592eed;
  FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x592f01;
  FUN_0045c990();
  ppuStack_34 = &local_14;
  local_8._0_1_ = 0x44;
  local_38 = (char *)0x592f19;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x41);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x592f3d;
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX[0x43d] != 0x22) {
    in_ECX[0x43d] = 0x22;
    FUN_006e6400(&ppuStack_3c);
    FUN_006ce9f0(1);
  }
  ppuStack_34 = (undefined1 **)0x64;
  local_38 = (char *)in_ECX[0x41b];
  ppuStack_3c = (undefined1 **)in_ECX[0x41a];
  FUN_006e9790();
  if (in_ECX + 0x416 != (int *)0x0) {
    ppuStack_34 = (undefined1 **)0x592f9a;
    (**(code **)(in_ECX[0x416] + 0x28))();
    ppuStack_34 = (undefined1 **)(in_ECX + 0x416);
    local_38 = (char *)0x592fab;
    FUN_006e5050();
  }
  ppuStack_34 = (undefined1 **)0x592fb5;
  FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x592fc9;
  FUN_0045c990();
  ppuStack_34 = &local_14;
  local_8._0_1_ = 0x45;
  local_38 = (char *)0x592fe1;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x41);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x593005;
      FID_conflict__free(piVar5);
    }
  }
  ppuStack_34 = (undefined1 **)0x64;
  local_38 = (char *)in_ECX[0x44f];
  ppuStack_3c = (undefined1 **)in_ECX[0x44e];
  FUN_006e9790();
  if (in_ECX + 0x44a != (int *)0x0) {
    ppuStack_34 = (undefined1 **)0x593034;
    (**(code **)(in_ECX[0x44a] + 0x28))();
    ppuStack_34 = (undefined1 **)(in_ECX + 0x44a);
    local_38 = (char *)0x593045;
    FUN_006e5050();
  }
  ppuStack_34 = (undefined1 **)0x59304f;
  FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x593059;
  FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x59306d;
  FUN_0045c990();
  ppuStack_34 = &local_14;
  local_8._0_1_ = 0x46;
  local_38 = (char *)0x593085;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x41);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x5930a9;
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX[0x4a5] != 0x22) {
    in_ECX[0x4a5] = 0x22;
    FUN_006e6400(&ppuStack_3c);
    FUN_006ce9f0(1);
  }
  ppuStack_34 = (undefined1 **)0x64;
  local_38 = (char *)in_ECX[0x483];
  ppuStack_3c = (undefined1 **)in_ECX[0x482];
  FUN_006e9790();
  if (in_ECX + 0x47e != (int *)0x0) {
    ppuStack_34 = (undefined1 **)0x593106;
    (**(code **)(in_ECX[0x47e] + 0x28))();
    ppuStack_34 = (undefined1 **)(in_ECX + 0x47e);
    local_38 = (char *)0x593117;
    FUN_006e5050();
  }
  ppuStack_34 = (undefined1 **)0x593121;
  FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x593135;
  FUN_0045c990();
  ppuStack_34 = &local_14;
  local_8._0_1_ = 0x47;
  local_38 = (char *)0x59314d;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x41);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x593171;
      FID_conflict__free(piVar5);
    }
  }
  ppuStack_34 = (undefined1 **)0x64;
  local_38 = (char *)in_ECX[0x4b7];
  ppuStack_3c = (undefined1 **)in_ECX[0x4b6];
  FUN_006e9790();
  if (in_ECX + 0x4b2 != (int *)0x0) {
    ppuStack_34 = (undefined1 **)0x5931a0;
    (**(code **)(in_ECX[0x4b2] + 0x28))();
    ppuStack_34 = (undefined1 **)(in_ECX + 0x4b2);
    local_38 = (char *)0x5931b1;
    FUN_006e5050();
  }
  ppuStack_34 = (undefined1 **)0x5931bb;
  FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x5931c5;
  FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x5931d9;
  FUN_0045c990();
  ppuStack_34 = &local_14;
  local_8._0_1_ = 0x48;
  local_38 = (char *)0x5931f1;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x41);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x593215;
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX[0x50d] != 0x22) {
    in_ECX[0x50d] = 0x22;
    FUN_006e6400(&ppuStack_3c);
    FUN_006ce9f0(1);
  }
  ppuStack_34 = (undefined1 **)0x64;
  local_38 = (char *)in_ECX[0x4eb];
  ppuStack_3c = (undefined1 **)in_ECX[0x4ea];
  FUN_006e9790();
  if (in_ECX + 0x4e6 != (int *)0x0) {
    ppuStack_34 = (undefined1 **)0x593272;
    (**(code **)(in_ECX[0x4e6] + 0x28))();
    ppuStack_34 = (undefined1 **)(in_ECX + 0x4e6);
    local_38 = (char *)0x593283;
    FUN_006e5050();
  }
  ppuStack_34 = (undefined1 **)0x59328d;
  FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x5932a1;
  FUN_0045c990();
  ppuStack_34 = &local_14;
  local_8._0_1_ = 0x49;
  local_38 = (char *)0x5932b9;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x41);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x5932dd;
      FID_conflict__free(piVar5);
    }
  }
  ppuStack_34 = (undefined1 **)0x64;
  local_38 = (char *)in_ECX[0x51f];
  ppuStack_3c = (undefined1 **)in_ECX[0x51e];
  FUN_006e9790();
  if (in_ECX + 0x51a != (int *)0x0) {
    ppuStack_34 = (undefined1 **)0x59330c;
    (**(code **)(in_ECX[0x51a] + 0x28))();
    ppuStack_34 = (undefined1 **)(in_ECX + 0x51a);
    local_38 = (char *)0x59331d;
    FUN_006e5050();
  }
  ppuStack_34 = (undefined1 **)0x593327;
  FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x593331;
  FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x593345;
  FUN_0045c990();
  ppuStack_34 = &local_14;
  local_8._0_1_ = 0x4a;
  local_38 = (char *)0x593359;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x41);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x59337d;
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX[0x575] != 0x22) {
    in_ECX[0x575] = 0x22;
    FUN_006e6400(&ppuStack_3c);
    FUN_006ce9f0(1);
  }
  ppuStack_34 = (undefined1 **)0x96;
  local_38 = (char *)in_ECX[0x553];
  ppuStack_3c = (undefined1 **)in_ECX[0x552];
  FUN_006e9790();
  if (piVar4 != (int *)0x0) {
    ppuStack_34 = (undefined1 **)0x5933cd;
    (**(code **)(*piVar4 + 0x28))();
    local_38 = (char *)0x5933d8;
    ppuStack_34 = (undefined1 **)piVar4;
    FUN_006e5050();
  }
  ppuStack_34 = (undefined1 **)0x5933e4;
  FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x5933f8;
  FUN_0045c990();
  ppuStack_34 = &param_1;
  local_8._0_1_ = 0x4b;
  local_38 = (char *)0x593410;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x41);
  piVar4 = (int *)((int)param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x593434;
      FID_conflict__free(piVar4);
    }
  }
  ppuStack_34 = (undefined1 **)0x64;
  local_38 = (char *)in_ECX[0x587];
  ppuStack_3c = (undefined1 **)in_ECX[0x586];
  FUN_006e9790();
  if (in_ECX + 0x582 != (int *)0x0) {
    ppuStack_34 = (undefined1 **)0x593463;
    (**(code **)(in_ECX[0x582] + 0x28))();
    ppuStack_34 = (undefined1 **)(in_ECX + 0x582);
    local_38 = "j";
    FUN_006e5050();
  }
  ppuStack_34 = (undefined1 **)0x59347d;
  FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x593486;
  FUN_004f9dd0();
  ppuStack_34 = (undefined1 **)0x59349a;
  FUN_0045c990();
  ppuStack_34 = &param_1;
  local_8._0_1_ = 0x4c;
  piVar4 = in_ECX + 0x5b6;
  local_38 = (char *)0x5934b4;
  FUN_006e8760();
  local_8._0_1_ = 0x41;
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x5934d8;
      FID_conflict__free(piVar5);
    }
  }
  ppuStack_34 = (undefined1 **)0x5934ec;
  FUN_0045c990();
  ppuStack_34 = &param_1;
  local_8._0_1_ = 0x4d;
  local_38 = (char *)0x593500;
  FUN_006e8760();
  local_8 = CONCAT31(local_8._1_3_,0x41);
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_34 = (undefined1 **)0x593521;
      FID_conflict__free(piVar5);
    }
  }
  ppuStack_34 = (undefined1 **)0x1;
  local_38 = (char *)0x59352f;
  FUN_006e83a0();
  if (in_ECX != (undefined4 *)0xffffff90) {
    ppuStack_34 = (undefined1 **)0x593542;
    FUN_004097d0();
  }
  ppuStack_34 = (undefined1 **)0x8c;
  local_38 = (char *)in_ECX[0x5bb];
  ppuStack_3c = (undefined1 **)in_ECX[0x5ba];
  FUN_006e9790();
  if (piVar4 != (int *)0x0) {
    ppuStack_34 = (undefined1 **)0x593563;
    (**(code **)(*piVar4 + 0x28))();
    local_38 = "j";
    ppuStack_34 = (undefined1 **)piVar4;
    FUN_006e5050();
  }
  ppuStack_34 = (undefined1 **)(in_ECX + 0x4e);
  piVar4 = in_ECX + 0x1f;
  local_38 = (char *)0x593581;
  FUN_004f9860();
  if (piVar4 != (int *)0x0) {
    ppuStack_34 = (undefined1 **)0x59358e;
    (**(code **)(*piVar4 + 0x28))();
    local_38 = (char *)0x593598;
    ppuStack_34 = (undefined1 **)piVar4;
    FUN_006e5050();
  }
  FUN_00591df0();
  iVar3 = FUN_005b15f0();
  iVar6 = iVar3;
  if (iVar3 == 0) {
    iVar7 = 1;
    do {
      cVar2 = FUN_005b2750();
      iVar6 = iVar7;
      if (cVar2 != '\0') break;
      iVar7 = iVar7 + 1;
      iVar6 = iVar3;
    } while (iVar7 < 5);
  }
  local_38 = (char *)0x5935d3;
  ppuStack_34 = (undefined1 **)iVar6;
  FUN_006e83a0();
  ExceptionList = local_10;
  return;
}

