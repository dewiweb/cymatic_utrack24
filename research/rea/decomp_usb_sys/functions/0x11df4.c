// rea decompile_all
// name: FUN_00011df4
// address: 0x11df4
// body: available
// range: 0x11df4-0x11e78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x11e74 to 0x11d24 FUN_00011d24 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00011df4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00027c60;
  FUN_00012108((longlong)param_1);
  FUN_00011d54((longlong)param_1);
  if (param_1[4] != 0) {
    ExFreePoolWithTag(param_1[4],0);
    param_1[4] = 0;
  }
  if (param_1[4] != 0) {
    ExFreePoolWithTag(param_1[4],0);
    param_1[4] = 0;
  }
  if (param_1[6] != 0) {
    ExFreePoolWithTag(param_1[6],0);
    param_1[6] = 0;
  }
  if (param_1[8] != 0) {
    ExFreePoolWithTag(param_1[8],0);
    param_1[8] = 0;
  }
  FUN_00011d24(param_1);
  return;
}

