// rea decompile_all
// name: FUN_000158b0
// address: 0x158b0
// body: available
// range: 0x158b0-0x15c67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000158b0(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x128) + 0x30);
  *(undefined4 *)(param_1 + 0x2d0) = 1;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 1;
  *(undefined4 *)(param_1 + 0x2dc) = 1;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  iVar4 = iVar4 * param_2 * 4;
  puVar1 = (ulonglong *)(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x2e8) = 0x4a6d5fc4;
  *(undefined4 *)(param_1 + 0x2ec) = 0x11d17895;
  *(undefined4 *)(param_1 + 0x2f0) = 0xa00069b0;
  *(undefined4 *)(param_1 + 0x2f4) = 0x22806c9;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x310) = 2;
  *(undefined4 *)(param_1 + 0x314) = 4;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x328) = 1;
  *(int *)(param_1 + 0x32c) = iVar4;
  *(int *)(param_1 + 0x330) = iVar4;
  *(undefined4 *)(param_1 + 0x334) = 1;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined **)(param_1 + 0x200) = &DAT_0001e570;
  *(longlong *)(param_1 + 0x138) = param_1 + 0x1c0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  FUN_0001cf40(puVar1,0,0xb0);
  *(undefined4 *)puVar1 = 0x58;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0x73647561;
  *(undefined4 *)(param_1 + 0x224) = 0x100000;
  *(undefined4 *)(param_1 + 0x228) = 0xaa000080;
  *(undefined4 *)(param_1 + 0x22c) = 0x719b3800;
  *(undefined4 *)(param_1 + 0x230) = 1;
  *(undefined4 *)(param_1 + 0x234) = 0x100000;
  *(undefined4 *)(param_1 + 0x238) = 0xaa000080;
  *(undefined4 *)(param_1 + 0x23c) = 0x719b3800;
  *(undefined4 *)(param_1 + 0x240) = 0x5589f81;
  lVar3 = *(longlong *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x244) = 0x11cec356;
  *(undefined4 *)(param_1 + 0x248) = 0xaa0001bf;
  *(int *)(param_1 + 0x250) = param_2;
  *(undefined4 *)(param_1 + 0x24c) = 0x5a595500;
  *(undefined4 *)(param_1 + 0x254) = 0x18;
  *(undefined4 *)(param_1 + 600) = 0x20;
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(lVar3 + 0x20);
  uVar2 = *(undefined4 *)(lVar3 + 0x24);
  *(undefined8 *)(param_1 + 0x2c0) = puVar1;
  *(undefined4 *)(param_1 + 0x260) = uVar2;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0x58;
  *(undefined4 *)(param_1 + 0x278) = 0x73647561;
  *(undefined4 *)(param_1 + 0x27c) = 0x100000;
  *(undefined4 *)(param_1 + 0x280) = 0xaa000080;
  *(undefined4 *)(param_1 + 0x284) = 0x719b3800;
  *(undefined4 *)(param_1 + 0x288) = 1;
  *(undefined4 *)(param_1 + 0x28c) = 0x100000;
  *(undefined4 *)(param_1 + 0x290) = 0xaa000080;
  *(undefined4 *)(param_1 + 0x294) = 0x719b3800;
  *(undefined4 *)(param_1 + 0x298) = 0x518590a2;
  *(undefined4 *)(param_1 + 0x29c) = 0x11d0a184;
  *(undefined4 *)(param_1 + 0x2a0) = 0xc0002285;
  *(int *)(param_1 + 0x2a8) = param_2;
  *(undefined4 *)(param_1 + 0x2a4) = 0xf3bad94f;
  *(undefined4 *)(param_1 + 0x2ac) = 0x18;
  *(undefined4 *)(param_1 + 0x2b0) = 0x20;
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(lVar3 + 0x20);
  uVar2 = *(undefined4 *)(lVar3 + 0x24);
  *(undefined4 **)(param_1 + 0x2c8) = (undefined4 *)(param_1 + 0x268);
  *(undefined4 *)(param_1 + 0x2b8) = uVar2;
  *(undefined4 *)(param_1 + 0x168) = 2;
  *(undefined8 **)(param_1 + 0x170) = (undefined8 *)(param_1 + 0x2c0);
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 **)(param_1 + 0x180) = &DAT_0001ece0;
  *(undefined4 **)(param_1 + 0x1b0) = (undefined4 *)(param_1 + 0x2d0);
  *(undefined4 *)(param_1 + 0x1a0) = 0x410011;
  *(undefined4 *)(param_1 + 0x1a4) = 1;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  return;
}

