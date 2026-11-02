// rea decompile_all
// name: FUN_001cd890
// address: 0x1cd890
// body: available
// range: 0x1cd890-0x1cd943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001cd890(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  
  uVar1 = FUN_00048e4c(0,0,4,in_r3,in_r3);
  FUN_0007bcac(DAT_001cd944,uVar1);
  uVar1 = FUN_00048e4c(0,0,4);
  FUN_0007bcac(DAT_001cd948,uVar1);
  uVar1 = FUN_00048e48(0);
  FUN_0007bc90(DAT_001cd94c,uVar1);
  uVar1 = FUN_00048e48(0);
  FUN_0007bc90(DAT_001cd950,uVar1);
  FUN_0007bce8(DAT_001cd954);
  FUN_001c70ac(0,DAT_001cd95c,DAT_001cd958);
  uVar1 = FUN_000b568c(DAT_001cd9d0,s_uTRACK_24_App__Release__001cd9b8,
                       s_04218__Sep_25_2018_15_19__001cd98c,s_trunk_04218_001cd960,uVar1);
  FUN_001c70ac(uVar1,DAT_001cd9d4,DAT_001cd958);
  return;
}

