// rea decompile_all
// name: FUN_0069b6b0
// address: 0x69b6b0
// body: available
// range: 0x69b6b0-0x69b76c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069b6b0(char param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = in_ECX[0x2f];
  if ((*(char *)(iVar1 + 0xcc) != param_1) || (*(char *)(iVar1 + 0xcd) != param_1)) {
    *(char *)(iVar1 + 0xcc) = param_1;
    *(char *)(iVar1 + 0xcd) = param_1;
    *(undefined1 *)(iVar1 + 0xce) = 0;
    *(byte *)(iVar1 + 0x68) =
         *(byte *)(iVar1 + 0x68) & 0x9f | (param_1 != '\0') << 5 | (param_1 != '\0') << 6;
    iVar1 = (param_1 != '\0') + 1;
    in_ECX[0x32] = iVar1;
    *(byte *)(in_ECX + 0x1a) = (iVar1 != 1) - 1U & 0x20 | *(byte *)(in_ECX + 0x1a) & 0xdf;
    if ((undefined **)*in_ECX == juce::ComboBox::vftable) {
      if ((0 < in_ECX[7]) && (0 < in_ECX[6])) {
        iVar1 = FUN_006e9580();
        (**(code **)(*(int *)(iVar1 + 0x24) + 0x10))();
        return;
      }
    }
    else {
      (*(code *)((undefined **)*in_ECX)[0x21])();
    }
  }
  return;
}

