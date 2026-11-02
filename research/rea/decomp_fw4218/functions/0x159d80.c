// rea decompile_all
// name: FUN_00159d80
// address: 0x159d80
// body: available
// range: 0x159d80-0x159e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00159d80(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined4 param_5,undefined4 param_6,undefined2 param_7,undefined1 param_8,
                 undefined4 param_9)

{
  int iVar1;
  bool bVar2;
  
  *(undefined1 *)(param_1 + 0x24) = param_2;
  *(undefined1 *)(param_1 + 0x25) = param_3;
  *(undefined1 *)(param_1 + 0x26) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  *(undefined4 *)(param_1 + 0x2c) = param_6;
  *(undefined2 *)(param_1 + 0x30) = param_7;
  bVar2 = true;
  *(undefined1 *)(param_1 + 0x32) = param_8;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_001c6a64();
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(short *)(param_1 + 0x30) != 0) {
    iVar1 = FUN_001c6a94(*(short *)(param_1 + 0x30),DAT_00159e08);
    bVar2 = iVar1 != 0;
    *(int *)(param_1 + 0x34) = iVar1;
    if (bVar2) {
      FUN_000039e0(iVar1,param_9,*(undefined2 *)(param_1 + 0x30));
    }
  }
  return bVar2;
}

