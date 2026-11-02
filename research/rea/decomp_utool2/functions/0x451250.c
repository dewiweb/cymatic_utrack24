// rea decompile_all
// name: FUN_00451250
// address: 0x451250
// body: available
// range: 0x451250-0x45166a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00451250(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
  int *piVar9;
  undefined4 *in_EDX;
  undefined4 *puVar10;
  char **ppcVar11;
  undefined4 *local_74;
  int local_70;
  undefined4 *local_6c;
  undefined **local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_54;
  undefined4 *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined **local_38 [2];
  undefined1 local_30 [8];
  undefined **local_28;
  undefined4 local_20 [2];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_006ffc80;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = uVar4;
  local_50 = operator_new(0x14);
  local_54 = local_50 + 2;
  piVar9 = local_50 + 1;
  *local_50 = juce::ReferenceCountedObject::vftable;
  *piVar9 = 0;
  *local_50 = juce::DynamicObject::vftable;
  *local_54 = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  LOCK();
  *piVar9 = *piVar9 + 1;
  UNLOCK();
  local_68 = (undefined **)*param_1;
  *param_1 = &PTR_vftable_00c7ed28;
  local_60 = param_1[2];
  uVar6 = param_1[3];
  param_1[2] = local_50;
  puVar10 = &local_60;
  param_1[3] = local_5c;
  ppuVar8 = local_68;
  local_5c = uVar6;
  do {
    (**(code **)(*ppuVar8 + 0x54))(puVar10,uVar4);
    FUN_0045c2c0(*in_EDX);
    *in_EDX = local_6c;
    local_3c = local_6c;
    iVar5 = FUN_00443260();
    if (iVar5 == 0x7d) {
LAB_004514d7:
      FUN_0044eef0();
LAB_004514e1:
      ExceptionList = local_10;
      __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (iVar5 == 0) {
      FUN_00450f80(0);
      goto LAB_004514e1;
    }
    if (iVar5 != 0x22) {
LAB_00451555:
      FUN_00450f80(&local_3c);
      goto LAB_004514e1;
    }
    local_28 = &PTR_vftable_00c7ed38;
    local_8 = 0;
    FUN_00450880();
    pcVar1 = local_4c;
    local_8._0_1_ = 1;
    if (*local_4c != '\0') {
      *local_40 = local_4c;
      (**(code **)(*local_28 + 0x54))(local_20);
      goto LAB_004514e1;
    }
    uVar6 = FUN_00635650(&local_70);
    ppcVar11 = &local_48;
    FUN_0061f730(ppcVar11,uVar6);
    FUN_0061f850(ppcVar11,uVar6);
    local_8._0_1_ = 2;
    piVar9 = (int *)(local_70 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    pcVar2 = local_48;
    if (*local_48 == '\0') {
LAB_00451502:
      piVar9 = (int *)(pcVar2 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      piVar9 = (int *)(pcVar1 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      local_8._0_1_ = 0xff;
      local_8._1_3_ = 0xffffff;
      (**(code **)(*local_28 + 0x54))(local_20);
      goto LAB_00451555;
    }
    FUN_0045c2c0(*in_EDX);
    *in_EDX = local_74;
    local_3c = local_74;
    iVar5 = FUN_00443260();
    if (iVar5 != 0x3a) {
      FUN_00450f80(&local_3c);
      piVar9 = (int *)(pcVar2 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      piVar9 = (int *)(pcVar1 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      (**(code **)(*local_28 + 0x54))(local_20);
      goto LAB_004514e1;
    }
    local_38[0] = &PTR_vftable_00c7ed38;
    local_8._0_1_ = 3;
    FUN_00637060(&local_48,local_38);
    local_8._0_1_ = 2;
    (**(code **)(*local_38[0] + 0x54))(local_30);
    puVar7 = (undefined4 *)*local_54;
    puVar10 = puVar7 + local_54[2] * 6;
    for (; puVar7 != puVar10; puVar7 = puVar7 + 6) {
      if ((char *)*puVar7 == pcVar2) {
        puVar7 = puVar7 + 2;
        goto LAB_00451442;
      }
    }
    puVar7 = (undefined4 *)0x0;
LAB_00451442:
    FUN_00450c20(puVar7);
    pcVar3 = local_44;
    if (*local_44 != '\0') {
      piVar9 = (int *)(pcVar2 + -8);
      local_44 = "";
      *local_40 = pcVar3;
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      piVar9 = (int *)(pcVar1 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      (**(code **)(*local_28 + 0x54))(local_20);
      goto LAB_004514e1;
    }
    FUN_0045c2c0(*in_EDX);
    *in_EDX = local_50;
    local_3c = local_50;
    iVar5 = FUN_00443260();
    if (iVar5 != 0x2c) {
      if (iVar5 != 0x7d) {
        FUN_0040ea50();
        goto LAB_00451502;
      }
      FUN_0040ea50();
      FUN_00637000();
      FUN_0040ea50();
      (**(code **)(*local_28 + 0x54))(local_20);
      goto LAB_004514d7;
    }
    FUN_0040ea50();
    FUN_00637000();
    FUN_0040ea50();
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    puVar10 = local_20;
    ppuVar8 = local_28;
  } while( true );
}

