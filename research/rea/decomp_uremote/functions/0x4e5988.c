// rea decompile_all
// name: FUN_004e5988
// address: 0x4e5988
// body: available
// range: 0x4e5988-0x4e5a94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004e5988(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar1 = param_1 + 0x20;
  *param_1 = juce::Label::vftable;
  param_1[0x1c] = juce::Label::vftable;
  param_1[0x1e] = juce::Label::vftable;
  param_1[0x1f] = juce::Label::vftable;
  *puVar1 = juce::Label::vftable;
  local_8 = 10;
  uStack_28 = 0x4e59d3;
  puStack_24 = puVar1;
  FUN_004719b3();
  puStack_24 = (undefined4 *)0x0;
  uStack_28 = 0x4e59e0;
  cVar4 = FUN_004f5fe9();
  puVar5 = (undefined4 *)auStack_20;
  if (cVar4 != '\0') {
    puVar5 = &uStack_28;
    uStack_28 = 0x4e59fb;
    puStack_24 = param_1 + 0x1f;
    FUN_004c2119();
  }
  puVar2 = (undefined4 *)param_1[0x28];
  if ((puVar2 != (undefined4 *)0x0) && (param_1[0x28] = 0, puVar2 != (undefined4 *)0x0)) {
    puVar2 = (undefined4 *)*puVar2;
    *(undefined4 *)((int)puVar5 + -4) = 1;
    pcVar3 = (code *)*puVar2;
    puVar6 = (undefined4 *)((int)puVar5 + -8);
    puVar5 = (undefined4 *)((int)puVar5 + -8);
    *puVar6 = 0x4e5a16;
    (*pcVar3)();
  }
  *(undefined4 *)((int)puVar5 + -4) = 0x4e5a21;
  FUN_00474d0f();
  local_8._0_1_ = 8;
  *(undefined4 *)((int)puVar5 + -4) = param_1[0x29];
  *(undefined4 *)((int)puVar5 + -8) = 0x4e5a30;
  _free(*(void **)((int)puVar5 + -4));
  local_8 = CONCAT31(local_8._1_3_,7);
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)param_1[0x28];
    *(undefined4 *)((int)puVar5 + -4) = 1;
    pcVar3 = (code *)*puVar2;
    puVar7 = (undefined4 *)((int)puVar5 + -8);
    puVar5 = (undefined4 *)((int)puVar5 + -8);
    *puVar7 = 0x4e5a45;
    (*pcVar3)();
  }
  puVar8 = (undefined1 *)((int)puVar5 + -4);
  *(undefined4 *)((int)puVar5 + -4) = 0x4e5a50;
  FUN_004c4d7a();
  *(undefined4 *)(puVar8 + -4) = 0x4e5a5b;
  FUN_004652d6();
  puVar9 = puVar8 + -4;
  *(undefined4 *)(puVar8 + -4) = 0x4e5a66;
  FUN_00471876();
  *puVar1 = juce::Value::Listener::vftable;
  param_1[0x1f] = juce::ComponentListener::vftable;
  param_1[0x1e] = juce::TextEditor::Listener::vftable;
  *(undefined4 *)(puVar9 + -4) = 0x4e5a82;
  FUN_004bf31a();
  local_8 = 0xffffffff;
  *(undefined4 *)(puVar9 + -4) = 0x4e5a8d;
  FUN_004bfe57();
  *(undefined4 *)(puVar9 + -4) = 0x4e5a92;
  return;
}

