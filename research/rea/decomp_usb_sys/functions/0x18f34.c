// rea decompile_all
// name: FUN_00018f34
// address: 0x18f34
// body: available
// range: 0x18f34-0x192c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_00018f34(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  DAT_00029264 = DAT_00029264 + 1;
  puVar1 = param_1 + 0x14;
  param_1[0x15] = puVar1;
  *puVar1 = puVar1;
  param_1[0x16] = 0x18;
  *(undefined4 *)(param_1 + 1) = 0x11110003;
  *(undefined4 *)(param_1 + 3) = 7;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_00027e70;
  puVar1 = param_1 + 0x18;
  param_1[0x19] = puVar1;
  *puVar1 = puVar1;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  FUN_0001fbf8(param_1 + 0x1f);
  FUN_0001fb64(param_1 + 0x61);
  puVar1 = param_1 + 0x7f;
  param_1[0x61] = &PTR_FUN_000280b8;
  param_1[0x80] = puVar1;
  *puVar1 = puVar1;
  puVar1 = param_1 + 0xa0;
  param_1[0xa1] = puVar1;
  *puVar1 = puVar1;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x89) = 0xffffffff;
  puVar1 = param_1 + 0x22c;
  param_1[0x22d] = puVar1;
  *puVar1 = puVar1;
  param_1[0x22e] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3ba) = 0;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 800;
  FUN_0001fbf8(param_1 + 0x238);
  puVar1 = param_1 + 0x286;
  param_1[0x287] = puVar1;
  *puVar1 = puVar1;
  param_1[0x288] = 0;
  puVar1 = param_1 + 0x289;
  param_1[0x28a] = puVar1;
  *puVar1 = puVar1;
  param_1[0x28b] = 0;
  FUN_00024abc(param_1 + 0x28e);
  param_1[0x28e] = &PTR_FUN_00028160;
  KeInitializeDpc(param_1 + 0x2c4,0,0);
  puVar1 = param_1 + 0x2cc;
  param_1[0x2cd] = puVar1;
  *puVar1 = puVar1;
  param_1[0x2ce] = 0;
  param_1[0x2c3] = 0;
  KeInitializeDpc(param_1 + 0x2c4,FUN_000251bc,param_1 + 0x28e);
  param_1[0x28e] = &PTR_FUN_00028160;
  param_1[0x2cf] = &PTR_FUN_00028180;
  puVar1 = param_1 + 0x2d0;
  param_1[0x2d1] = puVar1;
  *puVar1 = puVar1;
  FUN_000264d0(param_1 + 0x2d2,0,0x80);
  FUN_00024abc(param_1 + 0x2e2);
  puVar1 = param_1 + 0x319;
  param_1[0x31a] = puVar1;
  *puVar1 = puVar1;
  param_1[0x31b] = 0;
  param_1[0x317] = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined1 *)(param_1 + 0x31c) = 0;
  param_1[0x2e2] = &PTR_FUN_00028188;
  param_1[0x31d] = &PTR_LAB_00028198;
  puVar1 = param_1 + 0x31e;
  param_1[799] = puVar1;
  *puVar1 = puVar1;
  KeInitializeDpc(param_1 + 0x328,0,0);
  KeInitializeTimer(param_1 + 800);
  KeInitializeDpc(param_1 + 0x328,0,0);
  param_1[0x330] = 0;
  KeInitializeTimer(param_1 + 800);
  KeInitializeDpc(param_1 + 0x328,&LAB_000260ec,param_1 + 0x2e2);
  param_1[0x330] = 0xfffffffffffe7960;
  puVar1 = param_1 + 0x33f;
  param_1[0x340] = puVar1;
  *puVar1 = puVar1;
  param_1[0x341] = 0x10;
  puVar1 = param_1 + 0x374;
  param_1[0x375] = puVar1;
  *puVar1 = puVar1;
  param_1[0x376] = 0;
  *(undefined4 *)(param_1 + 1) = 0x11110004;
  iVar2 = FUN_00013f24();
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0xffffffff;
  *(int *)(param_1 + 0x1c) = iVar2;
  *(undefined2 *)((longlong)param_1 + 0x19a4) = 0xffff;
  *(undefined4 *)(param_1 + 0x232) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x274) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x362) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x24] = param_1;
  param_1[0x66] = param_1;
  param_1[0x23d] = param_1;
  param_1[0x281] = param_1;
  *(undefined4 *)(param_1 + 0x231) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118c) = 0xe0000040;
  *(undefined4 *)((longlong)param_1 + 0x1194) = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0xe0000040;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13cc) = 0;
  *(undefined4 *)(param_1 + 0x27a) = 0xe0000040;
  *(undefined4 *)(param_1 + 0x27b) = 0;
  *(undefined4 *)(param_1 + 0x273) = 0;
  *(undefined4 *)((longlong)param_1 + 0x139c) = 0xe0000040;
  *(undefined4 *)((longlong)param_1 + 0x13a4) = 0;
  *(undefined4 *)(param_1 + 0x334) = 1;
  return param_1;
}

