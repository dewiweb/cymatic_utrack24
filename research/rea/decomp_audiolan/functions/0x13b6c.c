// rea decompile_all
// name: FUN_00013b6c
// address: 0x13b6c
// body: available
// range: 0x13b6c-0x13caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00013b6c(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x120) == 0) goto LAB_00013ca8;
  uVar5 = *(uint *)(param_1 + 0x11c);
  if ((int)uVar5 < 0) {
    if ((~param_2 & 0x30000000) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  else if (uVar5 == 0) {
    if ((~param_2 & 0x30000000) != 0) {
LAB_00013ca8:
      *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
      return;
    }
  }
  else if ((param_2 & 0x30000000) != *(uint *)(DAT_00014098 + (uVar5 & 1) * 4)) goto LAB_00013ca8;
  if (*(int *)(param_1 + 0x124) != 0) {
    uVar4 = *(uint *)(param_1 + 0x11c);
    iVar2 = ((int)(uVar4 + ((uint)((int)uVar4 >> 0x1f) >> 0x1c)) >> 4) * 2;
    uVar5 = 0x80 >> (((int)uVar4 / 2) % 8 & 0xffU);
    if ((uVar4 & 1) != 0) {
      iVar2 = iVar2 + 1;
    }
    if (uVar5 == 0x80) {
      *(undefined1 *)(*(int *)(param_1 + 0x124) + iVar2) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x124) + iVar2 + 0x30) = 0;
    }
    bVar1 = (byte)uVar5;
    if ((param_2 & 0x4000000) != 0) {
      *(byte *)(*(int *)(param_1 + 0x124) + iVar2) =
           *(byte *)(*(int *)(param_1 + 0x124) + iVar2) | bVar1;
    }
    if ((param_2 & 0x2000000) != 0) {
      *(byte *)(*(int *)(param_1 + 0x124) + iVar2 + 0x30) =
           *(byte *)(*(int *)(param_1 + 0x124) + iVar2 + 0x30) | bVar1;
    }
  }
  iVar2 = *(int *)(param_1 + 0x11c) + 1;
  *(int *)(param_1 + 0x11c) = iVar2;
  if (iVar2 < 0x180) {
    return;
  }
  *(undefined4 *)(param_1 + 0x11c) = 0;
  iVar2 = FUN_000c9168(*(undefined4 *)(param_1 + 0x120));
  if (iVar2 == *(int *)(param_1 + 0x124)) {
    FUN_000c9104(*(undefined4 *)(param_1 + 0x120));
  }
  uVar3 = FUN_000c9168(*(undefined4 *)(param_1 + 0x120));
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  return;
}

