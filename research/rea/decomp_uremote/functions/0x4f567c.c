// rea decompile_all
// name: FUN_004f567c
// address: 0x4f567c
// body: available
// range: 0x4f567c-0x4f56c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f567c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    puVar2 = (undefined4 *)FUN_005af82d(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 8);
      puVar2[3] = 0;
      puVar2[1] = 1;
      *puVar2 = juce::DragAndDropHelpers::JuceEnumFormatEtc::vftable;
      puVar2[2] = uVar1;
    }
    puVar2[3] = *(undefined4 *)(param_1 + 0xc);
    *param_2 = puVar2;
    uVar1 = 0;
  }
  return uVar1;
}

