// rea decompile_all
// name: FUN_00518a30
// address: 0x518a30
// body: available
// range: 0x518a30-0x518ccd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00518a30(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  uint uVar9;
  bool bVar10;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00709849;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar2 = false;
  if (((undefined *)*param_1 == PTR_DAT_00c7ed54) || (iVar4 = FUN_0045c1e0(*param_1), iVar4 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  FUN_005b2a40();
  local_8 = 0;
  FUN_005b4070();
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar4 = in_ECX + 0xdc;
  while( true ) {
    iVar8 = iVar4;
    uVar9 = 0;
    if (0 < *(int *)(iVar8 + 0x14)) {
      bVar10 = *(int *)(iVar8 + 0x14) != 0;
      do {
        if (bVar10) {
          uVar7 = *(undefined4 *)(*(int *)(iVar8 + 0xc) + uVar9 * 4);
        }
        else {
          uVar7 = 0;
        }
        iVar5 = FUN_006f6dd6(uVar7,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                             &ProjectExplorerBaseItem::RTTI_Type_Descriptor);
        piVar6 = (int *)FUN_00412f10();
        if (*piVar6 == *param_1) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_0045c1e0(*piVar6);
        }
        piVar6 = (int *)(local_1c + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        if (iVar4 == 0) goto LAB_00518bec;
        uVar9 = uVar9 + 1;
        bVar10 = uVar9 < *(uint *)(iVar8 + 0x14);
      } while ((int)uVar9 < (int)*(uint *)(iVar8 + 0x14));
    }
    uVar9 = 0;
    iVar5 = iVar8;
    if (*(int *)(iVar8 + 0x14) < 1) break;
    while( true ) {
      if (uVar9 < *(uint *)(iVar8 + 0x14)) {
        uVar7 = *(undefined4 *)(*(int *)(iVar8 + 0xc) + uVar9 * 4);
      }
      else {
        uVar7 = 0;
      }
      iVar4 = FUN_006f6dd6(uVar7,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                           &ProjectExplorerBaseItem::RTTI_Type_Descriptor);
      FUN_00412f10();
      local_8._0_1_ = 2;
      cVar3 = FUN_00635500();
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar6 = (int *)(local_20 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      if (cVar3 != '\0') break;
      uVar9 = uVar9 + 1;
      if (*(int *)(iVar8 + 0x14) <= (int)uVar9) goto LAB_00518bec;
    }
  }
LAB_00518bec:
  if ((char)param_2 != '\0') {
    piVar6 = (int *)FUN_00412f10();
    bVar2 = true;
    if ((*piVar6 != *param_1) && (iVar4 = FUN_0045c1e0(*piVar6), iVar4 != 0)) {
      bVar10 = true;
      goto LAB_00518c2d;
    }
  }
  bVar10 = false;
LAB_00518c2d:
  if ((bVar2) && (piVar6 = (int *)(param_2 + -8), piVar6 != &DAT_00bfe124)) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (bVar10) {
    iVar5 = 0;
  }
  piVar6 = (int *)(local_28 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)(local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return iVar5;
}

