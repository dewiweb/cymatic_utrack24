// rea decompile_all
// name: FUN_004e027d
// address: 0x4e027d
// body: available
// range: 0x4e027d-0x4e034b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 *
FUN_004e027d(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4e0289;
  FUN_004bfd7b();
  local_8 = 0;
  *param_1 = juce::PopupMenu::HelperClasses::ItemComponent::vftable;
  FUN_004e01f4(param_1 + 0x1c);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_004c1064(0xffffffff);
  FUN_004c1064(0xffffffff);
  local_18 = 0x50;
  local_14[0] = 0x10;
  if ((int *)param_1[0x21] == (int *)0x0) {
    iVar1 = thunk_FUN_004c1d58();
    (**(code **)(*(int *)(iVar1 + 0x20) + 0x18))
              (param_1 + 0x1d,*(undefined1 *)((int)param_1 + 0x7d),param_3,&local_18,local_14);
  }
  else {
    (**(code **)(*(int *)param_1[0x21] + 0xb0))(&local_18,local_14);
  }
  uVar2 = FUN_00470645(2,600);
  FUN_004c0be5(uVar2);
  FUN_004c2212(param_4,0);
  return param_1;
}

