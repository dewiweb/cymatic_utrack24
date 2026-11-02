// rea decompile_all
// name: FUN_00145e14
// address: 0x145e14
// body: available
// range: 0x145e14-0x145ff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00145e14(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  param_1[6] = 1;
  *(undefined1 *)(param_1 + 7) = 0x18;
  *(undefined1 *)((int)param_1 + 0x1d) = 0x18;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x8000;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  param_1[0xc] = 1;
  param_1[0xd] = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined2 *)((int)param_1 + 0xee) = 0x100;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)((int)param_1 + 0xf1) = 1;
  *(undefined1 *)((int)param_1 + 0xf2) = 0;
  *(undefined1 *)((int)param_1 + 0xf3) = 0;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0xf6) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x56] = 0;
  param_1[0xb3] = 0;
  *(undefined2 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)((int)param_1 + 0x2d2) = 0;
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    param_1[iVar1 + 0x13] = 0;
  }
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    param_1[iVar1 + 0x1b] = 0;
  }
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    param_1[iVar1 + 0x1f] = 0;
  }
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    param_1[iVar1 + 0x46] = 0;
  }
  for (iVar1 = 0; iVar1 < 0x1a; iVar1 = iVar1 + 1) {
    param_1[iVar1 + 0x59] = 0;
  }
  for (iVar1 = 0; iVar1 < 0x18; iVar1 = iVar1 + 1) {
    *(undefined2 *)((int)param_1 + iVar1 * 2 + 0x1cc) = 0;
    *(undefined2 *)((int)param_1 + iVar1 * 2 + 0x1fc) = 0;
    *(undefined2 *)((int)param_1 + iVar1 * 2 + 0x22c) = 0;
    *(undefined2 *)((int)param_1 + iVar1 * 2 + 0x25c) = 0;
  }
  return;
}

