// rea decompile_all
// name: FUN_00011150
// address: 0x11150
// body: available
// range: 0x11150-0x112b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_00011150(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_0001eca0;
  param_1[1] = &PTR_LAB_0001eca8;
  puVar1 = param_1 + 0x800;
  param_1[0x801] = puVar1;
  *puVar1 = puVar1;
  param_1[0x802] = 8;
  KeInitializeTimer(param_1 + 0x803);
  param_1[0x80b] = 0;
  param_1[0x80c] = 0;
  param_1[0x80d] = 0;
  param_1[0x80e] = 0;
  param_1[0x80f] = 0;
  param_1[0x810] = 0;
  param_1[0x811] = 0;
  param_1[0x812] = 0;
  param_1[0x813] = 0;
  KeInitializeEvent(param_1 + 0x81d,0,1);
  KeInitializeDpc(param_1 + 0x80b,FUN_00014da0,param_1 + 0x803);
  param_1[0x814] = 0;
  param_1[0x815] = 0;
  *(undefined4 *)(param_1 + 0x816) = 1;
  param_1[0x817] = 0;
  param_1[0x818] = 0;
  param_1[0x819] = 0;
  param_1[0x81a] = 0;
  param_1[0x81b] = 0;
  param_1[0x81c] = 0;
  param_1[3] = 0;
  FUN_0001cf40(param_1 + 4,0,0x1a4);
  param_1[0x7fa] = 0;
  param_1[0x7fb] = 0;
  param_1[0x7fc] = 0;
  param_1[0x7fd] = 0;
  param_1[0x7fe] = 0;
  param_1[0x7ff] = 0;
  *(undefined4 *)(param_1 + 0x7f9) = 0;
  return param_1;
}

