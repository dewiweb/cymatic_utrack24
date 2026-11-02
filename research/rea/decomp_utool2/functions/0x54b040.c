// rea decompile_all
// name: FUN_0054b040
// address: 0x54b040
// body: available
// range: 0x54b040-0x54bacb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054b040(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  uint *puVar12;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_64;
  int local_60 [2];
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 local_50;
  int local_4c;
  undefined1 local_45;
  int *local_44;
  int local_40;
  uint local_3c [8];
  char local_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070fcd0;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((undefined *)in_ECX[10] != PTR_DAT_00c7ed54) &&
     (local_54 = in_ECX, iVar3 = FUN_0045c1e0(in_ECX[10]), iVar3 != 0)) {
    local_45 = 0;
    FUN_00636040(&stack0xffffff58);
    FUN_005bd0c0();
    puVar4 = (undefined4 *)FUN_00633420();
    *in_ECX = *puVar4;
    in_ECX[1] = puVar4[1];
    local_58 = operator_new(0x10);
    local_8 = 0;
    puVar4 = local_58 + 3;
    *local_58 = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    FUN_0061f730(puVar4);
    FUN_0061fa00(puVar4);
    local_8 = 1;
    FUN_0045c990();
    puVar12 = local_3c;
    local_8._0_1_ = 2;
    FUN_0061f730(puVar12);
    FUN_0061fa00(puVar12);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00634ca0(local_3c);
    piVar6 = (int *)(local_3c[0] - 8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    local_8._0_1_ = 1;
    piVar6 = (int *)(local_40 + -8);
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
    local_8._0_1_ = 4;
    iVar3 = FUN_00634c10();
    iVar5 = FUN_0061a340();
    if (iVar5 != 0) {
      piVar6 = (int *)(iVar3 + 4);
      iVar3 = *(int *)(iVar3 + 4);
      while (iVar3 != 0) {
        piVar6 = (int *)*piVar6;
        iVar3 = *piVar6;
      }
      *piVar6 = iVar5;
    }
    local_8._0_1_ = 1;
    piVar6 = (int *)(local_3c[0] - 8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    FUN_00633ba0(*in_ECX);
    local_8._0_1_ = 5;
    iVar3 = FUN_00634c10();
    iVar5 = FUN_0061a340();
    if (iVar5 != 0) {
      piVar6 = (int *)(iVar3 + 4);
      iVar3 = *(int *)(iVar3 + 4);
      while (iVar3 != 0) {
        piVar6 = (int *)*piVar6;
        iVar3 = *piVar6;
      }
      *piVar6 = iVar5;
    }
    local_8._0_1_ = 1;
    piVar6 = (int *)(local_4c + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    iVar3 = FUN_00634c10();
    iVar5 = FUN_0061a340();
    if (iVar5 != 0) {
      piVar6 = (int *)(iVar3 + 4);
      iVar3 = *(int *)(iVar3 + 4);
      while (iVar3 != 0) {
        piVar6 = (int *)*piVar6;
        iVar3 = *piVar6;
      }
      *piVar6 = iVar5;
    }
    FUN_005bde60();
    local_8._0_1_ = 6;
    iVar3 = FUN_00634c10();
    iVar5 = FUN_0061a340();
    if (iVar5 != 0) {
      piVar6 = (int *)(iVar3 + 4);
      iVar3 = *(int *)(iVar3 + 4);
      while (iVar3 != 0) {
        piVar6 = (int *)*piVar6;
        iVar3 = *piVar6;
      }
      *piVar6 = iVar5;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar6 = (int *)(local_4c + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    iVar3 = FUN_00634c10();
    local_3c[0] = 0;
    if (0 < (int)in_ECX[8]) {
      local_40 = *(int *)ThreadLocalStoragePointer;
      do {
        puVar4 = operator_new(0x10);
        local_8._0_1_ = 7;
        piVar6 = puVar4 + 1;
        *puVar4 = 0;
        *piVar6 = 0;
        puVar4[2] = 0;
        local_44 = piVar6;
        if ((*(int *)(local_40 + 4) < DAT_00cfff24) &&
           (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
          DAT_00cfff50 = 0;
          _DAT_00cfff54 = 0;
          _DAT_00cfff58 = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
          _DAT_00cfff74 = 0;
          _atexit((_func_4879 *)&LAB_0072a350);
          FUN_004c0352(&DAT_00cfff24);
        }
        FUN_0061f8b0(puVar4 + 3);
        local_8._0_1_ = 1;
        iVar5 = *(int *)(iVar3 + 4);
        piVar7 = (int *)(iVar3 + 4);
        while (iVar5 != 0) {
          piVar7 = (int *)*piVar7;
          iVar5 = *piVar7;
        }
        *piVar7 = (int)puVar4;
        if ((*(int *)(local_40 + 4) < DAT_00cfff24) && (FUN_004c0391(), DAT_00cfff24 == -1)) {
          DAT_00cfff50 = 0;
          _DAT_00cfff54 = 0;
          _DAT_00cfff58 = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
          _DAT_00cfff74 = 0;
          _atexit((_func_4879 *)&LAB_0072a350);
          FUN_004c0352(&DAT_00cfff24);
        }
        FUN_0061fa00(local_60);
        local_8 = CONCAT31(local_8._1_3_,8);
        FUN_00633770(local_60);
        piVar7 = (int *)(local_60[0] + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        FUN_00416980();
        local_8._0_1_ = 9;
        FUN_00627bf0();
        local_8._0_1_ = 10;
        local_50 = FUN_005b1ea0();
        local_8._0_1_ = 0xb;
        puVar4 = operator_new(0x10);
        local_8._0_1_ = 0xc;
        piVar7 = puVar4 + 1;
        *puVar4 = 0;
        *piVar7 = 0;
        puVar4[2] = 0;
        if ((*(int *)(local_40 + 4) < DAT_00cfff24) &&
           (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
          DAT_00cfff50 = 0;
          _DAT_00cfff54 = 0;
          _DAT_00cfff58 = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
          _DAT_00cfff74 = 0;
          _atexit((_func_4879 *)&LAB_0072a350);
          FUN_004c0352(&DAT_00cfff24);
        }
        FUN_0061f8b0(puVar4 + 3);
        local_8 = CONCAT31(local_8._1_3_,0xb);
        iVar5 = *piVar6;
        piVar1 = piVar6;
        while (iVar5 != 0) {
          piVar1 = (int *)*piVar1;
          iVar5 = *piVar1;
        }
        *piVar1 = (int)puVar4;
        iVar5 = FUN_0061a340();
        if (iVar5 != 0) {
          iVar2 = *piVar7;
          while (iVar2 != 0) {
            piVar7 = (int *)*piVar7;
            iVar2 = *piVar7;
          }
          *piVar7 = iVar5;
        }
        piVar7 = (int *)(local_6c + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        piVar7 = (int *)(local_64 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        piVar7 = (int *)(local_70 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        local_50 = FUN_00414bf0();
        local_8._0_1_ = 0xd;
        puVar4 = operator_new(0x10);
        local_8._0_1_ = 0xe;
        piVar7 = puVar4 + 1;
        *puVar4 = 0;
        *piVar7 = 0;
        puVar4[2] = 0;
        if ((*(int *)(local_40 + 4) < DAT_00cfff24) &&
           (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
          DAT_00cfff50 = 0;
          _DAT_00cfff54 = 0;
          _DAT_00cfff58 = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
          _DAT_00cfff74 = 0;
          _atexit((_func_4879 *)&LAB_0072a350);
          FUN_004c0352(&DAT_00cfff24);
        }
        FUN_0061f8b0(puVar4 + 3);
        local_8._0_1_ = 0xd;
        iVar5 = *piVar6;
        piVar1 = piVar6;
        while (iVar5 != 0) {
          piVar1 = (int *)*piVar1;
          iVar5 = *piVar1;
        }
        *piVar1 = (int)puVar4;
        iVar5 = FUN_0061a340();
        if (iVar5 != 0) {
          iVar2 = *piVar7;
          while (iVar2 != 0) {
            piVar7 = (int *)*piVar7;
            iVar2 = *piVar7;
          }
          *piVar7 = iVar5;
        }
        local_8._0_1_ = 1;
        piVar7 = (int *)(local_74 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        local_50 = FUN_005bcf60();
        local_8._0_1_ = 0xf;
        puVar4 = operator_new(0x10);
        local_8._0_1_ = 0x10;
        piVar7 = puVar4 + 1;
        *puVar4 = 0;
        *piVar7 = 0;
        puVar4[2] = 0;
        if ((*(int *)(local_40 + 4) < DAT_00cfff24) &&
           (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
          DAT_00cfff50 = 0;
          _DAT_00cfff54 = 0;
          _DAT_00cfff58 = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
          _DAT_00cfff74 = 0;
          _atexit((_func_4879 *)&LAB_0072a350);
          FUN_004c0352(&DAT_00cfff24);
        }
        FUN_0061f8b0(puVar4 + 3);
        local_8._0_1_ = 0xf;
        iVar5 = *piVar6;
        while (iVar5 != 0) {
          piVar6 = (int *)*piVar6;
          iVar5 = *piVar6;
        }
        *piVar6 = (int)puVar4;
        iVar5 = FUN_0061a340();
        if (iVar5 != 0) {
          iVar2 = *piVar7;
          while (iVar2 != 0) {
            piVar7 = (int *)*piVar7;
            iVar2 = *piVar7;
          }
          *piVar7 = iVar5;
        }
        local_8._0_1_ = 1;
        piVar6 = (int *)(local_78 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        if (local_3c[0] < (uint)local_54[8]) {
          iVar5 = *(int *)(local_54[6] + local_3c[0] * 4);
        }
        else {
          iVar5 = 0;
        }
        uVar8 = *(uint *)(iVar5 + 4);
        pcVar10 = local_1b + 2;
        local_1b[2] = 0;
        if ((int)uVar8 < 0) {
          uVar8 = -uVar8;
          do {
            pcVar11 = pcVar10;
            pcVar10 = pcVar11 + -1;
            uVar9 = uVar8 / 10;
            *pcVar10 = (char)uVar8 + (char)uVar9 * -10 + '0';
            uVar8 = uVar9;
          } while (uVar9 != 0);
          pcVar11[-2] = '-';
        }
        else {
          do {
            pcVar10 = pcVar10 + -1;
            uVar9 = uVar8 / 10;
            *pcVar10 = (char)uVar8 + (char)uVar9 * -10 + '0';
            uVar8 = uVar9;
          } while (uVar9 != 0);
        }
        FUN_004557e0();
        local_8._0_1_ = 0x11;
        puVar4 = operator_new(0x10);
        local_8._0_1_ = 0x12;
        piVar6 = puVar4 + 1;
        *puVar4 = 0;
        *piVar6 = 0;
        puVar4[2] = 0;
        if ((*(int *)(local_40 + 4) < DAT_00cfff24) &&
           (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
          DAT_00cfff50 = 0;
          _DAT_00cfff54 = 0;
          _DAT_00cfff58 = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
          _DAT_00cfff74 = 0;
          _atexit((_func_4879 *)&LAB_0072a350);
          FUN_004c0352(&DAT_00cfff24);
        }
        FUN_0061f8b0(puVar4 + 3);
        local_8._0_1_ = 0x11;
        iVar5 = *local_44;
        piVar7 = local_44;
        while (iVar5 != 0) {
          piVar7 = (int *)*piVar7;
          iVar5 = *piVar7;
        }
        *piVar7 = (int)puVar4;
        iVar5 = FUN_0061a340();
        if (iVar5 != 0) {
          iVar2 = *piVar6;
          while (iVar2 != 0) {
            piVar6 = (int *)*piVar6;
            iVar2 = *piVar6;
          }
          *piVar6 = iVar5;
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        piVar6 = (int *)(local_4c + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        local_3c[0] = local_3c[0] + 1;
        in_ECX = local_54;
      } while ((int)local_3c[0] < (int)local_54[8]);
    }
    puVar4 = local_58;
    FUN_00634df0(in_ECX + 10,PTR_DAT_00c7ed68,"utf-8");
    *(undefined1 *)(in_ECX + 3) = 0;
    FUN_00634ec0();
    FUN_004bfe14(puVar4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

