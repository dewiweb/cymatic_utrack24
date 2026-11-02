// rea decompile_all
// name: FUN_00590d10
// address: 0x590d10
// body: available
// range: 0x590d10-0x591231 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00590d10(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int in_ECX;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007145d1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar9 = __allmul(*(undefined4 *)(*(int *)(in_ECX + 0x28) + 0x10));
  uVar5 = (int)((ulonglong)uVar9 >> 0x20) << 2 | (uint)uVar9 >> 0x1e;
  iVar6 = FUN_0058e1a0();
  piVar7 = *(int **)(iVar6 + 0xc);
  if ((piVar7 != (int *)0x0) && (*(char *)(in_ECX + 0x2c) == '\0')) {
    if ((undefined **)*piVar7 == juce::FileOutputStream::vftable) {
      lVar10 = *(longlong *)(piVar7 + 6);
    }
    else {
      lVar10 = (*(code *)((undefined **)*piVar7)[3])();
    }
    lVar10 = lVar10 + CONCAT44(uVar5,(uint)uVar9 * 4);
    local_30 = (int)((ulonglong)lVar10 >> 0x20);
    if ((local_30 != 0) || (0x80000000 < (uint)lVar10)) {
      FUN_00590b60();
    }
  }
  if (*(int *)(iVar6 + 0xc) == 0) {
    if (*(char *)(in_ECX + 0x2c) == '\0') {
      FUN_0055d8a0();
      FUN_0045c990();
      FUN_00633930();
      local_8 = 6;
      FUN_005403c0(&stack0xffffffac);
      FUN_006377c0();
      FUN_00637730();
      FUN_006377c0();
      local_8._0_1_ = 7;
      FUN_0058e5c0();
      local_8 = CONCAT31(local_8._1_3_,8);
      piVar7 = (int *)FUN_00635a10();
      iVar3 = *piVar7;
      *piVar7 = (int)&DAT_00bfe12c;
      piVar7 = (int *)(local_28 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_24 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_20 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      local_8._0_1_ = 0xc;
      piVar7 = (int *)(uVar5 - 8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      FUN_00636040();
      local_8 = CONCAT31(local_8._1_3_,0xd);
      FUN_00634890();
      piVar7 = (int *)(in_ECX + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,0xc);
      piVar7 = (int *)(local_30 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      if (*(int *)(in_ECX + 0x14) != 0) {
        LOCK();
        piVar7 = (int *)(*(int *)(in_ECX + 0x14) + 4);
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      cVar4 = FUN_005908f0();
    }
    else {
      FUN_005403c0();
      FUN_006377c0();
      local_8 = 0;
      FUN_0058e5c0();
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar7 = (int *)FUN_00635a10();
      iVar3 = *piVar7;
      *piVar7 = (int)&DAT_00bfe12c;
      piVar7 = (int *)(uVar5 - 8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_20 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      local_8._0_1_ = 4;
      piVar7 = (int *)(local_24 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      FUN_00636040();
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_00634890();
      piVar7 = (int *)(local_28 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,4);
      piVar7 = (int *)(in_ECX + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      if (*(int *)(in_ECX + 0x14) != 0) {
        LOCK();
        piVar7 = (int *)(*(int *)(in_ECX + 0x14) + 4);
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      cVar4 = FUN_005908f0();
    }
    if (cVar4 == '\0') {
      FUN_0058e710();
      piVar7 = (int *)(iVar3 + -8);
      if (piVar7 == &DAT_00bfe124) {
        ExceptionList = local_10;
        return 0;
      }
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 != 0) {
        ExceptionList = local_10;
        return 0;
      }
      FID_conflict__free(piVar7);
      ExceptionList = local_10;
      return 0;
    }
    piVar7 = (int *)(iVar3 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar6 + 0x10));
  local_8 = 0xe;
  cVar4 = (**(code **)(**(int **)(iVar6 + 0x28) + 4))();
  (**(code **)(**(int **)(iVar6 + 0x28) + 8))();
  local_8 = 0xffffffff;
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar6 + 0x10));
  iVar3 = *(int *)(in_ECX + 0x28);
  if (*(int *)(iVar3 + 0x10) == 0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)**(undefined4 **)(iVar3 + 8);
  }
  uVar9 = __allmul(*(int *)(iVar3 + 0x10),*(int *)(iVar3 + 0x10) >> 0x1f,
                   *(undefined4 *)(*(int *)(iVar6 + 0x28) + 0x14));
  uVar11 = __allmul(uVar9,*local_18);
  iVar6 = *(int *)(in_ECX + 0x18);
  uVar8 = (uint)(uVar11 >> 3);
  puVar1 = (uint *)(iVar6 + 0x38);
  uVar5 = *puVar1;
  *puVar1 = *puVar1 + uVar8;
  *(int *)(iVar6 + 0x3c) =
       *(int *)(iVar6 + 0x3c) + (int)((uVar11 >> 3) >> 0x20) + (uint)CARRY4(uVar5,uVar8);
  (**(code **)(**(int **)(*(int *)(iVar6 + 0x10) + 0x28) + 0x10))(uVar8);
  if (cVar4 == '\0') {
    FUN_0058e710(5,0x414,&PTR_DAT_00c7ed54);
  }
  ExceptionList = local_10;
  return 0;
}

