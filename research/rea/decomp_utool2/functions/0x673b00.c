// rea decompile_all
// name: FUN_00673b00
// address: 0x673b00
// body: available
// range: 0x673b00-0x673d70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00673b00(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  int *local_1c;
  uint local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar5 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720494;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = 0;
  local_18 = 0;
  piVar2 = param_2;
  local_14 = in_ECX;
  if ((int *)*param_2 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)*param_2 + 0xc))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    local_18 = 1;
    param_2 = piVar2;
    iVar3 = (**(code **)(*piVar2 + 8))();
    iVar4 = (**(code **)(*local_14 + 8))();
    if (iVar4 != iVar3) {
      param_2 = (int *)((uint)param_2 & 0xffffff);
      uVar1 = local_18;
      piVar8 = local_14;
      goto LAB_00673b84;
    }
    uVar1 = 1;
  }
  param_2 = (int *)CONCAT13(1,param_2._0_3_);
  piVar8 = local_14;
LAB_00673b84:
  local_8 = 0xffffffff;
  if (((uVar1 & 1) != 0) && (piVar2 != (int *)0x0)) {
    (**(code **)*piVar2)(1);
  }
  piVar5 = (int *)*piVar5;
  if (param_2._3_1_ == '\0') {
    if (piVar5 == (int *)0x0) {
      local_44 = 0;
      local_40 = 0;
    }
    else {
      local_44 = piVar5[3];
      local_40 = piVar5[4];
    }
    local_3c = (undefined4 *)0x0;
    local_8 = 1;
    (**(code **)(*piVar5 + 0x10))(&local_54,0,0,0);
    local_8 = 2;
    piVar5 = (int *)(**(code **)(*piVar8 + 4))(&param_2,local_50,local_44,local_40,0);
    piVar5 = (int *)*piVar5;
    if (piVar5 != (int *)0x0) {
      LOCK();
      piVar5[1] = piVar5[1] + 1;
      UNLOCK();
    }
    local_1c = piVar5;
    if (param_2 != (undefined4 *)0x0) {
      LOCK();
      piVar2 = param_2 + 1;
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*param_2)(1);
      }
    }
    if (piVar5 == (int *)0x0) {
      local_24 = 0;
      local_28 = 0;
    }
    else {
      local_28 = piVar5[3];
      local_24 = piVar5[4];
    }
    local_20 = (undefined4 *)0x0;
    local_8 = CONCAT31(local_8._1_3_,4);
    (**(code **)(*piVar5 + 0x10))(&local_38,0,0,1);
    if ((local_48 == local_2c) && (local_50 == local_34)) {
      iVar3 = 0;
      if (0 < local_24) {
        do {
          FUN_004c2c30(local_30 * iVar3 + local_38,local_4c * iVar3 + local_54,local_30);
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_24);
      }
    }
    else {
      iVar6 = 0;
      iVar3 = local_28;
      iVar4 = local_24;
      if (0 < local_24) {
        do {
          iVar9 = 0;
          if (0 < iVar3) {
            do {
              FUN_006730b0(&local_14,iVar9,iVar6);
              puVar7 = (undefined4 *)(iVar9 * local_2c + iVar6 * local_30 + local_38);
              FUN_0067f7a0(&param_2);
              if (local_34 == 1) {
                *(char *)puVar7 = (char)param_2;
                *(char *)((int)puVar7 + 1) = (char)((uint)param_2 >> 8);
                *(undefined1 *)((int)puVar7 + 2) = param_2._2_1_;
              }
              else if (local_34 == 2) {
                *puVar7 = param_2;
              }
              else if (local_34 == 3) {
                *(char *)puVar7 = param_2._3_1_;
              }
              iVar9 = iVar9 + 1;
              iVar3 = local_28;
              iVar4 = local_24;
            } while (iVar9 < local_28);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar4);
      }
    }
    *param_1 = (int)local_1c;
    if (local_20 != (undefined4 *)0x0) {
      (**(code **)*local_20)(1);
    }
    if (local_3c != (undefined4 *)0x0) {
      (**(code **)*local_3c)(1);
    }
  }
  else {
    *param_1 = (int)piVar5;
    if (piVar5 != (int *)0x0) {
      LOCK();
      piVar5[1] = piVar5[1] + 1;
      UNLOCK();
      ExceptionList = local_10;
      return param_1;
    }
  }
  ExceptionList = local_10;
  return param_1;
}

