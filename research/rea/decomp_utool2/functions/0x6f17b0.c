// rea decompile_all
// name: FUN_006f17b0
// address: 0x6f17b0
// body: available
// range: 0x6f17b0-0x6f1aa6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006f1a5f) */
/* WARNING: Removing unreachable block (ram,0x006f1a6a) */
/* WARNING: Removing unreachable block (ram,0x006f1a7c) */
/* WARNING: Removing unreachable block (ram,0x006f1a87) */

void FUN_006f17b0(int param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_40;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00729804;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 < param_2) {
    if (param_3 != '\0') {
      operator_new(0x14);
      FUN_004b4460(in_ECX,param_1);
      FUN_0063ba90();
      ExceptionList = local_10;
      return;
    }
    FUN_006f2c40();
    local_8 = 0;
    FUN_006f2c40();
    local_8._0_1_ = 1;
    in_ECX[0x1b] = -1;
    puVar1 = *(undefined4 **)(*in_ECX + local_2c * 4);
    if (local_2c == local_40) {
      FUN_00637a90(&local_18);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_006379a0(&stack0xffffffa4,0,local_28);
      puVar4 = (undefined4 *)FUN_00637730();
      uVar2 = *puVar1;
      *puVar1 = *puVar4;
      *puVar4 = uVar2;
      piVar5 = (int *)(local_14 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar5 = (int *)(local_18 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      FUN_004b4330();
    }
    else {
      FUN_00637a90(&local_14);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_006379a0(&stack0xffffffa4,0,local_28);
      puVar4 = (undefined4 *)FUN_00637730();
      uVar2 = *puVar1;
      *puVar1 = *puVar4;
      *puVar4 = uVar2;
      piVar5 = (int *)(local_18 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar5 = (int *)(local_14 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      FUN_004b4330();
      FUN_004b6aa0(local_2c + 1,local_40 - local_2c);
    }
    iVar7 = local_2c + 1;
    if (iVar7 < in_ECX[2]) {
      do {
        piVar5 = (int *)(*in_ECX + iVar7 * 4);
        iVar7 = iVar7 + 1;
        iVar6 = piVar5[-1];
        *(int *)(*piVar5 + 4) = *(int *)(iVar6 + 8) + *(int *)(iVar6 + 4);
      } while (iVar7 < in_ECX[2]);
    }
    FUN_006f1d90();
    if ((in_ECX[2] < 1) || (iVar7 = *(int *)(*in_ECX + -4 + in_ECX[2] * 4), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iVar7 + 8) + *(int *)(iVar7 + 4);
    }
    iVar6 = 0;
    if (0 < in_ECX[5]) {
      do {
        iVar3 = *(int *)(in_ECX[3] + iVar6 * 4);
        if (local_30 < *(int *)(iVar3 + 4)) {
          FUN_006f2c40();
        }
        if (iVar7 < *(int *)(iVar3 + 4)) {
          FUN_006f2c40();
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < in_ECX[5]);
    }
    iVar7 = in_ECX[0x1e];
    while (0 < iVar7) {
      iVar7 = iVar7 + -1;
      if ((in_ECX[0x1e] <= iVar7) && (iVar7 = in_ECX[0x1e] + -1, iVar7 < 0)) {
        ExceptionList = local_10;
        return;
      }
      FUN_00410543(param_1);
    }
  }
  ExceptionList = local_10;
  return;
}

