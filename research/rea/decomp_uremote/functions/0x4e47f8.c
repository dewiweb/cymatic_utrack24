// rea decompile_all
// name: FUN_004e47f8
// address: 0x4e47f8
// body: available
// range: 0x4e47f8-0x4e4904 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004e47f8(undefined4 *param_1,undefined4 param_2)

{
  FUN_004bfde7(param_2);
  param_1[0x1c] = juce::SettableTooltipClient::vftable;
  FUN_004652cd();
  param_1[0x1e] = juce::Label::Listener::vftable;
  param_1[0x1f] = juce::Value::Listener::vftable;
  FUN_00474272(param_1 + 0x20);
  *param_1 = juce::ComboBox::vftable;
  param_1[0x1c] = juce::ComboBox::vftable;
  param_1[0x1e] = juce::ComboBox::vftable;
  param_1[0x1f] = juce::ComboBox::vftable;
  param_1[0x20] = juce::ComboBox::vftable;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FUN_004717a6();
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0xa9) = 0;
  *(undefined1 *)((int)param_1 + 0xaa) = 0;
  *(undefined1 *)((int)param_1 + 0xab) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_004652cd();
  FUN_00465153(param_1 + 0x31);
  FUN_004c157d();
  FUN_004e50d3();
  FUN_00471985();
  return param_1;
}

