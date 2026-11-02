// rea decompile_all
// name: FUN_004f9ef0
// address: 0x4f9ef0
// body: available
// range: 0x4f9ef0-0x4f9f4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004f9ef0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 auStack_24 [7];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  *param_1 = juce::SplashScreen::vftable;
  param_1[0x1c] = juce::SplashScreen::vftable;
  param_1[0x21] = juce::SplashScreen::vftable;
  local_8 = 1;
  puVar1 = auStack_24;
  auStack_24[0] = 0x4f9f2c;
  FUN_004c4d7a();
  puVar1[-1] = 0x4f9f33;
  FUN_004739ed();
  puVar1[-1] = 0x4f9f3a;
  FUN_0047478c();
  local_8 = 0xffffffff;
  puVar1[-1] = 0x4f9f45;
  FUN_004bfe57();
  puVar1[-1] = 0x4f9f4a;
  return;
}

