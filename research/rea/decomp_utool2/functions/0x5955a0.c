// rea decompile_all
// name: FUN_005955a0
// address: 0x5955a0
// body: available
// range: 0x5955a0-0x595b19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005955a0(undefined4 param_1,int param_2,int *param_3,int param_4,undefined1 *param_5,
                 undefined1 *param_6,uint *param_7,uint param_8,int param_9,uint *param_10,
                 uint param_11,int param_12,int *param_13)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *_Memory;
  undefined4 extraout_ECX;
  int *piVar7;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00714ddd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00550e70();
  local_8._0_1_ = 1;
  iVar4 = *param_3;
  FUN_006e85c0();
  iVar4 = (**(code **)(iVar4 + 0x88))();
  if (iVar4 == 1) {
    *param_5 = 1;
  }
  else if (iVar4 == 2) {
    *param_6 = 1;
  }
  if (local_14 == (undefined4 *)0x0) {
    piVar7 = (int *)FUN_00554ba0();
    if (PTR_DAT_00c7ed54 == (undefined *)*piVar7) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0045c1e0(PTR_DAT_00c7ed54);
    }
    piVar7 = (int *)(param_4 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    if (iVar4 != 0) {
      param_5 = operator_new(0x60);
      uVar6 = FUN_00554ba0();
      local_8 = CONCAT31(local_8._1_3_,6);
      iVar4 = FUN_005501d0(uVar6,&param_2);
      local_8._0_1_ = 1;
      local_8._1_3_ = 0;
      piVar7 = (int *)(param_4 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      if (iVar4 != 0) {
        LOCK();
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
        UNLOCK();
      }
      FUN_00550c60();
      *(undefined4 *)(iVar4 + 0x20) = 3;
      piVar7 = (int *)(PTR_DAT_00c7ed68 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      LOCK();
      iVar2 = *(int *)(iVar4 + 0x24);
      *(int *)(iVar4 + 0x24) = (int)PTR_DAT_00c7ed68;
      UNLOCK();
      piVar7 = (int *)(iVar2 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      FUN_0045c990();
      iVar4 = *param_13;
      *param_13 = (int)param_3;
      piVar7 = (int *)(iVar4 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      uVar1 = *param_7;
      *param_7 = *param_7 + param_8;
      param_7[1] = param_7[1] + param_9 + (uint)CARRY4(uVar1,param_8);
      uVar1 = *param_10;
      *param_10 = *param_10 + param_11;
      param_10[1] = param_10[1] + param_12 + (uint)CARRY4(uVar1,param_11);
    }
    goto LAB_00595ae6;
  }
  FUN_0054fa10();
  if (*(char *)(local_14 + 7) == '\0') {
    iVar2 = local_14[2];
    if (iVar2 == 2) {
LAB_00595751:
      if (param_4 == 1) {
        if (iVar4 == 1) {
          FUN_006f6dd6(param_3,0,&ProjectExplorerBaseItem::RTTI_Type_Descriptor,
                       &ProjectExplorerItem_Song::RTTI_Type_Descriptor);
          FUN_00417590(1);
          FUN_00637b90();
          uVar1 = *param_7;
          *param_7 = *param_7 + param_8;
          param_7[1] = param_7[1] + param_9 + (uint)CARRY4(uVar1,param_8);
          uVar1 = *param_10;
          *param_10 = *param_10 + param_11;
          param_10[1] = param_10[1] + param_12 + (uint)CARRY4(uVar1,param_11);
        }
        else if (iVar4 == 2) {
          FUN_006f6dd6(param_3,0,&ProjectExplorerBaseItem::RTTI_Type_Descriptor,
                       &ProjectExplorerItem_Song::RTTI_Type_Descriptor);
          FUN_0054fbc0();
          FUN_006e85c0();
          uVar5 = FUN_005bd550();
          local_8._0_1_ = 4;
          uVar6 = extraout_ECX;
          FUN_00637690(uVar5);
          FUN_006377c0(uVar6);
          FUN_00637730();
          FUN_00417590(5);
          FUN_00637c10();
          FUN_00637c10();
          local_8._0_1_ = 1;
          FUN_00637c10();
          FUN_0045c990();
          puVar3 = (uint *)*param_13;
          *param_13 = (int)param_7;
          param_7 = puVar3;
          FUN_00637c10();
        }
        else {
          FUN_00417590(2);
          FUN_0045c990();
          piVar7 = (int *)*param_13;
          *param_13 = (int)param_3;
          param_3 = piVar7;
          FUN_00637c10();
          uVar1 = *param_7;
          *param_7 = *param_7 + 0x1000;
          param_7[1] = param_7[1] + (uint)(0xffffefff < uVar1);
          uVar1 = *param_10;
          *param_10 = *param_10 + 0x1000;
          param_10[1] = param_10[1] + (uint)(0xffffefff < uVar1);
        }
      }
      else if (param_4 == 2) {
        FUN_00417590(1);
        FUN_0045c990();
        piVar7 = (int *)*param_13;
        *param_13 = (int)param_3;
        param_3 = piVar7;
        FUN_00637c10();
        uVar1 = *param_7;
        *param_7 = *param_7 + param_8;
        param_7[1] = param_7[1] + param_9 + (uint)CARRY4(uVar1,param_8);
        uVar1 = *param_10;
        *param_10 = *param_10 + param_11;
        param_10[1] = param_10[1] + param_12 + (uint)CARRY4(uVar1,param_11);
      }
    }
    else if (iVar2 == 3) {
      FUN_00417590(1);
      uVar1 = *param_7;
      *param_7 = *param_7 + param_8;
      param_7[1] = param_7[1] + param_9 + (uint)CARRY4(uVar1,param_8);
      uVar1 = *param_10;
      *param_10 = *param_10 + param_11;
      param_10[1] = param_10[1] + param_12 + (uint)CARRY4(uVar1,param_11);
    }
    else if (iVar2 == 4) goto LAB_00595751;
  }
  else {
    piVar7 = (int *)&DAT_00bfe12c;
    param_3 = (int *)&DAT_00bfe12c;
    local_8._0_1_ = 2;
    iVar4 = local_14[2];
    if (((iVar4 == 2) || (iVar4 == 3)) || (iVar4 == 4)) {
      FUN_0045c990();
      piVar7 = param_13;
      param_3 = param_13;
      param_13 = (int *)&DAT_00bfe12c;
      FUN_00637c10();
    }
    FUN_00637690(&param_3);
    FUN_006377c0();
    FUN_00417590(3);
    _Memory = param_13 + -2;
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar4 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    uVar1 = *param_7;
    *param_7 = *param_7 + param_8;
    param_7[1] = param_7[1] + param_9 + (uint)CARRY4(uVar1,param_8);
    uVar1 = *param_10;
    *param_10 = *param_10 + param_11;
    param_10[1] = param_10[1] + param_12 + (uint)CARRY4(uVar1,param_11);
    piVar7 = piVar7 + -2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  LOCK();
  piVar7 = local_14 + 1;
  iVar4 = *piVar7;
  *piVar7 = *piVar7 + -1;
  UNLOCK();
  if (iVar4 == 1) {
    (**(code **)*local_14)();
  }
LAB_00595ae6:
  piVar7 = (int *)(param_2 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  ExceptionList = local_10;
  return;
}

