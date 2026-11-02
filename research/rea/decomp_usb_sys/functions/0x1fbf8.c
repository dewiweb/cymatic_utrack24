// rea decompile_all
// name: FUN_0001fbf8
// address: 0x1fbf8
// body: available
// range: 0x1fbf8-0x1fc6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_0001fbf8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_0001fb64(param_1);
  puVar1 = param_1 + 0x1e;
  *param_1 = &PTR_FUN_00028098;
  param_1[0x1f] = puVar1;
  *puVar1 = puVar1;
  puVar1 = param_1 + 0x31;
  param_1[0x32] = puVar1;
  *puVar1 = puVar1;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  puVar1 = param_1 + 0x38;
  param_1[0x39] = puVar1;
  *puVar1 = puVar1;
  param_1[0x3a] = 0;
  *(undefined1 *)((longlong)param_1 + 0xb2) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  return param_1;
}

