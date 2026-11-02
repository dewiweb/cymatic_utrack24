// rea decompile_all
// name: FUN_004d84d6
// address: 0x4d84d6
// body: available
// range: 0x4d84d6-0x4d8520 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d84d6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_ESI;
  
  FUN_004c7627(unaff_ESI,param_1);
  *unaff_ESI = juce::LookAndFeel_V2::GlassWindowButton::vftable;
  unaff_ESI[0x1c] = juce::LookAndFeel_V2::GlassWindowButton::vftable;
  FUN_004d076d();
  FUN_004788a8(unaff_ESI + 0x38,param_3);
  FUN_004788a8(unaff_ESI + 0x40,param_4);
  return;
}

