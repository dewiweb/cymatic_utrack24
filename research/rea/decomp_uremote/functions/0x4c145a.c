// rea decompile_all
// name: FUN_004c145a
// address: 0x4c145a
// body: available
// range: 0x4c145a-0x4c1497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004c145a(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = juce::ReferenceCountedObject::vftable;
  param_1[1] = 0;
  *param_1 = `public:_void___thiscall_juce::Component::exitModalState(int)'::__l10::
             ExitModalStateMessage::vftable;
  FUN_004f5fb6();
  param_1[3] = param_2;
  return param_1;
}

