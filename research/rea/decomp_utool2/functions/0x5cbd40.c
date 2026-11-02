// rea decompile_all
// name: FUN_005cbd40
// address: 0x5cbd40
// body: available
// range: 0x5cbd40-0x5cc663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cbd40(void)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined **ppuVar9;
  int in_ECX;
  int *piVar10;
  bool bVar11;
  char *pcVar12;
  void *local_38;
  int local_30;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b053;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar3 = operator_new(0x10);
  local_8 = 0;
  puVar7 = puVar3 + 3;
  *puVar3 = 0;
  pcVar12 = "DEVICESETUP";
  puVar3[1] = 0;
  puVar3[2] = 0;
  FUN_0061f730(puVar7,"DEVICESETUP",uVar2);
  FUN_0061fa00(puVar7,pcVar12);
  local_8 = 0xffffffff;
  puVar7 = *(undefined4 **)(in_ECX + 0xf4);
  if ((puVar7 != puVar3) && (*(undefined4 **)(in_ECX + 0xf4) = puVar3, puVar7 != (undefined4 *)0x0))
  {
    FUN_00634ec0();
    FUN_004bfe14(puVar7,0x10);
  }
  piVar10 = &local_14;
  pcVar12 = "deviceType";
  FUN_0061f730(piVar10,"deviceType",uVar2);
  FUN_0061fa00(piVar10,pcVar12);
  local_8 = 1;
  FUN_00634ca0(&local_14,in_ECX + 0xb0);
  local_8 = 0xffffffff;
  piVar10 = (int *)(local_14 + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  piVar10 = &local_14;
  pcVar12 = "audioOutputDeviceName";
  FUN_0061f730(piVar10,"audioOutputDeviceName");
  FUN_0061fa00(piVar10,pcVar12);
  local_8 = 2;
  FUN_00634ca0(&local_14,in_ECX + 0x38);
  local_8 = 0xffffffff;
  piVar10 = (int *)(local_14 + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  piVar10 = &local_14;
  pcVar12 = "audioInputDeviceName";
  FUN_0061f730(piVar10,"audioInputDeviceName");
  FUN_0061fa00(piVar10,pcVar12);
  local_8 = 3;
  FUN_00634ca0(&local_14,in_ECX + 0x3c);
  local_8 = 0xffffffff;
  piVar10 = (int *)(local_14 + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  if (*(int *)(in_ECX + 0x98) != 0) {
    piVar10 = &local_14;
    pcVar12 = "audioDeviceRate";
    FUN_0061f730(piVar10,"audioDeviceRate");
    FUN_0061fa00(piVar10,pcVar12);
    local_8 = 4;
    (**(code **)(**(int **)(in_ECX + 0x98) + 0x38))();
    uVar4 = FUN_00637cf0(0x14);
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_00634ca0(&local_14,uVar4);
    piVar10 = (int *)(local_18 + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    local_8 = 0xffffffff;
    piVar10 = (int *)(local_14 + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    piVar10 = *(int **)(in_ECX + 0x98);
    iVar5 = (**(code **)(*piVar10 + 0x34))();
    iVar6 = (**(code **)(*piVar10 + 0x14))();
    if (iVar6 != iVar5) {
      piVar10 = &local_14;
      pcVar12 = "audioDeviceBufferSize";
      FUN_0061f730(piVar10,"audioDeviceBufferSize");
      FUN_0061fa00(piVar10,pcVar12);
      local_8 = 6;
      uVar4 = (**(code **)(**(int **)(in_ECX + 0x98) + 0x34))();
      FUN_00633770(&local_14,uVar4);
      local_8 = 0xffffffff;
      piVar10 = (int *)(local_14 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar10);
        }
      }
    }
    if (*(char *)(in_ECX + 0x6c) == '\0') {
      piVar10 = &local_14;
      pcVar12 = "audioDeviceInChans";
      FUN_0061f730(piVar10,"audioDeviceInChans");
      FUN_0061fa00(piVar10,pcVar12);
      local_8 = 7;
      uVar4 = FUN_0062b890(&local_18,piVar10,pcVar12);
      local_8 = CONCAT31(local_8._1_3_,8);
      FUN_00634ca0(&local_14,uVar4);
      piVar10 = (int *)(local_18 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar10);
        }
      }
      local_8 = 0xffffffff;
      piVar10 = (int *)(local_14 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar10);
        }
      }
    }
    if (*(char *)(in_ECX + 0x90) == '\0') {
      piVar10 = &local_14;
      pcVar12 = "audioDeviceOutChans";
      FUN_0061f730(piVar10,"audioDeviceOutChans");
      FUN_0061fa00(piVar10,pcVar12);
      local_8 = 9;
      uVar4 = FUN_0062b890(&local_18,piVar10,pcVar12);
      local_8 = CONCAT31(local_8._1_3_,10);
      FUN_00634ca0(&local_14,uVar4);
      piVar10 = (int *)(local_18 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar10);
        }
      }
      local_8 = 0xffffffff;
      piVar10 = (int *)(local_14 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar10);
        }
      }
    }
  }
  uVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x1a8)) {
    local_18 = *(int *)ThreadLocalStoragePointer;
    do {
      if ((*(int *)(local_18 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_14,&DAT_00a90e38);
      local_8 = 0xb;
      if (uVar2 < *(uint *)(in_ECX + 0x1a8)) {
        uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0x1a0) + uVar2 * 4);
      }
      else {
        uVar4 = 0;
      }
      piVar10 = &local_14;
      iVar5 = *(int *)(in_ECX + 0xf4);
      puVar7 = operator_new(0x10);
      local_8._0_1_ = 0xc;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      pcVar12 = "MIDIINPUT";
      if ((*(int *)(local_18 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,"MIDIINPUT",piVar10,uVar4), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(puVar7 + 3,pcVar12);
      local_8 = CONCAT31(local_8._1_3_,0xb);
      piVar8 = (int *)(iVar5 + 4);
      iVar5 = *piVar8;
      while (iVar5 != 0) {
        piVar8 = (int *)*piVar8;
        iVar5 = *piVar8;
      }
      *piVar8 = (int)puVar7;
      FUN_00634ca0(piVar10,uVar4);
      local_8 = 0xffffffff;
      piVar10 = (int *)(local_14 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar10);
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)(in_ECX + 0x1a8));
  }
  if (0 < *(int *)(in_ECX + 0x19c)) {
    FUN_005c8460();
    uVar2 = 0;
    local_8 = 0xd;
    if (0 < *(int *)(in_ECX + 0x19c)) {
      bVar11 = *(int *)(in_ECX + 0x19c) != 0;
      do {
        if (bVar11) {
          ppuVar9 = (undefined **)(*(int *)(in_ECX + 0x194) + uVar2 * 4);
        }
        else {
          ppuVar9 = &PTR_DAT_00c7ed68;
        }
        iVar5 = FUN_0062c730(*ppuVar9,1,0);
        if (iVar5 < 0) {
          if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_00cfff24) &&
             (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
            DAT_00cfff50 = 0;
            _DAT_00cfff54 = 0;
            _DAT_00cfff58 = 0;
            InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
            _DAT_00cfff74 = 0;
            _atexit((_func_4879 *)&LAB_0072a350);
            FUN_004c0352(&DAT_00cfff24);
          }
          FUN_0061fa00(&local_18,&DAT_00a90e4c);
          local_8._0_1_ = 0xe;
          if (uVar2 < *(uint *)(in_ECX + 0x19c)) {
            ppuVar9 = (undefined **)(*(int *)(in_ECX + 0x194) + uVar2 * 4);
          }
          else {
            ppuVar9 = &PTR_DAT_00c7ed68;
          }
          piVar10 = &local_18;
          iVar5 = *(int *)(in_ECX + 0xf4);
          puVar7 = operator_new(0x10);
          pvVar1 = ThreadLocalStoragePointer;
          local_8._0_1_ = 0xf;
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          pcVar12 = "MIDIINPUT";
          if ((*(int *)(*(int *)pvVar1 + 4) < DAT_00cfff24) &&
             (FUN_004c0391(&DAT_00cfff24,"MIDIINPUT",piVar10,ppuVar9), DAT_00cfff24 == -1)) {
            DAT_00cfff50 = 0;
            _DAT_00cfff54 = 0;
            _DAT_00cfff58 = 0;
            InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
            _DAT_00cfff74 = 0;
            _atexit((_func_4879 *)&LAB_0072a350);
            FUN_004c0352(&DAT_00cfff24);
          }
          FUN_0061f8b0(puVar7 + 3,pcVar12);
          local_8._0_1_ = 0xe;
          piVar8 = (int *)(iVar5 + 4);
          iVar5 = *piVar8;
          while (iVar5 != 0) {
            piVar8 = (int *)*piVar8;
            iVar5 = *piVar8;
          }
          *piVar8 = (int)puVar7;
          FUN_00634ca0(piVar10,ppuVar9);
          local_8 = CONCAT31(local_8._1_3_,0xd);
          piVar10 = (int *)(local_18 + -8);
          if (piVar10 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar10);
            }
          }
        }
        uVar2 = uVar2 + 1;
        bVar11 = uVar2 < *(uint *)(in_ECX + 0x19c);
      } while ((int)uVar2 < (int)*(uint *)(in_ECX + 0x19c));
    }
    iVar5 = 0;
    local_8 = 0xffffffff;
    if (0 < local_30) {
      do {
        piVar10 = (int *)(*(int *)((int)local_38 + iVar5 * 4) + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar10);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_30);
    }
    FID_conflict__free(local_38);
  }
  if (**(char **)(in_ECX + 0x1b8) != '\0') {
    if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_00cfff24) &&
       (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
      DAT_00cfff50 = 0;
      _DAT_00cfff54 = 0;
      _DAT_00cfff58 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
      _DAT_00cfff74 = 0;
      _atexit((_func_4879 *)&LAB_0072a350);
      FUN_004c0352(&DAT_00cfff24);
    }
    FUN_0061fa00(&local_18,"defaultMidiOutput");
    local_8 = 0x10;
    FUN_00634ca0(&local_18,in_ECX + 0x1b8);
    piVar10 = (int *)(local_18 + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar10);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

