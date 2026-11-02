// rea decompile_all
// name: FUN_001d6264
// address: 0x1d6264
// body: available
// range: 0x1d6264-0x1d62a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001d6264(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_001d62b0;
  *(uint *)(DAT_001d62b0 + 8) = DAT_001d62ac & 0xfffffffc;
  iVar2 = FUN_001df0dc(s_208_67_222_222_001d62b4);
  if (*(int *)(iVar1 + 4) == 0) {
    iVar3 = FUN_001ff2cc();
    *(int *)(iVar1 + 4) = iVar3;
    if (iVar3 != 0) {
      FUN_001fee64(iVar3,DAT_001d62c4,0);
      FUN_001ff2f2(*(undefined4 *)(iVar1 + 4),DAT_001d62c8,0);
      if ((*(int *)(iVar1 + 4) != 0) && (iVar2 != 0)) {
        *DAT_001d62cc = iVar2;
      }
    }
  }
  return;
}

