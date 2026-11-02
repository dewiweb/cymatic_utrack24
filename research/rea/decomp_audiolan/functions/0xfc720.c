// rea decompile_all
// name: FUN_000fc720
// address: 0xfc720
// body: available
// range: 0xfc720-0xfc82f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000fc720(int param_1,int param_2,undefined4 param_3,int param_4,undefined2 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  
  if (param_2 == 0) {
    return DAT_000fc830;
  }
  if (param_4 != 0) {
    *(int *)(param_1 + 0x1d0) = param_2;
    *(undefined2 *)(param_1 + 0x1e4) = param_5;
    *(undefined4 *)(param_1 + 0x1d4) = param_3;
    *(undefined4 *)(param_1 + 0x1d8) = param_7;
    *(undefined4 *)(param_1 + 0x1dc) = param_6;
    *(undefined4 *)(param_1 + 0x1e0) = param_9;
    iVar1 = FUN_000fd09c(param_1 + 0x10,param_4,param_3);
    if (iVar1 == 0) {
      FUN_00109680(param_1 + 4,param_1 + 0x10);
      iVar1 = FUN_00100904(param_1 + 0x30,param_1,param_1 + 0x10,param_2);
      if (iVar1 == 0) {
        iVar1 = param_1 + 0x30;
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0x34) = 0;
          *(undefined4 *)(param_1 + 0x38) = 0;
          if (*(int *)(param_1 + 0x1bc) == 0) {
            *(int *)(param_1 + 0x1b8) = iVar1;
          }
          else {
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x1bc);
            *(int *)(*(int *)(param_1 + 0x1bc) + 8) = iVar1;
          }
          *(int *)(param_1 + 0x1bc) = iVar1;
          *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
        }
        *(undefined1 *)(param_1 + 0x1e6) = 1;
        return 0;
      }
    }
    FUN_000fc8c0(param_1);
    return iVar1;
  }
  return DAT_000fc834;
}

