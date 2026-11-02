// rea decompile_all
// name: FUN_00444e24
// address: 0x444e24
// body: available
// range: 0x444e24-0x444ec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00444e24(undefined4 *param_1)

{
  *param_1 = DSPMChannelStrip::vftable;
  param_1[0x1c] = DSPMChannelStrip::vftable;
  param_1[0x1d] = DSPMChannelStrip::vftable;
  param_1[0x1e] = DSPMChannelStrip::vftable;
  FUN_00440b82();
  FUN_00443c14(param_1 + 0x152);
  FUN_0043f7ba(param_1 + 0xf4);
  FUN_0043f7ba(param_1 + 0x96);
  FUN_00444165(param_1 + 0x22);
  param_1[0x1e] = PanCtrl::Listener::vftable;
  param_1[0x1d] = PushButton::Listener::vftable;
  param_1[0x1c] = FaderMeter::Listener::vftable;
  FUN_004bfe57();
  return;
}

