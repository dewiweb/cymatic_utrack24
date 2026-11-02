// rea decompile_all
// name: FUN_000d0044
// address: 0xd0044
// body: available
// range: 0xd0044-0xd00ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000d0044(ushort *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  puVar2 = DAT_000d0104;
  iVar1 = DAT_000d0100;
  iVar3 = 1;
  uVar4 = *(uint *)(DAT_000d0100 + 0x10);
  uVar5 = uVar4;
  while (uVar5 < 7) {
    iVar3 = iVar3 + 1;
    uVar5 = iVar3 * uVar4;
  }
  uVar6 = 0;
  uVar5 = uVar4 * iVar3 - 6 & 0x3f | 0x80000000;
  do {
    uVar5 = uVar5 & 0xfffffcff | (uVar6 & 3) << 8;
    *(uint *)(iVar1 + 0xf0) = uVar5;
    do {
      uVar4 = *puVar2;
    } while ((uVar4 & 0x80000000) == 0);
  } while (((uVar4 & 0x20000000) != 0) && (uVar6 = uVar6 + 1, uVar6 < 4));
  if ((uVar4 & 0x70000000) != 0) {
    return 0;
  }
  *param_1 = (ushort)((uVar4 << 10) >> 0x1a);
  param_1[1] = (ushort)((uVar4 << 0x14) >> 0x1c);
  param_1[2] = (ushort)uVar4 & 0xf;
  param_1[3] = (ushort)((uVar5 << 0x16) >> 0x1e);
  return 1;
}

