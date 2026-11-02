// rea decompile_all
// name: FUN_0059eca0
// address: 0x59eca0
// body: available
// range: 0x59eca0-0x59f3b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059eca0(void)

{
  HANDLE pvVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  undefined4 uVar6;
  LPCRITICAL_SECTION p_Var7;
  BOOL BVar8;
  int in_ECX;
  int *piVar9;
  undefined4 extraout_ECX;
  undefined1 *puVar10;
  HANDLE *ppvVar11;
  int iVar12;
  undefined8 uVar13;
  void *local_6c;
  undefined8 local_5c;
  int local_54;
  int local_50;
  undefined1 *local_4c;
  int local_48;
  undefined1 *local_44;
  LPCRITICAL_SECTION local_40;
  char local_39;
  undefined1 local_38 [28];
  int local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715f45;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0045c990("ImportJob_MTSong::DoImport",local_14);
  local_8 = 0;
  FUN_005899e0();
  local_8 = 0xffffffff;
  piVar9 = (int *)(local_44 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar12 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar12 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  FUN_00407fe0();
  if (*(int *)(in_ECX + 0xa4) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0xa0));
    *(undefined4 *)(in_ECX + 0xa0) = 0;
    *(undefined4 *)(in_ECX + 0xa4) = 0;
  }
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  puVar4 = (undefined4 *)FUN_00635a10(&local_48,"_marker_.tmp");
  uVar6 = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(in_ECX + 0x60) = *puVar4;
  *puVar4 = uVar6;
  piVar9 = (int *)(local_48 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar12 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar12 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  FUN_005b2e20();
  if ((*(int *)(*(int *)(in_ECX + 0x98) + 0x40) == 3) ||
     (*(int *)(*(int *)(in_ECX + 0x98) + 0x40) == 4)) {
    cVar3 = FUN_0059cfe0();
    if (cVar3 == '\0') {
      FUN_0045c990("ImportJob_MTSong::DoImport");
      local_8 = 1;
      p_Var7 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
      local_40 = p_Var7;
      EnterCriticalSection(p_Var7);
      local_8 = CONCAT31(local_8._1_3_,2);
      if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
        FUN_005891b0(&local_44,extraout_ECX);
        FUN_0062f940();
      }
      LeaveCriticalSection(p_Var7);
      piVar9 = (int *)(local_44 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar12 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar12 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      goto LAB_0059f398;
    }
  }
  else {
    cVar3 = FUN_0059cba0();
    if (cVar3 == '\0') {
      FUN_0045c990("ImportJob_MTSong::DoImport");
      local_8 = 3;
      FUN_00589130();
      piVar9 = (int *)(local_44 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar12 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar12 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      goto LAB_0059f398;
    }
  }
  FUN_0059c7b0();
  if (*(int *)(in_ECX + 0x40) != 0) goto LAB_0059f398;
  puVar4 = (undefined4 *)FUN_00560080(&local_48);
  local_8 = 4;
  if (*(char *)*puVar4 == '\0') {
LAB_0059eee5:
    local_39 = '\0';
  }
  else {
    puVar4 = (undefined4 *)FUN_00458890();
    DVar5 = GetFileAttributesW((LPCWSTR)*puVar4);
    local_39 = '\x01';
    if ((DVar5 & 0x10) != 0) goto LAB_0059eee5;
  }
  local_8 = 0xffffffff;
  piVar9 = (int *)(local_48 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar12 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar12 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  if (local_39 != '\0') {
    FUN_00560080(&local_4c);
    local_8 = 5;
    puVar4 = (undefined4 *)FUN_00636a10(&local_48);
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_00635a10((int)&local_5c + 4,*puVar4);
    piVar9 = (int *)(local_48 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    piVar9 = (int *)(local_4c + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    local_48 = 0;
    local_44 = &DAT_00bfe12c;
    local_8._0_1_ = 10;
    FUN_00560080(&local_54);
    local_8._0_1_ = 0xb;
    puVar4 = (undefined4 *)FUN_00636a10(&local_4c);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_00635a10(&local_50,*puVar4);
    piVar9 = (int *)(local_4c + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    local_8._0_1_ = 0xf;
    piVar9 = (int *)(local_54 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    uVar6 = FUN_00560080(&local_40);
    local_8._0_1_ = 0x10;
    local_39 = FUN_005a0990(uVar6,&local_50,&local_48,&local_44);
    local_8._0_1_ = 0xf;
    ppvVar11 = &local_40[-1].LockSemaphore;
    if (ppvVar11 != (HANDLE *)&DAT_00bfe124) {
      LOCK();
      pvVar1 = *ppvVar11;
      *ppvVar11 = (HANDLE)((int)*ppvVar11 + -1);
      UNLOCK();
      if (pvVar1 == (HANDLE)0x0) {
        FID_conflict__free(ppvVar11);
      }
    }
    if (local_39 == '\0') {
      FUN_0059c9c0(local_48,0x710,&local_44);
    }
    else {
      if (0 < *(int *)(in_ECX + 0xa8)) {
        FUN_005c6ed0();
        local_8._0_1_ = 0x11;
        p_Var7 = (LPCRITICAL_SECTION)FUN_006358c0();
        local_8._0_1_ = 0x12;
        local_40 = p_Var7;
        FUN_005c6d30(p_Var7);
        FUN_005c6c30();
        FUN_005c6e60();
        piVar9 = (int *)(local_5c._4_4_ + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          *piVar9 = *piVar9 + 1;
          UNLOCK();
        }
        FUN_00410b10(local_5c._4_4_);
        if (p_Var7 != (LPCRITICAL_SECTION)0x0) {
          (**(code **)p_Var7->DebugInfo)(1);
        }
        FUN_00425b40();
        FID_conflict__free(local_6c);
      }
      FUN_0041cef0(&local_50);
    }
    piVar9 = (int *)(local_50 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    piVar9 = (int *)(local_44 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    local_8 = 0xffffffff;
    piVar9 = (int *)(local_5c._4_4_ + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar9);
      }
    }
  }
  if (*(char *)(in_ECX + 0x84) != '\0') {
    if (*(int *)(in_ECX + 0xa8) < 1) {
      iVar12 = FUN_005406f0(1);
      FUN_00410a10(&local_40);
      local_8 = 0x15;
      uVar13 = FUN_00636a40();
      (**(code **)(**(int **)(*(int *)(in_ECX + 8) + 0x18) + 0x10))(uVar13);
      local_8 = 0xffffffff;
      FUN_0040ea50();
      uVar6 = FUN_00410a10(&local_40);
      if (iVar12 == 0) {
        FUN_0041cef0(uVar6);
      }
      else {
        local_8 = 0x16;
        FUN_0059c9c0(7,0x712,uVar6);
      }
      FUN_0040ea50();
    }
    else {
      iVar12 = 0;
      if (0 < *(int *)(in_ECX + 0xa8)) {
        do {
          local_54 = FUN_005406f0(1);
          FUN_00410a10(&local_40);
          local_8 = 0x13;
          puVar4 = (undefined4 *)FUN_00458890();
          BVar8 = GetFileAttributesExW((LPCWSTR)*puVar4,GetFileExInfoStandard,local_38);
          local_48 = local_1c;
          uVar6 = local_18;
          if (BVar8 == 0) {
            local_5c = 0;
            local_5c._4_4_ = 0;
            local_5c._0_4_ = 0;
            local_48 = local_5c._4_4_;
            uVar6 = (undefined4)local_5c;
          }
          (**(code **)(**(int **)(*(int *)(in_ECX + 8) + 0x18) + 0x10))(uVar6,local_48);
          local_8 = 0xffffffff;
          ppvVar11 = &local_40[-1].LockSemaphore;
          if (ppvVar11 != (HANDLE *)&DAT_00bfe124) {
            LOCK();
            pvVar1 = *ppvVar11;
            *ppvVar11 = (HANDLE)((int)*ppvVar11 + -1);
            UNLOCK();
            if (pvVar1 == (HANDLE)0x0) {
              FID_conflict__free(ppvVar11);
            }
          }
          if (local_54 == 0) {
            uVar6 = FUN_00410a10(&local_44);
            FUN_0041cef0(uVar6);
            puVar10 = local_44;
          }
          else {
            uVar6 = FUN_00410a10(&local_4c);
            local_8 = 0x14;
            FUN_0059c9c0(7,0x711,uVar6);
            local_8 = 0xffffffff;
            puVar10 = local_4c;
          }
          piVar9 = (int *)(puVar10 + -8);
          if (piVar9 != &DAT_00bfe124) {
            LOCK();
            iVar2 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar2 == 0) {
              FID_conflict__free(piVar9);
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)(in_ECX + 0xa8));
      }
    }
  }
LAB_0059f398:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

