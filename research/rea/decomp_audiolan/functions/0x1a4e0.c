// rea decompile_all
// name: FUN_0001a4e0
// address: 0x1a4e0
// body: available
// range: 0x1a4e0-0x1a52f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001a4e0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(undefined1 *)(param_2 + 0x79) = 1;
    iVar1 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = iVar1;
    if (*(int *)(param_1 + 0x2c) != iVar1) {
      FUN_00024642(0,s____s__Locking_Failure__mDNS_busy_0001a532 + 2,_DAT_0001a530,
                   *(int *)(param_1 + 0x2c),iVar1);
      param_4 = iVar1;
    }
    (**(code **)(param_2 + 0x3c))(param_1,param_2,0,*(code **)(param_2 + 0x3c),param_4);
    if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
      FUN_00024642(0,s__s__Unlocking_Failure__mDNS_busy_0001a574,_DAT_0001a530,
                   *(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x30));
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  return;
}

