// rea decompile_all
// name: FUN_001a0a10
// address: 0x1a0a10
// body: available
// range: 0x1a0a10-0x1a0a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001a0a10(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_10;
  
  iVar2 = 0;
  FUN_00015210(s__15s__6s__9s__12s_001a0ab0,&DAT_001a0aa8,s_Start_001a0aa0,&DAT_001a0a9c,
               &DAT_001a0a94);
  while (iVar1 = FUN_00181cec(iVar2,&local_28), iVar1 == 0) {
    iVar1 = local_1c - (local_10 - local_24);
    FUN_00015210(s__15s_0x_08x_0x_08x_0x_08x__lu_001a0ac8,local_28,local_10,local_20,iVar1,iVar1);
    iVar2 = iVar2 + 1;
  }
  FUN_000151c4(&DAT_001a0ac4);
  return;
}

