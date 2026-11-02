// rea decompile_all
// name: FUN_00522760
// address: 0x522760
// body: available
// range: 0x522760-0x522a15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00522760(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *in_ECX;
  undefined1 local_34 [4];
  undefined1 local_30 [12];
  undefined1 local_24 [8];
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0070ac57;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = &DAT_00bfe12c;
  local_8 = 0;
  local_18 = 0;
  local_8._1_3_ = 0;
  if ((int)param_1 < 0x101) {
    if (param_1 == (undefined1 *)0x100) {
      local_8._0_1_ = 3;
      if (in_ECX[0x1d] == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(in_ECX[0x1d] + 8);
      }
      piVar4 = (int *)FUN_006f6dd6(uVar2,0,&juce::Component::RTTI_Type_Descriptor,
                                   &TVIBase::RTTI_Type_Descriptor,0);
      local_8 = (uint)local_8._1_3_ << 8;
      (**(code **)(*piVar4 + 0xb4))();
    }
    else {
      switch(param_1) {
      case (undefined1 *)0x1:
        FUN_00410ea0(local_1c);
        local_8._0_1_ = 1;
        uVar2 = FUN_0051bf40();
        FUN_004fad30(uVar2);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_0040ea50();
        break;
      case (undefined1 *)0x2:
        FUN_00410ea0(local_24);
        local_8._0_1_ = 2;
        uVar2 = FUN_0051bf40();
        FUN_0052cbd0(uVar2);
        FUN_0040ea50();
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_0040ea50();
        break;
      case (undefined1 *)0x20:
        iVar1 = in_ECX[0x1e];
        if (iVar1 != 0) {
          LOCK();
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
          UNLOCK();
        }
        puVar3 = (undefined4 *)FUN_005453f0(iVar1);
        local_14 = (undefined1 *)*puVar3;
        *puVar3 = &DAT_00bfe12c;
        FUN_0040ea50();
        local_18 = 0x100;
      }
    }
  }
  else if ((int)param_1 < 0x4001) {
    if (param_1 == (undefined1 *)0x4000) {
      (**(code **)(*in_ECX + 100))();
    }
    else if (param_1 == (undefined1 *)0x200) {
      FUN_006f6dd6(in_ECX[1],0,&juce::TreeView::RTTI_Type_Descriptor,
                   &ProjectExplorer::RTTI_Type_Descriptor,0);
      FUN_00518650();
    }
    else if (param_1 == (undefined1 *)0x400) {
      FUN_00410ea0(local_34);
      local_8._0_1_ = 4;
      FUN_00636040(local_30);
      local_8._0_1_ = 5;
      iVar1 = in_ECX[0x1e];
      if (iVar1 != 0) {
        LOCK();
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        UNLOCK();
      }
      puVar3 = (undefined4 *)FUN_005454f0(iVar1);
      local_14 = (undefined1 *)*puVar3;
      *puVar3 = &DAT_00bfe12c;
      FUN_0040ea50();
      FUN_0040ea50();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0040ea50();
      local_18 = 0x100;
    }
  }
  else if (param_1 == (undefined1 *)0x8000) {
    param_1 = &DAT_00bfe12c;
    local_8._0_1_ = 6;
    (**(code **)(*in_ECX + 0x68))(&param_1,DAT_00c76070 ^ (uint)&stack0xfffffffc);
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
  FUN_006f6dd6(in_ECX[1],0,&juce::TreeView::RTTI_Type_Descriptor,
               &ProjectExplorer::RTTI_Type_Descriptor,0);
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

