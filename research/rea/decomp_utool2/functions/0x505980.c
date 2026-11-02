// rea decompile_all
// name: FUN_00505980
// address: 0x505980
// body: available
// range: 0x505980-0x506354 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00505980(undefined1 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_ECX;
  int extraout_ECX;
  int *piVar3;
  undefined8 uStack_44;
  int *local_3c;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00707c8f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  *(undefined4 *)(extraout_ECX + 0x74) = 0;
  *(undefined ***)(extraout_ECX + 0x70) = DragDropHelper_Container::vftable;
  *(undefined1 *)(extraout_ECX + 0x78) = 0;
  *(undefined ***)(extraout_ECX + 0x7c) = juce::Label::Listener::vftable;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  *(undefined4 *)(extraout_ECX + 0x80) = GlobalNotifierListener::vftable;
  iVar1 = FUN_00560890();
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x18));
  FUN_00447220();
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x18));
  in_ECX[0x21] = PlaylistContentList::Listener::vftable;
  *in_ECX = PlaylistEditor::vftable;
  in_ECX[0x1c] = PlaylistEditor::vftable;
  in_ECX[0x1f] = PlaylistEditor::vftable;
  *(undefined4 *)(extraout_ECX + 0x80) = PlaylistEditor::vftable;
  in_ECX[0x21] = PlaylistEditor::vftable;
  in_ECX[0x22] = param_1;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  local_8._0_1_ = 7;
  in_ECX[0x25] = 0;
  _local_3c = 0x739ba000505a79;
  FUN_0045c990();
  _local_3c = 0xa00505a89;
  FUN_004f99d0();
  local_8._0_1_ = 8;
  piVar2 = (int *)(PTR_DAT_00c7ed68 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  _local_3c = 0x505ab3;
  FUN_004f99d0();
  local_8._0_1_ = 9;
  piVar2 = (int *)(PTR_DAT_00c7ed68 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  _local_3c = 0x505add;
  FUN_004f99d0();
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0xc);
  _local_3c = CONCAT44(0x505b04,local_3c);
  FUN_006e8b40();
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
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x11);
  _local_3c = CONCAT44(0x505b4e,local_3c);
  FUN_006e8b40();
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
  local_8._0_1_ = 0x14;
  piVar2 = (int *)(PTR_DAT_00c7ed68 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  _local_3c = 0x505b9b;
  FUN_004f99d0();
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x17);
  _local_3c = CONCAT44(0x505bc0,local_3c);
  FUN_006e8b40();
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
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x1c);
  _local_3c = CONCAT44(0x505c08,local_3c);
  FUN_006e8b40();
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
  local_8._0_1_ = 0x1f;
  FUN_004fa670();
  local_8._0_1_ = 0x20;
  piVar2 = (int *)(PTR_DAT_00c7ed68 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  _local_3c = 0x505c64;
  FUN_004f99d0();
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x23);
  _local_3c = CONCAT44(0x505c89,local_3c);
  FUN_006e8b40();
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
  param_1 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x28);
  _local_3c = CONCAT44(0x505cd1,local_3c);
  FUN_006e8b40();
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
  local_8._0_1_ = 0x2b;
  _local_3c = 0x739bb400505d0b;
  FUN_0045c990();
  _local_3c = 0xa00505d1b;
  FUN_004f99d0();
  in_ECX[0x2ad] = 0;
  in_ECX[0x2ae] = 0;
  local_8._0_1_ = 0x2e;
  _local_3c = 0x739c3400505d46;
  FUN_0045c990();
  _local_3c = 0xa00505d56;
  FUN_004f99d0();
  local_8._0_1_ = 0x2f;
  _local_3c = CONCAT44(0x505d6d,local_3c);
  FUN_00503130();
  in_ECX[0x3c5] = &DAT_00bfe12c;
  local_8._0_1_ = 0x31;
  FUN_0045c990();
  local_8._0_1_ = 0x32;
  _local_3c = CONCAT44(0x505da0,local_3c);
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x31);
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
  if (in_ECX[0xda] != 0x22) {
    in_ECX[0xda] = 0x22;
    uStack_44 = CONCAT44(&local_3c,0x505dea);
    FUN_006e6400();
    uStack_44 = 0x100505df3;
    FUN_006ce9f0();
  }
  _local_3c = *(ulonglong *)(in_ECX + 0xb7);
  uStack_44 = CONCAT44(0x505e04,(undefined1 *)uStack_44);
  FUN_006e9790();
  _local_3c = 0x4059000000000000;
  uStack_44 = ZEXT48(in_ECX + 0xb3);
  FUN_004f9700();
  if (in_ECX != (undefined4 *)0xffffff84) {
    FUN_004097d0();
  }
  _local_3c = *(ulonglong *)(in_ECX + 0xeb);
  uStack_44 = CONCAT44(0x505e50,(undefined1 *)uStack_44);
  FUN_006e9790();
  FUN_0045c990();
  local_8._0_1_ = 0x33;
  (**(code **)(in_ECX[0x103] + 8))();
  local_8._0_1_ = 0x31;
  piVar2 = (int *)(param_1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      _local_3c = CONCAT44(0x505e9b,local_3c);
      FID_conflict__free(piVar2);
    }
  }
  _local_3c = CONCAT44(in_ECX + 0xe7,0x505eae);
  FUN_004f9860();
  _local_3c = 0x40340000;
  uStack_44 = 0;
  FUN_004f9700(in_ECX + 0x84);
  FUN_004f96b0();
  _local_3c = CONCAT44(0x505ef1,local_3c);
  FUN_0045c990();
  local_8._0_1_ = 0x34;
  _local_3c = CONCAT44(&param_1,0x505f0b);
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x31);
  piVar2 = (int *)(param_1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      _local_3c = CONCAT44(0x505f2f,local_3c);
      FID_conflict__free(piVar2);
    }
  }
  if (in_ECX[0x171] != 0x22) {
    in_ECX[0x171] = 0x22;
    uStack_44._0_4_ = (undefined1 *)((int)&uStack_44 + 4);
    FUN_006e6400();
    uStack_44 = CONCAT44(uStack_44._4_4_,1);
    FUN_006ce9f0();
  }
  _local_3c = CONCAT44(100,in_ECX[0x14f]);
  uStack_44 = CONCAT44(in_ECX[0x14e],0x505f6f);
  FUN_006e9790();
  _local_3c = 0x40590000;
  uStack_44 = 0;
  FUN_004f9700(in_ECX + 0x14a);
  if (in_ECX != (undefined4 *)0xffffff84) {
    _local_3c = CONCAT44(0x505fa1,local_3c);
    FUN_004097d0();
  }
  _local_3c = CONCAT44(0x505fb2,local_3c);
  FUN_0045c990();
  local_8._0_1_ = 0x35;
  _local_3c = CONCAT44(0x505fc8,local_3c);
  (**(code **)(in_ECX[0x19a] + 8))();
  local_8 = CONCAT31(local_8._1_3_,0x31);
  piVar2 = (int *)(param_1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      _local_3c = CONCAT44(piVar2,0x505fec);
      FID_conflict__free(piVar2);
    }
  }
  *(byte *)(in_ECX + 0x198) = *(byte *)(in_ECX + 0x198) | 0x60;
  _local_3c = 0x1400000064;
  *(undefined2 *)(in_ECX + 0x1b1) = 0x101;
  *(undefined1 *)((int)in_ECX + 0x6c6) = 0;
  uStack_44 = *(ulonglong *)(in_ECX + 0x182);
  FUN_006e9790();
  _local_3c = CONCAT44(DAT_00c8a720,0x1000280);
  uStack_44 = CONCAT44(0x506033,(undefined1 *)uStack_44);
  FUN_006e6170();
  _local_3c = CONCAT44(DAT_00c7ebb4,0x1000281);
  uStack_44 = CONCAT44(0x506049,(undefined1 *)uStack_44);
  FUN_006e6170();
  uStack_44 = 0xbff0000000000000;
  _local_3c = 0xbfe99999a0000000;
  FUN_004f9700(in_ECX + 0x17e,0);
  _local_3c = CONCAT44(0x506080,local_3c);
  FUN_004f96b0();
  _local_3c = 0x1400000064;
  uStack_44 = *(ulonglong *)(in_ECX + 0x1b6);
  FUN_006e9790();
  if (in_ECX[0x1d9] != 0x24) {
    in_ECX[0x1d9] = 0x24;
    FUN_006e6400(&uStack_44);
    FUN_006ce9f0(1);
  }
  uStack_44 = 0x4059000000000000;
  _local_3c = 0x4059000000000000;
  FUN_004f9700(in_ECX + 0x1b2,0);
  uStack_44 = 0x4034000000000000;
  _local_3c = 0x4034000000000000;
  FUN_004f9700(in_ECX + 0x11b,0);
  _local_3c = CONCAT44(0x506122,local_3c);
  FUN_004f9650();
  uStack_44 = 0xbfe8000000000000;
  _local_3c = 0xbfe6666660000000;
  piVar2 = in_ECX + 0x26;
  FUN_004f9700(in_ECX + 0x55,0);
  _local_3c = CONCAT44(0x506157,local_3c);
  FUN_004f96b0();
  _local_3c = 0x739c0800506168;
  FUN_0045c990();
  local_8._0_1_ = 0x36;
  _local_3c = ZEXT48(&param_1);
  uStack_44 = CONCAT44(0x506180,(undefined1 *)uStack_44);
  FUN_006e4900();
  local_8._0_1_ = 0x31;
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      _local_3c = CONCAT44(piVar3,0x5061a4);
      FID_conflict__free(piVar3);
    }
  }
  _local_3c = 0x14000000fa;
  uStack_44 = *(ulonglong *)(in_ECX + 0x21a);
  FUN_006e9790();
  uStack_44 = 0x4034000000000000;
  _local_3c = 0x4034000000000000;
  FUN_004f9700(in_ECX + 0x216,0);
  _local_3c = CONCAT44(0x5061fd,local_3c);
  FUN_004f96b0();
  _local_3c = 0x739c180050620e;
  FUN_0045c990();
  local_8._0_1_ = 0x37;
  _local_3c = ZEXT48(&param_1);
  uStack_44 = CONCAT44(0x506226,(undefined1 *)uStack_44);
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x31);
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      _local_3c = CONCAT44(piVar3,0x506247);
      FID_conflict__free(piVar3);
    }
  }
  _local_3c = 0x14000000fa;
  uStack_44 = *(ulonglong *)(in_ECX + 0x24e);
  FUN_006e9790();
  uStack_44 = 0x4034000000000000;
  _local_3c = 0x4034000000000000;
  FUN_004f9700(in_ECX + 0x24a,0);
  _local_3c = CONCAT44(0x5062a2,local_3c);
  FUN_004f9650();
  _local_3c = 0x4062c00000000000;
  uStack_44 = 0xbfd3333340000000;
  FUN_004f9700(in_ECX + 0x1e7,0);
  if (piVar2 != (int *)0x0) {
    _local_3c = 0x1005062da;
    (**(code **)(*piVar2 + 0x28))();
    _local_3c = CONCAT44(0xffffffff,piVar2);
    uStack_44 = CONCAT44(0x5062e4,(undefined1 *)uStack_44);
    FUN_006e5050();
  }
  piVar2 = in_ECX + 0x27e;
  if (piVar2 != (int *)0x0) {
    _local_3c = 0x1005062f7;
    (**(code **)(*piVar2 + 0x28))();
    _local_3c = CONCAT44(0xffffffff,piVar2);
    uStack_44 = CONCAT44(0x506301,(undefined1 *)uStack_44);
    FUN_006e5050();
  }
  piVar2 = in_ECX + 0x2af;
  uStack_44 = 0xbff0000000000000;
  _local_3c = 0xbff0000000000000;
  FUN_004f9700(in_ECX + 0x2de,0);
  if (piVar2 != (int *)0x0) {
    uVar4 = 1;
    local_3c = (int *)0x506335;
    (**(code **)(*piVar2 + 0x28))();
    _local_3c = CONCAT44(uVar4,0xffffffff);
    uStack_44 = CONCAT44(piVar2,0x50633f);
    FUN_006e5050();
  }
  ExceptionList = local_10;
  return in_ECX;
}

