// rea decompile_all
// name: FUN_00517a30
// address: 0x517a30
// body: available
// range: 0x517a30-0x517b0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00517a30(void)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  int in_ECX;
  
  FUN_0063eab0();
  if ((*(int **)(in_ECX + 0x14) != (int *)0x0) && (*(char *)(in_ECX + 0xbd) != '\0')) {
    *(undefined1 *)(in_ECX + 0xbd) = 1;
    ppuVar2 = (undefined **)**(int **)(in_ECX + 0x14);
    if (ppuVar2 == PanelExportComponent::vftable) {
      FUN_00593a60();
    }
    else {
      (*(code *)ppuVar2[2])();
    }
  }
  if (*(char *)(in_ECX + 0xbc) != '\0') {
    *(undefined1 *)(in_ECX + 0xbc) = 0;
    piVar1 = (int *)(in_ECX + 0xa0);
    if (((undefined *)*piVar1 != PTR_DAT_00c7ed54) && (iVar3 = FUN_0045c1e0(*piVar1), iVar3 != 0)) {
      FUN_00519470(piVar1,*(undefined4 *)(in_ECX + 0xa4));
      return;
    }
    if (*(int *)(in_ECX + 0x30) != 0) {
      if ((*(int *)(in_ECX + -0x24) != 0) && (iVar3 = FUN_0068fb00(), iVar3 != 0)) {
        return;
      }
      if (*(int *)(in_ECX + 0x30) != 0) {
        FUN_006dff00(1,1);
        return;
      }
      FUN_006dff00(1,1);
    }
  }
  return;
}

