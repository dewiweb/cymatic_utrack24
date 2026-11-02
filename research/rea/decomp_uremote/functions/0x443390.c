// rea decompile_all
// name: FUN_00443390
// address: 0x443390
// body: available
// range: 0x443390-0x44345e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00443390(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 in_ECX;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *apuStack_2c [6];
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x44339c;
  apuStack_2c[0] = param_1;
  uStack_30 = 0x4433a7;
  FUN_0043f5eb();
  puVar1 = param_1 + 0x5e;
  *puVar1 = AvailableDeviceList::Listener::vftable;
  local_8 = 1;
  *param_1 = DeviceSelectionButton::vftable;
  param_1[0x1c] = DeviceSelectionButton::vftable;
  *puVar1 = DeviceSelectionButton::vftable;
  param_1[0x5f] = in_ECX;
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    apuStack_2c[0] = (undefined4 *)0x4433ef;
    FUN_00472fde();
  }
  local_14 = (undefined1 *)apuStack_2c;
  uStack_30 = 0x443401;
  FUN_004d076d();
  local_14 = (undefined1 *)&uStack_30;
  uStack_34 = 0x44340e;
  FUN_004d076d();
  local_14 = (undefined1 *)&uStack_34;
  uStack_38 = 0x443420;
  FUN_004d076d();
  local_14 = (undefined1 *)&uStack_38;
  uStack_3c = 0x44342d;
  FUN_004d076d();
  local_14 = (undefined1 *)&uStack_3c;
  uStack_40 = 0x44343a;
  FUN_004d076d();
  local_14 = (undefined1 *)&uStack_40;
  FUN_004d076d();
  FUN_0043f8fb();
  apuStack_2c[0] = (undefined4 *)0x443455;
  FUN_004434e5();
  return param_1;
}

