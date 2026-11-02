// rea decompile_all
// name: FUN_0054bf80
// address: 0x54bf80
// body: available
// range: 0x54bf80-0x54c243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0054bf80(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070fe0d;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  *param_1 = (int)param_2;
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    param_2[1] = param_2[1] + 1;
    UNLOCK();
  }
  local_20 = 1;
  local_1c = in_ECX;
  if (*param_1 == 0) {
    if (*(int *)(in_ECX + 0xc) == 0) {
      local_34 = operator_new(0x1c);
      local_8 = CONCAT31(local_8._1_3_,3);
      iVar5 = FUN_0054cec0(in_ECX + 8);
    }
    else {
      local_34 = operator_new(0x1c);
      local_8 = CONCAT31(local_8._1_3_,2);
      iVar5 = FUN_0054c360(*(undefined4 *)(in_ECX + 0xc));
    }
    if (*param_1 != iVar5) {
      if (iVar5 != 0) {
        LOCK();
        *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
        UNLOCK();
      }
      puVar1 = (undefined4 *)*param_1;
      *param_1 = iVar5;
      if (puVar1 != (undefined4 *)0x0) {
        LOCK();
        piVar6 = puVar1 + 1;
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar1)(1);
        }
      }
    }
  }
  local_18 = 0;
  if (0 < *(int *)(local_1c + 0x18)) {
    do {
      iVar5 = local_18;
      FUN_004110e0(&local_24,local_18);
      puVar1 = local_24;
      local_8 = CONCAT31(local_8._1_3_,4);
      if (local_24[3] == 0) {
        if (((char)param_3 != '\0') || (0 < (int)local_24[6])) {
          if ((char)param_4 == '\0') {
            piVar6 = (int *)FUN_0054bf80(&local_34,0,param_3,0,param_5);
            iVar5 = *param_1;
            local_28 = *piVar6;
            iVar2 = *(int *)(iVar5 + 0x18);
            iVar7 = iVar2 + 1;
            if (*(int *)(iVar5 + 0x14) < iVar7) {
              if (iVar7 < 0) {
                iVar7 = iVar2 + 2;
              }
              FUN_00409cf0((iVar7 >> 1) + iVar2 + 9 & 0xfffffff8);
            }
            iVar2 = *(int *)(iVar5 + 0x18);
            *(int *)(iVar5 + 0x18) = iVar2 + 1;
            *(int *)(*(int *)(iVar5 + 0x10) + iVar2 * 4) = local_28;
            puVar8 = local_34;
            if (local_28 != 0) {
              LOCK();
              *(int *)(local_28 + 4) = *(int *)(local_28 + 4) + 1;
              UNLOCK();
            }
            goto LAB_0054c1a7;
          }
          iVar2 = *param_1;
          if (iVar2 != 0) {
            LOCK();
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
            UNLOCK();
          }
          FUN_0054bf80(&local_30,iVar2,param_3,param_4,param_5);
          if (local_30 != (undefined4 *)0x0) {
            LOCK();
            piVar6 = local_30 + 1;
            iVar2 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)*local_30)(1);
            }
          }
        }
      }
      else if ((param_5 == (undefined1 *)0x0) || (cVar3 = FUN_00549d30(param_5), cVar3 != '\0')) {
        piVar6 = (int *)FUN_0054bf80(&local_2c,0,0,0,0);
        iVar5 = *param_1;
        local_28 = *piVar6;
        iVar2 = *(int *)(iVar5 + 0x18);
        iVar7 = iVar2 + 1;
        if (*(int *)(iVar5 + 0x14) < iVar7) {
          if (iVar7 < 0) {
            iVar7 = iVar2 + 2;
          }
          FUN_00409cf0((iVar7 >> 1) + iVar2 + 9 & 0xfffffff8);
        }
        iVar2 = *(int *)(iVar5 + 0x18);
        *(int *)(iVar5 + 0x18) = iVar2 + 1;
        *(int *)(*(int *)(iVar5 + 0x10) + iVar2 * 4) = local_28;
        puVar8 = local_2c;
        if (local_28 != 0) {
          LOCK();
          *(int *)(local_28 + 4) = *(int *)(local_28 + 4) + 1;
          UNLOCK();
        }
LAB_0054c1a7:
        iVar5 = local_18;
        if (puVar8 != (undefined4 *)0x0) {
          LOCK();
          piVar6 = puVar8 + 1;
          iVar2 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)*puVar8)(1);
            iVar5 = local_18;
          }
        }
      }
      LOCK();
      piVar6 = puVar1 + 1;
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar1)(1);
      }
      local_18 = iVar5 + 1;
    } while (local_18 < *(int *)(local_1c + 0x18));
  }
  local_8 = CONCAT31(local_8._1_3_,5);
  param_5 = &local_11;
  FUN_00416da0(*(int *)(local_1c + 0x18) * 4 >> 2,&param_5,uVar4);
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = param_2 + 1;
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*param_2)(1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

