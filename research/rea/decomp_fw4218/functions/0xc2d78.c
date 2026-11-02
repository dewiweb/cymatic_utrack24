// rea decompile_all
// name: FUN_000c2d78
// address: 0xc2d78
// body: available
// range: 0xc2d78-0xc2ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000c2d78(int param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = param_1 + uVar2 * 0x24;
    if ((((*(char *)(iVar1 + 0x1f6) == param_2[2]) && (*(char *)(iVar1 + 0x1f7) == param_2[3])) &&
        (*(int *)(iVar1 + 0x1f8) == *(int *)(param_2 + 4))) &&
       ((*(char *)(iVar1 + 0x1f5) == param_2[1] && (*(char *)(iVar1 + 500) == *param_2)))) {
      param_1 = param_1 + uVar2 * 0x24;
      *(undefined1 *)(param_1 + 500) = 0xff;
      *(undefined1 *)(param_1 + 0x1f5) = 0xff;
      *(undefined1 *)(param_1 + 0x1f6) = 0xff;
      *(undefined1 *)(param_1 + 0x1f7) = 0xff;
      *(undefined4 *)(param_1 + 0x1fc) = 0;
      *(undefined4 *)(param_1 + 0x1f8) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x200) = 0;
      *(undefined4 *)(param_1 + 0x204) = 0;
      *(undefined1 *)(param_1 + 0x208) = 0;
      *(undefined4 *)(param_1 + 0x20c) = 0;
      *(undefined4 *)(param_1 + 0x210) = 0;
      *(undefined1 *)(param_1 + 0x214) = 0;
      return 1;
    }
    if (((*(char *)(iVar1 + 0xd6) == param_2[2]) && (*(char *)(iVar1 + 0xd7) == param_2[3])) &&
       ((*(int *)(iVar1 + 0xd8) == *(int *)(param_2 + 4) &&
        ((*(char *)(iVar1 + 0xd5) == param_2[1] && (*(char *)(iVar1 + 0xd4) == *param_2)))))) break;
    uVar2 = uVar2 + 1 & 0xff;
    if (7 < uVar2) {
      return 0;
    }
  }
  param_1 = param_1 + uVar2 * 0x24;
  *(undefined1 *)(param_1 + 0xd4) = 0xff;
  *(undefined1 *)(param_1 + 0xd5) = 0xff;
  *(undefined1 *)(param_1 + 0xd6) = 0xff;
  *(undefined1 *)(param_1 + 0xd7) = 0xff;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  return 1;
}

