// rea decompile_all
// name: FUN_00503b50
// address: 0x503b50
// body: available
// range: 0x503b50-0x503b71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00503b50(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int in_ECX;
  int *_Memory;
  
  if (*(int *)(in_ECX + 0xa34) != 0) {
    FUN_00518eb0();
  }
  iVar1 = *(int *)(in_ECX + 0xa38);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x9c) != 0) {
    iVar4 = FUN_0068fb00();
    if (iVar4 != 0) {
      if (PTR_DAT_00c7ed54 != *(undefined **)(iVar1 + 0xf0)) {
        iVar5 = FUN_0045c1e0(PTR_DAT_00c7ed54);
        if (iVar5 != 0) goto LAB_0052de92;
      }
      FUN_006f6dd6(iVar4,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                   &TargetExplorerBaseItem::RTTI_Type_Descriptor,0);
      puVar6 = (undefined4 *)FUN_00530500();
      uVar2 = *(undefined4 *)(iVar1 + 0xf0);
      *(undefined4 *)(iVar1 + 0xf0) = *puVar6;
      *puVar6 = uVar2;
      _Memory = (int *)(iVar1 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar4 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(_Memory);
        }
      }
    }
  }
LAB_0052de92:
  FUN_006e0a30();
  FUN_00554b70(&stack0xffffffec);
  FUN_0052d320(0);
  FUN_006e0a30();
  FUN_00530430();
  if (*(int **)(iVar1 + 0xcc) != (int *)0x0) {
    ppuVar3 = (undefined **)**(int **)(iVar1 + 0xcc);
    if (ppuVar3 == PanelImportComponent::vftable) {
      FUN_005a2c30();
      FUN_0052cd50();
      return;
    }
    (*(code *)ppuVar3[1])();
  }
  FUN_0052cd50();
  return;
}

