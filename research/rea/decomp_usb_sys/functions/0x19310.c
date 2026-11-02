// rea decompile_all
// name: FUN_00019310
// address: 0x19310
// body: available
// range: 0x19310-0x193d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x193cd to 0x121b4 FUN_000121b4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00019310(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00027e70;
  if (param_1[0x36e] != 0) {
    ExFreePoolWithTag(param_1[0x36e],0);
    param_1[0x36e] = 0;
    *(undefined4 *)(param_1 + 0x372) = 0;
    param_1[0x36f] = 0;
  }
  FUN_0001c574((longlong)param_1);
  FUN_00025ce8(param_1 + 0x2e2);
  param_1[0x28e] = &PTR_FUN_00028160;
  FUN_00024bd0(param_1 + 0x28e);
  FUN_0001d248((longlong)(param_1 + 0x281));
  param_1[0x238] = &PTR_LAB_00028078;
  FUN_0001f9d8((uint *)(param_1 + 0x243));
  FUN_00020314(param_1 + 0x61);
  param_1[0x1f] = &PTR_LAB_00028078;
  FUN_0001f9d8((uint *)(param_1 + 0x2a));
  FUN_000121b4(param_1);
  return;
}

