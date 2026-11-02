// rea decompile_all
// name: FUN_00019bd0
// address: 0x19bd0
// body: available
// range: 0x19bd0-0x19e2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_00019bd0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  
  puVar1 = param_1 + 1;
  param_1[2] = puVar1;
  *puVar1 = puVar1;
  param_1[3] = param_2;
  puVar1 = param_1 + 0x12;
  param_1[0x13] = puVar1;
  *puVar1 = puVar1;
  param_1[0x14] = 8;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x15] = 0;
  FUN_0001cf40(param_1 + 4,0,0x68);
  *param_1 = &PTR_FUN_0001ef60;
  param_1[0x25] = &PTR_FUN_0001ed98;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_0001cf40(param_1 + 0x31,0,0x90);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  FUN_0001cf40(param_1 + 0x4b,0,0x100);
  *(undefined4 *)(param_1 + 0x6b) = 0;
  puVar2 = param_1 + 0x78;
  param_1[0x6c] = &PTR_FUN_0001ed98;
  param_1[0x6d] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  FUN_0001cf40(puVar2,0,0x90);
  *(undefined4 *)(param_1 + 0x6d) = 1;
  param_1[0x73] = &DAT_0001ed18;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0x48;
  param_1[0x79] = FUN_0001bca0;
  param_1[0x6e] = param_1 + 0x73;
  *(undefined4 *)(param_1 + 0x74) = 2;
  param_1[0x75] = puVar2;
  *(undefined4 *)puVar2 = 0xd;
  param_1[0x7b] = FUN_0001bc40;
  param_1[0x7c] = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0x28;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 4;
  *(undefined4 *)(param_1 + 0x81) = 0x21;
  *(undefined4 *)(param_1 + 0x83) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 4;
  param_1[0x82] = &LAB_0001bc20;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return param_1;
}

