// rea decompile_all
// name: FUN_0051d980
// address: 0x51d980
// body: available
// range: 0x51d980-0x51dd0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051d980(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  undefined **ppuVar7;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0070a165;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = &DAT_00bfe12c;
  local_8 = 0;
  local_18 = 0;
  if (param_1 < 0x41) {
    if (param_1 == 0x40) {
      FUN_006f6dd6(*(undefined4 *)(in_ECX + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                   &ProjectExplorer::RTTI_Type_Descriptor,0,uVar2);
      FUN_005068d0();
    }
    else {
      switch(param_1) {
      case 4:
      case 8:
      case 0x10:
        FUN_00410ea0(&local_1c);
        local_8._0_1_ = 1;
        FUN_00636040(&param_1);
        local_8._0_1_ = 2;
        FUN_006f6dd6(*(undefined4 *)(in_ECX + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                     &ProjectExplorer::RTTI_Type_Descriptor,0,uVar2);
        FUN_005069f0();
        FUN_0040ea50();
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_0040ea50();
        break;
      case 0x20:
        iVar5 = *(int *)(in_ECX + 0x78);
        if (iVar5 != 0) {
          LOCK();
          *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
          UNLOCK();
        }
        puVar3 = (undefined4 *)FUN_00546480(iVar5);
        local_14 = (undefined1 *)*puVar3;
        *puVar3 = &DAT_00bfe12c;
        FUN_0040ea50();
        local_18 = 0x100;
      }
    }
  }
  else if (param_1 < 0x401) {
    if (param_1 == 0x400) {
      FUN_00410ea0(&local_18);
      local_8._0_1_ = 3;
      FUN_00636040(&local_1c);
      local_8 = CONCAT31(local_8._1_3_,4);
      iVar5 = *(int *)(in_ECX + 0x78);
      if (iVar5 != 0) {
        LOCK();
        *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
        UNLOCK();
      }
      puVar3 = (undefined4 *)FUN_00546580(iVar5);
      local_14 = (undefined1 *)*puVar3;
      *puVar3 = &DAT_00bfe12c;
      piVar6 = (int *)(param_1 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      piVar6 = (int *)(local_1c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_8 = local_8 & 0xffffff00;
      piVar6 = (int *)(local_18 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_18 = 0x100;
    }
    else if (param_1 == 0x100) {
      piVar6 = (int *)FUN_00413200();
      (**(code **)(*piVar6 + 0xb4))();
    }
    else if (param_1 == 0x200) {
      FUN_0051bf40();
      FUN_00518650();
    }
  }
  else if (param_1 == 0x1000) {
    FUN_006f6dd6(*(undefined4 *)(in_ECX + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                 &ProjectExplorer::RTTI_Type_Descriptor,0,uVar2);
    FUN_00517fd0();
  }
  else if ((param_1 == 0x2000) && (cVar1 = FUN_0054d070(0), cVar1 != '\0')) {
    uVar4 = FUN_00410ea0(&local_1c);
    puVar3 = &param_1;
    local_8._0_1_ = 5;
    FUN_0051bf40(puVar3);
    FUN_004130a0(puVar3);
    cVar1 = FUN_00636000(uVar4);
    FUN_0040ea50();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0040ea50();
    if (cVar1 == '\0') {
      ppuVar7 = &PTR_DAT_00c7ed54;
      FUN_0051bf40(&PTR_DAT_00c7ed54);
      FUN_00517d30(ppuVar7);
      FUN_0051bf40();
      FUN_00517980();
    }
    else {
      uVar4 = FUN_00410ea0(&param_1);
      local_8._0_1_ = 6;
      FUN_0051bf40(uVar4);
      FUN_00517d30(uVar4);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0040ea50();
      FUN_0051be80(1);
    }
    iVar5 = FUN_0051c270();
    if (iVar5 != 0) {
      FUN_0051c1a0();
    }
  }
  FUN_006f6dd6(*(undefined4 *)(in_ECX + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
               &ProjectExplorer::RTTI_Type_Descriptor,0,uVar2);
  FUN_00519470(&local_14,local_18,0);
  piVar6 = (int *)(local_14 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return;
}

