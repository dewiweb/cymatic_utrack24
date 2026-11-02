// rea decompile_all
// name: FUN_0050f440
// address: 0x50f440
// body: available
// range: 0x50f440-0x50ff25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050f440(undefined ***param_1,undefined1 *param_2,int param_3)

{
  undefined **ppuVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  float10 fVar6;
  undefined1 auStack_98 [4];
  undefined4 uStack_94;
  undefined **ppuStack_74;
  undefined **ppuStack_70;
  undefined **local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined1 local_40;
  void *local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined1 local_20;
  double local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00708ae8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  ppuStack_70 = (undefined **)param_1;
  in_ECX[0x1c] = (int)DSPMViewport::Listener::vftable;
  in_ECX[0x1d] = (int)juce::Button::Listener::vftable;
  in_ECX[0x1e] = (int)MyMixerAudioSource::Listener::vftable;
  in_ECX[0x1f] = (int)ProgressBarSlider::Listener::vftable;
  in_ECX[0x20] = (int)juce::Timer::vftable;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = (int)juce::ChangeListener::vftable;
  in_ECX[0x26] = (int)ViewSelector::Listener::vftable;
  in_ECX[0x27] = (int)juce::Label::Listener::vftable;
  in_ECX[0x28] = (int)juce::ComboBox::Listener::vftable;
  local_8._0_1_ = 9;
  local_8._1_3_ = 0;
  in_ECX[0x20] = (int)DSPMixerPanel::vftable;
  in_ECX[0x2c] = (int)param_2;
  param_1 = (undefined ***)0xfffffff4;
  *in_ECX = (int)DSPMixerPanel::vftable;
  in_ECX[0x1c] = (int)DSPMixerPanel::vftable;
  in_ECX[0x1d] = (int)DSPMixerPanel::vftable;
  in_ECX[0x1e] = (int)DSPMixerPanel::vftable;
  in_ECX[0x1f] = (int)DSPMixerPanel::vftable;
  in_ECX[0x25] = (int)DSPMixerPanel::vftable;
  in_ECX[0x26] = (int)DSPMixerPanel::vftable;
  in_ECX[0x27] = (int)DSPMixerPanel::vftable;
  in_ECX[0x28] = (int)DSPMixerPanel::vftable;
  in_ECX[0x29] = (int)ppuStack_70;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  *(undefined2 *)(in_ECX + 0x2d) = 0;
  *(undefined2 *)((int)in_ECX + 0xb7) = 0;
  *(undefined1 *)((int)in_ECX + 0xb9) = 0;
  in_ECX[0x2f] = param_3;
  ppuStack_74 = (undefined **)0x50f59c;
  FUN_00510240();
  param_1 = (undefined ***)&DAT_00bfe12c;
  local_8._0_1_ = 0xb;
  ppuStack_70 = (undefined **)0x50f5b6;
  FUN_006e8840();
  local_8._0_1_ = 0xd;
  FUN_005839d0();
  local_8._0_1_ = 0xe;
  FUN_005839d0();
  param_1 = (undefined ***)&DAT_00bfe12c;
  local_8._0_1_ = 0x10;
  ppuStack_70 = (undefined **)0x50f5f3;
  FUN_006e3660();
  in_ECX[0x112] = (int)juce::TextButton::vftable;
  in_ECX[0x12e] = (int)juce::TextButton::vftable;
  param_1 = (undefined ***)&DAT_00bfe12c;
  local_8._0_1_ = 0x12;
  ppuStack_70 = (undefined **)0x50f61f;
  FUN_006e3660();
  in_ECX[0x14a] = (int)juce::TextButton::vftable;
  in_ECX[0x166] = (int)juce::TextButton::vftable;
  param_2 = &DAT_00bfe12c;
  param_1 = (undefined ***)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x15);
  ppuStack_70 = (undefined **)&param_1;
  ppuStack_74 = (undefined **)0x50f651;
  FUN_006e8b40();
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      ppuStack_70 = (undefined **)0x50f672;
      FID_conflict__free(piVar5);
    }
  }
  local_8._0_1_ = 0x18;
  fVar6 = (float10)FUN_00513b00();
  local_1c = (double)fVar6;
  ppuStack_70 = (undefined **)0x50f69b;
  FUN_00509d50();
  in_ECX[0x202] = 0;
  in_ECX[0x203] = 0;
  in_ECX[0x204] = 0;
  in_ECX[0x205] = 0;
  ppuStack_70 = (undefined **)0x50f6d0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x206));
  FUN_004e7ee0();
  FUN_005ce820();
  in_ECX[0x45a] = 0;
  in_ECX[0x45b] = 0;
  in_ECX[0x45c] = 0;
  in_ECX[0x45d] = 0;
  in_ECX[0x45e] = 0;
  in_ECX[0x45f] = 0;
  local_8 = CONCAT31(local_8._1_3_,0x1f);
  in_ECX[0x460] = 0;
  FUN_00603630();
  ppuVar1 = (undefined **)(in_ECX + 0x30);
  if (ppuVar1 != (undefined **)0x0) {
    ppuStack_70 = (undefined **)0x50f74e;
    (**(code **)(*ppuVar1 + 0x28))();
    ppuStack_74 = (undefined **)0x50f758;
    ppuStack_70 = ppuVar1;
    FUN_006e5050();
  }
  ppuStack_70 = (undefined **)0x50f769;
  FUN_0045c990();
  local_8._0_1_ = 0x20;
  ppuStack_70 = (undefined **)0x50f77f;
  FUN_006e2900();
  local_8._0_1_ = 0x1f;
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      ppuStack_70 = (undefined **)0x50f7a5;
      FID_conflict__free(piVar5);
    }
  }
  ppuStack_70 = (undefined **)0x50f7b9;
  FUN_0045c990();
  ppuStack_70 = (undefined **)&param_1;
  local_8._0_1_ = 0x21;
  ppuStack_74 = (undefined **)0x50f7d1;
  FUN_006e8760();
  local_8._0_1_ = 0x1f;
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      ppuStack_70 = (undefined **)0x50f7f5;
      FID_conflict__free(piVar5);
    }
  }
  ppuStack_70 = (undefined **)0x50f809;
  FUN_0045c990();
  ppuStack_70 = (undefined **)&param_1;
  local_8._0_1_ = 0x22;
  ppuStack_74 = (undefined **)0x50f821;
  FUN_006e8760();
  local_8._0_1_ = 0x1f;
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      ppuStack_70 = (undefined **)0x50f845;
      FID_conflict__free(piVar5);
    }
  }
  ppuStack_70 = (undefined **)0x50f859;
  FUN_0045c990();
  ppuStack_70 = (undefined **)&param_1;
  local_8._0_1_ = 0x23;
  ppuStack_74 = (undefined **)0x50f871;
  FUN_006e8760();
  local_8 = CONCAT31(local_8._1_3_,0x1f);
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      ppuStack_70 = (undefined **)0x50f895;
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX != (int *)0xffffff60) {
    ppuStack_70 = (undefined **)0x50f8ae;
    FUN_004097d0();
  }
  ppuStack_70 = (undefined **)0x50f8c1;
  (**(code **)(in_ECX[0x53] + 0x28))();
  ppuStack_70 = (undefined **)0xffffffff;
  ppuStack_74 = (undefined **)(in_ECX + 0x53);
  FUN_006e5050();
  param_1 = &ppuStack_70;
  ppuStack_74 = (undefined **)0x1ae8;
  FUN_00683790();
  local_8._0_1_ = 0x24;
  FUN_00683790();
  local_8._0_1_ = 0x1f;
  FUN_00411520();
  local_5c = (undefined **)0x0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  iStack_4c = 0;
  iStack_48 = 0;
  iStack_44 = 0;
  local_40 = 1;
  local_8 = CONCAT31(local_8._1_3_,0x25);
  ppuStack_70 = (undefined **)0x41a00000;
  ppuStack_74 = (undefined **)0x41800000;
  FUN_006824f0();
  if ((undefined ***)(in_ECX + 0xc3) != &local_5c) {
    if (in_ECX[0xc4] < local_54) {
      ppuStack_70 = (undefined **)(local_54 / 2 + local_54 + 8 & 0xfffffff8);
      ppuStack_74 = (undefined **)0x50f994;
      FUN_00409cf0();
    }
    in_ECX[0xc5] = local_54;
    *(undefined1 *)(in_ECX + 0xca) = local_40;
    in_ECX[0xc6] = local_50;
    in_ECX[199] = iStack_4c;
    in_ECX[200] = iStack_48;
    in_ECX[0xc9] = iStack_44;
    if (local_54 != 0) {
      ppuStack_70 = (undefined **)(local_54 * 4);
      ppuStack_74 = local_5c;
      FUN_004c2c30();
    }
  }
  ppuStack_70 = &PTR_DAT_00c7ed68;
  ppuStack_74 = (undefined **)0x50f9d3;
  FUN_006e54f0();
  iVar4 = DAT_00c7ef94;
  in_ECX[0xc0] = DAT_00c7ef94;
  in_ECX[0xc1] = iVar4;
  FUN_006e6400();
  FUN_006ce9f0();
  ppuStack_70 = (undefined **)(in_ECX + 0x1d);
  if (ppuStack_70 != (undefined **)0x0) {
    ppuStack_74 = (undefined **)0x50fa0b;
    FUN_004097d0();
  }
  if ((*(byte *)((int)in_ECX + 0x281) & 0x10) == 0) {
    *(byte *)((int)in_ECX + 0x281) = *(byte *)((int)in_ECX + 0x281) | 0x10;
    iVar4 = in_ECX[0x89];
    if (iVar4 != 0) {
      if ((*(byte *)(iVar4 + 0x69) & 0x10) != 0) goto LAB_0050fa3b;
      if (*(int *)(iVar4 + 0xc) != 0) {
        ppuStack_70 = (undefined **)0x50fa30;
        cVar3 = FUN_006e6320();
        if (cVar3 == '\0') goto LAB_0050fa3b;
      }
    }
    ppuStack_70 = (undefined **)0x50fa3b;
    FUN_006cc240();
  }
