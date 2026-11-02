// rea decompile_all
// name: FUN_0049f301
// address: 0x49f301
// body: available
// range: 0x49f301-0x49f364 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049f301(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = juce::ReferenceCountedObject::vftable;
  unaff_ESI[1] = 0;
  *unaff_ESI = juce::Font::SharedFontInternal::vftable;
  unaff_ESI[2] = 0;
  FUN_004652e4(param_1);
  FUN_004652e4(param_2);
  unaff_ESI[5] = param_3;
  *(undefined1 *)(unaff_ESI + 9) = 0;
  unaff_ESI[6] = 0x3f800000;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  if (*(char *)unaff_ESI[3] == '\0') {
    thunk_FUN_0049f6e8();
    FUN_00465317(unaff_ESI + 3);
  }
  return;
}

