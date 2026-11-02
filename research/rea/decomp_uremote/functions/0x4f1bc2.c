// rea decompile_all
// name: FUN_004f1bc2
// address: 0x4f1bc2
// body: available
// range: 0x4f1bc2-0x4f1c1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004f1bc2(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int extraout_EDX;
  
  param_1[1] = 1;
  *param_1 = juce::HWNDComponentPeer::JuceDropTarget::vftable;
  puVar1 = (undefined4 *)FUN_005af82d(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_2;
    FUN_0040954d();
    FUN_004652cd();
    *(undefined4 *)(extraout_EDX + 0x10) = 0;
    *(undefined4 *)(extraout_EDX + 0x14) = 0;
  }
  param_1[2] = puVar1;
  return param_1;
}

