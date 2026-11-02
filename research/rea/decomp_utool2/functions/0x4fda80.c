// rea decompile_all
// name: FUN_004fda80
// address: 0x4fda80
// body: available
// range: 0x4fda80-0x4febf4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fda80(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  undefined4 *extraout_ECX;
  int *piVar5;
  undefined4 *puStack_44;
  undefined1 **local_40;
  undefined1 **ppuStack_3c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007070e7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1d] = 0;
  in_ECX[0x1c] = DragDropHelper_Container::vftable;
  *(undefined1 *)(in_ECX + 0x1e) = 0;
  in_ECX[0x1f] = juce::Label::Listener::vftable;
  in_ECX[0x20] = juce::ComboBox::Listener::vftable;
  in_ECX[0x21] = TrackList::Listener::vftable;
  in_ECX[0x22] = AudioFileBrowser::Listener::vftable;
  in_ECX[0x23] = PushButton::Listener::vftable;
  in_ECX[0x24] = FileSelector::Listener::vftable;
  *in_ECX = MTSongEditor::vftable;
  in_ECX[0x1c] = MTSongEditor::vftable;
  in_ECX[0x1f] = MTSongEditor::vftable;
  in_ECX[0x20] = MTSongEditor::vftable;
  in_ECX[0x21] = MTSongEditor::vftable;
  in_ECX[0x22] = MTSongEditor::vftable;
  in_ECX[0x23] = MTSongEditor::vftable;
  in_ECX[0x24] = MTSongEditor::vftable;
  in_ECX[0x25] = param_1;
  in_ECX[0x26] = 0;
  local_8._0_1_ = 8;
  local_8._1_3_ = 0;
  in_ECX[0x27] = 0;
  FUN_005b74f0();
  local_8._0_1_ = 9;
  ppuStack_3c = (undefined1 **)0x4fdb8d;
  FUN_0045c990();
  ppuStack_3c = (undefined1 **)0x4fdb9d;
  FUN_004f99d0();
  FUN_006ea2c0();
  *extraout_ECX = TableComponent::vftable;
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x1e] = 0;
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0xd);
  FUN_006e8b40();
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x12);
  FUN_006e8b40();
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x17);
  FUN_006e8b40();
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x1c);
  FUN_006e8b40();
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8._0_1_ = 0x1f;
  FUN_004fa670();
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x22);
  FUN_006e8b40();
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  param_1 = &DAT_00bfe12c;
  local_8._0_1_ = 0x26;
  FUN_006e8840();
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x2a);
  FUN_006e8b40();
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  param_1 = &DAT_00bfe12c;
  local_8._0_1_ = 0x2e;
  FUN_006e8840();
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x32);
  FUN_006e8b40();
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  param_1 = &DAT_00bfe12c;
  local_8._0_1_ = 0x36;
  FUN_006e8840();
  in_ECX[0x37b] = 0;
  in_ECX[0x37c] = &DAT_00bfe12c;
  in_ECX[0x37e] = &DAT_00bfe12c;
  local_8._0_1_ = 0x3a;
  ppuStack_3c = (undefined1 **)0x4fde51;
  FUN_0045c990();
  ppuStack_3c = (undefined1 **)0x4fde61;
  FUN_004f99d0();
  local_8._0_1_ = 0x3b;
  FUN_004f5650();
  local_8._0_1_ = 0x3c;
  ppuStack_3c = (undefined1 **)0x4fde8e;
  FUN_0045c990();
  ppuStack_3c = (undefined1 **)0x4fde9e;
  FUN_004f99d0();
  local_8._0_1_ = 0x3d;
  FUN_00533ce0();
  local_8._0_1_ = 0x3e;
  ppuStack_3c = (undefined1 **)0x4fdecc;
  FUN_0045c990();
  ppuStack_3c = (undefined1 **)0x4fdedc;
  FUN_004f99d0();
  local_8._0_1_ = 0x3f;
  piVar5 = (int *)(PTR_DAT_00c7ed68 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  ppuStack_3c = (undefined1 **)0x4fdf06;
  FUN_004f99d0();
  local_8._0_1_ = 0x40;
  FUN_0045c990();
  local_8._0_1_ = 0x41;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0x42);
  ppuStack_3c = (undefined1 **)0x0;
  local_40 = &local_14;
  puStack_44 = &param_1;
  FUN_005073d0(&PTR_DAT_00c7ed68);
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8._0_1_ = 0x45;
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_004f83b0();
  local_8._0_1_ = 0x46;
  piVar5 = (int *)(PTR_DAT_00c7ed68 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  ppuStack_3c = (undefined1 **)0x4fdfda;
  FUN_004f99d0();
  local_8._0_1_ = 0x47;
  FUN_004fa2b0();
  local_8._0_1_ = 0x48;
  *(undefined1 *)(in_ECX + 0x964) = 0;
  FUN_004f9f70();
  local_14 = (undefined1 *)FUN_004f9dd0();
  FUN_0045c990();
  local_8._0_1_ = 0x49;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x48);
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX[0x168] != 0x22) {
    local_40 = (undefined1 **)&ppuStack_3c;
    in_ECX[0x168] = 0x22;
    puStack_44 = (undefined4 *)0x4fe087;
    FUN_006e6400();
    local_40 = (undefined1 **)0x1;
    puStack_44 = (undefined4 *)0x4fe094;
    FUN_006ce9f0();
  }
  ppuStack_3c = (undefined1 **)in_ECX[0x145];
  local_40 = (undefined1 **)0x4fe0a9;
  FUN_006e9790();
  if (in_ECX + 0x141 != (int *)0x0) {
    (**(code **)(in_ECX[0x141] + 0x28))();
    FUN_006e5050();
  }
  FUN_004f9dd0();
  if (in_ECX != (undefined4 *)0xffffff84) {
    FUN_004097d0();
  }
  ppuStack_3c = (undefined1 **)in_ECX[0x179];
  local_40 = (undefined1 **)0x4fe109;
  FUN_006e9790();
  FUN_0045c990();
  local_8._0_1_ = 0x4a;
  (**(code **)(in_ECX[0x191] + 8))();
  local_8 = CONCAT31(local_8._1_3_,0x48);
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX + 0x175 != (int *)0x0) {
    (**(code **)(in_ECX[0x175] + 0x28))();
    ppuStack_3c = (undefined1 **)0x4fe179;
    FUN_006e5050();
  }
  local_14 = (undefined1 *)FUN_004f9f70();
  FUN_004f9dd0();
  FUN_0045c990();
  local_8._0_1_ = 0x4b;
  ppuStack_3c = (undefined1 **)0x4fe1ba;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x48);
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX[0x1d0] != 0x22) {
    puStack_44 = &local_40;
    in_ECX[0x1d0] = 0x22;
    FUN_006e6400();
    puStack_44 = (undefined4 *)0x1;
    FUN_006ce9f0();
  }
  ppuStack_3c = (undefined1 **)in_ECX[0x1ae];
  local_40 = (undefined1 **)in_ECX[0x1ad];
  puStack_44 = (undefined4 *)0x4fe21e;
  FUN_006e9790();
  if (in_ECX + 0x1a9 != (int *)0x0) {
    (**(code **)(in_ECX[0x1a9] + 0x28))();
    ppuStack_3c = (undefined1 **)0x4fe236;
    FUN_006e5050();
  }
  FUN_004f9dd0();
  if (in_ECX != (undefined4 *)0xffffff84) {
    FUN_004097d0();
  }
  FUN_0045c990();
  local_8._0_1_ = 0x4c;
  (**(code **)(in_ECX[0x1f9] + 8))();
  local_8 = CONCAT31(local_8._1_3_,0x48);
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_3c = (undefined1 **)0x4fe2a4;
      FID_conflict__free(piVar5);
    }
  }
  *(byte *)(in_ECX + 0x1f7) = *(byte *)(in_ECX + 0x1f7) | 0x60;
  ppuVar1 = (undefined1 **)(in_ECX + 0x1dd);
  ppuStack_3c = (undefined1 **)0x1f4;
  *(undefined2 *)(in_ECX + 0x210) = 0x101;
  *(undefined1 *)((int)in_ECX + 0x842) = 0;
  local_40 = (undefined1 **)in_ECX[0x1e2];
  puStack_44 = (undefined4 *)in_ECX[0x1e1];
  FUN_006e9790();
  ppuStack_3c = (undefined1 **)0x1000280;
  local_40 = (undefined1 **)0x4fe2ee;
  FUN_006e6170();
  ppuStack_3c = (undefined1 **)0x1000281;
  local_40 = (undefined1 **)0x4fe304;
  FUN_006e6170();
  if (ppuVar1 != (undefined1 **)0x0) {
    ppuStack_3c = (undefined1 **)0x4fe311;
    (**(code **)(*ppuVar1 + 0x28))();
    local_40 = (undefined1 **)0x4fe31c;
    ppuStack_3c = ppuVar1;
    FUN_006e5050();
  }
  ppuStack_3c = (undefined1 **)0x4fe326;
  FUN_004f9dd0();
  ppuStack_3c = (undefined1 **)0x4fe330;
  param_1 = (undefined1 *)FUN_004f9dd0();
  ppuStack_3c = (undefined1 **)0x64;
  local_40 = (undefined1 **)in_ECX[0x216];
  ppuVar1 = (undefined1 **)(in_ECX + 0x211);
  puStack_44 = (undefined4 *)in_ECX[0x215];
  FUN_006e9790();
  if (in_ECX[0x238] != 0x24) {
    in_ECX[0x238] = 0x24;
    FUN_006e6400(&puStack_44);
    FUN_006ce9f0(1);
  }
  if (ppuVar1 != (undefined1 **)0x0) {
    ppuStack_3c = (undefined1 **)0x4fe386;
    (**(code **)(*ppuVar1 + 0x28))();
    local_40 = (undefined1 **)0x4fe391;
    ppuStack_3c = ppuVar1;
    FUN_006e5050();
  }
  ppuStack_3c = (undefined1 **)0x4fe39e;
  param_1 = (undefined1 *)FUN_004f9f70();
  ppuStack_3c = (undefined1 **)0x4fe3aa;
  FUN_004f9dd0();
  ppuStack_3c = (undefined1 **)0x4fe3be;
  FUN_0045c990();
  ppuStack_3c = &local_14;
  local_8._0_1_ = 0x4d;
  ppuVar1 = (undefined1 **)(in_ECX + 0x246);
  local_40 = (undefined1 **)0x4fe3d8;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x48);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_3c = (undefined1 **)0x4fe3fc;
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX[0x26d] != 0x22) {
    in_ECX[0x26d] = 0x22;
    FUN_006e6400(&puStack_44);
    FUN_006ce9f0(1);
  }
  ppuStack_3c = (undefined1 **)0x64;
  local_40 = (undefined1 **)in_ECX[0x24b];
  puStack_44 = (undefined4 *)in_ECX[0x24a];
  FUN_006e9790();
  if (ppuVar1 != (undefined1 **)0x0) {
    ppuStack_3c = (undefined1 **)0x4fe449;
    (**(code **)(*ppuVar1 + 0x28))();
    local_40 = (undefined1 **)0x4fe454;
    ppuStack_3c = ppuVar1;
    FUN_006e5050();
  }
  ppuStack_3c = (undefined1 **)0x4fe45e;
  FUN_004f9dd0();
  if (in_ECX != (undefined4 *)0xffffff80) {
    ppuStack_3c = (undefined1 **)0x4fe477;
    FUN_004097d0();
  }
  ppuStack_3c = (undefined1 **)0x96;
  local_40 = (undefined1 **)in_ECX[0x27f];
  ppuVar1 = (undefined1 **)(in_ECX + 0x27a);
  puStack_44 = (undefined4 *)in_ECX[0x27e];
  FUN_006e9790();
  ppuStack_3c = (undefined1 **)0x4fe4a5;
  FUN_0045c990();
  ppuStack_3c = &local_14;
  local_8._0_1_ = 0x4e;
  local_40 = (undefined1 **)0x4fe4b9;
  FUN_006e8760();
  local_8._0_1_ = 0x48;
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_3c = (undefined1 **)0x4fe4dd;
      FID_conflict__free(piVar5);
    }
  }
  ppuStack_3c = (undefined1 **)0x4fe4f1;
  FUN_0045c990();
  ppuStack_3c = &local_14;
  local_8._0_1_ = 0x4f;
  local_40 = (undefined1 **)0x4fe505;
  FUN_006e8760();
  local_8._0_1_ = 0x48;
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_3c = (undefined1 **)0x4fe529;
      FID_conflict__free(piVar5);
    }
  }
  ppuStack_3c = (undefined1 **)0x4fe53d;
  FUN_0045c990();
  ppuStack_3c = &local_14;
  local_8._0_1_ = 0x50;
  local_40 = (undefined1 **)0x4fe551;
  FUN_006e8760();
  local_8._0_1_ = 0x48;
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_3c = (undefined1 **)0x4fe575;
      FID_conflict__free(piVar5);
    }
  }
  ppuStack_3c = (undefined1 **)0x4fe589;
  FUN_0045c990();
  ppuStack_3c = &local_14;
  local_8._0_1_ = 0x51;
  local_40 = (undefined1 **)0x4fe59d;
  FUN_006e8760();
  local_8._0_1_ = 0x48;
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_3c = (undefined1 **)0x4fe5c1;
      FID_conflict__free(piVar5);
    }
  }
  ppuStack_3c = (undefined1 **)0x4fe5d5;
  FUN_0045c990();
  local_8._0_1_ = 0x52;
  ppuStack_3c = (undefined1 **)0x4fe5e7;
  FUN_006e2900();
  local_8 = CONCAT31(local_8._1_3_,0x48);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_3c = (undefined1 **)0x4fe60b;
      FID_conflict__free(piVar5);
    }
  }
  if (ppuVar1 != (undefined1 **)0x0) {
    ppuStack_3c = (undefined1 **)0x4fe61b;
    (**(code **)(*ppuVar1 + 0x28))();
    local_40 = (undefined1 **)0x4fe626;
    ppuStack_3c = ppuVar1;
    FUN_006e5050();
  }
  ppuStack_3c = (undefined1 **)0x4fe630;
  FUN_004f9dd0();
  ppuStack_3c = (undefined1 **)0x4fe63a;
  FUN_004f9dd0();
  ppuStack_3c = (undefined1 **)0x4fe64e;
  FUN_0045c990();
  ppuStack_3c = &local_14;
  local_8._0_1_ = 0x53;
  ppuVar1 = (undefined1 **)(in_ECX + 0x2ad);
  local_40 = (undefined1 **)0x4fe668;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x48);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_3c = (undefined1 **)0x4fe68c;
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX[0x2d4] != 0x22) {
    in_ECX[0x2d4] = 0x22;
    FUN_006e6400(&puStack_44);
    FUN_006ce9f0(1);
  }
  ppuStack_3c = (undefined1 **)0x96;
  local_40 = (undefined1 **)in_ECX[0x2b2];
  puStack_44 = (undefined4 *)in_ECX[0x2b1];
  FUN_006e9790();
  if (ppuVar1 != (undefined1 **)0x0) {
    ppuStack_3c = (undefined1 **)0x4fe6dc;
    (**(code **)(*ppuVar1 + 0x28))();
    local_40 = (undefined1 **)0x4fe6e7;
    ppuStack_3c = ppuVar1;
    FUN_006e5050();
  }
  ppuStack_3c = (undefined1 **)0x4fe6f3;
  FUN_004f9dd0();
  if (in_ECX != (undefined4 *)0xffffff80) {
    ppuStack_3c = (undefined1 **)0x4fe70c;
    FUN_004097d0();
  }
  ppuStack_3c = (undefined1 **)0x4fe71d;
  FUN_0045c990();
  local_8._0_1_ = 0x54;
  ppuStack_3c = (undefined1 **)0x4fe733;
  FUN_006e2900();
  local_8 = CONCAT31(local_8._1_3_,0x48);
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_3c = (undefined1 **)0x4fe757;
      FID_conflict__free(piVar5);
    }
  }
  ppuStack_3c = (undefined1 **)0xc8;
  local_40 = (undefined1 **)in_ECX[0x2e6];
  puStack_44 = (undefined4 *)in_ECX[0x2e5];
  FUN_006e9790();
  if (in_ECX + 0x2e1 != (int *)0x0) {
    ppuStack_3c = (undefined1 **)0x4fe789;
    (**(code **)(in_ECX[0x2e1] + 0x28))();
    ppuStack_3c = (undefined1 **)(in_ECX + 0x2e1);
    local_40 = (undefined1 **)0x4fe79a;
    FUN_006e5050();
  }
  ppuStack_3c = (undefined1 **)0x4fe7a3;
  FUN_004f9dd0();
  ppuStack_3c = (undefined1 **)0x4fe7ac;
  FUN_004f9dd0();
  ppuStack_3c = (undefined1 **)0x4fe7c0;
  FUN_0045c990();
  ppuStack_3c = &param_1;
  local_8._0_1_ = 0x55;
  local_40 = (undefined1 **)0x4fe7d8;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x48);
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_3c = (undefined1 **)0x4fe7fc;
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX[0x33b] != 0x22) {
    in_ECX[0x33b] = 0x22;
    FUN_006e6400(&puStack_44);
    FUN_006ce9f0(1);
  }
  ppuStack_3c = (undefined1 **)0x96;
  local_40 = (undefined1 **)in_ECX[0x319];
  puStack_44 = (undefined4 *)in_ECX[0x318];
  FUN_006e9790();
  if (in_ECX + 0x314 != (int *)0x0) {
    ppuStack_3c = (undefined1 **)0x4fe85c;
    (**(code **)(in_ECX[0x314] + 0x28))();
    ppuStack_3c = (undefined1 **)(in_ECX + 0x314);
    local_40 = (undefined1 **)0x4fe86d;
    FUN_006e5050();
  }
  ppuStack_3c = (undefined1 **)0x4fe876;
  FUN_004f9dd0();
  if (in_ECX != (undefined4 *)0xffffff80) {
    ppuStack_3c = (undefined1 **)0x4fe88e;
    FUN_004097d0();
  }
  ppuStack_3c = (undefined1 **)0x64;
  local_40 = (undefined1 **)in_ECX[0x34d];
  puStack_44 = (undefined4 *)in_ECX[0x34c];
  FUN_006e9790();
  ppuStack_3c = (undefined1 **)0x4fe8ba;
  FUN_0045c990();
  ppuStack_3c = &param_1;
  local_8._0_1_ = 0x56;
  local_40 = (undefined1 **)0x4fe8d2;
  FUN_006e8760();
  local_8._0_1_ = 0x48;
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_3c = (undefined1 **)0x4fe8f6;
      FID_conflict__free(piVar5);
    }
  }
  ppuStack_3c = (undefined1 **)0x4fe90a;
  FUN_0045c990();
  ppuStack_3c = &param_1;
  local_8._0_1_ = 0x57;
  local_40 = (undefined1 **)0x4fe922;
  FUN_006e8760();
  local_8._0_1_ = 0x48;
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_3c = (undefined1 **)0x4fe946;
      FID_conflict__free(piVar5);
    }
  }
  ppuStack_3c = (undefined1 **)0x4fe95a;
  FUN_0045c990();
  local_8._0_1_ = 0x58;
  ppuStack_3c = (undefined1 **)0x4fe970;
  FUN_006e2900();
  local_8 = CONCAT31(local_8._1_3_,0x48);
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_3c = (undefined1 **)0x4fe994;
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX + 0x348 != (int *)0x0) {
    ppuStack_3c = (undefined1 **)0x4fe9a8;
    (**(code **)(in_ECX[0x348] + 0x28))();
    ppuStack_3c = (undefined1 **)(in_ECX + 0x348);
    local_40 = (undefined1 **)0x4fe9b8;
    FUN_006e5050();
  }
  ppuStack_3c = (undefined1 **)(in_ECX + 0x122);
  ppuVar1 = (undefined1 **)(in_ECX + 0xf3);
  local_40 = (undefined1 **)0x4fe9ce;
  FUN_004f9860();
  if (ppuVar1 != (undefined1 **)0x0) {
    ppuStack_3c = (undefined1 **)0x4fe9db;
    (**(code **)(*ppuVar1 + 0x28))();
    local_40 = (undefined1 **)0x4fe9e5;
    ppuStack_3c = ppuVar1;
    FUN_006e5050();
  }
  ppuStack_3c = (undefined1 **)0x4fe9ed;
  FUN_005b2c70();
  ppuStack_3c = (undefined1 **)0x4fe9fa;
  FUN_004f54f0();
  ppuVar1 = (undefined1 **)(in_ECX + 0x382);
  local_40 = (undefined1 **)0x4fea0a;
  ppuStack_3c = (undefined1 **)(in_ECX + 0x3b1);
  FUN_004f9860();
  if (ppuVar1 != (undefined1 **)0x0) {
    ppuStack_3c = (undefined1 **)0x4fea17;
    (**(code **)(*ppuVar1 + 0x28))();
    local_40 = (undefined1 **)0x4fea21;
    ppuStack_3c = ppuVar1;
    FUN_006e5050();
  }
  ppuStack_3c = (undefined1 **)(in_ECX + 0x605);
  ppuVar1 = (undefined1 **)(in_ECX + 0x5d6);
  local_40 = (undefined1 **)0x4fea37;
  FUN_004f9860();
  if (ppuVar1 != (undefined1 **)0x0) {
    ppuStack_3c = (undefined1 **)0x4fea44;
    (**(code **)(*ppuVar1 + 0x28))();
    local_40 = (undefined1 **)0x4fea4e;
    ppuStack_3c = ppuVar1;
    FUN_006e5050();
  }
  ppuStack_3c = (undefined1 **)0x64;
  local_40 = (undefined1 **)in_ECX[0x7a3];
  puStack_44 = (undefined4 *)in_ECX[0x7a2];
  FUN_006e9790();
  puStack_44 = (undefined4 *)0x80000000;
  local_40 = (undefined1 **)0xbfefae14;
  ppuStack_3c = (undefined1 **)0xa0000000;
  FUN_004f9700(in_ECX + 0x79e,0);
  in_ECX[0x901] = 0x15;
  if (in_ECX != (undefined4 *)0xffffff74) {
    ppuStack_3c = (undefined1 **)0x4feaac;
    FUN_004097d0();
  }
  ppuStack_3c = (undefined1 **)0x14;
  local_40 = (undefined1 **)in_ECX[0x8c9];
  puStack_44 = (undefined4 *)in_ECX[0x8c8];
  FUN_006e9790();
  puStack_44 = (undefined4 *)0x0;
  local_40 = (undefined1 **)0x40340000;
  ppuStack_3c = (undefined1 **)0x0;
  FUN_004f9700(in_ECX + 0x8c4,0);
  local_40 = (undefined1 **)0x4feaf5;
  ppuStack_3c = (undefined1 **)(in_ECX + 0x76f);
  FUN_004f9860();
  ppuStack_3c = (undefined1 **)0x4feafc;
  operator_new(0x28);
  ppuStack_3c = (undefined1 **)0x4feb10;
  puVar4 = (undefined4 *)FUN_00468a40();
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    puVar4[1] = puVar4[1] + 1;
    UNLOCK();
  }
  if ((undefined4 *)in_ECX[0x95d] != puVar4) {
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      puVar4[1] = puVar4[1] + 1;
      UNLOCK();
    }
    puVar3 = (undefined4 *)in_ECX[0x95d];
    in_ECX[0x95d] = puVar4;
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      piVar5 = puVar3 + 1;
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        ppuStack_3c = (undefined1 **)0x4feb4a;
        (**(code **)*puVar3)();
      }
    }
  }
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = puVar4 + 1;
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ppuStack_3c = (undefined1 **)0x4feb5e;
      (**(code **)*puVar4)();
    }
  }
  ppuStack_3c = (undefined1 **)0x64;
  local_40 = (undefined1 **)in_ECX[0x945];
  puStack_44 = (undefined4 *)in_ECX[0x944];
  FUN_006e9790();
  local_40 = (undefined1 **)0x4feb88;
  ppuStack_3c = (undefined1 **)(in_ECX + 0x940);
  FUN_004f9860();
  ppuVar1 = (undefined1 **)(in_ECX + 0x740);
  local_40 = (undefined1 **)0x4feb98;
  ppuStack_3c = (undefined1 **)(in_ECX + 0x911);
  FUN_004f9860();
  if (ppuVar1 != (undefined1 **)0x0) {
    ppuStack_3c = (undefined1 **)0x4feba5;
    (**(code **)(*ppuVar1 + 0x28))();
    local_40 = (undefined1 **)0x4febaf;
    ppuStack_3c = ppuVar1;
    FUN_006e5050();
  }
  ppuStack_3c = (undefined1 **)0x4febc2;
  (**(code **)(in_ECX[0x28] + 0x28))();
  ppuStack_3c = (undefined1 **)0xffffffff;
  puStack_44 = (undefined4 *)0x4febcc;
  local_40 = (undefined1 **)(in_ECX + 0x28);
  FUN_006e5050();
  local_40 = (undefined1 **)0x4febd4;
  FUN_005b2c00();
  local_40 = (undefined1 **)0x4febdf;
  FUN_004f54f0();
  ExceptionList = local_10;
  return;
}

