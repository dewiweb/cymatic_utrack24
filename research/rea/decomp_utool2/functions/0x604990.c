// rea decompile_all
// name: FUN_00604990
// address: 0x604990
// body: available
// range: 0x604990-0x604c45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00604990(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  undefined4 extraout_ECX;
  int iVar5;
  void *_Memory;
  uint uVar6;
  undefined4 in_stack_ffffffa8;
  undefined4 in_stack_ffffffac;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *local_34;
  uint local_30;
  int local_2c;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0071bdff;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _Memory = (void *)0x0;
  iVar5 = 0;
  local_34 = (void *)0x0;
  local_30 = 0;
  local_2c = 0;
  local_8 = 0;
  local_14 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar2 = local_14;
      FUN_00629960(uVar1);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = (undefined4 *)FUN_00636a10(&local_20);
      local_18 = iVar5 + 1;
      if ((int)local_30 < local_18) {
        iVar2 = local_18;
        if (local_18 < 0) {
          iVar2 = iVar5 + 2;
        }
        uVar6 = iVar5 + 9 + (iVar2 >> 1) & 0xfffffff8;
        iVar2 = local_14;
        if (local_30 != uVar6) {
          local_30 = uVar6;
          if ((int)uVar6 < 1) {
            FID_conflict__free(_Memory);
            _Memory = (void *)0x0;
            iVar2 = local_14;
            local_34 = _Memory;
          }
          else if (_Memory == (void *)0x0) {
            _Memory = (void *)FUN_004c554b();
            iVar2 = local_14;
            local_34 = _Memory;
          }
          else {
            _Memory = (void *)FUN_004c553b(_Memory,uVar6 * 4);
            iVar2 = local_14;
            local_34 = _Memory;
          }
        }
      }
      local_2c = local_18;
      puVar8 = (undefined4 *)((int)_Memory + iVar5 * 4);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *local_1c;
        *local_1c = &DAT_00bfe12c;
      }
      piVar4 = (int *)(local_20 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      local_8 = local_8 & 0xffffff00;
      piVar4 = (int *)(local_24 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      local_14 = iVar2 + 1;
      iVar5 = local_2c;
    } while (local_14 < *(int *)(param_1 + 8));
  }
  puVar8 = *(undefined4 **)(in_ECX + 0x244);
  if (puVar8 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x244) = 0;
    (**(code **)*puVar8)(1);
  }
  if (0 < local_2c) {
    uVar10 = 0;
    uVar9 = 0;
    param_1 = &DAT_00bfe12c;
    puVar8 = &param_1;
    local_8._0_1_ = 2;
    FUN_00636260(&local_20,&DAT_00bfdec0,in_stack_ffffffa8,in_stack_ffffffac);
    local_8._0_1_ = 3;
    uVar3 = extraout_ECX;
    uVar7 = extraout_ECX;
    FUN_00637250(extraout_ECX,extraout_ECX,puVar8,uVar9,uVar10);
    FUN_006377c0(uVar3);
    uVar3 = FUN_00637730(uVar7);
    local_8._0_1_ = 4;
    FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_006e6af0(uVar3,puVar8,uVar9,uVar10);
    piVar4 = (int *)(in_ECX + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_24 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_20 + -8);
    _Memory = local_34;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  iVar5 = 0;
  if (0 < local_2c) {
    do {
      piVar4 = (int *)(*(int *)((int)_Memory + iVar5 * 4) + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_2c);
  }
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return;
}

