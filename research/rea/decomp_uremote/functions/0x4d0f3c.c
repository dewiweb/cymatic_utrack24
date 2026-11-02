// rea decompile_all
// name: FUN_004d0f3c
// address: 0x4d0f3c
// body: available
// range: 0x4d0f3c-0x4d103b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004d0f3c(undefined4 *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  FUN_004bfd7b();
  FUN_00474272();
  puVar1 = (undefined4 *)FUN_00474777();
  param_1[0x1c] = juce::ScrollBar::vftable;
  *param_1 = juce::ScrollBar::vftable;
  *puVar1 = juce::ScrollBar::vftable;
  FUN_004f6499(0,0x3ff0000000000000);
  FUN_004f6499(0,0x3fb999999999999a);
  *(undefined8 *)(param_1 + 0x2c) = 0x3fb999999999999a;
  *(undefined1 *)(param_1 + 0x39) = param_2;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 100;
  param_1[0x37] = 0x32;
  param_1[0x38] = 10;
  *(undefined1 *)((int)param_1 + 0xe5) = 0;
  *(undefined1 *)((int)param_1 + 0xe6) = 1;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  FUN_004c157d();
  FUN_004c2e0c();
  return param_1;
}

