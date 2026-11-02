// rea decompile_all
// name: FUN_004c5be6
// address: 0x4c5be6
// body: available
// range: 0x4c5be6-0x4c5d01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004c5be6(undefined4 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 *local_18;
  undefined4 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4c5bf2;
  local_30 = (undefined4 *)0x4c5bfc;
  FUN_004bfd7b();
  local_14 = param_1 + 0x1c;
  local_8 = 0;
  local_30 = (undefined4 *)0x4c5c0c;
  uVar2 = FUN_00474777();
  local_34 = (undefined4 *)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)uVar2 = juce::DragAndDropContainer::DragImageComponent::vftable;
  local_18 = (undefined1 *)&local_34;
  *param_1 = juce::DragAndDropContainer::DragImageComponent::vftable;
  local_30 = local_34;
  FUN_004c69f8();
  local_30 = (undefined4 *)0x4c5c46;
  FUN_0049f50b();
  local_8._0_1_ = 3;
  param_1[0x2b] = in_stack_00000018;
  local_30 = (undefined4 *)0x4c5c61;
  FUN_004f5fb6();
  param_1[0x2d] = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  param_1[0x2e] = in_stack_0000001c;
  param_1[0x2f] = in_stack_00000020;
  *(undefined1 *)(param_1 + 0x30) = 0;
  local_30 = (undefined4 *)0x4c5c92;
  FUN_004fa582();
  local_30 = (undefined4 *)0x4c5c9a;
  local_30 = (undefined4 *)FUN_0047e371();
  local_34 = (undefined4 *)0x4c5ca3;
  FUN_0047e366();
  local_34 = (undefined4 *)0x4c5caa;
  FUN_004c0be5();
  local_30 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x4c5cb3;
  cVar1 = FUN_004f5fce();
  if (cVar1 != '\0') {
    local_30 = (undefined4 *)0x4c5cbf;
    FUN_004f77e9();
    local_30 = (undefined4 *)0x4c5cc4;
    FUN_004a4d78();
  }
  local_30 = (undefined4 *)0x0;
  local_34 = param_1;
  FUN_004c2212();
  local_30 = (undefined4 *)0x4c5ce6;
  FUN_0047479c();
  local_30 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x4c5cf1;
  FUN_004c0e0e();
  local_30 = (undefined4 *)0x1;
  local_34 = (undefined4 *)0x4c5cf8;
  FUN_004c06f2();
  return param_1;
}

