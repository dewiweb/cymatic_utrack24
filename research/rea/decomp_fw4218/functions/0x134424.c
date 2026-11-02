// rea decompile_all
// name: FUN_00134424
// address: 0x134424
// body: available
// range: 0x134424-0x1344df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00134424(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  
  FUN_000028cc(auStack_1c,&DAT_001344e0,*(undefined1 *)(param_1 + 0x27));
  FUN_000028cc(auStack_2c,&DAT_001344ec,DAT_001344e8 + (*(byte *)(param_1 + 0x28) - 1) * 4);
  FUN_000028cc(auStack_3c,&DAT_001344f0,*(byte *)(param_1 + 0x29) + 2000);
  FUN_000028cc(auStack_4c,&DAT_001344e0,*(undefined1 *)(param_1 + 0x2a));
  FUN_000028cc(auStack_5c,&DAT_001344e0,*(undefined1 *)(param_1 + 0x2b));
  uVar2 = FUN_0011eda0();
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x26);
  }
  FUN_0011f790(uVar2,auStack_1c,auStack_2c,auStack_3c,auStack_4c,auStack_5c,uVar1);
  return;
}

