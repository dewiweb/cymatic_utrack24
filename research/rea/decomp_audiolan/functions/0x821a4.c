// rea decompile_all
// name: FUN_000821a4
// address: 0x821a4
// body: available
// range: 0x821a4-0x8224b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000821a4(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_000028a4(s_MEMORY_SEGMENT_BOUNDARIES_0008224c);
  FUN_000028a4(s___________________________00082268);
  iVar2 = 0;
  iVar1 = FUN_00181cec(0,&local_28);
  while (iVar1 == 0) {
    FUN_000028a4(s_Segment___s_00082284,local_28);
    FUN_000028a4(s_Start___0x_08x_00082294,local_24);
    FUN_000028a4(s_End___0x_08x_000822b0,local_20);
    FUN_000028a4(s_Size___0x_08x_000822cc,local_1c);
    FUN_000028a4(s_Length___0x_08x_000822e8,local_18);
    FUN_000028a4(s_Limit___0x_08x_00082304,local_14);
    FUN_000028a4(s_ZILimit__0x_08x_00082320,local_10);
    iVar2 = iVar2 + 1;
    iVar1 = FUN_00181cec(iVar2,&local_28);
  }
  return 0;
}

