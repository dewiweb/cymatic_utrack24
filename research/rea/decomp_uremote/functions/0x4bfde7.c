// rea decompile_all
// name: FUN_004bfde7
// address: 0x4bfde7
// body: available
// range: 0x4bfde7-0x4bfe56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bfde7(undefined4 param_1)

{
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = juce::Component::vftable;
  FUN_004652e4(param_1);
  FUN_004652cd();
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  FUN_004c6ae2();
  unaff_ESI[0xf] = extraout_EDX;
  unaff_ESI[0x10] = extraout_EDX;
  unaff_ESI[0x11] = extraout_EDX;
  unaff_ESI[0x12] = extraout_EDX;
  unaff_ESI[0x13] = extraout_EDX;
  unaff_ESI[0x14] = extraout_EDX;
  unaff_ESI[0x15] = extraout_EDX;
  FUN_0040954d();
  unaff_ESI[0x19] = extraout_EDX_00;
  unaff_ESI[0x1a] = extraout_EDX_00;
  *(char *)(unaff_ESI + 0x1b) = (char)extraout_EDX_00;
  return;
}

