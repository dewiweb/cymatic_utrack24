// rea decompile_all
// name: FUN_0015d4b8
// address: 0x15d4b8
// body: available
// range: 0x15d4b8-0x15d547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0015d4b8(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  iVar2 = (int)((longlong)(int)uVar1 * (longlong)DAT_0015d548 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if (param_2 < (uint)((iVar2 >> 4) - (iVar2 >> 0x1f))) {
    iVar2 = (int)((longlong)(int)uVar1 * (longlong)DAT_0015d548 + ((ulonglong)uVar1 << 0x20) >> 0x20
                 );
    if ((uint)((iVar2 >> 4) - (iVar2 >> 0x1f)) <= param_2) {
      iVar2 = (int)((longlong)(int)uVar1 * (longlong)DAT_0015d548 + ((ulonglong)uVar1 << 0x20) >>
                   0x20);
      FUN_0010f7cc(9,&LAB_0015d54c,&LAB_0015d54c,param_2,(iVar2 >> 4) - (iVar2 >> 0x1f));
    }
    return *(int *)(param_1 + 4) + param_2 * 0x1c;
  }
  return 0;
}

