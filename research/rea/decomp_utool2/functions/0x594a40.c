// rea decompile_all
// name: FUN_00594a40
// address: 0x594a40
// body: available
// range: 0x594a40-0x594fe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00594a40(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  void **ppvVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  int *piVar4;
  int iVar5;
  int *extraout_ECX_00;
  int iVar6;
  int *extraout_ECX_01;
  int iVar7;
  undefined4 uVar8;
  void *local_1068 [3];
  LPCRITICAL_SECTION local_105c;
  int local_1058;
  undefined4 *local_1054;
  void *local_1050 [3];
  int local_1044;
  void *local_1040;
  int local_103c;
  int local_1038;
  int local_1034;
  undefined1 *local_1030 [1031];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714ce2;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_105c = (LPCRITICAL_SECTION)(in_ECX + 0x2698);
  local_1034 = in_ECX;
  EnterCriticalSection(local_105c);
  local_8 = 0;
  FUN_00412d30(0,extraout_ECX);
  ppvVar3 = local_1050;
  uVar8 = 0x594aba;
  FUN_004eda80(ppvVar3);
  local_8._0_1_ = 1;
  FUN_0062f290(param_4,uVar8,ppvVar3);
  FUN_0062f290(param_3,uVar8,ppvVar3);
  FUN_00636260(local_1030,&DAT_00746a7c,uVar8,ppvVar3);
  local_8._0_1_ = 2;
  FUN_005893a0();
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar4 = (int *)(local_1030[0] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(in_ECX + 0x26bc);
  iVar5 = *(int *)(in_ECX + 0x26c4) + 1;
  if (*(int *)(in_ECX + 0x26c0) < iVar5) {
    FUN_00409cf0(iVar5 / 2 + *(int *)(in_ECX + 0x26c4) + 9 & 0xfffffff8);
  }
  iVar6 = local_1034;
  iVar5 = *(int *)(in_ECX + 0x26c4);
  *(int *)(in_ECX + 0x26c4) = iVar5 + 1;
  piVar2 = (int *)(*piVar4 + iVar5 * 4);
  if (piVar2 != (int *)0x0) {
    iVar5 = *param_2;
    *piVar2 = iVar5;
    piVar2 = (int *)(iVar5 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  local_1044 = local_1034 + 0x26c8;
  iVar5 = *(int *)(local_1034 + 0x26d0) + 1;
  if (*(int *)(local_1034 + 0x26cc) < iVar5) {
    FUN_0041c930(iVar5 / 2 + *(int *)(local_1034 + 0x26d0) + 9 & 0xfffffff8);
  }
  iVar5 = *(int *)(iVar6 + 0x26d0);
  *(int *)(iVar6 + 0x26d0) = iVar5 + 1;
  if (*(int *)(iVar6 + 0x26c8) + iVar5 * 0xc != 0) {
    FUN_0041b050(local_1050);
  }
  if (*(int *)(iVar6 + 0x26b8) == 0) {
    puVar1 = *(undefined4 **)(iVar6 + 0x235c);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(iVar6 + 0x235c) = 0;
      (**(code **)*puVar1)(1);
    }
    FUN_00560420();
    FUN_0045c990("Export");
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_004edf90(local_1030,&PTR_DAT_00c7ed68);
    piVar2 = (int *)(local_1030[0] + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    if (*(int *)(iVar6 + 0x26c4) == 1) {
      uVar8 = FUN_0040f6b0(&local_1034,0);
      local_8 = CONCAT31(local_8._1_3_,6);
      FUN_004edde0(uVar8);
      piVar2 = (int *)(local_1034 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      ppvVar3 = (void **)FUN_0041c8d0(&local_1040,0);
      local_8._0_1_ = 7;
      piVar2 = extraout_ECX_00;
    }
    else {
      iVar5 = 0;
      local_1040 = (void *)0x0;
      local_103c = 0;
      local_1038 = 0;
      iVar7 = 0;
      local_8._0_1_ = 8;
      if (0 < *(int *)(iVar6 + 0x26c4)) {
        do {
          local_1054 = (undefined4 *)FUN_0040f6b0(&local_1058,iVar7);
          iVar6 = iVar5 + 1;
          if (local_103c < iVar6) {
            if (iVar6 < 0) {
              iVar6 = iVar5 + 2;
            }
            FUN_00409cf0((iVar6 >> 1) + iVar5 + 9 & 0xfffffff8);
            iVar5 = local_1038;
          }
          local_1038 = iVar5 + 1;
          puVar1 = (undefined4 *)((int)local_1040 + iVar5 * 4);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = *local_1054;
            *local_1054 = &DAT_00bfe12c;
          }
          piVar2 = (int *)(local_1058 + -8);
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar2);
            }
          }
          ppvVar3 = local_1068;
          iVar5 = iVar7;
          uVar8 = FUN_0041c8d0(ppvVar3,iVar7);
          FUN_0062f290(uVar8,ppvVar3,iVar5);
          FUN_0040f7f0();
          FID_conflict__free(local_1068[0]);
          iVar5 = local_1038;
          if (iVar7 < *(int *)(local_1034 + 0x26c4) + -1) {
            FUN_0045c990("\r\n------------------------------------------\r\n");
            iVar5 = local_1038 + 1;
            if (local_103c < iVar5) {
              if (iVar5 < 0) {
                iVar5 = local_1038 + 2;
              }
              FUN_00409cf0((iVar5 >> 1) + local_1038 + 9 & 0xfffffff8);
            }
            iVar5 = local_1038 + 1;
            puVar1 = (undefined4 *)((int)local_1040 + local_1038 * 4);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = local_1030[0];
              local_1030[0] = &DAT_00bfe12c;
            }
            piVar2 = (int *)(local_1030[0] + -8);
            local_1038 = iVar5;
            if (piVar2 != &DAT_00bfe124) {
              LOCK();
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 0) {
                FID_conflict__free(piVar2);
              }
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(local_1034 + 0x26c4));
      }
      FUN_0045c990("Queued Export jobs report");
      local_8._0_1_ = 9;
      FUN_004edde0(&local_1034);
      local_8._0_1_ = 8;
      piVar2 = (int *)(local_1034 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar2);
          piVar2 = extraout_ECX_01;
        }
      }
      ppvVar3 = &local_1040;
    }
    FUN_004edb40(ppvVar3,piVar2);
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_0040f7f0();
    FID_conflict__free(local_1040);
    FUN_004edf00(0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    FUN_004edd60();
    FUN_004ea530(0,0);
    FUN_004ea530(1,1);
    FUN_006e5240();
    FUN_0040f7f0();
    if (*(int *)(in_ECX + 0x26c0) != 0) {
      FID_conflict__free((void *)*piVar4);
      *piVar4 = 0;
      *(undefined4 *)(in_ECX + 0x26c0) = 0;
    }
    *(undefined4 *)(in_ECX + 0x26c4) = 0;
    FUN_0040e820();
  }
  FUN_0040f7f0();
  FID_conflict__free(local_1050[0]);
  LeaveCriticalSection(local_105c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

