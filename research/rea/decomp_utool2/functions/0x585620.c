// rea decompile_all
// name: FUN_00585620
// address: 0x585620
// body: available
// range: 0x585620-0x585c08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00585620(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  int *piVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  int local_cc [13];
  void *local_98;
  undefined4 *local_94;
  int local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 *local_84;
  undefined1 *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined4 local_6c;
  int local_68;
  LPCRITICAL_SECTION local_64;
  int local_60;
  undefined1 *local_5c;
  int local_58;
  int local_54;
  undefined1 *local_50;
  int local_4c;
  int local_48;
  int local_44;
  void *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int *local_28;
  char *local_24;
  char *local_20;
  int local_1c;
  undefined8 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007131ea;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_90 = *param_1;
  piVar2 = (int *)(local_90 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  local_8c = 0;
  local_88 = 0;
  local_84 = &DAT_00bfe12c;
  local_80 = &DAT_00bfe12c;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0x100;
  local_6c = 0;
  local_8 = 0;
  iVar3 = FUN_00634f90(0);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_68 = iVar3;
  if (iVar3 == 0) goto LAB_005859a7;
  iVar5 = *(int *)(iVar3 + 4);
  iVar4 = FUN_00448730(*(undefined4 *)(iVar5 + 0xc),"ns0:newslist",uVar1);
  if (iVar4 == 0) {
    local_28 = *(int **)(iVar5 + 4);
    if (local_28 != (int *)0x0) {
LAB_00585700:
      local_24 = "ns0:news";
      do {
        iVar3 = FUN_00443260();
        iVar5 = FUN_00443260();
        if ((iVar3 - iVar5 != 0) && ((iVar3 - iVar5 >> 0x1f & 0xfffffffeU) != 0xffffffff))
        goto LAB_00585982;
      } while (iVar3 != 0);
      FUN_0045c990(&DAT_00745d74);
      piVar9 = local_28;
      piVar2 = &local_44;
      puVar6 = (undefined4 *)FUN_00630fa0(piVar2,&DAT_00745d28,&local_2c);
      local_34 = FUN_0045d290(*puVar6);
      piVar8 = (int *)(local_44 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      piVar8 = (int *)(local_2c + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      puVar10 = &DAT_00bfe12c;
      local_5c = &DAT_00bfe12c;
      puVar11 = &DAT_00bfe12c;
      local_18 = 0;
      local_50 = &DAT_00bfe12c;
      param_1 = (undefined4 *)0x0;
      local_40 = (void *)0x0;
      local_3c = 0;
      local_38 = 0;
      local_8._0_1_ = 4;
      piVar9 = (int *)piVar9[1];
      if (piVar9 != (int *)0x0) {
        local_24 = (char *)0x0;
        local_30 = 0;
LAB_00585810:
        local_1c = piVar9[3];
        local_20 = "ns0:title";
        do {
          uVar7 = FUN_00443260();
          local_18 = CONCAT44(uVar7,(undefined4)local_18);
          iVar3 = FUN_00443260();
          if ((local_18._4_4_ - iVar3 != 0) &&
             ((local_18._4_4_ - iVar3 >> 0x1f & 0xfffffffeU) != 0xffffffff)) {
            local_20 = "ns0:date";
            local_18 = CONCAT44(piVar9[3],(undefined4)local_18);
            goto LAB_005859d3;
          }
        } while (local_18._4_4_ != 0);
        puVar6 = (undefined4 *)FUN_00634a80(&local_60);
        local_5c = (undefined1 *)*puVar6;
        *puVar6 = puVar10;
        iVar3 = local_60;
        puVar10 = local_5c;
        goto LAB_00585866;
      }
      goto LAB_00585929;
    }
  }
LAB_00585995:
  FUN_00634ec0();
  FUN_004bfe14(iVar3,0x10);
LAB_005859a7:
  FUN_00635110();
  ExceptionList = local_10;
  return;
  while (local_1c != 0) {
LAB_005859d3:
    local_1c = FUN_00443260();
    iVar3 = FUN_00443260();
    if ((local_1c - iVar3 != 0) && ((local_1c - iVar3 >> 0x1f & 0xfffffffeU) != 0xffffffff)) {
      local_20 = "ns0:subject";
      local_18 = CONCAT44(piVar9[3],(undefined4)local_18);
      goto LAB_00585a40;
    }
  }
  puVar6 = (undefined4 *)FUN_00634a80(&local_58);
  puVar6 = (undefined4 *)FUN_00630c40(*puVar6);
  local_30 = *puVar6;
  local_24 = (char *)puVar6[1];
  iVar3 = local_58;
  goto LAB_00585866;
  while (local_1c != 0) {
LAB_00585a40:
    local_1c = FUN_00443260();
    iVar3 = FUN_00443260();
    if ((local_1c - iVar3 != 0) && ((local_1c - iVar3 >> 0x1f & 0xfffffffeU) != 0xffffffff)) {
      piVar2 = (int *)0x585a9d;
      iVar3 = FUN_00448730(piVar9[3],"ns0:text");
      if (iVar3 == 0) {
        param_1 = operator_new(0x10);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        iVar3 = piVar9[3];
        param_1[3] = iVar3;
        piVar8 = (int *)(iVar3 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          *piVar8 = *piVar8 + 1;
          UNLOCK();
        }
        local_8._0_1_ = 6;
        local_94 = param_1;
        FUN_00458a00(piVar9 + 1);
        FUN_00458b00(piVar9 + 2);
        local_8._0_1_ = 4;
        goto LAB_00585887;
      }
      piVar2 = (int *)0x585b1d;
      iVar3 = FUN_00448730(piVar9[3],"ns0:relatedurl");
      if (iVar3 != 0) goto LAB_00585887;
      FUN_00419f70();
      local_8._0_1_ = 7;
      uVar7 = FUN_00634a80(&local_48);
      local_8 = CONCAT31(local_8._1_3_,8);
      uVar7 = FUN_006365e0(uVar7);
      FUN_00631ef0(uVar7);
      FUN_00636570();
      piVar2 = (int *)(local_48 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      local_18 = CONCAT44(&DAT_00bfe12c,(undefined4)local_18);
      piVar2 = &local_4c;
      piVar8 = (int *)FUN_00630fa0(piVar2,&DAT_00745e3c,(int)&local_18 + 4);
      iVar3 = *piVar8;
      *piVar8 = local_cc[0];
      piVar8 = (int *)(local_4c + -8);
      local_cc[0] = iVar3;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      FUN_0041a250(local_cc);
      local_8._0_1_ = 4;
      FUN_00636570();
      iVar3 = local_cc[0];
      goto LAB_00585866;
    }
  }
  puVar6 = (undefined4 *)FUN_00634a80(&local_54);
  local_50 = (undefined1 *)*puVar6;
  *puVar6 = puVar11;
  iVar3 = local_54;
  puVar11 = local_50;
LAB_00585866:
  piVar8 = (int *)(iVar3 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar8);
    }
  }
LAB_00585887:
  piVar9 = (int *)*piVar9;
  if (piVar9 == (int *)0x0) goto code_r0x0058588d;
  goto LAB_00585810;
code_r0x0058588d:
  if (param_1 != (undefined4 *)0x0) {
    uVar12 = 0x38;
    uVar7 = 0x58589d;
    local_98 = operator_new(0x38);
    local_8._0_1_ = 9;
    FUN_0041a320(&local_40);
    piVar9 = (int *)(puVar11 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      *piVar9 = *piVar9 + 1;
      UNLOCK();
    }
    piVar9 = (int *)(puVar10 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      *piVar9 = *piVar9 + 1;
      UNLOCK();
    }
    uVar7 = FUN_005850d0(local_34,puVar10,local_30,local_24,puVar11,param_1,piVar2,uVar7,uVar12);
    lpCriticalSection = local_64;
    EnterCriticalSection(local_64);
    uVar12 = FUN_00584fe0(uVar7,extraout_ECX,lpCriticalSection[1].RecursionCount);
    FUN_0041a600(uVar12,uVar7);
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_00585929:
  FUN_0041a430();
  FID_conflict__free(local_40);
  piVar2 = (int *)(puVar11 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(puVar10 + -8);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar2);
    }
  }
LAB_00585982:
  local_28 = (int *)*local_28;
  if (local_28 == (int *)0x0) goto code_r0x00585992;
  goto LAB_00585700;
code_r0x00585992:
  local_28 = (int *)0x0;
  iVar3 = local_68;
  goto LAB_00585995;
}

