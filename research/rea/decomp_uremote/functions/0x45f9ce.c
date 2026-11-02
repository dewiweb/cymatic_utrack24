// rea decompile_all
// name: FUN_0045f9ce
// address: 0x45f9ce
// body: available
// range: 0x45f9ce-0x45f9ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0045f9ce(undefined4 param_1)

{
  undefined4 *extraout_EDX;
  
  FUN_004bfd7b();
  extraout_EDX[0x1c] = PushButton::Listener::vftable;
  extraout_EDX[0x1d] = param_1;
  *extraout_EDX = ViewSelection::vftable;
  extraout_EDX[0x1c] = ViewSelection::vftable;
  extraout_EDX[0x1e] = 0;
  extraout_EDX[0x1f] = 0;
  extraout_EDX[0x20] = 0;
  return extraout_EDX;
}

