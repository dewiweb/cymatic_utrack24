// rea decompile_all
// name: FUN_005a51b0
// address: 0x5a51b0
// body: available
// range: 0x5a51b0-0x5a583e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_005a51b0(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  void **ppvVar4;
  int in_ECX;
  int iVar5;
  int *extraout_ECX;
  int iVar6;
  int *extraout_ECX_00;
  int *piVar7;
  uint uVar8;
  void *_Memory;
  undefined8 uVar9;
  undefined4 uVar10;
  void *local_106c [3];
  undefined4 *local_1060;
  void *local_105c [2];
  int local_1054;
  int local_1050;
  int *local_104c;
  undefined1 *local_1048;
  int *local_1044;
  void *local_1040;
  uint local_103c;
  int local_1038;
  int local_1034;
  int local_1030 [1031];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007174b6;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppvVar4 = local_105c;
  uVar10 = 0x5a51ff;
  local_1034 = in_ECX;
  local_14 = uVar2;
  FUN_004eda80(ppvVar4);
  local_8 = 0;
  FUN_0062f290(param_3,uVar10,ppvVar4);
  FUN_00636260(&local_1044,&DAT_00747f54,uVar10,ppvVar4);
  local_8._0_1_ = 1;
  FUN_005893a0(uVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  local_1044 = local_1044 + -2;
  if (local_1044 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *local_1044;
    *local_1044 = *local_1044 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(local_1044);
    }
  }
  piVar7 = (int *)(in_ECX + 0x2bd8);
  iVar5 = *(int *)(in_ECX + 0x2be0) + 1;
  local_104c = piVar7;
  if (*(int *)(in_ECX + 0x2bdc) < iVar5) {
    FUN_00409cf0(iVar5 / 2 + *(int *)(in_ECX + 0x2be0) + 9 & 0xfffffff8);
  }
  iVar5 = *(int *)(in_ECX + 0x2be0);
  *(int *)(in_ECX + 0x2be0) = iVar5 + 1;
  piVar3 = (int *)(*piVar7 + iVar5 * 4);
  if (piVar3 != (int *)0x0) {
    iVar5 = *param_2;
    *piVar3 = iVar5;
    piVar3 = (int *)(iVar5 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
  }
  piVar3 = (int *)(in_ECX + 0x2be4);
  iVar5 = *(int *)(in_ECX + 0x2bec) + 1;
  local_1044 = piVar3;
  if (*(int *)(in_ECX + 0x2be8) < iVar5) {
    FUN_0041c930(iVar5 / 2 + *(int *)(in_ECX + 0x2bec) + 9 & 0xfffffff8);
  }
  iVar5 = *(int *)(in_ECX + 0x2bec);
  *(int *)(in_ECX + 0x2bec) = iVar5 + 1;
  if (*piVar3 + iVar5 * 0xc != 0) {
    FUN_0041b050(local_105c);
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x2bd0);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x2bd0) = 0;
    (**(code **)*puVar1)(1);
  }
  FUN_005604b0();
  uVar10 = FUN_005a1260(local_1030);
  local_8._0_1_ = 2;
  FUN_005530b0(uVar10);
  local_8 = (uint)local_8._1_3_ << 8;
  piVar3 = (int *)(local_1030[0] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    FUN_005a95a0();
  }
  FUN_005a9f50();
  FUN_0045c990("Import");
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_004edf90(local_1030,&PTR_DAT_00c7ed68);
  piVar3 = (int *)(local_1030[0] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (*(int *)(in_ECX + 0x2be0) == 1) {
    uVar10 = FUN_0040f6b0(&local_1034,0);
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_004edde0(uVar10);
    piVar3 = (int *)(local_1034 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    ppvVar4 = (void **)FUN_0041c8d0(&local_1040,0);
    local_8._0_1_ = 7;
    piVar3 = extraout_ECX;
  }
  else {
    _Memory = (void *)0x0;
    iVar5 = 0;
    local_1040 = (void *)0x0;
    local_103c = 0;
    local_1038 = 0;
    local_8._0_1_ = 8;
    local_1030[0] = 0;
    if (0 < *(int *)(in_ECX + 0x2be0)) {
      do {
        uVar9 = FUN_0040f6b0(&local_1050,local_1030[0]);
        uVar2 = (uint)((ulonglong)uVar9 >> 0x20);
        local_1060 = (undefined4 *)uVar9;
        iVar6 = iVar5 + 1;
        if ((int)uVar2 < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar5 + 2;
          }
          uVar8 = iVar5 + 9 + (iVar6 >> 1) & 0xfffffff8;
          piVar7 = local_104c;
          if (uVar2 != uVar8) {
            if ((int)uVar8 < 1) {
              FID_conflict__free(_Memory);
              _Memory = (void *)0x0;
              piVar7 = local_104c;
              local_1040 = _Memory;
              local_103c = uVar8;
            }
            else if (_Memory == (void *)0x0) {
              _Memory = (void *)FUN_004c554b();
              piVar7 = local_104c;
              local_1040 = _Memory;
              local_103c = uVar8;
            }
            else {
              _Memory = (void *)FUN_004c553b(_Memory,uVar8 * 4);
              piVar7 = local_104c;
              local_1040 = _Memory;
              local_103c = uVar8;
            }
          }
        }
        local_1038 = iVar5 + 1;
        puVar1 = (undefined4 *)((int)_Memory + iVar5 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *local_1060;
          *local_1060 = &DAT_00bfe12c;
        }
        piVar3 = (int *)(local_1050 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar3);
          }
        }
        iVar6 = local_1030[0];
        ppvVar4 = local_106c;
        iVar5 = local_1030[0];
        uVar10 = FUN_0041c8d0(ppvVar4,local_1030[0]);
        FUN_0062f290(uVar10,ppvVar4,iVar5);
        FUN_0040f7f0();
        FID_conflict__free(local_106c[0]);
        _Memory = local_1040;
        iVar5 = local_1038;
        if (iVar6 < *(int *)(local_1034 + 0x2be0) + -1) {
          FUN_0045c990("\r\n------------------------------------------\r\n");
          iVar5 = local_1038 + 1;
          if ((int)local_103c < iVar5) {
            if (iVar5 < 0) {
              iVar5 = local_1038 + 2;
            }
            FUN_00409cf0((iVar5 >> 1) + local_1038 + 9 & 0xfffffff8);
          }
          _Memory = local_1040;
          iVar5 = local_1038 + 1;
          puVar1 = (undefined4 *)((int)local_1040 + local_1038 * 4);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = local_1048;
            local_1048 = &DAT_00bfe12c;
          }
          piVar3 = (int *)(local_1048 + -8);
          local_1038 = iVar5;
          if (piVar3 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar3);
            }
          }
        }
        local_1030[0] = local_1030[0] + 1;
      } while (local_1030[0] < *(int *)(local_1034 + 0x2be0));
    }
    FUN_0045c990("Queued Export jobs report");
    local_8._0_1_ = 9;
    FUN_004edde0(&local_1034);
    local_8._0_1_ = 8;
    piVar3 = (int *)(local_1034 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar3);
        piVar3 = extraout_ECX_00;
      }
    }
    ppvVar4 = &local_1040;
  }
  FUN_004edb40(ppvVar4,piVar3);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_0040f7f0();
  FID_conflict__free(local_1040);
  FUN_004edf00(0xffffffff,0xffffffff,0xffffffff,0xffffffff);
  FUN_004edd60();
  FUN_004ea530(0,0);
  FUN_004ea530(1,1);
  FUN_006e5240();
  iVar5 = 0;
  if (0 < piVar7[2]) {
    do {
      piVar3 = (int *)(*(int *)(*piVar7 + iVar5 * 4) + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < piVar7[2]);
  }
  if (piVar7[1] != 0) {
    FID_conflict__free((void *)*piVar7);
    *piVar7 = 0;
    piVar7[1] = 0;
  }
  piVar3 = local_1044;
  piVar7[2] = 0;
  FUN_0041c990();
  if (piVar3[1] != 0) {
    FID_conflict__free((void *)*piVar3);
    *piVar3 = 0;
    piVar3[1] = 0;
  }
  piVar3[2] = 0;
  FUN_0040e820();
  iVar5 = 0;
  if (0 < local_1054) {
    do {
      piVar7 = (int *)(*(int *)((int)local_105c[0] + iVar5 * 4) + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_1054);
  }
  FID_conflict__free(local_105c[0]);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

