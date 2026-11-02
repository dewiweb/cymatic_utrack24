// rea decompile_all
// name: FUN_00169870
// address: 0x169870
// body: available
// range: 0x169870-0x16998f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00169870(ushort *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,uint param_11,uint param_12,uint param_13,uint param_14,
            uint param_15,uint param_16)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (((param_1[0x2c] & 0xf) == 4) &&
     ((((param_2 != 0 ||
        (iVar1 = FUN_001bed7c(param_1 + 0x10,param_3,param_3,param_4,param_1,0,param_3), iVar1 != 0)
        ) && (iVar1 = FUN_0017238c(*(undefined4 *)(param_1 + 0x1e),param_4,param_5), iVar1 != 0)) &&
      ((iVar1 = FUN_0017238c(*(undefined4 *)(param_1 + 0x20),param_6,param_7), iVar1 != 0 &&
       (iVar1 = FUN_0017238c(*(undefined4 *)(param_1 + 0x22),param_8,param_9), iVar1 != 0)))))) {
    uVar3 = FUN_0017222c(param_10,*(undefined4 *)(param_1 + 0x24));
    uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      if (param_11 != DAT_00169990) {
        uVar2 = (uint)*param_1;
      }
      if (param_11 == DAT_00169990 || uVar2 == param_11) {
        if (param_12 != DAT_00169990) {
          uVar2 = (uint)param_1[1];
        }
        if (((param_12 == DAT_00169990 || uVar2 == param_12) &&
            ((param_13 == 0xffffffff && param_14 == 0xffffffff ||
             (param_13 <= *(uint *)(param_1 + 2) && *(uint *)(param_1 + 2) <= param_14)))) &&
           ((param_15 == DAT_00169990 && param_16 == DAT_00169990 ||
            (param_15 <= param_1[4] && param_1[4] <= param_16)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}

