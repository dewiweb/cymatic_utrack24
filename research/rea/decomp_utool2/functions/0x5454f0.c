// rea decompile_all
// name: FUN_005454f0
// address: 0x5454f0
// body: available
// range: 0x5454f0-0x5459fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005454f0(undefined4 *param_1)

{
  undefined4 **ppuVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  undefined4 **extraout_ECX;
  undefined4 **local_50;
  undefined4 *local_34;
  undefined1 *local_30;
  undefined4 *local_2c;
  int local_28 [3];
  int local_1c;
  int *local_18;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070f06a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *in_ECX = (int)&DAT_00bfe12c;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00c8a5c4 + 0x1c);
  local_28[1] = 1;
  local_50 = (undefined4 **)0x54554c;
  local_18 = in_ECX;
  EnterCriticalSection(lpCriticalSection);
  if (param_1[3] == 0) {
    local_50 = (undefined4 **)0x5457d8;
    FUN_00410ea0();
    local_8._0_1_ = 0x10;
    local_50 = (undefined4 **)0x5457e7;
    FUN_00636a10();
    local_8._0_1_ = 0x11;
    local_50 = &local_34;
    FUN_00635a10();
    local_8 = CONCAT31(local_8._1_3_,0x12);
    FUN_005b3230();
    piVar5 = local_34 + -2;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        local_50 = (undefined4 **)0x54582d;
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_30 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        local_50 = (undefined4 **)0x545850;
        FID_conflict__free(piVar5);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,0x16);
    piVar5 = local_2c + -2;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        local_50 = (undefined4 **)0x545877;
        FID_conflict__free(piVar5);
      }
    }
    local_50 = (undefined4 **)0x545886;
    puVar2 = (undefined4 *)FUN_00634890();
    piVar5 = (int *)(local_28[0] + -8);
    local_11 = *(byte *)*puVar2;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        local_50 = (undefined4 **)0x5458ad;
        FID_conflict__free(piVar5);
      }
    }
    if (local_11 == 0) {
      iVar3 = 0;
      local_11 = 1;
      if (0 < (int)param_1[6]) {
        do {
          local_50 = &local_34;
          FUN_00410f30();
          puVar2 = local_34;
          local_8 = CONCAT31(local_8._1_3_,0x17);
          if (local_34 != (undefined4 *)0x0) {
            LOCK();
            local_34[1] = local_34[1] + 1;
            UNLOCK();
          }
          local_50 = (undefined4 **)0x5458fb;
          piVar5 = (int *)FUN_005454f0();
          if (PTR_DAT_00c7ed54 == (undefined *)*piVar5) {
            iVar4 = 0;
          }
          else {
            local_50 = (undefined4 **)PTR_DAT_00c7ed54;
            iVar4 = FUN_0045c1e0();
          }
          piVar5 = (int *)(local_30 + -8);
          local_11 = local_11 & iVar4 != 0;
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar4 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar4 == 0) {
              local_50 = (undefined4 **)0x54594b;
              FID_conflict__free(piVar5);
            }
          }
          if (local_11 == 0) {
            in_ECX = local_18;
            if (puVar2 != (undefined4 *)0x0) {
              LOCK();
              piVar5 = puVar2 + 1;
              iVar3 = *piVar5;
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                local_50 = (undefined4 **)0x545994;
                (**(code **)*puVar2)();
                in_ECX = local_18;
              }
            }
            break;
          }
          local_8 = CONCAT31(local_8._1_3_,0x16);
          if (puVar2 != (undefined4 *)0x0) {
            LOCK();
            piVar5 = puVar2 + 1;
            iVar4 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              local_50 = (undefined4 **)0x54596f;
              (**(code **)*puVar2)();
            }
          }
          iVar3 = iVar3 + 1;
          in_ECX = local_18;
        } while (iVar3 < (int)param_1[6]);
      }
      piVar5 = (int *)(local_1c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      LOCK();
      iVar3 = *in_ECX;
      *in_ECX = local_1c;
      UNLOCK();
      piVar5 = (int *)(iVar3 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          local_50 = (undefined4 **)0x5459ca;
          FID_conflict__free(piVar5);
        }
      }
    }
    piVar5 = (int *)(local_1c + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        local_50 = (undefined4 **)0x5459f5;
        FID_conflict__free(piVar5);
      }
    }
    goto LAB_00545798;
  }
  local_50 = (undefined4 **)0x545562;
  FUN_00410ea0();
  local_50 = (undefined4 **)0x54556e;
  FUN_00410ea0();
  local_8._0_1_ = 4;
  local_50 = (undefined4 **)0x54557d;
  FUN_00636a10();
  local_8._0_1_ = 5;
  local_50 = (undefined4 **)local_28;
  FUN_00635a10();
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_005b3520();
  piVar5 = (int *)(local_28[0] + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_50 = (undefined4 **)0x5455c3;
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = local_2c + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_50 = (undefined4 **)0x5455e6;
      FID_conflict__free(piVar5);
    }
  }
  local_8._0_1_ = 10;
  piVar5 = (int *)(local_30 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_50 = (undefined4 **)0x54560d;
      FID_conflict__free(piVar5);
    }
  }
  puVar2 = (undefined4 *)FUN_005b48e0();
  local_34 = (undefined4 *)FUN_005b48e0();
  local_11 = puVar2 != local_34;
  ppuVar1 = (undefined4 **)param_1[3];
  local_50 = (undefined4 **)0x54563b;
  local_30 = operator_new(0x80);
  local_8._0_1_ = 0xb;
  local_50 = ppuVar1;
  puVar2 = (undefined4 *)FUN_0053e120();
  local_8._0_1_ = 0xc;
  local_50 = (undefined4 **)0x545664;
  local_2c = puVar2;
  FUN_006369b0();
  local_8._0_1_ = 0xd;
  local_50 = (undefined4 **)0x545670;
  FUN_00541b50();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  piVar5 = (int *)(local_30 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_50 = (undefined4 **)0x545694;
      FID_conflict__free(piVar5);
    }
  }
  if (local_11 == 0) {
LAB_005456af:
    iVar3 = FUN_0053c9a0();
    local_34 = (undefined4 *)&stack0xffffffb4;
    local_50 = (undefined4 **)&stack0xffffffb4;
    FUN_00410a10();
    local_30 = (undefined1 *)&local_50;
    local_8._0_1_ = 0xe;
    local_50 = extraout_ECX;
    FUN_0045c990();
    local_8._0_1_ = 0xf;
    FUN_0045c990("Song Project Error");
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_005bd5a0();
    if (iVar3 == 0) {
      local_50 = (undefined4 **)0x545715;
      piVar5 = (int *)FUN_00410a10();
      iVar3 = *local_18;
      *local_18 = *piVar5;
      *piVar5 = iVar3;
      piVar5 = local_34 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          local_50 = (undefined4 **)0x545740;
          FID_conflict__free(piVar5);
        }
      }
    }
  }
  else {
    local_50 = (undefined4 **)0x5456a7;
    iVar3 = FUN_0053cab0();
    if (iVar3 == 0) goto LAB_005456af;
  }
  if (puVar2 != (undefined4 *)0x0) {
    local_50 = (undefined4 **)0x54574f;
    (**(code **)*puVar2)();
  }
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_50 = (undefined4 **)0x54576f;
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_28[2] + -8);
  in_ECX = local_18;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_50 = (undefined4 **)0x545792;
      FID_conflict__free(piVar5);
      in_ECX = local_18;
    }
  }
LAB_00545798:
  FUN_00548700();
  local_50 = (undefined4 **)0x5457a6;
  LeaveCriticalSection(lpCriticalSection);
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = param_1 + 1;
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      local_50 = (undefined4 **)0x5457bb;
      (**(code **)*param_1)();
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}

