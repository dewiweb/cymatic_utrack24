// rea decompile_all
// name: FUN_0018715c
// address: 0x18715c
// body: available
// range: 0x18715c-0x187231 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0018715c(int param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  
  iVar1 = FUN_001775f0(param_1,1,0,0);
  if (iVar1 == DAT_00187234) {
    return DAT_00187234;
  }
  FUN_00187430(param_1);
  FUN_001a703c(*(undefined4 *)(param_1 + 0xa4));
  FUN_001a7116(*(undefined4 *)(param_1 + 0xa4));
  FUN_001a70a4(*(undefined4 *)(param_1 + 0xa4));
  FUN_001a7188(*(undefined4 *)(param_1 + 0xa4));
  FUN_001a6b44(*(undefined4 *)(param_1 + 0xa4));
  FUN_001a6924(*(undefined4 *)(param_1 + 0xa4));
  FUN_001a4938(*(undefined4 *)(param_1 + 0xa4));
  FUN_001a46b4(*(undefined4 *)(param_1 + 0xa4));
  FUN_00177c60(param_1);
  FUN_001783f2(param_1);
  FUN_00178354(param_1);
  FUN_00178478(param_1);
  FUN_00178208(param_1);
  FUN_00187fa4(param_1);
  FUN_001a44cc(&local_18,0);
  iVar1 = param_1 + 0xb8;
  if ((*(int *)(param_1 + 0xb8) == 0) && (*(int *)(param_1 + 0xbc) == 0)) {
    FUN_001a44cc(iVar1,0);
    FUN_0017da6c(iVar1,*(undefined4 *)(param_1 + 0xb4));
  }
  if ((*(int *)(param_1 + 0xb8) <= local_18) &&
     ((local_18 != *(int *)(param_1 + 0xb8) || (*(int *)(param_1 + 0xbc) <= local_14)))) {
    FUN_001a44cc(iVar1,0);
    FUN_0017da6c(iVar1,*(undefined4 *)(param_1 + 0xb4));
    if (*(code **)(param_1 + 0x50) != entry) {
      (**(code **)(param_1 + 0x50))(param_1);
    }
  }
  return 0;
}

