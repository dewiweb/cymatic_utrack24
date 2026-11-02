// rea decompile_all
// name: FUN_000a3374
// address: 0xa3374
// body: available
// range: 0xa3374-0xa3503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000a3374(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    return false;
  }
  uVar1 = *(uint *)(param_1 + 0x630);
  param_2 = param_2 & 0xfffffffc;
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 0x670);
    if (uVar1 < param_2) {
      FUN_00002898(DAT_000a350c);
      return false;
    }
    if ((param_3 != 0xffffffff) &&
       (bVar5 = uVar1 < (param_3 & 0xfffffffc), uVar1 = param_3 & 0xfffffffc, bVar5)) {
      FUN_00002898(DAT_000a3510);
      return false;
    }
  }
  else {
    if (uVar1 < param_2) {
      FUN_00002898(DAT_000a3504);
      return false;
    }
    if ((param_3 != 0xffffffff) &&
       (bVar5 = uVar1 < (param_3 & 0xfffffffc), uVar1 = param_3 & 0xfffffffc, bVar5)) {
      FUN_00002898(DAT_000a3508);
      return false;
    }
  }
  if (*(uint *)(param_1 + 0x670) < param_2) {
    iVar4 = *(uint *)(param_1 + 0x670) * (uint)*(ushort *)(param_1 + 0x5f2) +
            *(int *)(param_1 + 0x618);
    uVar3 = _DAT_000a3514[1];
    *(undefined4 *)(param_1 + 0x680) = *_DAT_000a3514;
    *(undefined4 *)(param_1 + 0x684) = uVar3;
  }
  else {
    iVar4 = param_2 * *(ushort *)(param_1 + 0x5f2) + *(int *)(param_1 + 0x618);
    FUN_000a1d04(param_1);
  }
  iVar2 = FUN_0005f284(param_1,*(undefined4 *)(param_1 + 0x5ec),iVar4);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x624) = iVar4 - *(int *)(param_1 + 0x618);
    *(uint *)(param_1 + 0x674) = param_2;
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x66c) = 0;
    }
    else {
      FUN_00006604(param_2);
      *(undefined4 *)(param_1 + 0x66c) = extraout_r1;
    }
    if (*(uint *)(param_1 + 0x670) < uVar1) {
      iVar4 = (uint)*(ushort *)(param_1 + 0x5f2) * *(uint *)(param_1 + 0x670);
    }
    else {
      iVar4 = uVar1 * *(ushort *)(param_1 + 0x5f2);
    }
    *(int *)(param_1 + 0x620) = iVar4;
    *(uint *)(param_1 + 0x62c) = uVar1;
    *(uint *)(param_1 + 0x628) = param_2;
    FUN_000a1d04(param_1);
    iVar4 = FUN_000a1eb4(param_1,*(undefined1 *)(param_1 + 0x67e),1);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0x3b) = 0;
    }
    return iVar4 != 0;
  }
  FUN_00002898(s____ERROR__WaveFileDecoder__mark__000a3515 + 3);
  return false;
}

