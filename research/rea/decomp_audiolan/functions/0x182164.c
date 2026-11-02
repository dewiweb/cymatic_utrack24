// rea decompile_all
// name: FUN_00182164
// address: 0x182164
// body: available
// range: 0x182164-0x1821e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00182164(uint param_1)

{
  undefined4 uVar1;
  undefined4 auStack_3c [14];
  
  auStack_3c[1] = *DAT_001821e4;
  auStack_3c[2] = DAT_001821e4[1];
  auStack_3c[3] = DAT_001821e4[2];
  auStack_3c[4] = DAT_001821e4[3];
  auStack_3c[5] = DAT_001821e4[4];
  auStack_3c[6] = DAT_001821e4[5];
  auStack_3c[7] = DAT_001821e4[6];
  auStack_3c[8] = DAT_001821e4[7];
  uVar1 = DAT_001821e4[0xb];
  auStack_3c[9] = DAT_001821e4[8];
  auStack_3c[10] = DAT_001821e4[9];
  auStack_3c[0xb] = DAT_001821e4[10];
  if (param_1 < 0xc) {
    return auStack_3c[param_1];
  }
  if (param_1 != 0xfe) {
    uVar1 = DAT_001821e4[0xc];
  }
  return uVar1;
}

