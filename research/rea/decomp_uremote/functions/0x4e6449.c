// rea decompile_all
// name: FUN_004e6449
// address: 0x4e6449
// body: available
// range: 0x4e6449-0x4e6463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004e6449(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_005af82d(4);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_004c7112();
    *puVar2 = juce::LabelKeyboardFocusTraverser::vftable;
    return puVar2;
  }
  return (undefined4 *)0x0;
}

