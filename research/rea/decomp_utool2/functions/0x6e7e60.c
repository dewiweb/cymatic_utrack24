// rea decompile_all
// name: FUN_006e7e60
// address: 0x6e7e60
// body: available
// range: 0x6e7e60-0x6e7f66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e7e60(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  
  *(undefined1 *)(in_ECX + 0x9e) = 1;
  if (*(int **)(in_ECX + 0x78) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(**(int **)(in_ECX + 0x78) + 4))();
  }
  *(int *)(in_ECX + 0x88) = iVar3;
  bVar2 = false;
  iVar4 = FUN_004ae6c0();
  if (0 < iVar4) {
    iVar4 = FUN_004ae6c0();
    iVar6 = 0;
    iVar4 = iVar4 + -1;
    if (0 < *(int *)(in_ECX + 0xa8)) {
      do {
        iVar1 = *(int *)(*(int *)(in_ECX + 0xa0) + iVar6 * 4);
        iVar7 = *(int *)(*(int *)(in_ECX + 0xa0) + 4 + iVar6 * 4) - iVar1;
        if (iVar4 < iVar7) {
          iVar4 = iVar4 + iVar1;
          goto LAB_006e7ee0;
        }
        iVar4 = iVar4 - iVar7;
        iVar6 = iVar6 + 2;
      } while (iVar6 < *(int *)(in_ECX + 0xa8));
    }
    iVar4 = 0;
LAB_006e7ee0:
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
      if (iVar3 < 0x7fffffff) {
        iVar4 = 0x7fffffff;
      }
      FUN_00410160(iVar3,iVar4);
      uVar5 = FUN_006e3b20(0);
      *(undefined4 *)(in_ECX + 0x98) = uVar5;
      bVar2 = true;
    }
  }
  FUN_0049a6f0(*(byte *)(in_ECX + 0x68) >> 1 & 1);
  if ((undefined **)**(int **)(in_ECX + 0x7c) == juce::ListBox::ListViewport::vftable) {
    FUN_006abba0();
  }
  else {
    (*(code *)((undefined **)**(int **)(in_ECX + 0x7c))[0x21])();
  }
  if ((bVar2) && (*(int **)(in_ECX + 0x78) != (int *)0x0)) {
    (**(code **)(**(int **)(in_ECX + 0x78) + 0x1c))(*(undefined4 *)(in_ECX + 0x98));
  }
  return;
}

