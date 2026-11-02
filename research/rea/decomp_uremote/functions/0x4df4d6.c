// rea decompile_all
// name: FUN_004df4d6
// address: 0x4df4d6
// body: available
// range: 0x4df4d6-0x4df57a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004df4d6(undefined4 *param_1)

{
  undefined4 extraout_EDX;
  undefined8 uVar1;
  
  FUN_004bfd7b();
  param_1[0x1c] = juce::MenuBarModel::Listener::vftable;
  uVar1 = FUN_00474777();
  *(undefined4 *)uVar1 = juce::MenuBarComponent::vftable;
  *param_1 = juce::MenuBarComponent::vftable;
  param_1[0x1c] = juce::MenuBarComponent::vftable;
  param_1[0x22] = (int)((ulonglong)uVar1 >> 0x20);
  FUN_0040954d();
  param_1[0x26] = extraout_EDX;
  param_1[0x27] = extraout_EDX;
  param_1[0x28] = extraout_EDX;
  param_1[0x29] = extraout_EDX;
  param_1[0x2a] = extraout_EDX;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = extraout_EDX;
  FUN_004c157d();
  FUN_004c2ddc();
  FUN_004c2de8();
  FUN_004df612();
  return param_1;
}

