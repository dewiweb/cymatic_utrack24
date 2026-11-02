// rea decompile_all
// name: FUN_005abce0
// address: 0x5abce0
// body: available
// range: 0x5abce0-0x5acbd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005abce0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *in_ECX;
  int extraout_ECX;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uStack_70;
  undefined4 *puStack_6c;
  undefined4 **ppuStack_68;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined **local_24;
  undefined4 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00718169;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = (undefined4 *)0x0;
  FUN_006ea2c0();
  *(undefined ***)(extraout_ECX + 0x70) = juce::Button::Listener::vftable;
  *(undefined ***)(extraout_ECX + 0x74) = PnPDetector::Listener::vftable;
  *(undefined ***)(extraout_ECX + 0x78) = FileSelector::Listener::vftable;
  puVar4 = (undefined4 *)(extraout_ECX + 0x7c);
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  *puVar4 = GlobalNotifierListener::vftable;
  local_2c = puVar4;
  local_28 = puVar4;
  iVar3 = FUN_00560890();
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x18));
  FUN_00447220();
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x18));
  local_8._0_1_ = 5;
  *puVar4 = PanelSettingsComponent::ViewPane::vftable;
  *in_ECX = PanelSettingsComponent::ViewPane::vftable;
  in_ECX[0x1c] = PanelSettingsComponent::ViewPane::vftable;
  in_ECX[0x1d] = PanelSettingsComponent::ViewPane::vftable;
  in_ECX[0x1e] = PanelSettingsComponent::ViewPane::vftable;
  FUN_0045c990();
  FUN_004f99d0();
  local_28 = (undefined4 *)&DAT_00bfe12c;
  local_2c = (undefined4 *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_006e8b40();
  piVar7 = local_2c + -2;
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  piVar7 = in_ECX + 0x83;
  *piVar7 = 0;
  in_ECX[0x84] = 0;
  in_ECX[0x85] = 0;
  local_8._0_1_ = 0xc;
  FUN_0045c990();
  FUN_004f99d0();
  local_8._0_1_ = 0xd;
  FUN_0045c990();
  local_8._0_1_ = 0xe;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0xf);
  ppuStack_68 = &local_2c;
  puStack_6c = (undefined4 *)0x5abea3;
  FUN_005073d0();
  piVar6 = local_2c + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_8._0_1_ = 0x12;
  piVar6 = in_ECX + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  FUN_0045c990();
  local_8._0_1_ = 0x13;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0x14);
  ppuStack_68 = &local_2c;
  puStack_6c = (undefined4 *)0x5abf43;
  FUN_005073d0();
  piVar6 = local_2c + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = in_ECX + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_28 = (undefined4 *)&DAT_00bfe12c;
  local_2c = (undefined4 *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x19);
  FUN_006e8b40();
  piVar6 = local_2c + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_8._0_1_ = 0x1c;
  FUN_0045c990();
  local_8._0_1_ = 0x1d;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0x1e);
  ppuStack_68 = &local_2c;
  puStack_6c = (undefined4 *)0x5ac02b;
  FUN_005073d0();
  piVar6 = local_2c + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_8._0_1_ = 0x21;
  piVar6 = in_ECX + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  FUN_0045c990();
  FUN_004f99d0();
  in_ECX[0x48d] = 0;
  in_ECX[0x48e] = 0;
  in_ECX[0x48f] = 0;
  local_8._0_1_ = 0x23;
  FUN_0045c990();
  FUN_004f99d0();
  local_8._0_1_ = 0x24;
  FUN_005aa800();
  local_8._0_1_ = 0x25;
  FUN_0045c990();
  local_8._0_1_ = 0x26;
  FUN_006e4900();
  local_8._0_1_ = 0x25;
  piVar6 = local_2c + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  FUN_006e9790();
  FUN_004f9860();
  puVar4 = operator_new(0xe0);
  local_8._0_1_ = 0x27;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0x28);
  local_2c = (undefined4 *)0x1;
  FUN_006e3660();
  *puVar4 = juce::ToggleButton::vftable;
  puVar4[0x1c] = juce::ToggleButton::vftable;
  *(undefined1 *)((int)puVar4 + 0xd9) = 1;
  local_8 = 0x25;
  piVar6 = (int *)((int)local_28 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_24 = &PTR_vftable_00c7ed44;
  local_1c = 4;
  local_8._0_1_ = 0x2a;
  FUN_0061f730();
  FUN_0061fa00();
  local_8 = CONCAT31(local_8._1_3_,0x2b);
  FUN_00637060();
  piVar6 = (int *)((int)local_28 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,0x25);
  (**(code **)(*local_24 + 0x54))();
  if ((int)in_ECX[0x84] < in_ECX[0x85] + 1) {
    FUN_00409cf0();
  }
  iVar3 = in_ECX[0x85];
  in_ECX[0x85] = iVar3 + 1;
  *(undefined4 **)(*piVar7 + iVar3 * 4) = puVar4;
  puVar4 = operator_new(0xe0);
  local_8._0_1_ = 0x2c;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0x2d);
  local_2c = (undefined4 *)0x2;
  FUN_006e3660();
  *puVar4 = juce::ToggleButton::vftable;
  puVar4[0x1c] = juce::ToggleButton::vftable;
  *(undefined1 *)((int)puVar4 + 0xd9) = 1;
  local_8 = 0x25;
  piVar6 = (int *)((int)local_28 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_24 = &PTR_vftable_00c7ed44;
  local_1c = 3;
  local_8._0_1_ = 0x2f;
  FUN_0061f730();
  FUN_0061fa00();
  local_8 = CONCAT31(local_8._1_3_,0x30);
  FUN_00637060();
  piVar6 = (int *)((int)local_28 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,0x25);
  (**(code **)(*local_24 + 0x54))();
  if ((int)in_ECX[0x84] < in_ECX[0x85] + 1) {
    FUN_00409cf0();
  }
  iVar3 = in_ECX[0x85];
  in_ECX[0x85] = iVar3 + 1;
  *(undefined4 **)(*piVar7 + iVar3 * 4) = puVar4;
  puVar4 = operator_new(0xe0);
  local_8._0_1_ = 0x31;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0x32);
  local_2c = (undefined4 *)0x4;
  FUN_006e3660();
  *puVar4 = juce::ToggleButton::vftable;
  puVar4[0x1c] = juce::ToggleButton::vftable;
  *(undefined1 *)((int)puVar4 + 0xd9) = 1;
  local_8 = 0x25;
  piVar6 = (int *)((int)local_28 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_24 = &PTR_vftable_00c7ed44;
  local_1c = 1;
  local_8._0_1_ = 0x34;
  FUN_0061f730();
  FUN_0061fa00();
  local_8 = CONCAT31(local_8._1_3_,0x35);
  FUN_00637060();
  piVar6 = (int *)((int)local_28 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,0x25);
  (**(code **)(*local_24 + 0x54))();
  if ((int)in_ECX[0x84] < in_ECX[0x85] + 1) {
    FUN_00409cf0();
  }
  iVar3 = in_ECX[0x85];
  in_ECX[0x85] = iVar3 + 1;
  *(undefined4 **)(*piVar7 + iVar3 * 4) = puVar4;
  puVar4 = operator_new(0xe0);
  local_8._0_1_ = 0x36;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0x37);
  local_2c = (undefined4 *)0x8;
  FUN_006e3660();
  *puVar4 = juce::ToggleButton::vftable;
  puVar4[0x1c] = juce::ToggleButton::vftable;
  *(undefined1 *)((int)puVar4 + 0xd9) = 1;
  local_8 = 0x25;
  piVar6 = (int *)((int)local_28 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_24 = &PTR_vftable_00c7ed44;
  local_1c = 2;
  local_8._0_1_ = 0x39;
  FUN_0061f730();
  FUN_0061fa00();
  local_8 = CONCAT31(local_8._1_3_,0x3a);
  FUN_00637060();
  piVar6 = (int *)((int)local_28 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,0x25);
  (**(code **)(*local_24 + 0x54))();
  if ((int)in_ECX[0x84] < in_ECX[0x85] + 1) {
    FUN_00409cf0();
  }
  iVar3 = in_ECX[0x85];
  uVar8 = 0;
  in_ECX[0x85] = iVar3 + 1;
  *(undefined4 **)(*piVar7 + iVar3 * 4) = puVar4;
  if (0 < (int)in_ECX[0x85]) {
    do {
      if (uVar8 < (uint)in_ECX[0x85]) {
        iVar3 = *(int *)(*piVar7 + uVar8 * 4);
      }
      else {
        iVar3 = 0;
      }
      ppuStack_68 = *(undefined4 ***)(iVar3 + 0x14);
      puStack_6c = *(undefined4 **)(iVar3 + 0x10);
      uStack_70 = 0x5ac615;
      FUN_006e9790();
      ppuStack_68 = (undefined4 **)0x5ac631;
      FUN_004f9860();
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)in_ECX[0x85]);
  }
  ppuStack_68 = (undefined4 **)0x0;
  puStack_6c = (undefined4 *)0x0;
  uStack_70 = 0x5ac656;
  FUN_006e9790();
  (**(code **)(in_ECX[0x20] + 0x28))();
  puVar4 = (undefined4 *)in_ECX[0x23];
  iVar3 = -1;
  if (puVar4 != in_ECX) {
    if (puVar4 == (undefined4 *)0x0) {
      if ((*(byte *)(in_ECX + 0x3a) & 1) != 0) {
        puVar4 = (undefined4 *)FUN_0068db10();
        *(byte *)(in_ECX + 0x3a) = *(byte *)(in_ECX + 0x3a) & 0xfe;
        if (puVar4 != (undefined4 *)0x0) {
          ppuStack_68 = (undefined4 **)0x5ac6cd;
          (**(code **)*puVar4)();
        }
        if (DAT_00c8a67c == 0) {
          ppuStack_68 = (undefined4 **)0x5ac6e0;
          local_28 = operator_new(0xd0);
          local_8._0_1_ = 0x3b;
          DAT_00c8a67c = FUN_006cb960();
          local_8 = CONCAT31(local_8._1_3_,0x25);
        }
        ppuStack_68 = (undefined4 **)0x5ac703;
        FUN_00415ff0();
      }
    }
    else {
      piVar6 = (int *)puVar4[10];
      piVar7 = piVar6 + puVar4[0xc];
      for (; piVar6 != piVar7; piVar6 = piVar6 + 1) {
        if (in_ECX + 0x20 == (int *)*piVar6) {
          puStack_6c = (undefined4 *)((int)piVar6 - puVar4[10] >> 2);
          ppuStack_68 = (undefined4 **)0x1;
          uStack_70 = 0x5ac6ae;
          FUN_006cf0a0();
          goto LAB_005ac703;
        }
      }
      ppuStack_68 = (undefined4 **)0x1;
      puStack_6c = (undefined4 *)0xffffffff;
      uStack_70 = 0x5ac69a;
      FUN_006cf0a0();
    }
LAB_005ac703:
    in_ECX[0x23] = in_ECX;
    if ((*(byte *)(in_ECX + 0x3a) & 2) != 0) {
      FUN_006ceba0();
    }
    if (((*(byte *)((int)in_ECX + 0xe9) & 1) == 0) && (iVar3 = in_ECX[0xc], 0 < iVar3)) {
      do {
        if ((*(byte *)(*(int *)(in_ECX[10] + -4 + iVar3 * 4) + 0x69) & 1) == 0) break;
        iVar3 = iVar3 + -1;
      } while (0 < iVar3);
    }
    puStack_6c = (undefined4 *)0x5ac73e;
    ppuStack_68 = (undefined4 **)iVar3;
    FUN_00410380();
    FUN_006cedf0();
    FUN_006cef00();
  }
  local_2c = (undefined4 *)(in_ECX[0x27] + 10);
  piVar6 = (int *)FUN_005b2a40();
  local_8._0_1_ = 0x3c;
  piVar7 = in_ECX + 0xd5;
  piVar5 = (int *)(*piVar6 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  LOCK();
  iVar3 = *piVar7;
  *piVar7 = *piVar6;
  UNLOCK();
  piVar6 = (int *)(iVar3 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      ppuStack_68 = (undefined4 **)0x5ac79e;
      FID_conflict__free(piVar6);
    }
  }
  puStack_6c = (undefined4 *)0x5ac7b5;
  ppuStack_68 = (undefined4 **)piVar7;
  FUN_006e4900();
  local_8._0_1_ = 0x25;
  piVar7 = (int *)((int)local_28 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      ppuStack_68 = (undefined4 **)0x5ac7d9;
      FID_conflict__free(piVar7);
    }
  }
  ppuStack_68 = (undefined4 **)0x1f4;
  puStack_6c = (undefined4 *)in_ECX[0xba];
  uStack_70 = in_ECX[0xb9];
  FUN_006e9790();
  puStack_6c = (undefined4 *)0x5ac7fe;
  ppuStack_68 = (undefined4 **)(in_ECX + 0xb5);
  FUN_004f9860();
  FUN_004f9650();
  piVar6 = (int *)FUN_005b2c70();
  local_8._0_1_ = 0x3d;
  piVar7 = in_ECX + 0x1fb;
  piVar5 = (int *)(*piVar6 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  LOCK();
  iVar3 = *piVar7;
  *piVar7 = *piVar6;
  UNLOCK();
  piVar6 = (int *)(iVar3 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      ppuStack_68 = (undefined4 **)0x5ac863;
      FID_conflict__free(piVar6);
    }
  }
  puStack_6c = (undefined4 *)0x5ac87a;
  ppuStack_68 = (undefined4 **)piVar7;
  FUN_006e4900();
  local_8._0_1_ = 0x25;
  piVar7 = (int *)((int)local_28 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      ppuStack_68 = (undefined4 **)0x5ac89e;
      FID_conflict__free(piVar7);
    }
  }
  ppuStack_68 = (undefined4 **)0x1f4;
  puStack_6c = (undefined4 *)in_ECX[0x1e0];
  uStack_70 = in_ECX[0x1df];
  FUN_006e9790();
  puStack_6c = (undefined4 *)0x5ac8c3;
  ppuStack_68 = (undefined4 **)(in_ECX + 0x1db);
  FUN_004f9860();
  FUN_004f9650();
  piVar6 = (int *)FUN_005b17a0();
  local_8._0_1_ = 0x3e;
  piVar7 = in_ECX + 0x358;
  piVar5 = (int *)(*piVar6 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  LOCK();
  iVar3 = *piVar7;
  *piVar7 = *piVar6;
  UNLOCK();
  piVar6 = (int *)(iVar3 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      ppuStack_68 = (undefined4 **)0x5ac920;
      FID_conflict__free(piVar6);
    }
  }
  puStack_6c = (undefined4 *)0x5ac937;
  ppuStack_68 = (undefined4 **)piVar7;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x25);
  piVar7 = (int *)((int)local_28 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      ppuStack_68 = (undefined4 **)0x5ac95b;
      FID_conflict__free(piVar7);
    }
  }
  ppuStack_68 = (undefined4 **)0x1f4;
  puStack_6c = (undefined4 *)in_ECX[0x33d];
  uStack_70 = in_ECX[0x33c];
  FUN_006e9790();
  puStack_6c = (undefined4 *)0x5ac980;
  ppuStack_68 = (undefined4 **)(in_ECX + 0x338);
  FUN_004f9860();
  in_ECX[0x335] = in_ECX[0x8d];
  if (in_ECX[0x328] != 0x20) {
    in_ECX[0x328] = 0x20;
    FUN_006e6400(&uStack_70);
    FUN_006ce9f0(1);
  }
  ppuStack_68 = (undefined4 **)&DAT_00c8a72c;
  puStack_6c = (undefined4 *)0x5ac9cc;
  FUN_006e4900();
  ppuStack_68 = (undefined4 **)0x1f4;
  puStack_6c = (undefined4 *)in_ECX[0x306];
  uStack_70 = in_ECX[0x305];
  FUN_006e9790();
  ppuStack_68 = (undefined4 **)0x1000281;
  puStack_6c = (undefined4 *)0x5ac9f6;
  FUN_006e6170();
  puStack_6c = (undefined4 *)0x5aca04;
  ppuStack_68 = (undefined4 **)(in_ECX + 0x301);
  FUN_004f9860();
  puVar4 = local_2c;
  ppuStack_68 = (undefined4 **)0x1f4;
  puStack_6c = local_2c;
  uStack_70 = 0;
  in_ECX[0x336] = in_ECX[0x8d];
  FUN_006e9790();
  if (in_ECX + 0x86 != (int *)0x0) {
    ppuStack_68 = (undefined4 **)0x5aca38;
    (**(code **)(in_ECX[0x86] + 0x28))();
    ppuStack_68 = (undefined4 **)(in_ECX + 0x86);
    puStack_6c = (undefined4 *)0x5aca48;
    FUN_006e5050();
  }
  iVar3 = (int)puVar4 + in_ECX[0x8d] + 10;
  ppuStack_68 = (undefined4 **)0x5aca60;
  FUN_0040f2d0();
  ppuStack_68 = (undefined4 **)0x5aca71;
  FUN_0040f2d0();
  local_8 = CONCAT31(local_8._1_3_,0x40);
  cVar2 = FUN_005b2f80();
  piVar7 = (int *)((int)local_28 + -8);
  *(bool *)(in_ECX + 0x337) = cVar2 == '\0';
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      ppuStack_68 = (undefined4 **)0x5acaa7;
      FID_conflict__free(piVar7);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,0x25);
  piVar7 = local_2c + -2;
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      ppuStack_68 = (undefined4 **)0x5acacb;
      FID_conflict__free(piVar7);
    }
  }
  ppuStack_68 = (undefined4 **)0x1f4;
  piVar7 = in_ECX + 0x45e;
  uStack_70 = 0;
  puStack_6c = (undefined4 *)iVar3;
  FUN_006e9790();
  if (piVar7 != (int *)0x0) {
    ppuStack_68 = (undefined4 **)0x5acaf2;
    (**(code **)(*piVar7 + 0x28))();
    puStack_6c = (undefined4 *)0x5acafc;
    ppuStack_68 = (undefined4 **)piVar7;
    FUN_006e5050();
  }
  iVar1 = in_ECX[0x465];
  ppuStack_68 = (undefined4 **)(in_ECX + 0x4bf);
  piVar7 = in_ECX + 0x490;
  puStack_6c = (undefined4 *)0x5acb1d;
  FUN_004f9860();
  ppuStack_68 = (undefined4 **)0x1f4;
  uStack_70 = 0;
  puStack_6c = (undefined4 *)(iVar1 + 10 + iVar3);
  FUN_006e9790();
  if (piVar7 != (int *)0x0) {
    ppuStack_68 = (undefined4 **)0x5acb43;
    (**(code **)(*piVar7 + 0x28))();
    puStack_6c = (undefined4 *)0x5acb4d;
    ppuStack_68 = (undefined4 **)piVar7;
    FUN_006e5050();
  }
  ppuStack_68 = (undefined4 **)0x2bc;
  puStack_6c = (undefined4 *)in_ECX[5];
  uStack_70 = in_ECX[4];
  FUN_006e9790();
  if (DAT_00c8a5e8 == 0) {
    ppuStack_68 = (undefined4 **)0x5acb86;
    local_28 = operator_new(0x34);
    local_8._0_1_ = 0x41;
    DAT_00c8a5e8 = FUN_005b6bb0();
    local_8 = CONCAT31(local_8._1_3_,0x25);
  }
  if ((-(uint)(in_ECX != (undefined4 *)0x0) & (uint)(in_ECX + 0x1d)) != 0) {
    ppuStack_68 = (undefined4 **)0x5acbad;
    FUN_004097d0();
  }
  FUN_005b7090();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

