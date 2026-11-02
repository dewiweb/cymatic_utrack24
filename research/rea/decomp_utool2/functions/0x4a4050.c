// rea decompile_all
// name: FUN_004a4050
// address: 0x4a4050
// body: available
// range: 0x4a4050-0x4a40b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a4050(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  undefined1 auStack_18 [12];
  undefined4 uStack_c;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(in_ECX + 0x318);
  *(int *)(in_ECX + 0x318) = iVar1;
  if (*(int *)(in_ECX + 0x78) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(*(int *)(in_ECX + 0x78) + 8);
  }
  if (piVar3 != (int *)0x0) {
    if (iVar1 == iVar2) {
      uStack_c = 0x4a4095;
      FUN_004a3860();
    }
    else if ((undefined **)*piVar3 == juce::TreeView::ContentComponent::vftable) {
      uStack_c = 0x4a408e;
      FUN_00690c60();
    }
    else {
      uStack_c = 0x4a40b4;
      (*(code *)((undefined **)*piVar3)[0x21])();
    }
  }
  FUN_006e6400(auStack_18);
  FUN_006ce9f0(1);
  return;
}

