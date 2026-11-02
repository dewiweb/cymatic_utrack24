// rea decompile_all
// name: FUN_00013ba8
// address: 0x13ba8
// body: available
// range: 0x13ba8-0x13e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_00013ba8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_1 + 1) = 0x11110001;
  *param_1 = &PTR_FUN_00027bd8;
  KeInitializeMutex(param_1 + 3,0);
  *(undefined4 *)(param_1 + 1) = 0x11110009;
  puVar1 = param_1 + 0x32;
  puVar2 = param_1 + 0x24;
  *param_1 = &PTR_FUN_00027df0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = &PTR_FUN_00027e10;
  puVar3 = param_1 + 0x16;
  param_1[0x17] = puVar3;
  *puVar3 = puVar3;
  param_1[0x18] = 0x10;
  *(undefined4 *)(param_1 + 0xd) = 0x11110008;
  puVar3 = param_1 + 0x1a;
  param_1[0x1b] = puVar3;
  *puVar3 = puVar3;
  param_1[0x1c] = 0xc0;
  param_1[0x26] = 8;
  param_1[0x25] = puVar2;
  *puVar2 = puVar2;
  puVar2 = param_1 + 0x27;
  param_1[0x29] = 8;
  param_1[0x28] = puVar2;
  *puVar2 = puVar2;
  puVar2 = param_1 + 0x2a;
  param_1[0x2b] = puVar2;
  *puVar2 = puVar2;
  param_1[0x2c] = 0;
  puVar2 = param_1 + 0x2e;
  param_1[0x2f] = puVar2;
  *puVar2 = puVar2;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0xf0;
  param_1[0x33] = puVar1;
  *puVar1 = puVar1;
  puVar2 = param_1 + 0x35;
  param_1[0x37] = 0xf0;
  param_1[0x36] = puVar2;
  *puVar2 = puVar2;
  puVar2 = param_1 + 0x38;
  param_1[0x39] = puVar2;
  *puVar2 = puVar2;
  param_1[0x3a] = 0x210;
  puVar2 = param_1 + 0x3b;
  param_1[0x3c] = puVar2;
  *puVar2 = puVar2;
  param_1[0x3d] = 0x1e0;
  KeInitializeDpc(param_1 + 0xca,0,0);
  KeInitializeTimer(param_1 + 0xc2);
  KeInitializeDpc(param_1 + 0xca,0,0);
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60c) = 0;
  KeInitializeTimer(param_1 + 0xc2);
  KeInitializeDpc(param_1 + 0xca,FUN_000214f8,puVar1);
  param_1[0xd2] = 0xffffffffffc2f700;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x69c) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6a4) = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6ac) = 0;
  param_1[0xd9] = &PTR_LAB_00028010;
  puVar2 = param_1 + 0xdb;
  param_1[0xdc] = puVar2;
  *puVar2 = puVar2;
  param_1[0xdd] = 0x10;
  param_1[0xda] = 0;
  FUN_0001398c(param_1 + 0xf9);
  FUN_0001398c(param_1 + 0x103);
  *(undefined4 *)(param_1 + 0xeb) = 0xdac;
  *(undefined4 *)((longlong)param_1 + 0x754) = 0xdac;
  *(undefined4 *)(param_1 + 1) = 0x11110009;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  *(undefined4 *)((longlong)param_1 + 0x72c) = 1;
  *(undefined4 *)(param_1 + 0xe3) = 1;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x734) = 48000;
  *(undefined4 *)(param_1 + 0xe7) = 2;
  *(undefined4 *)((longlong)param_1 + 0x73c) = 0x400;
  *(undefined4 *)(param_1 + 0xe8) = 10000;
  *(undefined4 *)((longlong)param_1 + 0x744) = 0;
  *(undefined4 *)(param_1 + 0xe9) = 1000;
  *(undefined4 *)((longlong)param_1 + 0x74c) = 0x3c;
  *(undefined4 *)(param_1 + 0xea) = 31000;
  *(undefined4 *)(param_1 + 0xe4) = 0x150;
  *(undefined4 *)((longlong)param_1 + 0x724) = 0;
  *(undefined1 *)(param_1 + 0xe5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x71c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x75c) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  return param_1;
}

