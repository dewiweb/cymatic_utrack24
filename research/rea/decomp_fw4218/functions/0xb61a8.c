// rea decompile_all
// name: FUN_000b61a8
// address: 0xb61a8
// body: available
// range: 0xb61a8-0xb6277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b61a8(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  if (param_2 == 4) {
LAB_000b6220:
    *(undefined1 *)(param_1 + 0x306) = 2;
  }
  else {
    if (param_2 < 5) {
      if (param_2 == 0) {
LAB_000b6210:
        *(undefined1 *)(param_1 + 0x306) = 0;
        goto LAB_000b6224;
      }
      if (param_2 != 1) {
        if (param_2 == 2) goto LAB_000b6220;
        if (param_2 != 3) {
          return 0;
        }
      }
    }
    else if (param_2 != 5) {
      if (param_2 != 6) {
        if (param_2 != 0x1f400f4) {
          return 0;
        }
        goto LAB_000b6210;
      }
      goto LAB_000b6220;
    }
    *(undefined1 *)(param_1 + 0x306) = 1;
  }
LAB_000b6224:
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined2 *)(param_1 + 0x304) = 0;
  if (*(char *)(param_1 + 0x319) == '\0') {
    uVar2 = FUN_0000a390(param_1 + 4);
    sVar1 = FUN_0004ceb0(uVar2,0);
  }
  else {
    uVar2 = FUN_0000a390(param_1 + 4);
    sVar1 = FUN_0004ceb0(uVar2,0);
    sVar1 = sVar1 << 1;
  }
  *(short *)(param_1 + 0x2ea) = sVar1;
  *(undefined1 *)(param_1 + 0x2f8) = 0;
  return 1;
}

