// rea decompile_all
// name: FUN_0044127f
// address: 0x44127f
// body: available
// range: 0x44127f-0x441369 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0044127f(undefined4 *param_1)

{
  FUN_004bfd7b();
  param_1[0x1c] = juce::ComponentListener::vftable;
  param_1[0x1d] = juce::ScrollBar::Listener::vftable;
  *param_1 = SwipeComponent::VP::vftable;
  param_1[0x1c] = SwipeComponent::VP::vftable;
  param_1[0x1d] = SwipeComponent::VP::vftable;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_004d0f3c(param_1 + 0x2c,0);
  FUN_004d0f3c(param_1 + 0x6c,1);
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  param_1[0x28] = 1;
  FUN_004d13c5();
  FUN_004c1055(param_1 + 0x2c);
  FUN_004d13c5();
  FUN_004c1055(param_1 + 0x6c);
  return param_1;
}

