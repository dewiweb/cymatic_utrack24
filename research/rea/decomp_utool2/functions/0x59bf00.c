// rea decompile_all
// name: FUN_0059bf00
// address: 0x59bf00
// body: available
// range: 0x59bf00-0x59c205 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0059bf00(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  int *in_ECX;
  undefined4 extraout_ECX;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined4 **ppuVar11;
  undefined4 *local_2c;
  int local_28;
  int local_24 [2];
  int *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00715a8c;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = 0;
  local_24[1] = 1;
  local_1c = in_ECX;
  uVar3 = (**(code **)(*in_ECX + 4))(local_24,uVar2);
  local_8 = 1;
  uVar4 = extraout_ECX;
  FUN_00637690(uVar3);
  FUN_006377c0(uVar4);
  local_8._0_1_ = 3;
  piVar6 = (int *)(local_24[0] + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (in_ECX[0x10] == 0) {
    FUN_0045c990(&DAT_00747148);
    piVar6 = &local_18;
    local_8._0_1_ = 4;
    ppuVar11 = &local_2c;
    FUN_00633c20(in_ECX[0xc],in_ECX[0xd],in_ECX[10],in_ECX[0xb],ppuVar11,piVar6);
    uVar4 = FUN_006334c0(ppuVar11,piVar6);
    local_8._0_1_ = 5;
    uVar4 = FUN_00637690(uVar4);
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_00636ec0(uVar4);
    piVar6 = (int *)(local_28 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    piVar6 = local_2c + -2;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    local_8._0_1_ = 3;
    piVar6 = (int *)(local_18 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  else {
    FUN_00621830("{#CR}Error{#CD}");
  }
  iVar7 = param_1[2] + 1;
  if (param_1[1] < iVar7) {
    FUN_00409cf0(iVar7 / 2 + param_1[2] + 9 & 0xfffffff8);
  }
  iVar7 = param_1[2];
  param_1[2] = iVar7 + 1;
  piVar6 = (int *)(*param_1 + iVar7 * 4);
  if (piVar6 != (int *)0x0) {
    *piVar6 = local_14;
    piVar6 = (int *)(local_14 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
  }
  uVar2 = 0;
  if (0 < in_ECX[0x10]) {
    bVar10 = in_ECX[0x10] != 0;
    do {
      if (bVar10) {
        ppuVar5 = (undefined **)(in_ECX[0xe] + uVar2 * 4);
      }
      else {
        ppuVar5 = &PTR_DAT_00c7ed68;
      }
      local_2c = (undefined4 *)FUN_00637690(ppuVar5);
      iVar7 = param_1[2];
      iVar8 = iVar7 + 1;
      if (param_1[1] < iVar8) {
        if (iVar8 < 0) {
          iVar8 = iVar7 + 2;
        }
        uVar9 = iVar7 + 9 + (iVar8 >> 1) & 0xfffffff8;
        in_ECX = local_1c;
        if (param_1[1] != uVar9) {
          if ((int)uVar9 < 1) {
            FID_conflict__free((void *)*param_1);
            *param_1 = 0;
          }
          else if (*param_1 == 0) {
            iVar7 = FUN_004c554b();
            *param_1 = iVar7;
          }
          else {
            iVar7 = FUN_004c553b(*param_1,uVar9 * 4);
            *param_1 = iVar7;
          }
          param_1[1] = uVar9;
          in_ECX = local_1c;
        }
      }
      iVar7 = param_1[2];
      param_1[2] = iVar7 + 1;
      puVar1 = (undefined4 *)(*param_1 + iVar7 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *local_2c;
        *local_2c = &DAT_00bfe12c;
      }
      piVar6 = (int *)(local_28 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      uVar2 = uVar2 + 1;
      bVar10 = uVar2 < (uint)in_ECX[0x10];
    } while ((int)uVar2 < in_ECX[0x10]);
  }
  piVar6 = (int *)(local_14 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

