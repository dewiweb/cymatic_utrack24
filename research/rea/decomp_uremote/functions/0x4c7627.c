// rea decompile_all
// name: FUN_004c7627
// address: 0x4c7627
// body: available
// range: 0x4c7627-0x4c77a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 * FUN_004c7627(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x4c7633;
  uStack_24 = param_2;
  uStack_28 = 0x4c7640;
  FUN_004bfde7();
  puVar4 = (undefined4 *)auStack_20;
  local_8 = 0;
  param_1[0x1c] = juce::SettableTooltipClient::vftable;
  uStack_24 = 0x4c7654;
  FUN_004652cd();
  *param_1 = juce::Button::vftable;
  param_1[0x1c] = juce::Button::vftable;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  uStack_24 = param_2;
  uStack_28 = 0x4c7680;
  FUN_004652e4();
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  local_8._0_1_ = 6;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  uStack_24 = 0x4c76e1;
  FUN_004717a6();
  local_8 = CONCAT31(local_8._1_3_,7);
  uStack_24 = 0x24;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)((int)param_1 + 0xd5) = 0;
  *(undefined1 *)((int)param_1 + 0xd6) = 0;
  *(undefined1 *)((int)param_1 + 0xd7) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined1 *)((int)param_1 + 0xd9) = 0;
  *(undefined1 *)((int)param_1 + 0xda) = 0;
  uStack_28 = 0x4c771d;
  iVar2 = FUN_005af82d();
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uStack_24 = 0x4c7727;
    puVar3 = (undefined4 *)FUN_00474777();
    puVar3[5] = juce::ApplicationCommandManagerListener::vftable;
    puVar3[6] = juce::Value::Listener::vftable;
    puVar3[7] = juce::KeyListener::vftable;
    *puVar3 = juce::Button::CallbackHelper::vftable;
    puVar3[5] = juce::Button::CallbackHelper::vftable;
    puVar3[6] = juce::Button::CallbackHelper::vftable;
    puVar3[7] = juce::Button::CallbackHelper::vftable;
    puVar3[8] = param_1;
  }
  puVar1 = (undefined4 *)param_1[0x26];
  if ((puVar1 != puVar3) && (param_1[0x26] = puVar3, puVar1 != (undefined4 *)0x0)) {
    uStack_24 = 1;
    puVar4 = &uStack_28;
    uStack_28 = 0x4c7778;
    (**(code **)*puVar1)();
  }
  *(undefined4 *)((int)puVar4 + -4) = 0x4c7781;
  FUN_004c2ddc();
  *(undefined4 *)((int)puVar4 + -4) = 0x4c7799;
  FUN_00471985();
  *(undefined4 *)((int)puVar4 + -4) = 0x4c77a0;
  return param_1;
}

