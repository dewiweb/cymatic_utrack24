// rea decompile_all
// name: FUN_0049f3c4
// address: 0x49f3c4
// body: available
// range: 0x49f3c4-0x49f423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049f3c4(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  *unaff_ESI = juce::ReferenceCountedObject::vftable;
  unaff_ESI[1] = 0;
  *unaff_ESI = juce::Font::SharedFontInternal::vftable;
  iVar1 = *(int *)(unaff_EDI + 8);
  unaff_ESI[2] = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  FUN_004652e4(unaff_EDI + 0xc);
  FUN_004652e4(unaff_EDI + 0x10);
  unaff_ESI[5] = *(undefined4 *)(unaff_EDI + 0x14);
  unaff_ESI[6] = *(undefined4 *)(unaff_EDI + 0x18);
  unaff_ESI[7] = *(undefined4 *)(unaff_EDI + 0x1c);
  unaff_ESI[8] = *(undefined4 *)(unaff_EDI + 0x20);
  *(undefined1 *)(unaff_ESI + 9) = *(undefined1 *)(unaff_EDI + 0x24);
  return;
}

