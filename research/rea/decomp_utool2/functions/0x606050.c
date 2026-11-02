// rea decompile_all
// name: FUN_00606050
// address: 0x606050
// body: available
// range: 0x606050-0x606323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00606050(undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4,int param_5,
            int *param_6,int *param_7,uint param_8)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined **ppuVar7;
  int iVar8;
  int iVar9;
  undefined4 *in_ECX;
  int *piVar10;
  undefined4 *puVar11;
  bool bVar12;
  int iVar13;
  void *local_38 [3];
  void *local_2c;
  uint local_24;
  int local_20;
  int local_1c;
  int *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071c0f1;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar10 = in_ECX + 2;
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  *piVar10 = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  local_20 = *param_7;
  in_ECX[5] = local_20;
  piVar6 = (int *)(local_20 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  *(undefined1 *)(in_ECX + 0xb) = (undefined1)param_8;
  local_1c = local_20;
  local_14 = in_ECX;
  FUN_00629ef0(uVar5);
  piVar6 = (int *)(**(code **)(*(int *)in_ECX[1] + 0x20))
                            (local_38,&param_3,param_6,*(undefined1 *)(in_ECX + 0xb));
  FUN_0040f7f0();
  iVar8 = *piVar10;
  *piVar10 = *piVar6;
  *piVar6 = iVar8;
  in_ECX[3] = piVar6[1];
  in_ECX[4] = piVar6[2];
  piVar6[2] = 0;
  FUN_0040f7f0();
  FID_conflict__free(local_38[0]);
  FUN_00606330();
  local_8 = CONCAT31(local_8._1_3_,4);
  param_8 = 0;
  puVar11 = in_ECX;
  if (0 < (int)local_24) {
    bVar12 = local_24 != 0;
    do {
      if (bVar12) {
        ppuVar7 = (undefined **)((int)local_2c + param_8 * 4);
      }
      else {
        ppuVar7 = &PTR_DAT_00c7ed68;
      }
      piVar6 = (int *)*ppuVar7;
      param_6 = piVar6 + -2;
      if (param_6 != &DAT_00bfe124) {
        LOCK();
        *param_6 = *param_6 + 1;
        UNLOCK();
      }
      piVar1 = (int *)puVar11[4];
      uVar5 = param_8;
joined_r0x00606190:
      piVar1 = (int *)((int)piVar1 + -1);
      param_8 = uVar5;
      if (-1 < (int)piVar1) {
        if (piVar1 < (int *)in_ECX[4]) {
          ppuVar7 = (undefined **)(*piVar10 + (int)piVar1 * 4);
        }
        else {
          ppuVar7 = &PTR_DAT_00c7ed68;
        }
        piVar3 = piVar6;
        piVar4 = (int *)*ppuVar7;
        if (piVar6 != (int *)*ppuVar7) {
          do {
            local_18 = piVar4;
            param_7 = piVar3;
            iVar8 = FUN_00443260();
            iVar9 = FUN_00443260();
            if ((iVar8 - iVar9 != 0) &&
               (uVar5 = param_8, (iVar8 - iVar9 >> 0x1f & 0xfffffffeU) != 0xffffffff))
            goto joined_r0x00606190;
            piVar3 = param_7;
            piVar4 = local_18;
          } while (iVar8 != 0);
        }
        uVar5 = param_8;
        if ((piVar1 != (int *)0xffffffff) && (param_7 = (int *)in_ECX[4], piVar1 < param_7)) {
          iVar8 = (int)param_7 + -1;
          iVar9 = *piVar10;
          uVar2 = *(undefined4 *)(iVar9 + (int)piVar1 * 4);
          iVar13 = iVar9 + (int)piVar1 * 4;
          if ((int)piVar1 < iVar8) {
            iVar8 = iVar8 - (int)piVar1;
            iVar9 = iVar13 + 4;
          }
          else {
            iVar9 = iVar9 + iVar8 * 4;
            iVar8 = (int)piVar1 - iVar8;
            iVar13 = iVar9 + 4;
          }
          FUN_004c1df0(iVar13,iVar9,iVar8 * 4);
          *(undefined4 *)(*piVar10 + -4 + (int)param_7 * 4) = uVar2;
          uVar5 = param_8;
        }
        goto joined_r0x00606190;
      }
      if (param_6 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *param_6;
        *param_6 = *param_6 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          FID_conflict__free(param_6);
        }
      }
      param_8 = uVar5 + 1;
      bVar12 = param_8 < local_24;
      puVar11 = local_14;
    } while ((int)param_8 < (int)local_24);
  }
  FUN_00605c60();
  LOCK();
  puVar11[9] = puVar11[4];
  UNLOCK();
  iVar8 = 0;
  if (0 < (int)local_24) {
    do {
      piVar10 = (int *)(*(int *)((int)local_2c + iVar8 * 4) + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar9 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          FID_conflict__free(piVar10);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)local_24);
  }
  FID_conflict__free(local_2c);
  iVar8 = 0;
  if (0 < param_5) {
    do {
      piVar10 = (int *)(*(int *)((int)param_3 + iVar8 * 4) + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar9 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          FID_conflict__free(piVar10);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_5);
  }
  FID_conflict__free(param_3);
  ExceptionList = local_10;
  return puVar11;
}

