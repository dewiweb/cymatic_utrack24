// rea decompile_all
// name: FUN_00015ea0
// address: 0x15ea0
// body: available
// range: 0x15ea0-0x161ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00015ea0(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  puVar1 = (ulonglong *)(param_1 + 0x278);
  FUN_0001cf40(puVar1,0,0x70);
  *(undefined4 *)(param_1 + 0x27c) = 0;
  pcVar4 = FUN_000161c0;
  *(undefined4 *)puVar1 = 1;
  *(undefined4 *)(param_1 + 0x280) = 1;
  *(undefined4 *)(param_1 + 0x284) = 1;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0x4a6d5fc4;
  *(undefined4 *)(param_1 + 0x294) = 0x11d17895;
  *(undefined4 *)(param_1 + 0x298) = 0xa00069b0;
  *(undefined4 *)(param_1 + 0x29c) = 0x22806c9;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 2;
  *(undefined4 *)(param_1 + 700) = 4;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d0) = 1;
  *(undefined4 *)(param_1 + 0x2d4) = 0x20;
  *(undefined4 *)(param_1 + 0x2d8) = 0x40;
  *(undefined4 *)(param_1 + 0x2dc) = 1;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  if (param_2 != 1) {
    pcVar4 = FUN_00016320;
  }
  *(undefined8 *)(param_1 + 0x1c0) = pcVar4;
  *(undefined8 **)(param_1 + 0x138) = (undefined8 *)(param_1 + 0x1c0);
  *(undefined1 **)(param_1 + 0x1e0) = &LAB_00018510;
  *(undefined **)(param_1 + 0x200) = &DAT_0001e570;
  puVar2 = (ulonglong *)(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x148) = 2;
  *(undefined **)(param_1 + 0x150) = &DAT_00020110;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 1;
  FUN_0001cf40(puVar2,0,0x60);
  *(undefined4 *)puVar2 = 0x60;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0xe725d360;
  *(undefined4 *)(param_1 + 0x224) = 0x11cf62cc;
  *(undefined4 *)(param_1 + 0x228) = 0xdb28d6a5;
  *(undefined4 *)(param_1 + 0x22c) = 0xc104;
  *(undefined4 *)(param_1 + 0x230) = 0x1d262760;
  *(undefined4 *)(param_1 + 0x234) = 0x11cfe957;
  *(undefined4 *)(param_1 + 0x238) = 0xdb28d6a5;
  *(undefined4 *)(param_1 + 0x23c) = 0xc104;
  *(undefined4 *)(param_1 + 0x240) = 0xf6417d6;
  *(undefined4 *)(param_1 + 0x244) = 0x11d0c318;
  *(undefined4 *)(param_1 + 0x248) = 0xa0003fa4;
  *(undefined4 *)(param_1 + 0x24c) = 0x963122c9;
  *(undefined4 *)(param_1 + 0x250) = 0x86c92e60;
  *(undefined4 *)(param_1 + 0x254) = 0x11cf62e8;
  *(undefined4 *)(param_1 + 600) = 0xdb28d6a5;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0xc104;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x270) = puVar2;
  *(undefined8 **)(param_1 + 0x170) = (undefined8 *)(param_1 + 0x270);
  *(int *)(param_1 + 0x178) = param_2;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  uVar3 = 3;
  if (param_2 == 1) {
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 0x17c) = uVar3;
  *(undefined4 **)(param_1 + 0x180) = &DAT_0001ece0;
  *(ulonglong **)(param_1 + 0x1b0) = puVar1;
  *(undefined4 *)(param_1 + 0x1a0) = 0x410001;
  *(undefined4 *)(param_1 + 0x1a4) = 0xffffffff;
  *(undefined1 **)(param_1 + 0x1b8) = &LAB_00018400;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  return;
}

