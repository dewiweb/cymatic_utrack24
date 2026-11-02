// rea decompile_all
// name: FUN_004e70a6
// address: 0x4e70a6
// body: available
// range: 0x4e70a6-0x4e715b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004e70a6(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar3 = (undefined4 *)auStack_20;
  *param_1 = juce::ListBox::vftable;
  param_1[0x1c] = juce::ListBox::vftable;
  local_8 = 5;
  puVar1 = (undefined4 *)param_1[0x20];
  if ((puVar1 != (undefined4 *)0x0) && (param_1[0x20] = 0, puVar1 != (undefined4 *)0x0)) {
    uStack_24 = 1;
    puVar3 = &uStack_28;
    uStack_28 = 0x4e70e6;
    (**(code **)*puVar1)();
  }
  puVar1 = (undefined4 *)param_1[0x1f];
  if ((puVar1 != (undefined4 *)0x0) && (param_1[0x1f] = 0, puVar1 != (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)*puVar1;
    *(undefined4 *)((int)puVar3 + -4) = 1;
    pcVar2 = (code *)*puVar1;
    puVar4 = (undefined4 *)((int)puVar3 + -8);
    puVar3 = (undefined4 *)((int)puVar3 + -8);
    *puVar4 = 0x4e70fb;
    (*pcVar2)();
  }
  local_8._0_1_ = 4;
  *(undefined4 *)((int)puVar3 + -4) = param_1[0x28];
  *(undefined4 *)((int)puVar3 + -8) = 0x4e710a;
  _free(*(void **)((int)puVar3 + -4));
  local_8._0_1_ = 3;
  if ((undefined4 *)param_1[0x21] != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)param_1[0x21];
    *(undefined4 *)((int)puVar3 + -4) = 1;
    pcVar2 = (code *)*puVar1;
    puVar5 = (undefined4 *)((int)puVar3 + -8);
    puVar3 = (undefined4 *)((int)puVar3 + -8);
    *puVar5 = 0x4e711f;
    (*pcVar2)();
  }
  local_8._0_1_ = 2;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)param_1[0x20];
    *(undefined4 *)((int)puVar3 + -4) = 1;
    pcVar2 = (code *)*puVar1;
    puVar6 = (undefined4 *)((int)puVar3 + -8);
    puVar3 = (undefined4 *)((int)puVar3 + -8);
    *puVar6 = 0x4e7133;
    (*pcVar2)();
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)param_1[0x1f];
    *(undefined4 *)((int)puVar3 + -4) = 1;
    pcVar2 = (code *)*puVar1;
    puVar7 = (undefined4 *)((int)puVar3 + -8);
    puVar3 = (undefined4 *)((int)puVar3 + -8);
    *puVar7 = 0x4e7144;
    (*pcVar2)();
  }
  *(undefined4 *)((int)puVar3 + -4) = 0x4e7149;
  FUN_004bf31a();
  local_8 = 0xffffffff;
  *(undefined4 *)((int)puVar3 + -4) = 0x4e7154;
  FUN_004bfe57();
  *(undefined4 *)((int)puVar3 + -4) = 0x4e7159;
  return;
}

