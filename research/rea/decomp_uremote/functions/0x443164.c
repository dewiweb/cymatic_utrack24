// rea decompile_all
// name: FUN_00443164
// address: 0x443164
// body: available
// range: 0x443164-0x44325d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 *
FUN_00443164(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_0043f5eb();
  param_1[0x5e] = param_3;
  param_1[0x5f] = param_4;
  *param_1 = DeviceSelectionPanel::Item::vftable;
  param_1[0x1c] = DeviceSelectionPanel::Item::vftable;
  FUN_00440222();
  FUN_0044bfc5();
  FUN_004d076d();
  FUN_0044bfc5();
  FUN_004d076d();
  FUN_004d076d();
  FUN_00476599();
  FUN_004d076d();
  FUN_004d076d();
  FUN_0043f8fb();
  FUN_0043f850();
  iVar1 = param_1[0x5f];
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1))();
  }
  return param_1;
}

