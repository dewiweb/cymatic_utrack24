// rea decompile_all
// name: FUN_0004028c
// address: 0x4028c
// body: available
// range: 0x4028c-0x4037b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0004028c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = FUN_00035922(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc),
                       (uint)*(byte *)(param_1 + 7) << 0x18,(uint)*(byte *)(param_1 + 6) << 0x10,
                       param_4);
  iVar4 = param_1 + 0x10;
  if (iVar3 != 0) {
    iVar5 = iVar3 - *(int *)(param_1 + 4);
    FUN_0003591a(iVar4,*(int *)(param_1 + 4),iVar5);
    iVar3 = iVar3 + 1;
    *(undefined1 *)(param_1 + iVar5 + 0x10) = 0;
    *(char *)(param_1 + 4) = (char)iVar3;
    *(char *)(param_1 + 5) = (char)((uint)iVar3 >> 8);
    *(char *)(param_1 + 6) = (char)((uint)iVar3 >> 0x10);
    *(char *)(param_1 + 7) = (char)((uint)iVar3 >> 0x18);
    return iVar4;
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 < *(uint *)(param_1 + 8)) {
    iVar3 = *(uint *)(param_1 + 8) - uVar1;
    FUN_0003591a(iVar4,uVar1,iVar3);
    *(undefined1 *)(param_1 + iVar3 + 0x10) = 0;
    uVar2 = *(undefined4 *)(param_1 + 8);
    *(char *)(param_1 + 4) = (char)*(undefined3 *)(param_1 + 8);
    *(char *)(param_1 + 5) = (char)((uint)uVar2 >> 8);
    *(char *)(param_1 + 6) = (char)((uint)uVar2 >> 0x10);
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_1 + 0xb);
    return iVar4;
  }
  return 0;
}

