// rea decompile_all
// name: FUN_006ba790
// address: 0x6ba790
// body: available
// range: 0x6ba790-0x6bb020 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ba790(int param_1,int *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *in_ECX;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  undefined4 uStack_60;
  int *piStack_5c;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007247fd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = juce::FileBrowserListener::vftable;
  in_ECX[0x1d] = juce::TextEditor::Listener::vftable;
  in_ECX[0x1e] = juce::Button::Listener::vftable;
  in_ECX[0x1f] = juce::ComboBox::Listener::vftable;
  in_ECX[0x20] = juce::FileFilter::vftable;
  in_ECX[0x21] = &DAT_00bfe12c;
  in_ECX[0x22] = juce::Timer::vftable;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  *in_ECX = juce::FileBrowserComponent::vftable;
  in_ECX[0x1c] = juce::FileBrowserComponent::vftable;
  in_ECX[0x1d] = juce::FileBrowserComponent::vftable;
  in_ECX[0x1e] = juce::FileBrowserComponent::vftable;
  in_ECX[0x1f] = juce::FileBrowserComponent::vftable;
  in_ECX[0x20] = juce::FileBrowserComponent::vftable;
  in_ECX[0x22] = juce::FileBrowserComponent::vftable;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = param_3;
  in_ECX[0x29] = param_1;
  in_ECX[0x2a] = &DAT_00bfe12c;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  local_8._0_1_ = 0xb;
  local_8._1_3_ = 0;
  in_ECX[0x32] = 0;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  FUN_006e8840();
  piVar10 = (int *)(param_1 + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  local_8._0_1_ = 0xf;
  piVar10 = in_ECX + 0x66;
  FUN_006e5a80();
  local_8._0_1_ = 0x11;
  FUN_0045c990();
  local_8._0_1_ = 0x12;
  FUN_00637250();
  local_8 = CONCAT31(local_8._1_3_,0x13);
  FUN_006e8b40();
  piVar11 = (int *)(local_20 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar11);
    }
  }
  piVar11 = (int *)(local_14 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar11);
    }
  }
  in_ECX[0xf3] = 0;
  local_8 = CONCAT31(local_8._1_3_,0x17);
  FUN_0045c990();
  FUN_00630a80();
  in_ECX[0xf4] = juce::TimeSliceThread::vftable;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x104));
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10a));
  in_ECX[0x110] = 0;
  in_ECX[0x111] = 0;
  in_ECX[0x112] = 0;
  in_ECX[0x113] = 0;
  piVar11 = (int *)(local_18 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar11);
    }
  }
  *(undefined1 *)(in_ECX + 0x114) = 1;
  param_3 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x19);
  if (((undefined1 *)*param_2 == &DAT_00bfe12c) || (iVar5 = FUN_0045c1e0(), iVar5 == 0)) {
    puVar6 = (undefined4 *)FUN_006120a0();
    uVar2 = in_ECX[0x2a];
    in_ECX[0x2a] = *puVar6;
    *puVar6 = uVar2;
    local_28 = param_2;
  }
  else {
    puVar6 = (undefined4 *)FUN_00458890();
    DVar7 = GetFileAttributesW((LPCWSTR)*puVar6);
    if (((DVar7 & 0x10) == 0) || (DVar7 == 0xffffffff)) {
      FUN_00415400();
      puVar6 = (undefined4 *)FUN_00636040();
      uVar2 = in_ECX[0x2a];
      in_ECX[0x2a] = *puVar6;
      *puVar6 = uVar2;
      piVar11 = (int *)(local_24 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar11);
        }
      }
      puVar6 = (undefined4 *)FUN_00636a10();
      param_3 = (undefined1 *)*puVar6;
      *puVar6 = &DAT_00bfe12c;
    }
    else {
      piVar11 = (int *)(*param_2 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        *piVar11 = *piVar11 + 1;
        UNLOCK();
      }
      LOCK();
      local_28 = (int *)in_ECX[0x2a];
      in_ECX[0x2a] = *param_2;
      UNLOCK();
    }
  }
  piVar11 = local_28 + -2;
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar11);
    }
  }
  operator_new(0x70);
  puVar8 = (undefined4 *)FUN_006bba60();
  puVar6 = (undefined4 *)in_ECX[0x27];
  if ((puVar6 != puVar8) && (in_ECX[0x27] = puVar8, puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)();
  }
  if ((*(byte *)(in_ECX + 0x29) & 0x20) == 0) {
    operator_new(0xcc);
    local_8._0_1_ = 0x1b;
    piVar11 = (int *)FUN_006b6ed0();
    local_8 = CONCAT31(local_8._1_3_,0x19);
    if (piVar11 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = piVar11 + 0x2b;
    }
    piVar3 = (int *)in_ECX[0x31];
    if ((piVar3 != piVar9) && (in_ECX[0x31] = piVar9, piVar3 != (int *)0x0)) {
      (**(code **)*piVar3)();
    }
    piVar11[0x25] = 1;
    (**(code **)(*piVar11 + 0x84))();
    if ((*(byte *)(in_ECX + 0x29) & 0x10) != 0) {
      *(undefined1 *)(piVar11 + 0x27) = 1;
    }
  }
  else {
    operator_new(0xd0);
    local_8._0_1_ = 0x1a;
    piVar11 = (int *)FUN_006b4fb0();
    local_8 = CONCAT31(local_8._1_3_,0x19);
    if (piVar11 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = piVar11 + 0x2d;
    }
    piVar3 = (int *)in_ECX[0x31];
    if ((piVar3 != piVar9) && (in_ECX[0x31] = piVar9, piVar3 != (int *)0x0)) {
      (**(code **)*piVar3)();
    }
    if ((*(byte *)(in_ECX + 0x29) & 0x10) != 0) {
      *(undefined1 *)((int)piVar11 + 0xaf) = 1;
    }
    if (piVar11 == (int *)0x0) goto LAB_006bacab;
  }
  (**(code **)(*piVar11 + 0x28))();
  FUN_006e5050();
