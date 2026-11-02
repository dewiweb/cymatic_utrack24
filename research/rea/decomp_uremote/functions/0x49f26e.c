// rea decompile_all
// name: FUN_0049f26e
// address: 0x49f26e
// body: available
// range: 0x49f26e-0x49f300 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049f26e(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 *unaff_EDI;
  
  *unaff_EDI = juce::ReferenceCountedObject::vftable;
  unaff_EDI[1] = 0;
  *unaff_EDI = juce::Font::SharedFontInternal::vftable;
  unaff_EDI[2] = 0;
  FUN_004652e4(param_1);
  FUN_0049ddad((byte)param_2 & 1,(byte)(param_2 >> 1) & 1);
  FUN_0046537e(unaff_EDI + 4);
  unaff_EDI[5] = param_3;
  unaff_EDI[6] = 0x3f800000;
  *(byte *)(unaff_EDI + 9) = (byte)(param_2 >> 2) & 1;
  unaff_EDI[7] = 0;
  unaff_EDI[8] = 0;
  if ((param_2 == 0) && (*(char *)unaff_EDI[3] == '\0')) {
    FUN_0049ee1d();
    FUN_004a4d78();
  }
  return;
}

