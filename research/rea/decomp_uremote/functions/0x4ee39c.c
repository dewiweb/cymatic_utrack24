// rea decompile_all
// name: FUN_004ee39c
// address: 0x4ee39c
// body: available
// range: 0x4ee39c-0x4ee45a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 *
FUN_004ee39c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004d076d();
  FUN_004eec53(param_1,param_2);
  param_1[0x3a] = param_4;
  *param_1 = juce::DocumentWindow::vftable;
  param_1[0x38] = 0x1a;
  param_1[0x39] = 0x18;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)((int)param_1 + 0xed) = 1;
  _eh_vector_constructor_iterator_
            (param_1 + 0x3c,4,3,(_func_void_void_ptr *)&LAB_004f656a,
             (_func_void_void_ptr *)&LAB_004f6570);
  FUN_004c6ae2();
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  FUN_004ef2c7(0x80,0x80);
  FUN_004eea2e();
  return param_1;
}

