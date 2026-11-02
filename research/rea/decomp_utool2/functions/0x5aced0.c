// rea decompile_all
// name: FUN_005aced0
// address: 0x5aced0
// body: available
// range: 0x5aced0-0x5ad3b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_005aced0(void)

{
  int iVar1;
  undefined **_Memory;
  uint uVar2;
  undefined *puVar3;
  undefined4 *lParam;
  undefined4 *puVar4;
  undefined4 uVar5;
  uintptr_t uVar6;
  BOOL BVar7;
  undefined4 *in_ECX;
  int *piVar8;
  undefined **ppuVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  void *local_b4;
  undefined *local_3c;
  undefined *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  undefined **local_24;
  undefined4 *local_20;
  int *local_1c;
  int *local_18;
  undefined1 local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00718235;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = in_ECX;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar4 = in_ECX + 0x1c;
  *puVar4 = NewsComponent::Listener::vftable;
  piVar11 = in_ECX + 0x1e;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  *in_ECX = PanelSupportComponent::MyNews::vftable;
  *puVar4 = PanelSupportComponent::MyNews::vftable;
  local_1c = piVar11;
  FUN_00587bf0(puVar4);
  local_8._0_1_ = 2;
  FUN_005b8040();
  local_8._0_1_ = 3;
  (**(code **)(*piVar11 + 0x28))(1);
  FUN_006e5050(piVar11,0xffffffff);
  FUN_0045c990("http://www.cymaticaudio.com/news/utoolnews.xml");
  local_11 = '\0';
  local_12 = 0;
  local_8._0_1_ = 5;
  FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
               &juce::JUCEApplication::RTTI_Type_Descriptor,0);
  local_8._0_1_ = 4;
  puVar4 = (undefined4 *)FUN_0063e440();
  _Memory = (undefined **)*puVar4;
  *puVar4 = 0;
  uVar2 = puVar4[2];
  puVar4[2] = 0;
  local_8 = CONCAT31(local_8._1_3_,6);
  local_2c = uVar2;
  local_24 = _Memory;
  FUN_0040f7f0();
  FID_conflict__free(local_b4);
  local_28 = 0;
  if (0 < (int)local_2c) {
    bVar12 = local_2c != 0;
    iVar10 = local_30;
    do {
      ppuVar9 = &PTR_DAT_00c7ed68;
      if (bVar12) {
        ppuVar9 = local_24;
      }
      puVar3 = *ppuVar9;
      piVar11 = (int *)(puVar3 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        *piVar11 = *piVar11 + 1;
        UNLOCK();
      }
      local_8 = CONCAT31(local_8._1_3_,7);
      FUN_0045c990("-clearnews");
      if (puVar3 == local_38) {
        local_18 = (int *)0x0;
      }
      else {
        local_18 = (int *)FUN_0045c1e0(puVar3,local_38);
      }
      piVar11 = (int *)(local_38 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar11);
        }
      }
      local_30 = iVar10;
      if (local_18 == (int *)0x0) {
        local_11 = '\x01';
      }
      else {
        FUN_0045c990("-altnews");
        if (puVar3 == local_3c) {
          local_18 = (int *)0x0;
        }
        else {
          local_18 = (int *)FUN_0045c1e0(puVar3,local_3c);
        }
        piVar11 = (int *)(local_3c + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar11);
          }
        }
        if (local_18 == (int *)0x0) {
          FUN_0045c990("http://www.cymaticaudio.com/news/utoolnews_test.xml");
          piVar11 = (int *)(iVar10 + -8);
          if (piVar11 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              FID_conflict__free(piVar11);
            }
          }
          local_12 = 1;
          local_30 = local_34;
          local_34 = iVar10;
        }
      }
      piVar11 = (int *)(puVar3 + -8);
      local_8 = CONCAT31(local_8._1_3_,6);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar10 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          FID_conflict__free(piVar11);
        }
      }
      local_28 = local_28 + 1;
      local_24 = local_24 + 1;
      bVar12 = local_28 < local_2c;
      iVar10 = local_30;
      piVar11 = local_1c;
    } while ((int)local_28 < (int)local_2c);
  }
  if (local_11 != '\0') {
    FUN_00635980();
  }
  *(undefined1 *)(piVar11 + 0x1f) = local_12;
  local_18 = (int *)(local_30 + -8);
  if (local_18 != &DAT_00bfe124) {
    LOCK();
    *local_18 = *local_18 + 1;
    UNLOCK();
  }
  LOCK();
  iVar10 = piVar11[0x81];
  piVar11[0x81] = local_30;
  UNLOCK();
  piVar8 = (int *)(iVar10 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar10 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  if (piVar11[0x72] == 0) {
    if (piVar11[0x6e] == 0) {
      uVar5 = FUN_00630b10(&local_2c);
      local_8 = CONCAT31(local_8._1_3_,8);
      FUN_00585620(uVar5);
      piVar8 = (int *)(local_2c - 8);
      piVar11 = local_1c;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar10 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          FID_conflict__free(piVar8);
          piVar11 = local_1c;
        }
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(piVar11 + 0x74));
    *(undefined1 *)(piVar11 + 0x7f) = 0;
    if (piVar11[0x72] == 0) {
      uVar6 = __beginthreadex((void *)0x0,piVar11[0x7d],FUN_00611a60,piVar11 + 0x70,0,&local_28);
      piVar11[0x72] = uVar6;
      piVar11[0x73] = local_28;
      FUN_00611960();
      SetEvent((HANDLE)piVar11[0x7a]);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar11 + 0x74));
    puVar4 = local_20;
    LOCK();
    iVar10 = *(int *)(local_20[0x3b] + 0xc);
    if (iVar10 == 0) {
      *(int *)(local_20[0x3b] + 0xc) = 1;
      iVar10 = 0;
    }
    UNLOCK();
    if (iVar10 == 0) {
      lParam = (undefined4 *)local_20[0x3b];
      if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
        LOCK();
        lParam[1] = lParam[1] + 1;
        UNLOCK();
        BVar7 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)lParam);
        if (BVar7 != 0) goto LAB_005ad349;
      }
      if (lParam != (undefined4 *)0x0) {
        piVar11 = lParam + 1;
        LOCK();
        *piVar11 = *piVar11 + 1;
        UNLOCK();
        LOCK();
        iVar10 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)*lParam)(1);
        }
      }
      LOCK();
      *(undefined4 *)(puVar4[0x3b] + 0xc) = 0;
      UNLOCK();
    }
  }
LAB_005ad349:
  iVar10 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar11 = (int *)(_Memory[iVar10] + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar11);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar2);
  }
  FID_conflict__free(_Memory);
  if (local_18 != &DAT_00bfe124) {
    LOCK();
    iVar10 = *local_18;
    *local_18 = *local_18 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      FID_conflict__free(local_18);
    }
  }
  ExceptionList = local_10;
  return local_20;
}

