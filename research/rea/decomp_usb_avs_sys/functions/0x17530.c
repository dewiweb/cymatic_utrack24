// rea decompile_all
// name: FUN_00017530
// address: 0x17530
// body: available
// range: 0x17530-0x175ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00017530(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int local_res8 [2];
  int local_res20 [2];
  
  if (*(int *)(param_1 + 0x40) == 3) {
    lVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x40))();
    *(longlong *)(param_1 + 0x48) = lVar1 + *(longlong *)(param_1 + 0x1c0);
  }
  *param_4 = *(undefined8 *)(param_1 + 0x88);
  KsPinAcquireProcessingMutex(*(undefined8 *)(param_1 + 0x38));
  local_res20[0] = 0;
  local_res8[0] = 0;
  KsPinGetAvailableByteCount(*(undefined8 *)(param_1 + 0x38),local_res8,local_res20);
  KsPinReleaseProcessingMutex(*(undefined8 *)(param_1 + 0x38));
  if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x74) != 1) {
    local_res8[0] = local_res20[0];
  }
  param_4[1] = (longlong)local_res8[0] + *(longlong *)(param_1 + 0x88);
  return 0;
}

