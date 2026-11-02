// rea decompile_all
// name: FUN_0001b910
// address: 0x1b910
// body: available
// range: 0x1b910-0x1bb2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001b910(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar1 = (ulonglong *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_0001cf40(puVar1,0,0x90);
  puVar2 = (undefined8 *)(param_1 + 0xf0);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  puVar3 = (undefined8 *)(param_1 + 0x118);
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_0001cf40((ulonglong *)(param_1 + 0x130),0,0x100);
  uVar5 = 0;
  *(int *)(param_1 + 0x230) = param_3;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x48;
  *(undefined8 **)(param_1 + 0x10) = (undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = 2;
  *(ulonglong **)(param_1 + 0x48) = puVar1;
  *(undefined4 *)puVar1 = 4;
  *(undefined4 *)(param_1 + 0x70) = 0x28;
  *(undefined4 *)(param_1 + 0x74) = 4;
  *(undefined8 **)(param_1 + 0x80) = puVar2;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0x21;
  *(undefined4 *)(param_1 + 0xb8) = 0x20;
  *(undefined4 *)(param_1 + 0xbc) = 4;
  *(undefined8 *)(param_1 + 0x38) = &DAT_0001ed18;
  *(code **)(param_1 + 0x68) = FUN_0001bbb0;
  *(code **)(param_1 + 0x78) = FUN_0001bb40;
  *(undefined1 **)(param_1 + 0xb0) = &LAB_0001bc20;
  *(undefined4 *)puVar2 = 0x97e99ba0;
  *(undefined4 *)(param_1 + 0xf4) = 0x11cfbdea;
  *(undefined4 *)(param_1 + 0xf8) = 0xdb28d6a5;
  *(undefined4 *)(param_1 + 0x100) = 3;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined8 **)(param_1 + 0x110) = puVar3;
  *(undefined4 *)(param_1 + 0xfc) = 0xc104;
  *(undefined4 *)(param_1 + 0x120) = 1;
  *(undefined4 *)puVar3 = 2;
  *(undefined4 *)(param_1 + 0x11c) = 0x10;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(ulonglong **)(param_1 + 0x128) = (ulonglong *)(param_1 + 0x130);
  if (param_3 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x13c);
    do {
      puVar4[-1] = 0xff800000;
      *puVar4 = 0;
      puVar4[-3] = 1;
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 4;
    } while (uVar5 < *(uint *)(param_1 + 0x230));
  }
  return;
}