LAB_006bacab:
  if (in_ECX != (undefined4 *)0xffffff90) {
    FUN_004097d0();
  }
  (**(code **)(in_ECX[0x33] + 0x28))();
  FUN_006e5050();
  iVar5 = in_ECX[0x62];
  if ((*(char *)(iVar5 + 0xcc) != '\x01') || (*(char *)(iVar5 + 0xcd) != '\x01')) {
    *(byte *)(iVar5 + 0x68) = *(byte *)(iVar5 + 0x68) | 0x60;
    *(undefined2 *)(iVar5 + 0xcc) = 0x101;
    *(undefined1 *)(iVar5 + 0xce) = 0;
    *(byte *)(in_ECX + 0x4d) = *(byte *)(in_ECX + 0x4d) & 0xdf;
    in_ECX[0x65] = 2;
    if ((undefined **)in_ECX[0x33] == juce::ComboBox::vftable) {
      if ((0 < (int)in_ECX[0x3a]) && (0 < (int)in_ECX[0x39])) {
        iVar5 = FUN_006e9580();
        (**(code **)(*(int *)(iVar5 + 0x24) + 0x10))();
      }
    }
    else {
      (*(code *)((undefined **)in_ECX[0x33])[0x21])();
    }
  }
  FUN_006b9be0();
  if (in_ECX != (undefined4 *)0xffffff84) {
    FUN_004097d0();
  }
  (**(code **)(*piVar10 + 0x28))();
  piStack_5c = (int *)0x6bad7c;
  FUN_006e5050();
  piStack_5c = (int *)0x6bad86;
  FUN_006970e0();
  *(undefined1 *)((int)in_ECX + 0x232) = 1;
  piStack_5c = (int *)0x6bad9a;
  FUN_006e55f0();
  if (in_ECX != (undefined4 *)0xffffff8c) {
    FUN_004097d0();
  }
  bVar12 = (*(byte *)(in_ECX + 0x29) & 0x50) != 0;
  if ((bool)*(char *)(in_ECX + 0x8b) != bVar12) {
    *(bool *)(in_ECX + 0x8b) = bVar12;
    if ((undefined **)*piVar10 == juce::TextEditor::vftable) {
      FUN_00696d40();
      FUN_006e6400(&uStack_60);
      FUN_006ce9f0(1);
    }
    else {
      (*(code *)((undefined **)*piVar10)[0x15])();
    }
  }
  (**(code **)(in_ECX[0xbf] + 0x28))();
  uStack_60 = 0x6bae0d;
  piStack_5c = in_ECX + 0xbf;
  FUN_006e5050();
  uStack_60 = 0x6bae16;
  piStack_5c = piVar10;
  FUN_006e89c0();
  iVar5 = FUN_006e9580();
  puVar8 = (undefined4 *)(**(code **)(*(int *)(iVar5 + 0x10) + 0x14))();
  puVar6 = (undefined4 *)in_ECX[0xf3];
  if ((puVar6 != puVar8) && (in_ECX[0xf3] = puVar8, puVar6 != (undefined4 *)0x0)) {
    piStack_5c = (int *)0x6bae3f;
    (**(code **)*puVar6)();
  }
  piVar10 = (int *)in_ECX[0xf3];
  if (piVar10 != (int *)0x0) {
    piStack_5c = (int *)0x6bae52;
    (**(code **)(*piVar10 + 0x28))();
    uStack_60 = 0x6bae5c;
    piStack_5c = piVar10;
    FUN_006e5050();
  }
  if (in_ECX != (undefined4 *)0xffffff88) {
    piStack_5c = (int *)0x6bae75;
    FUN_004097d0();
  }
  iVar5 = in_ECX[0xf3];
  piVar10 = (int *)FUN_00637250();
  local_8 = CONCAT31(local_8._1_3_,0x1c);
  pcVar4 = *(code **)(*(int *)(iVar5 + 0x70) + 8);
  if (pcVar4 == FUN_006e3410) {
    piVar11 = (int *)(*piVar10 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      *piVar11 = *piVar11 + 1;
      UNLOCK();
    }
    LOCK();
    iVar1 = *(int *)(iVar5 + 0x74);
    *(int *)(iVar5 + 0x74) = *piVar10;
    UNLOCK();
    piVar10 = (int *)(iVar1 + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        piStack_5c = (int *)0x6baed0;
        FID_conflict__free(piVar10);
      }
    }
    *(undefined1 *)(iVar5 + 0xde) = 0;
  }
  else {
    piStack_5c = (int *)0x6baee2;
    (*pcVar4)();
  }
  local_8 = CONCAT31(local_8._1_3_,0x19);
  piVar10 = (int *)(local_2c + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      piStack_5c = (int *)0x6baf09;
      FID_conflict__free(piVar10);
    }
  }
  piVar10 = (int *)in_ECX[0x32];
  if (piVar10 != (int *)0x0) {
    piStack_5c = (int *)0x6baf1f;
    (**(code **)(*piVar10 + 0x28))();
    uStack_60 = 0x6baf29;
    piStack_5c = piVar10;
    FUN_006e5050();
  }
  piStack_5c = (int *)0x6baf37;
  FUN_006b9d70();
  piStack_5c = (int *)0x6baf47;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xf8));
  if (in_ECX[0xf6] == 0) {
    in_ECX[0x100] = 4;
    FUN_00630990();
  }
  else {
    piStack_5c = (int *)0x6baf6e;
    FUN_0062de30();
  }
  piStack_5c = (int *)0x6baf79;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xf8));
  piStack_5c = (int *)0x6baf84;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  if (in_ECX[0x24] == 0) {
    in_ECX[0x23] = 2000;
    in_ECX[0x24] = 2000;
    local_8 = CONCAT31(local_8._1_3_,0x1d);
    if (DAT_00c8a668 == 0) {
      piStack_5c = (int *)0x6bafb5;
      operator_new(0x54);
      DAT_00c8a668 = FUN_004635f0();
    }
    piStack_5c = (int *)0x6bafd2;
    FUN_00463c00();
  }
  else {
    FUN_00463b90();
  }
  piStack_5c = (int *)0x6bafeb;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  piVar10 = (int *)(param_3 + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      piStack_5c = (int *)0x6bb008;
      FID_conflict__free(piVar10);
    }
  }
  ExceptionList = local_10;
  return;
}

