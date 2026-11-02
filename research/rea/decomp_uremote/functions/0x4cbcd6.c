// rea decompile_all
// name: FUN_004cbcd6
// address: 0x4cbcd6
// body: available
// range: 0x4cbcd6-0x4cbd59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004cbcd6(undefined4 *param_1)

{
  FUN_004c8b7d(param_1);
  *param_1 = juce::DrawableShape::vftable;
  FUN_0047bb03();
  FUN_0047888f();
  FUN_0047888f();
  FUN_004cc417();
  FUN_004cc417();
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  return param_1;
}

