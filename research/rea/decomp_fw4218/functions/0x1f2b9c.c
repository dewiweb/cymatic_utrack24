// rea decompile_all
// name: FUN_001f2b9c
// address: 0x1f2b9c
// body: available
// range: 0x1f2b9c-0x1f2bd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 *
FUN_001f2b9c(int param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)FUN_001f2704();
  if ((puVar1 != (undefined1 *)0x0) && (puVar1 + 4 < param_3)) {
    *puVar1 = (char)((uint)param_5 >> 8);
    puVar1[1] = (char)param_5;
    puVar1[2] = (char)((uint)param_6 >> 8);
    puVar1[3] = (char)param_6;
    iVar2 = *(ushort *)(param_1 + 4) + 1;
    *(char *)(param_1 + 4) = (char)iVar2;
    *(char *)(param_1 + 5) = (char)((uint)iVar2 >> 8);
    return puVar1 + 4;
  }
  return (undefined1 *)0x0;
}

