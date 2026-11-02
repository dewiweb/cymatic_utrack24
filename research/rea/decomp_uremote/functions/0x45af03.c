// rea decompile_all
// name: FUN_0045af03
// address: 0x45af03
// body: available
// range: 0x45af03-0x45af8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0045af03(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = CPNS::ICHAI_NotificationHandler::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = CPNS::ICHAI_RemoteDevice_Find_AsyncReturnHandler::vftable;
  FUN_00474272(param_1 + 8);
  param_1[8] = AvailableDeviceList::vftable;
  *param_1 = AvailableDeviceList::vftable;
  param_1[4] = AvailableDeviceList::vftable;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_0046d4b7(param_1 + 0xe);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  return param_1;
}

