// rea decompile_all
// name: FUN_004ec6eb
// address: 0x4ec6eb
// body: available
// range: 0x4ec6eb-0x4ec7da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004ec6eb(undefined4 *param_1)

{
  *param_1 = juce::AlertWindow::vftable;
  param_1[0x1e] = juce::AlertWindow::vftable;
  FUN_004c11e7();
  FUN_004670ed();
  FUN_004670ed();
  _free((void *)param_1[0x4d]);
  FUN_004432c6(param_1 + 0x4a);
  _free((void *)param_1[0x47]);
  FUN_004f69da(param_1 + 0x44);
  FUN_004f69da(param_1 + 0x41);
  FUN_004f69da(param_1 + 0x3e);
  FUN_004f69da(param_1 + 0x3b);
  FUN_004c5ac0();
  FUN_004cf8a9();
  FUN_004a13db();
  FUN_004652d6();
  param_1[0x1e] = juce::Button::Listener::vftable;
  FUN_004efa44(param_1);
  return;
}

