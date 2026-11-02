// rea decompile_all
// name: FUN_0003b56c
// address: 0x3b56c
// body: available
// range: 0x3b56c-0x3b5f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0003b56c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((iVar2 == -2) || (iVar2 == -4)) {
    FUN_00024642(0,DAT_0003b5fc,iVar2,*(undefined4 *)(param_2 + 0x114));
    return 0;
  }
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x24) != *(int *)(param_2 + 200)) {
      return 0;
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 0x114);
    if (((iVar4 != 0) && (iVar4 != -2)) && (iVar2 != iVar4)) {
      return 0;
    }
    if (*(short *)(param_2 + 0x12e) != 0) {
      return 0;
    }
  }
  uVar3 = (uint)*(ushort *)(param_1 + 2);
  if (uVar3 != 5) {
    uVar1 = (uint)*(ushort *)(param_2 + 0x230);
    if ((uVar3 != uVar1) && (uVar1 != 0xff)) {
      if (uVar3 != 0x2f) {
        return 0;
      }
      if (0xfe < uVar1) {
        return 0;
      }
      if (((uint)*(byte *)(*(int *)(param_1 + 0x20) + (*(ushort *)(param_2 + 0x230) >> 3) + 4) &
          0x80U >> (uVar1 & 7)) != 0) {
        return 0;
      }
    }
  }
  if ((*(short *)(param_1 + 4) != *(short *)(param_2 + 0x232)) &&
     (*(short *)(param_2 + 0x232) != 0xff)) {
    return 0;
  }
  return 1;
}

