// rea decompile_all
// name: FUN_0001bb40
// address: 0x1bb40
// body: available
// range: 0x1bb40-0x1bb9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1bb84 to 0x14fa0 FUN_00014fa0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0001bb40(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = KsGetFilterFromIrp();
  if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x10) != (longlong *)0x0)) {
    uVar2 = FUN_00014fa0(*(longlong **)(lVar1 + 0x10),param_1,param_2,param_3);
    return uVar2;
  }
  return 0xc00000bb;
}

