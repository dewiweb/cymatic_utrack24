// rea decompile_all
// name: FUN_0044327b
// address: 0x44327b
// body: available
// range: 0x44327b-0x4432c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0044327b(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar2 = (undefined4 *)auStack_20;
  *param_1 = DeviceSelectionPanel::Item::vftable;
  param_1[0x1c] = DeviceSelectionPanel::Item::vftable;
  local_8 = 0;
  iVar1 = param_1[0x5f];
  if (iVar1 != 0) {
    puVar2 = &uStack_24;
    uStack_24 = 0x4432b4;
    (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1) + 4))();
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)puVar2 + -4) = param_1;
  *(undefined4 *)((int)puVar2 + -8) = 0x4432be;
  FUN_0043f7ba();
  *(undefined4 *)((int)puVar2 + -4) = 0x4432c3;
  return;
}

