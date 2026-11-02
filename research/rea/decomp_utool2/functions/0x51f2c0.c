// rea decompile_all
// name: FUN_0051f2c0
// address: 0x51f2c0
// body: available
// range: 0x51f2c0-0x51f575 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051f2c0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0070a536;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = &DAT_00bfe12c;
  local_8 = 0;
  local_18 = 0;
  if (param_1 < 0x21) {
    if (param_1 != 0x20) {
      switch(param_1) {
      case 4:
      case 8:
      case 0x10:
        FUN_00410ea0(&param_1);
        local_8._0_1_ = 1;
        FUN_006f6dd6(*(undefined4 *)(in_ECX + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                     &ProjectExplorer::RTTI_Type_Descriptor,0,uVar2);
        FUN_005069f0();
        local_8 = (uint)local_8._1_3_ << 8;
        piVar4 = (int *)(param_1 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar4);
          }
        }
      }
      goto switchD_0051f320_caseD_0;
    }
    iVar1 = *(int *)(in_ECX + 0x78);
    if (iVar1 != 0) {
      LOCK();
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      UNLOCK();
    }
    puVar3 = (undefined4 *)FUN_00546480(iVar1);
    local_14 = (undefined1 *)*puVar3;
    *puVar3 = &DAT_00bfe12c;
    piVar4 = (int *)(param_1 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  else {
    if (0x400 < param_1) {
      if (param_1 == 0x1000) {
        FUN_006f6dd6(*(undefined4 *)(in_ECX + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                     &ProjectExplorer::RTTI_Type_Descriptor,0,uVar2);
        FUN_00517fd0();
      }
      goto switchD_0051f320_caseD_0;
    }
    if (param_1 != 0x400) {
      if (param_1 == 0x100) {
        piVar4 = (int *)FUN_00413200();
        (**(code **)(*piVar4 + 0xb4))();
      }
      else if (param_1 == 0x200) {
        FUN_0051bf40();
        FUN_00518650();
      }
      goto switchD_0051f320_caseD_0;
    }
    FUN_00410ea0(&local_1c);
    local_8._0_1_ = 2;
    FUN_00636040(&local_18);
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar1 = *(int *)(in_ECX + 0x78);
    if (iVar1 != 0) {
      LOCK();
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      UNLOCK();
    }
    puVar3 = (undefined4 *)FUN_00546580(iVar1);
    local_14 = (undefined1 *)*puVar3;
    *puVar3 = &DAT_00bfe12c;
    piVar4 = (int *)(param_1 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_18 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar4 = (int *)(local_1c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
        local_18 = 0x100;
        goto switchD_0051f320_caseD_0;
      }
    }
  }
  local_18 = 0x100;
switchD_0051f320_caseD_0:
  FUN_006f6dd6(*(undefined4 *)(in_ECX + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
               &ProjectExplorer::RTTI_Type_Descriptor,0,uVar2);
  FUN_00519470(&local_14,local_18,0);
  piVar4 = (int *)(local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  return;
}

