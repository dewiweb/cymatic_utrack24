// rea decompile_all
// name: FUN_005bba40
// address: 0x5bba40
// body: available
// range: 0x5bba40-0x5bbd4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bba40(int param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 uVar9;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  uint local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00719ed7;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = 0;
  local_14 = 0;
  local_18 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar2 = local_18;
      local_24 = operator_new(8);
      FUN_0041d060(&local_2c,iVar2);
      uVar9 = FUN_0041d060(&local_28,iVar2);
      local_20 = (uint)((ulonglong)uVar9 >> 0x20) | 2;
      local_8 = 2;
      local_14 = local_20;
      iVar6 = FUN_0053d260(uVar5);
      uVar4 = local_14;
      piVar3 = local_24;
      iVar2 = *(int *)uVar9;
      *local_24 = iVar2;
      piVar8 = (int *)(iVar2 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
      }
      local_24[1] = iVar6;
      piVar8 = (int *)(local_28 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      local_14 = uVar4 & 0xfffffffc;
      piVar8 = (int *)(local_2c + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      if (*(int *)(piVar3[1] + 0x30) == 1) {
        uVar7 = FUN_0041d060(&local_34,local_18);
        local_8 = 5;
        uVar7 = FUN_00637690(uVar7);
        local_8 = CONCAT31(local_8._1_3_,6);
        FUN_005ba670(uVar7);
        piVar8 = (int *)(local_30 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        local_8 = 0xffffffff;
        piVar8 = (int *)(local_34 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        iVar2 = param_4[2];
        iVar6 = iVar2 + 1;
        if (param_4[1] < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar2 + 2;
          }
          FUN_00409cf0((iVar6 >> 1) + iVar2 + 9 & 0xfffffff8);
        }
        iVar2 = param_4[2];
        param_4[2] = iVar2 + 1;
        *(int **)(*param_4 + iVar2 * 4) = piVar3;
        iVar2 = param_5[2];
        iVar6 = iVar2 + 1;
        if (param_5[1] < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar2 + 2;
          }
          FUN_00409cf0((iVar6 >> 1) + iVar2 + 9 & 0xfffffff8);
        }
        iVar2 = param_5[2];
        param_5[2] = iVar2 + 1;
        puVar1 = (undefined4 *)(*param_5 + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = piVar3;
        }
      }
      else {
        uVar7 = FUN_0041d060(&local_3c,local_18);
        local_8 = 7;
        uVar7 = FUN_00637690(uVar7);
        local_8 = CONCAT31(local_8._1_3_,8);
        FUN_005ba670(uVar7);
        piVar8 = (int *)(local_38 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        local_8 = 0xffffffff;
        piVar8 = (int *)(local_3c + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        iVar2 = param_3[2];
        iVar6 = iVar2 + 1;
        if (param_3[1] < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar2 + 2;
          }
          FUN_00409cf0((iVar6 >> 1) + iVar2 + 9 & 0xfffffff8);
        }
        iVar2 = param_3[2];
        param_3[2] = iVar2 + 1;
        *(int **)(*param_3 + iVar2 * 4) = piVar3;
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 8));
  }
  ExceptionList = local_10;
  return;
}

