// rea decompile_all
// name: FUN_006dd630
// address: 0x6dd630
// body: available
// range: 0x6dd630-0x6dd69c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006dd630(undefined4 param_1)

{
  void *pvVar1;
  undefined4 *extraout_ECX;
  
  pvVar1 = operator_new(0x88);
  FUN_006ea2c0(pvVar1);
  extraout_ECX[0x1c] = juce::Timer::vftable;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x20] = 0;
  *(byte *)((int)extraout_ECX + 0x69) = *(byte *)((int)extraout_ECX + 0x69) | 0x40;
  extraout_ECX[0x21] = param_1;
  *extraout_ECX = juce::CaretComponent::vftable;
  extraout_ECX[0x1c] = juce::CaretComponent::vftable;
  *(byte *)(extraout_ECX + 0x1a) = *(byte *)(extraout_ECX + 0x1a) & 0xef | 8;
  return extraout_ECX;
}

