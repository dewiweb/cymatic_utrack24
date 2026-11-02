// rea decompile_all
// name: FUN_000fe110
// address: 0xfe110
// body: available
// range: 0xfe110-0xfe1e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000fe110(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0xb0) != '\x01') {
    return;
  }
  if (*(int *)(param_1 + 0xac) != *(int *)(param_2 + 0x20)) {
    return;
  }
  if (*(char *)(param_2 + 0x24) == '\0') {
    return;
  }
  iVar2 = FUN_0017bfc0();
  uVar1 = (uint)(iVar2 * 1000 - *(int *)(param_2 + 0x18)) >> 1;
  if (*(char *)(param_1 + 0xb1) == '\0') {
    *(uint *)(param_1 + 0x80) = uVar1;
    *(uint *)(param_1 + 0x84) = uVar1;
    *(uint *)(param_1 + 0x88) = uVar1;
    *(uint *)(param_1 + 0x8c) = uVar1;
    *(uint *)(param_1 + 0x90) = uVar1;
    *(uint *)(param_1 + 0x94) = uVar1;
    *(uint *)(param_1 + 0x98) = uVar1;
    *(uint *)(param_1 + 0x9c) = uVar1;
    *(uint *)(param_1 + 0x7c) = uVar1;
    *(uint *)(param_1 + 0xa0) = uVar1 << 3;
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  else {
    iVar2 = param_1 + *(int *)(param_1 + 0xa4) * 4;
    uVar3 = (*(int *)(param_1 + 0xa0) + uVar1) - *(int *)(iVar2 + 0x80);
    *(uint *)(param_1 + 0x7c) = uVar3 >> 3;
    *(uint *)(param_1 + 0xa0) = uVar3;
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    *(uint *)(iVar2 + 0x80) = uVar1;
    *(uint *)(param_1 + 0xa4) = *(byte *)(param_1 + 0xa4) & 7;
  }
  *(undefined1 *)(param_1 + 0xb0) = 2;
  return;
}

