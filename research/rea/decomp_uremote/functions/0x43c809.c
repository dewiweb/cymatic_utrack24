// rea decompile_all
// name: FUN_0043c809
// address: 0x43c809
// body: available
// range: 0x43c809-0x43c8de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0043c809(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 auStack_24 [7];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  *param_1 = ConfirmDialog::vftable;
  param_1[0x1c] = ConfirmDialog::vftable;
  param_1[0x1d] = ConfirmDialog::vftable;
  param_1[0x22] = ConfirmDialog::vftable;
  local_8 = 7;
  puVar1 = auStack_24;
  auStack_24[0] = 0x43c84a;
  FUN_004c4d7a();
  puVar2 = puVar1 + -1;
  puVar1[-1] = 0x43c855;
  FUN_004c4d7a();
  *(undefined4 *)((int)puVar2 + -4) = 0x43c860;
  FUN_0043d2ad();
  *(undefined4 *)((int)puVar2 + -4) = param_1[0x1cd];
  *(undefined4 *)((int)puVar2 + -8) = 0x43c867;
  _free(*(void **)((int)puVar2 + -4));
  *(undefined4 **)((int)puVar2 + -4) = param_1 + 0x19c;
  *(undefined4 *)((int)puVar2 + -8) = 0x43c874;
  FUN_004e70a6();
  *(undefined4 **)((int)puVar2 + -4) = param_1 + 0x13e;
  local_8._0_1_ = 6;
  *(undefined4 *)((int)puVar2 + -8) = 0x43c884;
  FUN_0043f7ba();
  *(undefined4 **)((int)puVar2 + -4) = param_1 + 0xe0;
  local_8._0_1_ = 5;
  *(undefined4 *)((int)puVar2 + -8) = 0x43c894;
  FUN_0043f7ba();
  *(undefined4 **)((int)puVar2 + -4) = param_1 + 0x82;
  local_8._0_1_ = 4;
  *(undefined4 *)((int)puVar2 + -8) = 0x43c8a4;
  FUN_0043f7ba();
  *(undefined4 **)((int)puVar2 + -4) = param_1 + 0x24;
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined4 *)((int)puVar2 + -8) = 0x43c8b4;
  FUN_0043f7ba();
  param_1[0x22] = juce::ListBoxModel::vftable;
  *(undefined4 *)((int)puVar2 + -4) = 0x43c8c5;
  FUN_0047478c();
  local_8 = 0xffffffff;
  param_1[0x1c] = PushButton::Listener::vftable;
  *(undefined4 *)((int)puVar2 + -4) = 0x43c8d7;
  FUN_004bfe57();
  *(undefined4 *)((int)puVar2 + -4) = 0x43c8dc;
  return;
}

