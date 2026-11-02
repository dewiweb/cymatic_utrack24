// rea decompile_all
// name: FUN_0052d970
// address: 0x52d970
// body: available
// range: 0x52d970-0x52db30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0052d970(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c897;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((undefined *)*param_1 == PTR_DAT_00c7ed54) || (iVar3 = FUN_0045c1e0(*param_1), iVar3 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  iVar3 = *(int *)(in_ECX + 0xe4);
  do {
    iVar7 = iVar3;
    uVar8 = 0;
    if (0 < *(int *)(iVar7 + 0x14)) {
      bVar9 = *(int *)(iVar7 + 0x14) != 0;
      do {
        if (bVar9) {
          uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0xc) + uVar8 * 4);
        }
        else {
          uVar5 = 0;
        }
        iVar3 = FUN_006f6dd6(uVar5,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                             &TargetExplorerBaseItem::RTTI_Type_Descriptor);
        piVar4 = (int *)FUN_00530500();
        if (*piVar4 == *param_1) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_0045c1e0(*piVar4);
        }
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
        if (iVar6 == 0) {
          ExceptionList = local_10;
          return iVar3;
        }
        uVar8 = uVar8 + 1;
        bVar9 = uVar8 < *(uint *)(iVar7 + 0x14);
      } while ((int)uVar8 < (int)*(uint *)(iVar7 + 0x14));
    }
    uVar8 = 0;
    if (*(int *)(iVar7 + 0x14) < 1) {
      ExceptionList = local_10;
      return iVar7;
    }
    while( true ) {
      if (uVar8 < *(uint *)(iVar7 + 0x14)) {
        uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0xc) + uVar8 * 4);
      }
      else {
        uVar5 = 0;
      }
      iVar3 = FUN_006f6dd6(uVar5,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                           &TargetExplorerBaseItem::RTTI_Type_Descriptor);
      FUN_00530500();
      local_8 = 0;
      cVar2 = FUN_00635500();
      local_8 = 0xffffffff;
      piVar4 = (int *)(local_18 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      if (cVar2 != '\0') break;
      uVar8 = uVar8 + 1;
      if (*(int *)(iVar7 + 0x14) <= (int)uVar8) {
        ExceptionList = local_10;
        return iVar7;
      }
    }
  } while( true );
}

