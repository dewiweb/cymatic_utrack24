// rea decompile_all
// name: FUN_004d345e
// address: 0x4d345e
// body: available
// range: 0x4d345e-0x4d3569 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004d345e(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [24];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar3 = (undefined4 *)auStack_20;
  *param_1 = juce::LookAndFeel_V2::vftable;
  param_1[1] = juce::LookAndFeel_V2::vftable;
  param_1[2] = juce::LookAndFeel_V2::vftable;
  param_1[3] = juce::LookAndFeel_V2::vftable;
  param_1[4] = juce::LookAndFeel_V2::vftable;
  param_1[5] = juce::LookAndFeel_V2::vftable;
  param_1[6] = juce::LookAndFeel_V2::vftable;
  param_1[7] = juce::LookAndFeel_V2::vftable;
  param_1[8] = juce::LookAndFeel_V2::vftable;
  param_1[9] = juce::LookAndFeel_V2::vftable;
  param_1[10] = juce::LookAndFeel_V2::vftable;
  param_1[0xb] = juce::LookAndFeel_V2::vftable;
  param_1[0xc] = juce::LookAndFeel_V2::vftable;
  param_1[0xd] = juce::LookAndFeel_V2::vftable;
  param_1[0xe] = juce::LookAndFeel_V2::vftable;
  param_1[0xf] = juce::LookAndFeel_V2::vftable;
  param_1[0x10] = juce::LookAndFeel_V2::vftable;
  param_1[0x11] = juce::LookAndFeel_V2::vftable;
  param_1[0x12] = juce::LookAndFeel_V2::vftable;
  param_1[0x13] = juce::LookAndFeel_V2::vftable;
  param_1[0x14] = juce::LookAndFeel_V2::vftable;
  param_1[0x15] = juce::LookAndFeel_V2::vftable;
  param_1[0x16] = juce::LookAndFeel_V2::vftable;
  param_1[0x17] = juce::LookAndFeel_V2::vftable;
  param_1[0x18] = juce::LookAndFeel_V2::vftable;
  param_1[0x19] = juce::LookAndFeel_V2::vftable;
  param_1[0x1a] = juce::LookAndFeel_V2::vftable;
  param_1[0x1b] = juce::LookAndFeel_V2::vftable;
  local_8 = 1;
  if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
    uStack_24 = 1;
    puVar3 = &uStack_28;
    uStack_28 = 0x4d3547;
    (*(code *)**(undefined4 **)param_1[0x25])();
  }
  local_8 = local_8 & 0xffffff00;
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)param_1[0x24];
    *(undefined4 *)((int)puVar3 + -4) = 1;
    pcVar2 = (code *)*puVar1;
    puVar4 = (undefined4 *)((int)puVar3 + -8);
    puVar3 = (undefined4 *)((int)puVar3 + -8);
    *puVar4 = 0x4d355b;
    (*pcVar2)();
  }
  *(undefined4 *)((int)puVar3 + -4) = 0x4d3562;
  FUN_004d2e76();
  *(undefined4 *)((int)puVar3 + -4) = 0x4d3567;
  return;
}

