// rea decompile_all
// name: FUN_004fb550
// address: 0x4fb550
// body: available
// range: 0x4fb550-0x4fb917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fb550(int *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_ECX;
  int *piVar9;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00706a74;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar4 = (int *)(*param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  piVar4 = (int *)(PTR_DAT_00c7ebd4 + -8);
  PTR_DAT_00c7ebd4 = (undefined *)*param_1;
  local_18 = in_ECX;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if ((*(int *)(in_ECX + 0xd64) == 0) && (*(char *)(in_ECX + 0x2508) == '\0')) {
    FUN_00636a10(&param_1);
    iVar1 = *(int *)(in_ECX + 0xd68);
    local_1c = (int *)(iVar1 + -8);
    if (local_1c != &DAT_00bfe124) {
      LOCK();
      *local_1c = *local_1c + 1;
      UNLOCK();
    }
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    uVar2 = *(undefined1 *)(in_ECX + 0xd6c);
    uVar7 = *(undefined4 *)(in_ECX + 0xd64);
    if ((char)param_2 == '\0') {
      FUN_00637b90(in_ECX + 0xd70);
    }
    FUN_0045c990(".songprj",uVar3);
    local_8._0_1_ = 2;
    piVar4 = param_1 + -2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    puVar5 = (undefined4 *)FUN_00637730(param_1);
    FUN_00410a10(&local_24);
    local_8._0_1_ = 4;
    FUN_00636040(&local_20);
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_00635a10(&local_14,*puVar5);
    piVar4 = (int *)(local_20 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_24 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_28 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,10);
    piVar4 = (int *)(param_2 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)FUN_005b4ba0();
    iVar6 = *piVar4;
    *piVar4 = local_14;
    piVar4 = (int *)(param_2 + -8);
    local_14 = iVar6;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)FUN_006369b0(&param_2);
    iVar6 = *piVar4;
    *piVar4 = (int)param_1;
    piVar4 = (int *)(param_2 + -8);
    param_1 = (int *)iVar6;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = local_1c;
    if ((param_1 != (int *)iVar1) &&
       (iVar6 = FUN_00448730(param_1,iVar1), piVar4 = local_1c, iVar6 != 0)) {
      FUN_0045c990("Auto-rename from audio file location");
      local_8._0_1_ = 0xb;
      puVar5 = operator_new(0x14);
      local_8._0_1_ = 0xc;
      operator_new(0x10);
      piVar4 = (int *)((int)param_1 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      uVar7 = FUN_00410c40(uVar7,param_1,0);
      operator_new(0x10);
      piVar4 = (int *)(iVar1 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      uVar8 = FUN_00410c40(*(undefined4 *)(local_18 + 0xd64),iVar1,uVar2);
      local_8 = CONCAT31(local_8._1_3_,0xb);
      puVar5[1] = local_18 + -0x88;
      *puVar5 = MTSEUA::vftable;
      puVar5[2] = 0;
      puVar5[3] = uVar8;
      puVar5[4] = uVar7;
      FUN_005b7430(puVar5,&param_2);
      piVar9 = (int *)(param_2 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar9);
        }
      }
    }
    piVar9 = (int *)(local_14 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)((int)param_1 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

