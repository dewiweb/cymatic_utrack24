// rea decompile_all
// name: FUN_000fe2f0
// address: 0xfe2f0
// body: available
// range: 0xfe2f0-0xfe42b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_000fe2f0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iStack_24;
  
  if (((((*(byte *)(param_1 + 0x22e) != param_2) ||
        (iVar1 = FUN_0022d4cc(param_1 + 0x234,param_3), iVar1 != 0)) ||
       (iVar1 = FUN_0022d4cc(param_1 + 0x23c,param_4), iVar1 != 0)) ||
      ((iVar1 = FUN_0022d4cc(param_1 + 0x244,param_5), iVar1 != 0 ||
       ((param_6 != 0 && (iVar1 = FUN_0022d4cc(param_1 + 0x24c,param_6), iVar1 != 0)))))) ||
     ((param_7 != 0 && (iVar1 = FUN_0022d4cc(param_1 + 0x250,param_7), iVar1 != 0)))) {
    iVar1 = FUN_000ffaf8(param_1,param_2,param_3,param_4);
    if (iVar1 == 0) {
      return 0;
    }
    iStack_24 = *(int *)(*(int *)(param_1 + 0x274) + 8);
    if (iStack_24 != *(int *)(param_1 + 0x274)) {
      do {
        (**(code **)(**(int **)(iStack_24 + 0x10) + 0x1c))
                  (*(int **)(iStack_24 + 0x10),*(undefined1 *)(param_1 + 0x22e),
                   *(undefined4 *)(param_1 + 0x234),*(undefined4 *)(param_1 + 0x23c));
        FUN_00209818(&iStack_24);
      } while (iStack_24 != *(int *)(param_1 + 0x274));
    }
  }
  return 1;
}

