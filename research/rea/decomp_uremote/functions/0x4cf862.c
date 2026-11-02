// rea decompile_all
// name: FUN_004cf862
// address: 0x4cf862
// body: available
// range: 0x4cf862-0x4cf88c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cf862(void)

{
  undefined4 *in_EAX;
  
  *(undefined8 *)(in_EAX + 10) = 0;
  *in_EAX = juce::ComponentBoundsConstrainer::vftable;
  in_EAX[2] = 0;
  in_EAX[3] = 0x3fffffff;
  in_EAX[4] = 0;
  in_EAX[5] = 0x3fffffff;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  return;
}

