// rea decompile_all
// name: FUN_005218d0
// address: 0x5218d0
// body: available
// range: 0x5218d0-0x521b52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005218d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *in_ECX;
  bool bVar6;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0070aa1f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = &DAT_00bfe12c;
  local_8 = 0;
  local_18 = 0;
  if (param_1 < 0x21) {
    if (param_1 == 0x20) {
      piVar4 = (int *)FUN_00413320();
      iVar1 = *piVar4;
      LOCK();
      iVar2 = iRam00000024 + -1;
      UNLOCK();
      bVar6 = iRam00000024 == 1;
      iRam00000024 = iVar2;
      if (bVar6) {
        (*(code *)*puRam00000020)();
      }
      if (iVar1 != 0) {
        FUN_00413320(&stack0xffffffcc);
        puVar5 = (undefined4 *)FUN_005453f0();
        local_14 = (undefined1 *)*puVar5;
        *puVar5 = &DAT_00bfe12c;
        LOCK();
        iVar1 = iRam00000018 + -1;
        UNLOCK();
        bVar6 = iRam00000018 == 0;
        iRam00000018 = iVar1;
        if (bVar6) {
          FID_conflict__free((void *)0x18);
        }
        local_18 = 0x100;
      }
    }
    else if (param_1 != 0) {
      if (param_1 == 1) {
        piVar4 = (int *)FUN_00413320();
        iVar1 = *piVar4;
        LOCK();
        iVar2 = _DAT_00000005 + -1;
        UNLOCK();
        bVar6 = _DAT_00000005 == 1;
        _DAT_00000005 = iVar2;
        if (bVar6) {
          (*(code *)*puRam00000001)();
        }
        if (iVar1 == 0) goto LAB_00521af6;
        FUN_00413320();
        FUN_00410ea0();
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_0051bf40();
        FUN_004fad30();
      }
      else {
        if (param_1 != 2) goto LAB_00521af6;
        piVar4 = (int *)FUN_00413320();
        iVar1 = *piVar4;
        LOCK();
        iVar2 = CONCAT13(uRam00000009,DAT_00000005_1) + -1;
        iVar3 = CONCAT13(uRam00000009,DAT_00000005_1);
        DAT_00000005_1 = (undefined3)iVar2;
        uRam00000009 = (undefined1)((uint)iVar2 >> 0x18);
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)CONCAT13(DAT_00000005,puRam00000001._1_3_))();
        }
        if (iVar1 == 0) goto LAB_00521af6;
        FUN_00413320();
        FUN_00410ea0();
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_0051bf40();
        FUN_0052cbd0();
        FUN_0040ea50();
      }
      FUN_0040ea50();
      local_8 = local_8 & 0xffffff00;
      FUN_004030d0();
    }
  }
  else if (param_1 == 0x800) {
    FUN_00548700();
  }
  else if (param_1 == 0x4000) {
    (**(code **)(*in_ECX + 100))();
  }
  else if (param_1 == 0x8000) {
    local_8._0_1_ = 5;
    local_8._1_3_ = 0;
    (**(code **)(*in_ECX + 0x68))();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0040ea50();
  }
LAB_00521af6:
  FUN_006f6dd6(in_ECX[1],0,&juce::TreeView::RTTI_Type_Descriptor,
               &ProjectExplorer::RTTI_Type_Descriptor);
  FUN_00519470(&local_14,local_18);
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

