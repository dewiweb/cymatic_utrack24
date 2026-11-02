// rea decompile_all
// name: FUN_006732e0
// address: 0x6732e0
// body: available
// range: 0x6732e0-0x6735e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

int * FUN_006732e0(int *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *in_ECX;
  int iVar9;
  undefined1 *puVar10;
  int *piVar11;
  int local_64 [6];
  int *local_4c;
  int local_48;
  int local_40;
  undefined1 local_3c [4];
  int *local_38;
  int *local_34;
  int *local_30;
  undefined4 local_28;
  undefined4 *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072040d;
  local_10 = ExceptionList;
  piVar5 = (int *)*in_ECX;
  local_28 = 0;
  if ((piVar5 == (int *)0x0) || (param_2 == piVar5[2])) {
    *param_1 = (int)piVar5;
    if (piVar5 != (int *)0x0) {
      LOCK();
      piVar5[1] = piVar5[1] + 1;
      UNLOCK();
    }
    return param_1;
  }
  iVar9 = piVar5[4];
  iVar3 = piVar5[3];
  ExceptionList = &local_10;
  local_1c = iVar9;
  local_14 = in_ECX;
  piVar5 = (int *)(**(code **)(*piVar5 + 0xc))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  local_20 = piVar5;
  local_18 = (int *)(**(code **)(*piVar5 + 4))(&local_24,param_2,iVar3,iVar9,0);
  local_18 = (int *)*local_18;
  if (local_18 != (int *)0x0) {
    LOCK();
    local_18[1] = local_18[1] + 1;
    UNLOCK();
  }
  local_8._0_1_ = 1;
  if (local_24 != (undefined4 *)0x0) {
    LOCK();
    piVar11 = local_24 + 1;
    iVar1 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_24)(1);
    }
  }
  if (param_2 == 3) {
    if ((*local_14 != 0) && (*(int *)(*local_14 + 8) == 1)) {
      uVar7 = DAT_00c7ef90;
      uVar6 = FUN_00673860(local_3c);
      FUN_00672f60(uVar6,uVar7);
      goto LAB_006735a0;
    }
    local_4c = (int *)0x0;
    local_8._0_1_ = 2;
    local_64[4] = iVar3;
    local_64[5] = iVar9;
    (**(code **)(*local_18 + 0x10))(local_64,0,0,1);
    local_8._0_1_ = 3;
    FUN_006731f0(local_14,0,0,iVar3,iVar9);
    param_2 = 0;
    if (0 < iVar9) {
      do {
        iVar9 = 0;
        if (0 < iVar3) {
          puVar10 = (undefined1 *)(local_40 * param_2 + 3 + local_48);
          do {
            uVar2 = *puVar10;
            puVar10 = puVar10 + 4;
            *(undefined1 *)(iVar9 + local_64[2] * param_2 + local_64[0]) = uVar2;
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar3);
        }
        param_2 = param_2 + 1;
        piVar5 = local_20;
      } while (param_2 < local_1c);
    }
    if (local_30 != (int *)0x0) {
      (**(code **)*local_30)(1);
    }
    if (local_4c == (int *)0x0) goto LAB_006735a0;
    puVar8 = (undefined4 *)*local_4c;
  }
  else {
    iVar1 = *local_14;
    if ((*(int *)(iVar1 + 8) == 3) && (param_2 == 2)) {
      FUN_00673260(&local_18,0,0,iVar3,iVar9,1);
      local_8._0_1_ = 4;
      FUN_006731f0(local_14,0,0,iVar3,iVar9);
      param_2 = 0;
      if (0 < iVar9) {
        do {
          iVar9 = 0;
          local_24 = (undefined4 *)(local_40 * param_2 + local_48);
          if (0 < iVar3) {
            do {
              uVar2 = *(undefined1 *)(iVar9 + local_64[2] * param_2 + local_64[0]);
              local_24[iVar9] = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar2),uVar2),uVar2);
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar3);
          }
          param_2 = param_2 + 1;
          piVar5 = local_20;
        } while (param_2 < local_1c);
      }
      if (local_4c != (int *)0x0) {
        (**(code **)*local_4c)(1);
      }
      if (local_30 == (int *)0x0) goto LAB_006735a0;
      puVar8 = (undefined4 *)*local_30;
    }
    else {
      if ((iVar1 == 0) || (*(int *)(iVar1 + 8) != 1)) {
        uVar6 = 0;
        uVar7 = FUN_00673860(local_3c);
        FUN_00672f60(uVar7,uVar6);
      }
      if (local_18 == (int *)0x0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)(**(code **)(*local_18 + 4))();
      }
      local_30 = (int *)((uint)local_30 & 0xffffff00);
      local_8._0_1_ = 5;
      local_64[1] = 0x3f800000;
      local_64[2] = 0;
      local_64[3] = 0;
      local_64[4] = 0;
      local_64[5] = 0x3f800000;
      local_4c = (int *)0x0;
      local_38 = piVar11;
      local_34 = piVar11;
      if ((*local_14 != 0) && (cVar4 = (**(code **)(*piVar11 + 0x30))(), cVar4 == '\0')) {
        (**(code **)(*piVar11 + 0x60))(local_14,local_64 + 1);
      }
      if (piVar11 == (int *)0x0) goto LAB_006735a0;
      puVar8 = (undefined4 *)*piVar11;
    }
  }
  (*(code *)*puVar8)(1);
LAB_006735a0:
  *param_1 = (int)local_18;
  (**(code **)*piVar5)(1);
  ExceptionList = local_10;
  return param_1;
}

