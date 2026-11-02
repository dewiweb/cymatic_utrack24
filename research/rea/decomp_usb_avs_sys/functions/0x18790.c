// rea decompile_all
// name: FUN_00018790
// address: 0x18790
// body: available
// range: 0x18790-0x18881 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 *
FUN_00018790(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_00016af0(param_1,param_2,param_3,param_4);
  *(undefined4 *)(param_1 + 5) = 3;
  puVar1 = param_1 + 0x5d;
  *param_1 = &PTR_FUN_0001ee60;
  uVar2 = *(undefined8 *)(param_1[4] + 0xc);
  *param_1 = &PTR_FUN_0001eea0;
  *(undefined8 *)((longlong)param_1 + 0x54) = uVar2;
  param_1[0x3b] = &PTR_FUN_0001eee0;
  *(undefined4 *)(param_1 + 0x47) = 0x40;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24d) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x48] = param_1 + 0x3f;
  param_1[0x55] = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  param_1[0x3e] = param_1 + 0x3b;
  param_1[0x57] = puVar1;
  *(undefined4 *)(param_1 + 0x59) = 0x200;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  param_1[0x58] = param_1 + 0x125d;
  param_1[0x5b] = puVar1;
  param_1[0x5a] = puVar1;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2e1) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return param_1;
}

