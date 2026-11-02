// rea decompile_all
// name: FUN_005a1a20
// address: 0x5a1a20
// body: available
// range: 0x5a1a20-0x5a2ada inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_005a1a20(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_ECX;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int *piVar5;
  int *piVar6;
  undefined4 **local_40;
  undefined4 **ppuStack_3c;
  undefined4 **local_38;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071659b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  *(undefined ***)(extraout_ECX + 0x70) = TargetSelector::Listener::vftable;
  *(undefined ***)(extraout_ECX + 0x74) = FileSelector::Listener::vftable;
  *(undefined ***)(extraout_ECX + 0x78) = SessionSelectorComponent::Listener::vftable;
  *(undefined ***)(extraout_ECX + 0x7c) = PushButton::Listener::vftable;
  puVar1 = (undefined4 *)(extraout_ECX + 0x80);
  local_8._0_1_ = 5;
  local_8._1_3_ = 0;
  *puVar1 = GlobalNotifierListener::vftable;
  local_14 = puVar1;
  iVar3 = FUN_00560890();
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x18));
  FUN_00447220();
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x18));
  local_8._0_1_ = 6;
  in_ECX[0x21] = param_1;
  *in_ECX = ImportHeadComponent::vftable;
  in_ECX[0x1c] = ImportHeadComponent::vftable;
  in_ECX[0x1d] = ImportHeadComponent::vftable;
  in_ECX[0x1e] = ImportHeadComponent::vftable;
  in_ECX[0x1f] = ImportHeadComponent::vftable;
  *puVar1 = ImportHeadComponent::vftable;
  local_38 = (undefined4 **)0x747aac;
  ppuStack_3c = (undefined4 **)0x5a1af8;
  FUN_0045c990();
  local_38 = (undefined4 **)0xa;
  ppuStack_3c = (undefined4 **)0x5a1b08;
  FUN_004f99d0();
  FUN_006ea2c0();
  *extraout_ECX_00 = TableComponent::vftable;
  extraout_ECX_00[0x1c] = 0;
  extraout_ECX_00[0x1d] = 0;
  extraout_ECX_00[0x1e] = 0;
  local_14 = (undefined4 *)&DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,10);
  local_38 = (undefined4 **)0x5a1b53;
  FUN_006e8b40();
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8._0_1_ = 0xd;
  FUN_0045c990();
  local_8._0_1_ = 0xe;
  FUN_0045c990();
  local_38 = (undefined4 **)(in_ECX + 0x1c);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  ppuStack_3c = &local_14;
  local_40 = (undefined4 **)&param_1;
  FUN_005080b0(&PTR_DAT_00c7ed68);
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
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
  local_14 = (undefined4 *)&DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x14);
  local_38 = (undefined4 **)0x5a1c2e;
  FUN_006e8b40();
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8._0_1_ = 0x17;
  FUN_005aa5a0();
  local_14 = (undefined4 *)&DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x1a);
  local_38 = (undefined4 **)0x5a1c85;
  FUN_006e8b40();
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8._0_1_ = 0x1d;
  FUN_0045c990();
  local_8._0_1_ = 0x1e;
  FUN_0045c990();
  local_38 = (undefined4 **)(in_ECX + 0x1d);
  local_8 = CONCAT31(local_8._1_3_,0x1f);
  ppuStack_3c = (undefined4 **)0x1;
  local_40 = &local_14;
  FUN_005073d0(&PTR_DAT_00c7ed68,&param_1);
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
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
  local_14 = (undefined4 *)&DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x24);
  local_38 = (undefined4 **)0x5a1d65;
  FUN_006e8b40();
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_14 = (undefined4 *)&DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x29);
  local_38 = (undefined4 **)0x5a1dad;
  FUN_006e8b40();
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_14 = (undefined4 *)&DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x2e);
  local_38 = (undefined4 **)0x5a1df5;
  FUN_006e8b40();
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_14 = (undefined4 *)&DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x33);
  local_38 = (undefined4 **)0x5a1e3d;
  FUN_006e8b40();
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  param_1 = &DAT_00bfe12c;
  local_8._0_1_ = 0x37;
  FUN_006e3660();
  in_ECX[0x66b] = juce::ToggleButton::vftable;
  in_ECX[0x687] = juce::ToggleButton::vftable;
  *(undefined1 *)((int)in_ECX + 0x1a85) = 1;
  local_14 = (undefined4 *)&DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x3a);
  piVar5 = in_ECX + 0x6a3;
  local_38 = (undefined4 **)0x5a1eba;
  FUN_006e8b40();
  piVar6 = (int *)(param_1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  param_1 = &DAT_00bfe12c;
  local_8._0_1_ = 0x3e;
  FUN_006e8840();
  local_14 = (undefined4 *)&DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x42);
  local_38 = (undefined4 **)0x5a1f1c;
  FUN_006e8b40();
  piVar6 = (int *)(param_1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_8._0_1_ = 0x45;
  FUN_004f83b0();
  local_8._0_1_ = 0x46;
  FUN_004f83b0();
  local_8._0_1_ = 0x47;
  in_ECX[0x7d8] = 0;
  in_ECX[0x7d9] = 0;
  in_ECX[0x7da] = 0;
  in_ECX[0x7db] = 0;
  param_1 = (undefined1 *)FUN_004f9f70();
  FUN_004f9dd0();
  FUN_0045c990();
  local_8._0_1_ = 0x48;
  local_38 = (undefined4 **)0x5a1fce;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x47);
  piVar6 = local_14 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (in_ECX[0x97] != 0x22) {
    local_40 = &ppuStack_3c;
    in_ECX[0x97] = 0x22;
    FUN_006e6400();
    local_40 = (undefined4 **)0x1;
    FUN_006ce9f0();
  }
  local_38 = (undefined4 **)in_ECX[0x75];
  ppuStack_3c = (undefined4 **)in_ECX[0x74];
  local_40 = (undefined4 **)0x5a203e;
  FUN_006e9790();
  if (in_ECX + 0x70 != (int *)0x0) {
    (**(code **)(in_ECX[0x70] + 0x28))();
    local_38 = (undefined4 **)0x5a2060;
    FUN_006e5050();
  }
  FUN_004f9dd0();
  local_38 = (undefined4 **)in_ECX[0xa9];
  ppuStack_3c = (undefined4 **)in_ECX[0xa8];
  local_40 = (undefined4 **)0x5a208e;
  FUN_006e9790();
  if (in_ECX + 0xa4 != (int *)0x0) {
    (**(code **)(in_ECX[0xa4] + 0x28))();
    local_38 = (undefined4 **)0x5a20b0;
    FUN_006e5050();
  }
  FUN_004f9dd0();
  FUN_0045c990();
  local_8._0_1_ = 0x49;
  local_38 = (undefined4 **)0x5a20e6;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x47);
  piVar6 = local_14 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (in_ECX[0x3d9] != 0x22) {
    local_40 = &ppuStack_3c;
    in_ECX[0x3d9] = 0x22;
    FUN_006e6400();
    local_40 = (undefined4 **)0x1;
    FUN_006ce9f0();
  }
  local_38 = (undefined4 **)in_ECX[0x3b7];
  ppuStack_3c = (undefined4 **)in_ECX[0x3b6];
  local_40 = (undefined4 **)0x5a2156;
  FUN_006e9790();
  if (in_ECX + 0x3b2 != (int *)0x0) {
    (**(code **)(in_ECX[0x3b2] + 0x28))();
    local_38 = (undefined4 **)0x5a2178;
    FUN_006e5050();
  }
  FUN_004f9dd0();
  if (in_ECX != (undefined4 *)0xffffff88) {
    FUN_004097d0();
  }
  local_38 = (undefined4 **)in_ECX[0x3eb];
  ppuStack_3c = (undefined4 **)in_ECX[0x3ea];
  local_40 = (undefined4 **)0x5a21b6;
  FUN_006e9790();
  if (in_ECX + 0x3e6 != (int *)0x0) {
    (**(code **)(in_ECX[0x3e6] + 0x28))();
    local_38 = (undefined4 **)0x5a21d8;
    FUN_006e5050();
  }
  FUN_004f9dd0();
  FUN_004f9dd0();
  FUN_0045c990();
  local_8._0_1_ = 0x4a;
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0x47);
  piVar6 = (int *)((int)param_1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  iVar3 = FUN_006e9580();
  (**(code **)(*(int *)(iVar3 + 4) + 0x18))();
  local_38 = (undefined4 **)0x5a225e;
  uVar4 = FUN_005b0df0();
  local_38 = (undefined4 **)(uVar4 & 0xff);
  ppuStack_3c = (undefined4 **)0x5a226d;
  FUN_006e5380();
  local_38 = (undefined4 **)0xc8;
  ppuStack_3c = (undefined4 **)in_ECX[0x670];
  local_40 = (undefined4 **)in_ECX[0x66f];
  FUN_006e9790();
  if (in_ECX + 0x66b != (int *)0x0) {
    local_38 = (undefined4 **)0x5a229c;
    (**(code **)(in_ECX[0x66b] + 0x28))();
    local_38 = (undefined4 **)(in_ECX + 0x66b);
    ppuStack_3c = (undefined4 **)0x5a22ad;
    FUN_006e5050();
  }
  local_38 = (undefined4 **)0x5a22ba;
  param_1 = (undefined1 *)FUN_004f9f70();
  local_38 = (undefined4 **)0x5a22c6;
  FUN_004f9dd0();
  local_38 = (undefined4 **)0x5a22da;
  FUN_0045c990();
  local_38 = &local_14;
  local_8._0_1_ = 0x4b;
  ppuStack_3c = (undefined4 **)0x5a22f2;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x47);
  piVar6 = local_14 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_38 = (undefined4 **)0x5a2316;
      FID_conflict__free(piVar6);
    }
  }
  if (in_ECX[0x468] != 0x22) {
    in_ECX[0x468] = 0x22;
    FUN_006e6400(&local_40);
    FUN_006ce9f0(1);
  }
  local_38 = (undefined4 **)0xa0;
  ppuStack_3c = (undefined4 **)in_ECX[0x446];
  local_40 = (undefined4 **)in_ECX[0x445];
  FUN_006e9790();
  if (in_ECX + 0x441 != (int *)0x0) {
    local_38 = (undefined4 **)0x5a2376;
    (**(code **)(in_ECX[0x441] + 0x28))();
    local_38 = (undefined4 **)(in_ECX + 0x441);
    ppuStack_3c = (undefined4 **)0x5a2387;
    FUN_006e5050();
  }
  local_38 = (undefined4 **)0x5a2394;
  FUN_004f9dd0();
  local_38 = (undefined4 **)0xc8;
  ppuStack_3c = (undefined4 **)in_ECX[0x47a];
  local_40 = (undefined4 **)in_ECX[0x479];
  FUN_006e9790();
  if (in_ECX + 0x475 != (int *)0x0) {
    local_38 = (undefined4 **)0x5a23c6;
    (**(code **)(in_ECX[0x475] + 0x28))();
    local_38 = (undefined4 **)(in_ECX + 0x475);
    ppuStack_3c = (undefined4 **)0x5a23d7;
    FUN_006e5050();
  }
  local_38 = (undefined4 **)0x5a23e1;
  FUN_004f9dd0();
  local_38 = (undefined4 **)0x5a23eb;
  FUN_004f9dd0();
  local_38 = (undefined4 **)0x5a23ff;
  FUN_0045c990();
  local_38 = &local_14;
  local_8._0_1_ = 0x4c;
  ppuStack_3c = (undefined4 **)0x5a2413;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x47);
  piVar6 = local_14 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_38 = (undefined4 **)0x5a2437;
      FID_conflict__free(piVar6);
    }
  }
  if (in_ECX[0x6ca] != 0x22) {
    in_ECX[0x6ca] = 0x22;
    FUN_006e6400(&local_40);
    FUN_006ce9f0(1);
  }
  local_38 = (undefined4 **)0x64;
  ppuStack_3c = (undefined4 **)in_ECX[0x6a8];
  local_40 = (undefined4 **)in_ECX[0x6a7];
  FUN_006e9790();
  if (piVar5 != (int *)0x0) {
    local_38 = (undefined4 **)0x5a2484;
    (**(code **)(*piVar5 + 0x28))();
    ppuStack_3c = (undefined4 **)0x5a248f;
    local_38 = (undefined4 **)piVar5;
    FUN_006e5050();
  }
  local_38 = (undefined4 **)0x5a2499;
  FUN_004f9dd0();
  local_38 = (undefined4 **)0x5a24ad;
  FUN_0045c990();
  local_38 = (undefined4 **)&param_1;
  local_8._0_1_ = 0x4d;
  piVar5 = in_ECX + 0x6d7;
  ppuStack_3c = (undefined4 **)0x5a24c7;
  FUN_006e8760();
  local_8._0_1_ = 0x47;
  piVar6 = (int *)((int)param_1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_38 = (undefined4 **)0x5a24eb;
      FID_conflict__free(piVar6);
    }
  }
  local_38 = (undefined4 **)0x5a24ff;
  FUN_0045c990();
  local_38 = (undefined4 **)&param_1;
  local_8._0_1_ = 0x4e;
  ppuStack_3c = (undefined4 **)0x5a2513;
  FUN_006e8760();
  local_8._0_1_ = 0x47;
  piVar6 = (int *)((int)param_1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_38 = (undefined4 **)0x5a2537;
      FID_conflict__free(piVar6);
    }
  }
  local_38 = (undefined4 **)0x5a254b;
  FUN_0045c990();
  local_38 = (undefined4 **)&param_1;
  local_8._0_1_ = 0x4f;
  ppuStack_3c = (undefined4 **)0x5a255f;
  FUN_006e8760();
  local_8._0_1_ = 0x47;
  piVar6 = (int *)((int)param_1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_38 = (undefined4 **)0x5a2583;
      FID_conflict__free(piVar6);
    }
  }
  local_38 = (undefined4 **)0x5a2597;
  FUN_0045c990();
  local_38 = (undefined4 **)&param_1;
  local_8._0_1_ = 0x50;
  ppuStack_3c = (undefined4 **)0x5a25ab;
  FUN_006e8760();
  local_8 = CONCAT31(local_8._1_3_,0x47);
  piVar6 = (int *)((int)param_1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_38 = (undefined4 **)0x5a25cf;
      FID_conflict__free(piVar6);
    }
  }
  local_38 = (undefined4 **)0x5a25d9;
  local_38 = (undefined4 **)FUN_005b0f80();
  ppuStack_3c = (undefined4 **)0x5a25e1;
  FUN_006e83a0();
  local_38 = (undefined4 **)0x64;
  ppuStack_3c = (undefined4 **)in_ECX[0x6dc];
  local_40 = (undefined4 **)in_ECX[0x6db];
  FUN_006e9790();
  if (piVar5 != (int *)0x0) {
    local_38 = (undefined4 **)0x5a25ff;
    (**(code **)(*piVar5 + 0x28))();
    ppuStack_3c = (undefined4 **)0x5a260a;
    local_38 = (undefined4 **)piVar5;
    FUN_006e5050();
  }
  local_38 = (undefined4 **)0x5a2617;
  FUN_004f9f70();
  local_38 = (undefined4 **)0x5a2622;
  FUN_004f9dd0();
  local_38 = (undefined4 **)0x5a2636;
  FUN_0045c990();
  local_38 = (undefined4 **)&param_1;
  local_8._0_1_ = 0x51;
  ppuStack_3c = (undefined4 **)0x5a264e;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x47);
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_38 = (undefined4 **)0x5a2672;
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX[0x5c2] != 0x22) {
    in_ECX[0x5c2] = 0x22;
    FUN_006e6400(&local_40);
    FUN_006ce9f0(1);
  }
  local_38 = (undefined4 **)0x64;
  ppuStack_3c = (undefined4 **)in_ECX[0x5a0];
  local_40 = (undefined4 **)in_ECX[0x59f];
  FUN_006e9790();
  if (in_ECX + 0x59b != (int *)0x0) {
    local_38 = (undefined4 **)0x5a26cf;
    (**(code **)(in_ECX[0x59b] + 0x28))();
    local_38 = (undefined4 **)(in_ECX + 0x59b);
    ppuStack_3c = (undefined4 **)0x5a26e0;
    FUN_006e5050();
  }
  local_38 = (undefined4 **)0x5a26e9;
  FUN_004f9dd0();
  local_38 = (undefined4 **)0x5a26fd;
  FUN_0045c990();
  local_38 = (undefined4 **)&param_1;
  local_8._0_1_ = 0x52;
  ppuStack_3c = (undefined4 **)0x5a2715;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x47);
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_38 = (undefined4 **)0x5a2739;
      FID_conflict__free(piVar5);
    }
  }
  local_38 = (undefined4 **)0x64;
  ppuStack_3c = (undefined4 **)in_ECX[0x5d4];
  local_40 = (undefined4 **)in_ECX[0x5d3];
  FUN_006e9790();
  if (in_ECX + 0x5cf != (int *)0x0) {
    local_38 = (undefined4 **)0x5a2768;
    (**(code **)(in_ECX[0x5cf] + 0x28))();
    local_38 = (undefined4 **)(in_ECX + 0x5cf);
    ppuStack_3c = (undefined4 **)0x5a2779;
    FUN_006e5050();
  }
  local_38 = (undefined4 **)0x5a2782;
  FUN_004f9dd0();
  local_38 = (undefined4 **)0x5a2796;
  FUN_0045c990();
  local_38 = (undefined4 **)&param_1;
  local_8._0_1_ = 0x53;
  ppuStack_3c = (undefined4 **)0x5a27ae;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x47);
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_38 = (undefined4 **)0x5a27d2;
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX[0x62a] != 0x22) {
    in_ECX[0x62a] = 0x22;
    FUN_006e6400(&local_40);
    FUN_006ce9f0(1);
  }
  local_38 = (undefined4 **)0x12c;
  ppuStack_3c = (undefined4 **)in_ECX[0x608];
  local_40 = (undefined4 **)in_ECX[0x607];
  FUN_006e9790();
  if (in_ECX + 0x603 != (int *)0x0) {
    local_38 = (undefined4 **)0x5a2832;
    (**(code **)(in_ECX[0x603] + 0x28))();
    local_38 = (undefined4 **)(in_ECX + 0x603);
    ppuStack_3c = (undefined4 **)0x5a2843;
    FUN_006e5050();
  }
  local_38 = (undefined4 **)0x5a284c;
  FUN_004f9dd0();
  local_38 = (undefined4 **)0x5a2860;
  FUN_0045c990();
  local_38 = (undefined4 **)&param_1;
  local_8._0_1_ = 0x54;
  ppuStack_3c = (undefined4 **)0x5a2878;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x47);
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_38 = (undefined4 **)0x5a289c;
      FID_conflict__free(piVar5);
    }
  }
  local_38 = (undefined4 **)0x64;
  ppuStack_3c = (undefined4 **)in_ECX[0x63c];
  local_40 = (undefined4 **)in_ECX[0x63b];
  FUN_006e9790();
  if (in_ECX + 0x637 != (int *)0x0) {
    local_38 = (undefined4 **)0x5a28cb;
    (**(code **)(in_ECX[0x637] + 0x28))();
    local_38 = (undefined4 **)(in_ECX + 0x637);
    ppuStack_3c = (undefined4 **)0x5a28dc;
    FUN_006e5050();
  }
  local_38 = (undefined4 **)0x5a28e5;
  FUN_004f9dd0();
  local_38 = (undefined4 **)0x5a28ee;
  FUN_004f9dd0();
  local_38 = (undefined4 **)0x5a2902;
  FUN_0045c990();
  local_38 = (undefined4 **)&param_1;
  local_8._0_1_ = 0x55;
  ppuStack_3c = (undefined4 **)0x5a291a;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x47);
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_38 = (undefined4 **)0x5a293b;
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = in_ECX + 0x70a;
  if (in_ECX[0x731] != 0x22) {
    in_ECX[0x731] = 0x22;
    FUN_006e6400(&local_40);
    FUN_006ce9f0(1);
  }
  local_38 = (undefined4 **)0x96;
  ppuStack_3c = (undefined4 **)in_ECX[0x70f];
  local_40 = (undefined4 **)in_ECX[0x70e];
  FUN_006e9790();
  if (piVar5 != (int *)0x0) {
    local_38 = (undefined4 **)0x5a298c;
    (**(code **)(*piVar5 + 0x28))();
    ppuStack_3c = (undefined4 **)0x5a2997;
    local_38 = (undefined4 **)piVar5;
    FUN_006e5050();
  }
  local_38 = (undefined4 **)0x5a29a0;
  FUN_004f9dd0();
  in_ECX[0x77b] = 0x17;
  local_38 = (undefined4 **)0x5a29c0;
  (**(code **)(in_ECX[0x75a] + 8))();
  local_38 = (undefined4 **)0x0;
  ppuStack_3c = (undefined4 **)0x5a29cd;
  FUN_004f8300();
  local_38 = (undefined4 **)0x26;
  ppuStack_3c = (undefined4 **)0x2c;
  local_40 = (undefined4 **)in_ECX[0x743];
  FUN_006e9790(in_ECX[0x742]);
  local_38 = (undefined4 **)(in_ECX + 0x1f);
  if (local_38 != (undefined4 **)0x0) {
    ppuStack_3c = (undefined4 **)0x5a29fb;
    FUN_004097d0();
  }
  if (in_ECX + 0x73e != (int *)0x0) {
    local_38 = (undefined4 **)0x1;
    ppuStack_3c = (undefined4 **)0x5a2a0c;
    (**(code **)(in_ECX[0x73e] + 0x28))();
    local_38 = (undefined4 **)0xffffffff;
    ppuStack_3c = (undefined4 **)(in_ECX + 0x73e);
    local_40 = (undefined4 **)0x5a2a1c;
    FUN_006e5050();
  }
  local_38 = (undefined4 **)0x4;
  ppuStack_3c = (undefined4 **)0x5a2a25;
  FUN_004f9dd0();
  local_38 = (undefined4 **)0x2;
  ppuStack_3c = (undefined4 **)0x5a2a2e;
  FUN_004f9dd0();
  local_38 = (undefined4 **)&DAT_00c8a760;
  in_ECX[0x7c8] = 0x18;
  ppuStack_3c = (undefined4 **)0x5a2a4e;
  (**(code **)(in_ECX[0x7a7] + 8))();
  ppuVar2 = (undefined4 **)(in_ECX + 0x78b);
  ppuStack_3c = (undefined4 **)0x0;
  local_40 = (undefined4 **)0x5a2a5d;
  FUN_004f8300();
  ppuStack_3c = (undefined4 **)0x26;
  local_40 = (undefined4 **)0x2c;
  FUN_006e9790(in_ECX[0x78f],in_ECX[0x790]);
  ppuStack_3c = (undefined4 **)(in_ECX + 0x1f);
  if (ppuStack_3c != (undefined4 **)0x0) {
    local_40 = (undefined4 **)0x5a2a81;
    FUN_004097d0();
  }
  if (ppuVar2 != (undefined4 **)0x0) {
    ppuStack_3c = (undefined4 **)0x1;
    local_40 = (undefined4 **)0x5a2a8e;
    (*(code *)(*ppuVar2)[10])();
    ppuStack_3c = (undefined4 **)0xffffffff;
    local_40 = ppuVar2;
    FUN_006e5050();
  }
  ppuStack_3c = (undefined4 **)0x0;
  local_40 = (undefined4 **)(in_ECX + 0x51);
  piVar5 = in_ECX + 0x22;
  FUN_004f9860();
  if (piVar5 != (int *)0x0) {
    ppuStack_3c = (undefined4 **)0x1;
    local_40 = (undefined4 **)0x5a2abb;
    (**(code **)(*piVar5 + 0x28))();
    local_40 = (undefined4 **)0xffffffff;
    FUN_006e5050(piVar5);
  }
  ExceptionList = local_10;
  return in_ECX;
}

