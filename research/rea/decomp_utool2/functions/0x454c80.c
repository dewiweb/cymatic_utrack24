// rea decompile_all
// name: FUN_00454c80
// address: 0x454c80
// body: available
// range: 0x454c80-0x455145 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00454c80(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 extraout_ECX;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070027f;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = &DAT_00bfe12c;
  local_8 = 0;
  cVar1 = FUN_00454370(&local_14);
  if (cVar1 == '\0') {
    piVar7 = (int *)(local_14 + -8);
    *param_1 = 0;
    if (piVar7 == &DAT_00bfe124) {
      ExceptionList = local_10;
      return param_1;
    }
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
joined_r0x00455125:
    if (iVar5 == 0) {
      FID_conflict__free(piVar7);
    }
    ExceptionList = local_10;
    return param_1;
  }
  cVar1 = FUN_004542d0(&DAT_00c1787c,0);
  if (cVar1 == '\0') {
    cVar1 = FUN_004542d0(&DAT_00c178a4,0);
    if (cVar1 != '\0') {
      FUN_00454c80(&local_18);
      local_8._0_1_ = 3;
      if (local_18 == (undefined4 *)0x0) {
        FUN_0045c990("Expected symbol or function after \".\"");
        iVar5 = FUN_00454280(&local_20);
        *param_1 = iVar5;
        if (iVar5 != 0) {
          *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
        }
        FUN_00637c10();
        if (local_18 != (undefined4 *)0x0) {
          piVar7 = local_18 + 1;
          *piVar7 = *piVar7 + -1;
          if (*piVar7 == 0) {
            (**(code **)*local_18)(1);
          }
        }
        FUN_00637c10();
        ExceptionList = local_10;
        return param_1;
      }
      iVar5 = FUN_00448730(local_14,&DAT_00c177b4,uVar2);
      puVar3 = local_18;
      if (iVar5 == 0) {
        local_18 = (undefined4 *)0x0;
        *param_1 = (int)puVar3;
        FUN_00637c10();
        ExceptionList = local_10;
        return param_1;
      }
      operator_new(0x10);
      local_8 = CONCAT31(local_8._1_3_,4);
      operator_new(0xc);
      uVar4 = FUN_00452670(&local_14);
      iVar5 = FUN_00452e40(uVar4,local_18);
      *param_1 = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
      }
      if (local_18 != (undefined4 *)0x0) {
        piVar7 = local_18 + 1;
        *piVar7 = *piVar7 + -1;
        if (*piVar7 == 0) {
          (**(code **)*local_18)(1);
        }
      }
      FUN_00637c10();
      ExceptionList = local_10;
      return param_1;
    }
    puVar3 = operator_new(0xc);
    puVar3[1] = 0;
    *puVar3 = juce::Expression::Helpers::SymbolTerm::vftable;
    piVar7 = (int *)(local_14 + -8);
    puVar3[2] = local_14;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    puVar3[1] = puVar3[1] + 1;
    *param_1 = (int)puVar3;
    if (piVar7 == &DAT_00bfe124) {
      ExceptionList = local_10;
      return param_1;
    }
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    goto joined_r0x00455125;
  }
  puVar3 = operator_new(0x18);
  puVar3[1] = 0;
  *puVar3 = juce::Expression::Helpers::Function::vftable;
  puVar3[2] = local_14;
  piVar7 = (int *)(local_14 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  local_8._0_1_ = 1;
  local_20 = puVar3;
  FUN_00454650(&local_18);
  local_8 = CONCAT31(local_8._1_3_,2);
  puVar9 = puVar3;
  if (local_18 == (undefined4 *)0x0) {
    cVar1 = FUN_004542d0(&DAT_00c12b20,0);
    if (cVar1 == '\0') {
      uVar4 = extraout_ECX;
      FUN_00637690(&local_14);
      uVar4 = FUN_006377c0(uVar4);
      iVar5 = FUN_00454280(uVar4);
      *param_1 = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
      }
      FUN_00637c10();
      if (local_18 != (undefined4 *)0x0) {
        piVar7 = local_18 + 1;
        *piVar7 = *piVar7 + -1;
        if (*piVar7 == 0) {
          (**(code **)*local_18)(1);
        }
      }
      (**(code **)*puVar3)(1);
      FUN_00637c10();
      ExceptionList = local_10;
      return param_1;
    }
LAB_00454d5f:
    puVar9[1] = puVar9[1] + 1;
    *param_1 = (int)puVar9;
    if (local_18 == (undefined4 *)0x0) goto LAB_00454d7a;
    piVar7 = local_18 + 1;
    *piVar7 = *piVar7 + -1;
    if (*piVar7 != 0) goto LAB_00454d7a;
    puVar9 = (undefined4 *)*local_18;
  }
  else {
    local_18[1] = local_18[1] + 1;
    local_1c = local_18;
    FUN_00458c50(&local_1c);
    if (local_1c != (undefined4 *)0x0) {
      piVar7 = local_1c + 1;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        (**(code **)*local_1c)(1);
      }
    }
    cVar1 = FUN_004542d0(&DAT_00c17844,0);
    while (cVar1 != '\0') {
      puVar6 = (undefined4 *)FUN_00454650(&local_1c);
      puVar9 = (undefined4 *)*puVar6;
      *puVar6 = local_18;
      local_18 = puVar9;
      if (local_1c != (undefined4 *)0x0) {
        piVar7 = local_1c + 1;
        *piVar7 = *piVar7 + -1;
        if (*piVar7 == 0) {
          (**(code **)*local_1c)(1);
        }
      }
      puVar9 = local_18;
      if (local_18 == (undefined4 *)0x0) {
        FUN_0045c990("Expected expression after \",\"");
        iVar5 = FUN_00454280(&local_1c);
        *param_1 = iVar5;
        if (iVar5 != 0) {
          *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
        }
        FUN_00637c10();
        if (local_18 != (undefined4 *)0x0) {
          piVar7 = local_18 + 1;
          *piVar7 = *piVar7 + -1;
          if (*piVar7 == 0) {
            (**(code **)*local_18)(1);
          }
        }
        (**(code **)*local_20)(1);
        FUN_00637c10();
        ExceptionList = local_10;
        return param_1;
      }
      local_18[1] = local_18[1] + 1;
      iVar5 = puVar3[5];
      iVar8 = iVar5 + 1;
      if ((int)puVar3[4] < iVar8) {
        if (iVar8 < 0) {
          iVar8 = iVar5 + 2;
        }
        FUN_00409cf0((iVar8 >> 1) + iVar5 + 9 & 0xfffffff8);
      }
      iVar5 = puVar3[5];
      puVar3[5] = iVar5 + 1;
      puVar6 = (undefined4 *)(puVar3[3] + iVar5 * 4);
      if (puVar6 == (undefined4 *)0x0) {
        if (puVar9 != (undefined4 *)0x0) {
          piVar7 = puVar9 + 1;
          *piVar7 = *piVar7 + -1;
          if (*piVar7 == 0) {
            (**(code **)*puVar9)(1);
          }
        }
      }
      else {
        *puVar6 = puVar9;
      }
      cVar1 = FUN_004542d0(&DAT_00c17844,0);
      puVar9 = local_20;
    }
    cVar1 = FUN_004542d0(&DAT_00c12b20,0);
    if (cVar1 != '\0') goto LAB_00454d5f;
    FUN_0045c990("Expected \")\"");
    iVar5 = FUN_00454280(&local_20);
    *param_1 = iVar5;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
    }
    FUN_00637c10();
    if (local_18 != (undefined4 *)0x0) {
      piVar7 = local_18 + 1;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        (**(code **)*local_18)(1);
      }
    }
    puVar9 = (undefined4 *)*puVar9;
  }
  (*(code *)*puVar9)(1);
LAB_00454d7a:
  FUN_00637c10();
  ExceptionList = local_10;
  return param_1;
}

