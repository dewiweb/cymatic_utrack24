// rea decompile_all
// name: FUN_0008aaa4
// address: 0x8aaa4
// body: available
// range: 0x8aaa4-0x8ab4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0008aaa4(void)

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
  
  FUN_00002898(s_MEMORY_SEGMENT_BOUNDARIES_0008ab4c);
  FUN_00002898(s___________________________0008ab68);
  iVar2 = 0;
  iVar1 = FUN_001d2e28(0,&local_28);
  while (iVar1 == 0) {
    FUN_00002898(s_Segment___s_0008ab84,local_28);
    FUN_00002898(s_Start___0x_08x_0008ab94,local_24);
    FUN_00002898(s_End___0x_08x_0008abb0,local_20);
    FUN_00002898(s_Size___0x_08x_0008abcc,local_1c);
    FUN_00002898(s_Length___0x_08x_0008abe8,local_18);
    FUN_00002898(s_Limit___0x_08x_0008ac04,local_14);
    FUN_00002898(s_ZILimit__0x_08x_0008ac20,local_10);
    iVar2 = iVar2 + 1;
    iVar1 = FUN_001d2e28(iVar2,&local_28);
  }
  return 0;
}

