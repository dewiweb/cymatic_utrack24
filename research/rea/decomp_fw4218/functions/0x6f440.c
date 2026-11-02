// rea decompile_all
// name: FUN_0006f440
// address: 0x6f440
// body: available
// range: 0x6f440-0x6f4f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0006f440(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00071d70(param_1,s_USBStackImpl_0006f500,0,2);
  piVar2 = (int *)FUN_0012a068(iVar1 + 0x114);
  iVar1 = _DAT_0006f510;
  piVar2[-0x45] = _DAT_0006f510;
  *piVar2 = iVar1 + 0x98;
  piVar2[1] = iVar1 + 0xac;
  iVar1 = FUN_00091838(piVar2 + 2,s___USB_Stack_Lock_0006f512 + 2);
  iVar1 = FUN_00204380(iVar1 + 0x24);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  uVar3 = FUN_00236d54((undefined4 *)(iVar1 + 0xc),1);
  *(undefined4 *)(iVar1 + 0x1c) = uVar3;
  *(undefined4 *)uVar3 = uVar3;
  *(int *)(*(int *)(iVar1 + 0x1c) + 4) = *(int *)(iVar1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(int *)(iVar1 + 0x6c) = iVar1 + 0x34;
  *(undefined1 *)(iVar1 + 0x78) = 1;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  iVar1 = FUN_000c77bc(iVar1 + 0x88,iVar1 + -0x140);
  *(undefined1 *)(iVar1 + 0x18) = 0;
  FUN_0006f678(iVar1 + -0x1c8);
  return iVar1 + -0x1c8;
}

