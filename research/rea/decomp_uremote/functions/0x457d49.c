// rea decompile_all
// name: FUN_00457d49
// address: 0x457d49
// body: available
// range: 0x457d49-0x457e84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00457d49(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_004bfd7b();
  param_1[0x1c] = uTrack::StatusListener::vftable;
  uVar2 = FUN_00474777();
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)uVar2 = ProgressBarPanel::vftable;
  param_1[0x22] = param_2;
  *param_1 = ProgressBarPanel::vftable;
  param_1[0x1c] = ProgressBarPanel::vftable;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2c] = uVar1;
  param_1[0x2d] = uVar1;
  param_1[0x2e] = uVar1;
  FUN_004652cd();
  param_1[0x30] = 0xffffffff;
  param_1[0x31] = 0xffffffff;
  FUN_004652cd();
  FUN_004652cd();
  FUN_0049f4b3();
  FUN_004652cd();
  FUN_004652cd();
  FUN_0049f4b3();
  FUN_004652cd();
  FUN_004652cd();
  FUN_00457077(param_1 + 0x3e);
  param_1[0xfe] = 0;
  *(undefined1 *)(param_1 + 0xff) = 1;
  FUN_00456a36(param_1 + 0x100,param_3,*(undefined4 *)(param_2 + 0x7c));
  FUN_0043e015();
  return param_1;
}

