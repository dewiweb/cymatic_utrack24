// rea decompile_all
// name: FUN_004e083b
// address: 0x4e083b
// body: available
// range: 0x4e083b-0x4e090a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004e083b(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined1 auStack_20 [24];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  *param_1 = juce::PopupMenu::HelperClasses::MenuWindow::vftable;
  puStack_24 = param_1;
  local_8 = 6;
  uStack_28 = 0x4e085d;
  FUN_004e0e6d();
  uStack_28 = 0x4e0862;
  FUN_004f6eee();
  puStack_24 = param_1;
  uStack_28 = 0x4e0868;
  FUN_004c4e62();
  uStack_28 = 0x4e086d;
  FUN_004c51dd();
  puVar4 = (undefined4 *)auStack_20;
  puVar1 = (undefined4 *)param_1[0x35];
  if (puVar1 != (undefined4 *)0x0) {
    param_1[0x35] = 0;
    puStack_24 = (undefined4 *)0x1;
    puVar4 = &uStack_28;
    uStack_28 = 0x4e0885;
    (**(code **)*puVar1)();
  }
  puVar1 = param_1 + 0x26;
  *(undefined4 *)((int)puVar4 + -4) = 0x4e0890;
  thunk_FUN_004600f2();
  if (param_1[0x27] != 0) {
    *(undefined4 *)((int)puVar4 + -4) = *puVar1;
    *(undefined4 *)((int)puVar4 + -8) = 0x4e089c;
    _free(*(void **)((int)puVar4 + -4));
    *puVar1 = 0;
    param_1[0x27] = 0;
  }
  *(undefined4 **)((int)puVar4 + -4) = param_1 + 0x3c;
  param_1[0x28] = 0;
  local_8._0_1_ = 5;
  *(undefined4 *)((int)puVar4 + -8) = 0x4e08b5;
  FUN_004f69da();
  local_8._0_1_ = 4;
  *(undefined4 *)((int)puVar4 + -4) = param_1[0x36];
  *(undefined4 *)((int)puVar4 + -8) = 0x4e08c4;
  _free(*(void **)((int)puVar4 + -4));
  local_8._0_1_ = 3;
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)param_1[0x35];
    *(undefined4 *)((int)puVar4 + -4) = 1;
    pcVar3 = (code *)*puVar2;
    puVar5 = (undefined4 *)((int)puVar4 + -8);
    puVar4 = (undefined4 *)((int)puVar4 + -8);
    *puVar5 = 0x4e08d9;
    (*pcVar3)();
  }
  *(undefined4 *)((int)puVar4 + -4) = 0x4e08e4;
  FUN_00474d0f();
  *(undefined4 *)((int)puVar4 + -4) = 0x4e08ef;
  FUN_00474d0f();
  *(undefined4 **)((int)puVar4 + -4) = puVar1;
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined4 *)((int)puVar4 + -8) = 0x4e08f8;
  FUN_004432c6();
  local_8 = 0xffffffff;
  *(undefined4 *)((int)puVar4 + -4) = 0x4e0903;
  FUN_004bfe57();
  *(undefined4 *)((int)puVar4 + -4) = 0x4e0908;
  return;
}

