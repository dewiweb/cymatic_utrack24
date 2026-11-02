// rea decompile_all
// name: FUN_004eec53
// address: 0x4eec53
// body: available
// range: 0x4eec53-0x4eecfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004eec53(undefined4 *param_1,undefined4 param_2)

{
  FUN_004ef95e(param_1,param_2);
  *param_1 = juce::ResizableWindow::vftable;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((int)param_1 + 0x85) = 0;
  *(undefined1 *)((int)param_1 + 0x86) = 0;
  *(undefined1 *)((int)param_1 + 0x87) = 1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  FUN_004c5a95();
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_004cf862();
  param_1[0x36] = 0;
  FUN_004d076d();
  FUN_004ef48c();
  FUN_004eeda0();
  return param_1;
}

