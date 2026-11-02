// rea decompile_all
// name: FUN_0051e5d0
// address: 0x51e5d0
// body: available
// range: 0x51e5d0-0x51e7dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051e5d0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  bool bVar5;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0070a306;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = &DAT_00bfe12c;
  local_8 = 0;
  local_18 = 0;
  if ((int)param_1 < 0x11) {
    if ((param_1 == (undefined4 *)0x10) ||
       ((param_1 != (undefined4 *)0x0 &&
        ((param_1 == (undefined4 *)0x4 || (param_1 == (undefined4 *)0x8)))))) {
      piVar3 = (int *)FUN_00413340();
      iVar2 = *piVar3;
      if (param_1 != (undefined4 *)0x0) {
        LOCK();
        piVar3 = param_1 + 1;
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*param_1)();
        }
      }
      if (iVar2 != 0) {
        FUN_00413340();
        FUN_00410ea0();
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_006f6dd6(*(undefined4 *)(in_ECX + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                     &ProjectExplorer::RTTI_Type_Descriptor);
        FUN_005069f0();
        piVar3 = param_1 + -2;
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar3);
          }
        }
        local_8 = local_8 & 0xffffff00;
        if (local_1c != (undefined4 *)0x0) {
          LOCK();
          piVar3 = local_1c + 1;
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)*local_1c)();
          }
        }
      }
    }
  }
  else if (param_1 == (undefined4 *)0x20) {
    piVar3 = (int *)FUN_00413340();
    iVar2 = *piVar3;
    LOCK();
    iVar1 = iRam00000024 + -1;
    UNLOCK();
    bVar5 = iRam00000024 == 1;
    iRam00000024 = iVar1;
    if (bVar5) {
      (*(code *)*puRam00000020)();
    }
    if (iVar2 != 0) {
      FUN_00413340(&stack0xffffffcc);
      puVar4 = (undefined4 *)FUN_00546480();
      local_14 = (undefined1 *)*puVar4;
      *puVar4 = &DAT_00bfe12c;
      LOCK();
      iVar2 = iRam00000018 + -1;
      UNLOCK();
      bVar5 = iRam00000018 == 0;
      iRam00000018 = iVar2;
      if (bVar5) {
        FID_conflict__free((void *)0x18);
      }
      local_18 = 0x100;
    }
  }
  else if (param_1 == (undefined4 *)0x800) {
    FUN_00548700();
  }
  FUN_006f6dd6(*(undefined4 *)(in_ECX + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
               &ProjectExplorer::RTTI_Type_Descriptor);
  FUN_00519470(&local_14,local_18);
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return;
}

