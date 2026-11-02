// rea decompile_all
// name: FUN_004ca003
// address: 0x4ca003
// body: available
// range: 0x4ca003-0x4ca072 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004ca003(undefined4 *param_1,int param_2)

{
  FUN_004c8b7d(param_1);
  *param_1 = juce::DrawableImage::vftable;
  FUN_0049f50b();
  param_1[0x1f] = *(undefined4 *)(param_2 + 0x7c);
  FUN_004d076d();
  FUN_004c9328();
  FUN_004c0c1f();
  return param_1;
}

