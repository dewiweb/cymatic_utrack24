// rea decompile_all
// name: FUN_000155e0
// address: 0x155e0
// body: available
// range: 0x155e0-0x1575b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000155e0(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_0001cf40((ulonglong *)(param_1 + 0x138),0,0x88);
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar2 = (ulonglong *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_0001cf40(puVar2,0,0x50);
  puVar3 = (undefined8 *)(param_1 + 0x98);
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  puVar4 = (undefined8 *)(param_1 + 0xe0);
  *puVar4 = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 **)(param_1 + 0x80) = puVar4;
  *(ulonglong **)(param_1 + 0x20) = puVar2;
  *puVar2 = (ulonglong)&DAT_0001ed18;
  *(code **)(param_1 + 0xa0) = FUN_00015770;
  *(undefined4 *)puVar4 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x48;
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined **)(param_1 + 0x70) = &DAT_0001ed28;
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0x18;
  *(undefined4 *)(param_1 + 0xac) = 0x10;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(code **)(param_1 + 0xf8) = FUN_000157e0;
  *(undefined4 *)(param_1 + 0xf0) = 0x58;
  *(undefined4 *)(param_1 + 0xf4) = 0x10;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 **)(param_1 + 0x140) = puVar1;
  *(undefined4 *)puVar1 = 2;
  *(undefined4 *)puVar3 = 5;
  return;
}

