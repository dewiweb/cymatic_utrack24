// rea decompile_all
// name: FUN_004ded64
// address: 0x4ded64
// body: available
// range: 0x4ded64-0x4dedc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 *
FUN_004ded64(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_004c7627(param_1,param_2);
  *param_1 = juce::LookAndFeel_V3_DocumentWindowButton::vftable;
  param_1[0x1c] = juce::LookAndFeel_V3_DocumentWindowButton::vftable;
  FUN_004d076d();
  FUN_004788a8(param_1 + 0x38,param_4);
  FUN_004788a8(param_1 + 0x40,param_5);
  return param_1;
}

