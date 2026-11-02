// rea decompile_all
// name: FUN_001ad784
// address: 0x1ad784
// body: available
// range: 0x1ad784-0x1ad80f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001ad784(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00063a90(param_1 + 8,param_5,param_3,param_4,param_4);
  *(int *)(param_1 + 4) = param_3;
  iVar2 = param_3 * param_2 * 4;
  iVar1 = FUN_001f01c4(iVar2,param_4);
  *(int *)(param_1 + 0x50) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar3 = DAT_001ad810;
  }
  iVar2 = FUN_001cf080(param_1 + 0x10,iVar3,param_2,iVar1,iVar2);
  if (iVar2 != 0) {
    FUN_001eecc8(*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    return 0;
  }
  return 1;
}

