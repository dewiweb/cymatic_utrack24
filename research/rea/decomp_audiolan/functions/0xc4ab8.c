// rea decompile_all
// name: FUN_000c4ab8
// address: 0xc4ab8
// body: available
// range: 0xc4ab8-0xc4b97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_000c4ab8(undefined4 *param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  short sVar3;
  uint uVar4;
  
  uVar1 = DAT_000c4b98;
  param_1[2] = param_2;
  *param_1 = uVar1;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 8) = param_3;
  *(undefined1 *)((int)param_1 + 0x21) = 0;
  sVar3 = FUN_000467b0(param_3,*(undefined4 *)(*(int *)(param_2 + 4) + 0x60),0,1);
  param_1[3] = 0x26000000;
  param_1[4] = 0;
  *(short *)(param_1 + 3) = sVar3 * 4 + 4;
  param_1[5] = 0;
  *(short *)((int)param_1 + 0x16) = sVar3 * 4 + -4;
  uVar4 = param_1[5];
  param_1[5] = uVar4 & 0xffff3fff | 0x4000;
  param_1[5] = ((int)**(short **)(param_2 + 4) & 0x3fU) << 8 | uVar4 & 0xffff000f | 0x4000 | 0xa0;
  param_1[6] = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = *(undefined1 *)(*(int *)(param_2 + 4) + 0xb0);
  param_1[7] = param_1[7] & 0xffffff | 0x90000000;
  *(char *)((int)param_1 + 0x1e) = (char)*(undefined4 *)(*(int *)(param_2 + 4) + 0x60);
  uVar2 = FUN_00046630(*(undefined4 *)(*(int *)(param_2 + 4) + 0x60),0);
  *(undefined1 *)((int)param_1 + 0x21) = uVar2;
  return param_1;
}

