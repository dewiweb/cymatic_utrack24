// rea decompile_all
// name: FUN_004e4922
// address: 0x4e4922
// body: available
// range: 0x4e4922-0x4e4a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004e4922(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar1 = param_1 + 0x1f;
  *param_1 = juce::ComboBox::vftable;
  param_1[0x1c] = juce::ComboBox::vftable;
  param_1[0x1e] = juce::ComboBox::vftable;
  *puVar1 = juce::ComboBox::vftable;
  param_1[0x20] = juce::ComboBox::vftable;
  local_8 = 10;
  uStack_28 = 0x4e496b;
  puStack_24 = puVar1;
  FUN_004719b3();
  puVar4 = (undefined4 *)auStack_20;
  puStack_24 = (undefined4 *)0x4e4972;
  FUN_004e53e2();
  puVar2 = (undefined4 *)param_1[0x2f];
  if ((puVar2 != (undefined4 *)0x0) && (param_1[0x2f] = 0, puVar2 != (undefined4 *)0x0)) {
    puStack_24 = (undefined4 *)0x1;
    puVar4 = &uStack_28;
    uStack_28 = 0x4e498d;
    (**(code **)*puVar2)();
  }
  *(undefined4 *)((int)puVar4 + -4) = 0x4e4998;
  FUN_004652d6();
  *(undefined4 *)((int)puVar4 + -4) = 0x4e49a3;
  FUN_004652d6();
  local_8._0_1_ = 7;
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)param_1[0x2f];
    *(undefined4 *)((int)puVar4 + -4) = 1;
    pcVar3 = (code *)*puVar2;
    puVar5 = (undefined4 *)((int)puVar4 + -8);
    puVar4 = (undefined4 *)((int)puVar4 + -8);
    *puVar5 = 0x4e49b7;
    (*pcVar3)();
  }
  local_8._0_1_ = 6;
  *(undefined4 *)((int)puVar4 + -4) = param_1[0x2c];
  *(undefined4 *)((int)puVar4 + -8) = 0x4e49c6;
  _free(*(void **)((int)puVar4 + -4));
  puVar6 = (undefined1 *)((int)puVar4 + -4);
  *(undefined4 *)((int)puVar4 + -4) = 0x4e49d2;
  FUN_00471876();
  local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined4 *)(puVar6 + -4) = 0x4e49e1;
  FUN_004f7968();
  *(undefined4 *)(puVar6 + -4) = param_1[0x22];
  *(undefined4 *)(puVar6 + -8) = 0x4e49e8;
  _free(*(void **)(puVar6 + -4));
  *(undefined4 *)(puVar6 + -4) = 0x4e49f4;
  FUN_00474312();
  *puVar1 = juce::Value::Listener::vftable;
  param_1[0x1e] = juce::Label::Listener::vftable;
  *(undefined4 *)(puVar6 + -4) = 0x4e4a09;
  FUN_004bf31a();
  local_8 = 0xffffffff;
  *(undefined4 *)(puVar6 + -4) = 0x4e4a14;
  FUN_004bfe57();
  *(undefined4 *)(puVar6 + -4) = 0x4e4a19;
  return;
}

