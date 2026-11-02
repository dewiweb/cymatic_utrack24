// rea decompile_all
// name: FUN_000dbbe4
// address: 0xdbbe4
// body: available
// range: 0xdbbe4-0xdbceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000dbbe4(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if (1 < *(uint *)(param_1 + 0x28)) {
    return;
  }
  iVar2 = FUN_000765dc();
  iVar2 = FUN_00006604(iVar2 << 1,*(undefined4 *)(param_1 + 0x84));
  *(int *)(*(int *)(param_1 + 4) + 8) = iVar2 + -2;
  uVar3 = 3;
  if (*(int *)(param_1 + 0x88) != 6) {
    if (*(int *)(param_1 + 0x88) == 7) {
      uVar3 = 0x13;
    }
    else {
      uVar3 = 0x33;
    }
  }
  cVar1 = *(char *)(param_1 + 0x8c);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      uVar3 = uVar3 | 0x100;
    }
    else if (cVar1 == '\x03') {
      uVar3 = uVar3 | 0x300;
    }
    else if (cVar1 == '\x04') {
      uVar3 = uVar3 | 0x200;
    }
    else {
      uVar3 = uVar3 | 0x400;
    }
  }
  if (*(int *)(param_1 + 0x90) != 1) {
    uVar3 = uVar3 | 0x2000;
  }
  **(uint **)(param_1 + 4) = uVar3 | 0x100000;
  *(uint *)(*(int *)(param_1 + 4) + 4) = ~(uVar3 | 0x100000);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xf24) = 0x19;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xf10) = 0x1b;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xf14) = 0x1f;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xf34) = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xf30) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xf50) = 0x300;
  return;
}

