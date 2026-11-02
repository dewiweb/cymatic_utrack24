// rea decompile_all
// name: FUN_00166674
// address: 0x166674
// body: available
// range: 0x166674-0x16672b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00166674(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_001c6a78();
  }
  iVar1 = FUN_00022724(param_2);
  iVar2 = FUN_001c6a94(iVar1 * 2 + 2,DAT_0016672c);
  *(int *)(param_1 + 0x40) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  thunk_FUN_00022754(iVar2,param_2,iVar1 + 1);
  iVar1 = FUN_0002223c(param_2);
  *(int *)(param_1 + 0x34) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_000221fc(iVar1,param_1 + 0x38);
  if (iVar1 != 0) {
    iVar1 = FUN_00022354(*(undefined4 *)(param_1 + 0x34),param_1 + 0x188,DAT_00166730,param_1);
    if (iVar1 != 0) {
      FUN_0014cd08(param_1 + 0xc,param_1 + 0x38);
      FUN_0015d028(param_1 + 0xdd0);
      return 1;
    }
    return 0;
  }
  return 0;
}

