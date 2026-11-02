// rea decompile_all
// name: FUN_004e57ec
// address: 0x4e57ec
// body: available
// range: 0x4e57ec-0x4e596a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004e57ec(undefined4 *param_1)

{
  FUN_004bfde7();
  param_1[0x1c] = juce::SettableTooltipClient::vftable;
  FUN_004652cd();
  param_1[0x1e] = juce::TextEditor::Listener::vftable;
  param_1[0x1f] = juce::ComponentListener::vftable;
  param_1[0x20] = juce::Value::Listener::vftable;
  *param_1 = juce::Label::vftable;
  param_1[0x1c] = juce::Label::vftable;
  param_1[0x1e] = juce::Label::vftable;
  param_1[0x1f] = juce::Label::vftable;
  param_1[0x20] = juce::Label::vftable;
  FUN_00461693();
  FUN_0047180a();
  FUN_004615f7();
  FUN_004652e4();
  FUN_0049f51e();
  param_1[0x27] = 0x21;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 5;
  param_1[0x30] = 5;
  param_1[0x2d] = 1;
  param_1[0x2f] = 1;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((int)param_1 + 0xcd) = 0;
  *(undefined1 *)((int)param_1 + 0xce) = 0;
  FUN_004d076d();
  FUN_004c1eee(0x1000201);
  FUN_004d076d();
  FUN_004c1eee(0x1000200);
  FUN_004d076d();
  FUN_004c1eee(0x1000205);
  FUN_00471985();
  return param_1;
}

