// rea decompile_all
// name: FUN_00019a50
// address: 0x19a50
// body: available
// range: 0x19a50-0x19bbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00019a50(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 0x168) = 1;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  puVar1 = (undefined8 *)(param_1 + 0x210);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)puVar1 = 0x40;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0x73647561;
  *(undefined4 *)(param_1 + 0x224) = 0x100000;
  *(undefined4 *)(param_1 + 0x228) = 0xaa000080;
  *(undefined4 *)(param_1 + 0x22c) = 0x719b3800;
  *(undefined4 *)(param_1 + 0x230) = 0x6dba3190;
  *(undefined4 *)(param_1 + 0x234) = 0x11cf67bd;
  *(undefined4 *)(param_1 + 0x238) = 0x2000f7a0;
  *(undefined4 *)(param_1 + 0x23c) = 0xe456d1af;
  *(undefined4 *)(param_1 + 0x240) = 0xf6417d6;
  *(undefined4 *)(param_1 + 0x244) = 0x11d0c318;
  *(undefined4 *)(param_1 + 0x248) = 0xa0003fa4;
  *(undefined4 *)(param_1 + 0x24c) = 0x963122c9;
  *(undefined8 *)(param_1 + 0x250) = puVar1;
  *(undefined8 **)(param_1 + 0x170) = (undefined8 *)(param_1 + 0x250);
  *(int *)(param_1 + 0x178) = param_2;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  puVar2 = &DAT_0001ef40;
  if (param_2 != 1) {
    puVar2 = &DAT_0001ef50;
  }
  *(undefined **)(param_1 + 0x180) = puVar2;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  return;
}

