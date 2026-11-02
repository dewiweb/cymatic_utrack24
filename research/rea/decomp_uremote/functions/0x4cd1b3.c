// rea decompile_all
// name: FUN_004cd1b3
// address: 0x4cd1b3
// body: available
// range: 0x4cd1b3-0x4cd27e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004cd1b3(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_004c8b7d(param_1);
  *param_1 = juce::DrawableText::vftable;
  FUN_004c9328();
  thunk_FUN_00463e98();
  thunk_FUN_00463e98();
  iVar2 = 2;
  puVar1 = param_1 + 0x26;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  } while (-1 < iVar2);
  FUN_0049f50b();
  FUN_0049f4b3();
  FUN_004652e4(param_2 + 0xb8);
  FUN_004d076d();
  param_1[0x30] = *(undefined4 *)(param_2 + 0xc0);
  FUN_004cd457();
  return param_1;
}

