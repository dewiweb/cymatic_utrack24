// rea decompile_all
// name: FUN_004ec568
// address: 0x4ec568
// body: available
// range: 0x4ec568-0x4ec6cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 *
FUN_004ec568(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 uVar1;
  
  FUN_004ef95e(param_1,param_2,1);
  param_1[0x1e] = juce::Button::Listener::vftable;
  *param_1 = juce::AlertWindow::vftable;
  param_1[0x1e] = juce::AlertWindow::vftable;
  FUN_004652cd();
  FUN_004a13c1();
  param_1[0x26] = param_4;
  FUN_004cf862();
  FUN_004c5a95();
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  FUN_0040954d();
  FUN_0040954d();
  param_1[0x56] = param_5;
  *(undefined1 *)(param_1 + 0x57) = 1;
  uVar1 = FUN_004f4d93();
  FUN_004c06f2(uVar1);
  if (*(char *)*param_3 == '\0') {
    FUN_0046537e(&param_2);
    FUN_00465317(param_1 + 0x1f);
    FUN_004652d6();
  }
  FUN_004ec7f4(param_3);
  FUN_004ed377();
  FUN_004cf8f0(0x10000,0x10000);
  return param_1;
}

