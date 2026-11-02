// rea decompile_all
// name: FUN_004e9394
// address: 0x4e9394
// body: available
// range: 0x4e9394-0x4e95d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 * FUN_004e9394(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x4e93a0;
  puStack_24 = (undefined4 *)param_2;
  uStack_28 = 0x4e93ad;
  FUN_004bfde7();
  puVar5 = (undefined4 *)auStack_20;
  local_8 = 0;
  param_1[0x1c] = juce::TextInputTarget::vftable;
  param_1[0x1d] = juce::SettableTooltipClient::vftable;
  puStack_24 = (undefined4 *)0x4e93c8;
  FUN_004652cd();
  *param_1 = juce::TextEditor::vftable;
  param_1[0x1c] = juce::TextEditor::vftable;
  param_1[0x1d] = juce::TextEditor::vftable;
  param_1[0x1f] = 0;
  param_1[0x21] = 1;
  param_1[0x22] = 1;
  param_1[0x23] = 1;
  param_1[0x24] = 3;
  *(byte *)((int)param_1 + 0x95) = *(byte *)((int)param_1 + 0x95) & 0xf1 | 0x11;
  *(undefined1 *)(param_1 + 0x25) = 0x50;
  puStack_24 = (undefined4 *)0x4e9419;
  FUN_00472737();
  param_1[0x36] = 0;
  local_8._0_1_ = 5;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  puStack_24 = (undefined4 *)0x41600000;
  param_1[0x39] = 4;
  param_1[0x3a] = 4;
  uStack_28 = 0x4e945a;
  FUN_0049f51e();
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  puStack_24 = (undefined4 *)0x4e947f;
  FUN_004652cd();
  puStack_24 = (undefined4 *)0x4e948a;
  FUN_00476041();
  param_1[0x44] = param_3;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  local_8._0_1_ = 9;
  puStack_24 = (undefined4 *)0x4e94ad;
  FUN_004717a6();
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  local_8._0_1_ = 0xc;
  puStack_24 = (undefined4 *)0x4e94e5;
  FUN_004c0483();
  puStack_24 = (undefined4 *)0x4;
  uStack_28 = 0x4e94ef;
  FUN_004c6ae6();
  local_8._0_1_ = 0xd;
  puStack_24 = (undefined4 *)0x4e94fa;
  FUN_004c1531();
  local_8._0_1_ = 0xc;
  puStack_24 = (undefined4 *)0x4e9505;
  FUN_004c6b17();
  puStack_24 = (undefined4 *)0x320;
  uStack_28 = 0x4e950f;
  puVar2 = (undefined4 *)FUN_005af82d();
  local_8._0_1_ = 0xe;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uStack_28 = 0x4e9523;
    puStack_24 = puVar2;
    FUN_004d1fa5();
    puVar2[0xc5] = 0;
    *puVar2 = juce::TextEditorViewport::vftable;
    puVar2[0x1c] = juce::TextEditorViewport::vftable;
    puVar2[0x1d] = juce::TextEditorViewport::vftable;
    puVar2[0xc4] = param_1;
    *(undefined1 *)(puVar2 + 0xc6) = 0;
  }
  local_8._0_1_ = 0xc;
  puVar1 = (undefined4 *)param_1[0x1f];
  if ((puVar1 != puVar2) && (param_1[0x1f] = puVar2, puVar1 != (undefined4 *)0x0)) {
    puStack_24 = (undefined4 *)0x1;
    puVar5 = &uStack_28;
    uStack_28 = 0x4e9567;
    (**(code **)*puVar1)();
  }
  *(undefined4 *)((int)puVar5 + -4) = 0xffffffff;
  *(undefined4 *)((int)puVar5 + -8) = 0x4e9571;
  FUN_004c1064();
  *(undefined4 *)((int)puVar5 + -4) = 0x8c;
  *(undefined4 *)((int)puVar5 + -8) = 0x4e957b;
  iVar3 = FUN_005af82d();
  local_8._0_1_ = 0xf;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    *(undefined4 **)((int)puVar5 + -4) = param_1;
    *(int *)((int)puVar5 + -8) = iVar3;
    *(undefined4 *)((int)puVar5 + -0xc) = 0x4e958e;
    uVar4 = FUN_004e91c9();
  }
  local_8 = CONCAT31(local_8._1_3_,0xc);
  param_1[0x20] = uVar4;
  *(undefined4 *)((int)puVar5 + -4) = uVar4;
  *(undefined4 *)((int)puVar5 + -8) = 0x4e95a5;
  FUN_004d21c4();
  *(undefined4 *)((int)puVar5 + -4) = 0x4e95af;
  FUN_004c2ddc();
  *(undefined4 *)((int)puVar5 + -4) = 0x4e95bb;
  FUN_004d2941();
  *(undefined4 *)((int)puVar5 + -4) = 0x4e95c4;
  FUN_004c2ddc();
  *(undefined4 *)((int)puVar5 + -4) = 1;
  *(undefined4 *)((int)puVar5 + -8) = 0x4e95cd;
  FUN_004e9938();
  *(undefined4 *)((int)puVar5 + -4) = 0x4e95d4;
  return param_1;
}

