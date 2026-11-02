// rea decompile_all
// name: FUN_0059cba0
// address: 0x59cba0
// body: available
// range: 0x59cba0-0x59cfd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0059cba0(void)

{
  HANDLE pvVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  int in_ECX;
  int *piVar7;
  undefined4 extraout_ECX;
  HANDLE *_Memory;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iVar8;
  LPCRITICAL_SECTION p_Var9;
  LPCRITICAL_SECTION local_24;
  int local_20;
  int local_1c;
  undefined1 *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715ba8;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0045c990("ImportJob_MTSong::_DoImportAudio_FromSetOfWav",uVar4);
  local_8 = 0;
  FUN_005899e0();
  local_8 = 0xffffffff;
  piVar7 = (int *)(local_1c + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  if (*(int *)(*(int *)(in_ECX + 0x98) + 100) == 0) {
    FUN_0045c990("ImportJob_MTSong::_DoImportAudio_FromSetOfWav",uVar4);
    local_8 = 1;
    p_Var9 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
    local_24 = p_Var9;
    EnterCriticalSection(p_Var9);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
      FUN_005891b0(&local_1c,extraout_ECX);
      FUN_0062f940();
    }
    LeaveCriticalSection(p_Var9);
  }
  else {
    iVar8 = 0;
    if (0 < *(int *)(*(int *)(in_ECX + 0x98) + 100)) {
      do {
        FUN_0055ed60(&local_14,iVar8);
        local_8 = 3;
        if (*local_14 == '\0') {
LAB_0059cf21:
          FUN_0059c9c0(8,0x730,&local_14);
          FUN_0045c990("ImportJob_MTSong::_DoImportAudio_FromSetOfWav");
          p_Var9 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
          EnterCriticalSection(p_Var9);
          local_8 = CONCAT31(local_8._1_3_,5);
          if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
            FUN_005891b0(&local_20,extraout_ECX_02);
            FUN_0062f940();
          }
          LeaveCriticalSection(p_Var9);
          local_1c = local_20;
LAB_0059cf85:
          piVar7 = (int *)(local_1c + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar8 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              FID_conflict__free(piVar7);
            }
          }
          piVar7 = (int *)(local_14 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar8 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              FID_conflict__free(piVar7);
            }
          }
          ExceptionList = local_10;
          return 0;
        }
        puVar5 = (undefined4 *)FUN_00458890();
        DVar6 = GetFileAttributesW((LPCWSTR)*puVar5);
        if ((DVar6 & 0x10) != 0) goto LAB_0059cf21;
        puVar5 = (undefined4 *)FUN_00636a10(&local_24);
        local_8 = CONCAT31(local_8._1_3_,6);
        FUN_00635a10(&local_1c,*puVar5);
        _Memory = &local_24[-1].LockSemaphore;
        if (_Memory != (HANDLE *)&DAT_00bfe124) {
          LOCK();
          pvVar1 = *_Memory;
          *_Memory = (HANDLE)((int)*_Memory + -1);
          UNLOCK();
          if (pvVar1 == (HANDLE)0x0) {
            FID_conflict__free(_Memory);
          }
        }
        local_20 = 0;
        local_18 = &DAT_00bfe12c;
        local_8._0_1_ = 9;
        cVar3 = FUN_005a0990(&local_14,&local_1c,&local_20,&local_18);
        if (cVar3 == '\0') {
          FUN_0059c9c0(local_20,0x731,&local_18);
          FUN_0045c990("ImportJob_MTSong::_DoImportAudio_FromSetOfWav");
          p_Var9 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
          EnterCriticalSection(p_Var9);
          local_8 = CONCAT31(local_8._1_3_,0xb);
          if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
            FUN_005891b0(&local_20,extraout_ECX_01);
            FUN_0062f940();
          }
          LeaveCriticalSection(p_Var9);
          piVar7 = (int *)(local_20 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar8 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              FID_conflict__free(piVar7);
            }
          }
          piVar7 = (int *)(local_18 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar8 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              FID_conflict__free(piVar7);
            }
          }
          goto LAB_0059cf85;
        }
        FUN_0041cef0(&local_1c);
        piVar7 = (int *)(local_18 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        piVar7 = (int *)(local_1c + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        local_8 = 0xffffffff;
        piVar7 = (int *)(local_14 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(*(int *)(in_ECX + 0x98) + 100));
    }
    FUN_0053baf0(in_ECX + 0x94,&PTR_DAT_00c7ed68,0);
    FUN_0045c990("ImportJob_MTSong::_DoImportAudio_FromSetOfWav");
    local_8 = 0xc;
    p_Var9 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
    EnterCriticalSection(p_Var9);
    local_8 = CONCAT31(local_8._1_3_,0xd);
    if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
      FUN_005891b0(&local_20,extraout_ECX_00);
      FUN_0062f940();
    }
    LeaveCriticalSection(p_Var9);
    local_1c = local_20;
  }
  piVar7 = (int *)(local_1c + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  ExceptionList = local_10;
  return 1;
}

