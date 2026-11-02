// rea decompile_all
// name: CallGetDriverInfo
// address: 0x10006f40
// body: available
// range: 0x10006f40-0x10006f7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl CallGetDriverInfo(CDriverInterfaceClass *param_1,void *param_2)

{
  _BCO_USB_DRIVER_INFO local_14 [12];
  uint local_8;
  
                    /* 0x6f40  56  CallGetDriverInfo */
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (param_1 != (CDriverInterfaceClass *)0x0) {
    CDriverInterfaceClass::GetDriverInfo(param_1,local_14);
    FUN_10007aa0(param_2,(byte *)local_14);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

