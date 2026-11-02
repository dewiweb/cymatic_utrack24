// rea decompile_all
// name: FUN_00192094
// address: 0x192094
// body: available
// range: 0x192094-0x1921cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00192094(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(short *)(param_1 + 4) != 0) {
    do {
      iVar1 = FUN_00198bcc(*param_1,*(undefined2 *)(param_1[2] + uVar3 * 8));
      if (((iVar1 != 0) && (iVar1 = FUN_001bed7c(iVar1,param_2), iVar1 != 0)) &&
         (*(short *)(param_1[2] + uVar3 * 8 + 2) == *(short *)(param_2 + 0xc))) break;
      uVar3 = uVar3 + 1 & 0xfffeffff;
    } while (uVar3 < *(ushort *)(param_1 + 4));
  }
  if (*(ushort *)(param_1 + 4) <= uVar3) {
    return 0;
  }
  FUN_00198540(*param_1,*(undefined2 *)(param_1[2] + uVar3 * 8));
  if (uVar3 < *(ushort *)(param_1 + 4) - 1) {
    do {
      FUN_001c6d4c(param_1[2] + uVar3 * 8,uVar3 * 8 + 8 + param_1[2]);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 4) - 1);
  }
  uVar3 = DAT_001921d0;
  uVar2 = *(ushort *)(param_1 + 4) - 1 & DAT_001921d0;
  *(short *)(param_1 + 4) = (short)uVar2;
  *(short *)(param_1[2] + uVar2 * 8 + 2) = (short)uVar3;
  *(short *)(param_1[2] + (uint)*(ushort *)(param_1 + 4) * 8) = (short)uVar3;
  *(undefined1 *)(param_1[2] + (uint)*(ushort *)(param_1 + 4) * 8 + 6) = 0xff;
  *(undefined2 *)(param_1[2] + (uint)*(ushort *)(param_1 + 4) * 8 + 4) = 0xff;
  return 1;
}

