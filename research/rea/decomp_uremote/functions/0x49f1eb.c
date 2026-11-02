// rea decompile_all
// name: FUN_0049f1eb
// address: 0x49f1eb
// body: available
// range: 0x49f1eb-0x49f26d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049f1eb(undefined4 param_1)

{
  undefined4 uVar1;
  uint unaff_EBX;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = juce::ReferenceCountedObject::vftable;
  unaff_EDI[1] = 0;
  *unaff_EDI = juce::Font::SharedFontInternal::vftable;
  unaff_EDI[2] = 0;
  uVar1 = thunk_FUN_0049f6e8();
  FUN_004652e4(uVar1);
  FUN_0049ddad((byte)unaff_EBX & 1,(byte)(unaff_EBX >> 1) & 1);
  FUN_0046537e(unaff_EDI + 4);
  unaff_EDI[5] = param_1;
  unaff_EDI[6] = 0x3f800000;
  *(byte *)(unaff_EDI + 9) = (byte)(unaff_EBX >> 2) & 1;
  unaff_EDI[7] = 0;
  unaff_EDI[8] = 0;
  if (unaff_EBX == 0) {
    FUN_0049ee1d();
    FUN_004a4d78();
  }
  return;
}