LAB_0050fa3b:
  ppuStack_70 = (undefined **)0x1;
  ppuStack_74 = (undefined **)0x50fa44;
  (**(code **)(in_ECX[0x86] + 0x28))();
  ppuStack_74 = (undefined **)0xffffffff;
  FUN_006e5050();
  param_1 = &ppuStack_74;
  FUN_00683790();
  local_8._0_1_ = 0x26;
  FUN_00683790();
  local_8._0_1_ = 0x25;
  FUN_00411520();
  local_3c = (void *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  iStack_2c = 0;
  iStack_28 = 0;
  iStack_24 = 0;
  local_20 = 1;
  local_8 = CONCAT31(local_8._1_3_,0x27);
  ppuStack_74 = (undefined **)0x41800000;
  FUN_00682020();
  if ((void **)(in_ECX + 0x109) != &local_3c) {
    if (in_ECX[0x10a] < local_34) {
      ppuStack_74 = (undefined **)(local_34 / 2 + local_34 + 8 & 0xfffffff8);
      FUN_00409cf0();
    }
    in_ECX[0x10b] = local_34;
    *(undefined1 *)(in_ECX + 0x110) = local_20;
    in_ECX[0x10c] = local_30;
    in_ECX[0x10d] = iStack_2c;
    in_ECX[0x10e] = iStack_28;
    in_ECX[0x10f] = iStack_24;
    if (local_34 != 0) {
      ppuStack_74 = (undefined **)(local_34 * 4);
      FUN_004c2c30();
    }
  }
  ppuStack_74 = &PTR_DAT_00c7ed68;
  FUN_006e54f0();
  iVar4 = DAT_00c7ef94;
  in_ECX[0x106] = DAT_00c7ef94;
  in_ECX[0x107] = iVar4;
  FUN_006e6400();
  FUN_006ce9f0();
  ppuStack_74 = (undefined **)(in_ECX + 0x1d);
  if (ppuStack_74 != (undefined **)0x0) {
    FUN_004097d0();
  }
  if ((*(byte *)((int)in_ECX + 0x399) & 0x10) == 0) {
    *(byte *)((int)in_ECX + 0x399) = *(byte *)((int)in_ECX + 0x399) | 0x10;
    iVar4 = in_ECX[0xcf];
    if (iVar4 != 0) {
      if ((*(byte *)(iVar4 + 0x69) & 0x10) != 0) goto LAB_0050fba7;
      if (*(int *)(iVar4 + 0xc) != 0) {
        ppuStack_74 = (undefined **)0x50fb9c;
        cVar3 = FUN_006e6320();
        if (cVar3 == '\0') goto LAB_0050fba7;
      }
    }
    ppuStack_74 = (undefined **)0x50fba7;
    FUN_006cc240();
  }
LAB_0050fba7:
  ppuStack_74 = (undefined **)0x1;
  (**(code **)(in_ECX[0xcc] + 0x28))();
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x28;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0x27);
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  *(byte *)(in_ECX + 0x19c) = *(byte *)(in_ECX + 0x19c) | 0x60;
  *(undefined2 *)(in_ECX + 0x1b5) = 1;
  *(undefined1 *)((int)in_ECX + 0x6d6) = 0;
  if (in_ECX != (int *)0xffffff64) {
    FUN_004097d0();
  }
  FUN_0045c990();
  local_8._0_1_ = 0x29;
  (**(code **)(in_ECX[0x19e] + 8))();
  local_8._0_1_ = 0x27;
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  (**(code **)(in_ECX[0x182] + 0x28))();
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x2a;
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0x27);
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX != (int *)0xffffff8c) {
    FUN_004097d0();
  }
  FUN_006c65e0();
  FUN_006e9790();
  (**(code **)(in_ECX[0x112] + 0x28))();
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x2b;
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0x27);
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (in_ECX != (int *)0xffffff8c) {
    FUN_004097d0();
  }
  FUN_006c65e0();
  uStack_94 = 0x50fdce;
  FUN_006e9790();
  (**(code **)(in_ECX[0x14a] + 0x28))();
  FUN_006e5050();
  if ((*(byte *)((int)in_ECX + 0x741) & 0x10) == 0) {
    *(byte *)((int)in_ECX + 0x741) = *(byte *)((int)in_ECX + 0x741) | 0x10;
    iVar4 = in_ECX[0x1b9];
    if ((iVar4 == 0) ||
       (((*(byte *)(iVar4 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar4 + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))))) {
      FUN_006cc240();
    }
  }
  (**(code **)(in_ECX[0x1b6] + 0x28))();
  uStack_94 = 0x50fe2d;
  FUN_006e5050();
  FUN_0050cf00();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  if (in_ECX[0x22] == 0) {
    in_ECX[0x21] = 0x14;
    in_ECX[0x22] = 0x14;
    local_8._0_1_ = 0x2c;
    if (DAT_00c8a668 == 0) {
      operator_new(0x54);
      DAT_00c8a668 = FUN_004635f0();
    }
    FUN_00463c00();
    local_8 = CONCAT31(local_8._1_3_,0x27);
  }
  else {
    FUN_00463b90();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  FUN_006e0f90();
  bVar2 = *(byte *)(in_ECX + 0x1a);
  if ((bVar2 & 4) == 0) {
    *(byte *)(in_ECX + 0x1a) = bVar2 | 4;
    if (((bVar2 & 1) != 0) && (iVar4 = FUN_0068db10(), iVar4 != 0)) {
      uStack_94 = 0x50fed3;
      (**(code **)(*in_ECX + 0x30))();
    }
    FUN_006e6400(auStack_98);
    FUN_006ce9f0(1);
  }
  iVar4 = FUN_005b29a0();
  if (0 < iVar4) {
    uStack_94 = 0x50fefe;
    FUN_006e83a0();
  }
  FID_conflict__free(local_3c);
  uStack_94 = 0x50ff0e;
  FID_conflict__free(local_5c);
  ExceptionList = local_10;
  return;
}

