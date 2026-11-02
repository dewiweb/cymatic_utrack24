// rea decompile_all
// name: FUN_000a23c0
// address: 0xa23c0
// body: available
// range: 0xa23c0-0xa2513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000a23c0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  uint uVar5;
  
  if ((*(char *)(param_1 + 0x38) == '\0') &&
     (uVar5 = (uint)*(byte *)(param_1 + 0x5e4), *(byte *)(param_1 + 0x5e5) != uVar5)) {
    if ((-1 < *(int *)(param_1 + 0x5ec)) && (iVar2 = FUN_0005f2d8(param_1), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x5ec) = 0xffffffff;
    }
    FUN_00003b88(param_1 + 0x5e8,param_1 + uVar5 * 0x54 + 0xa4,0x52);
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x20);
    uVar1 = (undefined1)(uVar5 + 1);
    if (0xf < (uVar5 + 1 & 0xff)) {
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x5e4) = uVar1;
    uVar5 = (uint)*(ushort *)(param_1 + 0x5f2) * *(int *)(param_1 + 0x628);
    if (*(uint *)(param_1 + 0x620) < uVar5) {
      uVar5 = *(uint *)(param_1 + 0x620);
    }
    if (*(uint *)(param_1 + 0x624) != uVar5) {
      *(uint *)(param_1 + 0x624) = uVar5;
      FUN_0005f284(param_1,*(undefined4 *)(param_1 + 0x5ec),*(int *)(param_1 + 0x618) + uVar5);
    }
    uVar5 = FUN_00006604(*(undefined4 *)(param_1 + 0x61c),*(undefined2 *)(DAT_000a2514 + param_1));
    *(uint *)(param_1 + 0x670) = uVar5;
    uVar3 = *(uint *)(param_1 + 0x628);
    *(uint *)(param_1 + 0x674) = uVar3;
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x66c) = 0;
    }
    else {
      FUN_00006604();
      *(undefined4 *)(param_1 + 0x66c) = extraout_r1;
    }
    if (uVar5 < uVar3) {
      uVar4 = DAT_000a2518[1];
      *(undefined4 *)(param_1 + 0x680) = *DAT_000a2518;
      *(undefined4 *)(param_1 + 0x684) = uVar4;
    }
    else {
      FUN_000a1d04(param_1);
    }
    iVar2 = FUN_000a1eb4(param_1,*(undefined1 *)(param_1 + 0x67e),1);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x3b) = 0;
    }
    return iVar2 != 0;
  }
  return false;
}

