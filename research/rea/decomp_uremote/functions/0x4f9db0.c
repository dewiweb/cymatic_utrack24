// rea decompile_all
// name: FUN_004f9db0
// address: 0x4f9db0
// body: available
// range: 0x4f9db0-0x4f9e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004f9db0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_004bfde7();
  FUN_00474777();
  FUN_00473961();
  param_1[0x1c] = juce::SplashScreen::vftable;
  *param_1 = juce::SplashScreen::vftable;
  param_1[0x21] = juce::SplashScreen::vftable;
  FUN_0049f50b();
  FUN_004fa582();
  FUN_00467a90(0);
  param_1[0x28] = 0;
  FUN_0047e3d7();
  FUN_004c0483();
  uVar1 = FUN_0047e371();
  uVar2 = FUN_0047e366();
  FUN_004f9e81(uVar2,uVar1);
  return param_1;
}

