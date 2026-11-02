// rea decompile_all
// name: FUN_004d0073
// address: 0x4d0073
// body: available
// range: 0x4d0073-0x4d00ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004d0073(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  *param_1 = juce::ComponentBuilder::vftable;
  puStack_24 = param_1;
  local_8 = 3;
  uStack_28 = 0x4d009a;
  FUN_0047258f();
  puVar1 = (undefined4 *)auStack_20;
  local_8._0_1_ = 2;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    puStack_24 = (undefined4 *)0x1;
    puVar1 = &uStack_28;
    uStack_28 = 0x4d00ab;
    (*(code *)**(undefined4 **)param_1[8])();
  }
  *(undefined4 **)((int)puVar1 + -4) = param_1 + 5;
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)((int)puVar1 + -8) = 0x4d00b8;
  FUN_004f69da();
  puVar2 = (undefined1 *)((int)puVar1 + -4);
  *(undefined4 *)((int)puVar1 + -4) = 0x4d00bd;
  FUN_004722b6();
  *param_1 = juce::ValueTree::Listener::vftable;
  *(undefined4 *)(puVar2 + -4) = 0x4d00c8;
  return;
}

