// rea decompile_all
// name: FUN_00036108
// address: 0x36108
// body: available
// range: 0x36108-0x36143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00036108(undefined4 param_1)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 auStack_40 [36];
  undefined4 local_1c;
  
  pcVar1 = DAT_00036144;
  uVar2 = 0;
  if (*DAT_00036144 != '\0') {
    if (DAT_00036144[1] == '\0') {
      *(char *)(DAT_00036148 + 0x14) = (char)param_1;
    }
    else {
      FUN_000268ac(auStack_40,7);
      if ((pcVar1[1] != '\0') && (*pcVar1 != '\0')) {
        local_1c = param_1;
        FUN_000356c4(auStack_40);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

