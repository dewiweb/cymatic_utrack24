// rea decompile_all
// name: FUN_00000478
// address: 0x478
// body: available
// range: 0x478-0x5cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00000478(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 uVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_14;
  
  puVar3 = DAT_000008d0;
  DAT_000008d0[4] = (uint)*(byte *)(param_1 + 9);
  puVar3[5] = (*(byte *)(param_1 + 0x10) & 0xf) << 0x18 |
              *(byte *)(param_1 + 10) & 0xf | (*(byte *)(param_1 + 0xb) & 0xf) << 4 |
              (*(byte *)(param_1 + 0xc) & 0xf) << 8 | (*(byte *)(param_1 + 0xd) & 0xf) << 0xc |
              (*(byte *)(param_1 + 0xe) & 0xf) << 0x10 | (*(byte *)(param_1 + 0xf) & 0xf) << 0x14 |
              (uint)*(byte *)(param_1 + 0x11) << 0x1c;
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 < 2) {
    uVar4 = 0;
  }
  else if (bVar1 < 3) {
    uVar4 = 1;
  }
  else if (bVar1 < 5) {
    uVar4 = 2;
  }
  else {
    uVar4 = 3;
  }
  local_14 = (uint)CONCAT11(*(byte *)(param_1 + 5),uVar4);
  bVar1 = *(byte *)(param_1 + 8);
  uVar2 = *(byte *)(param_1 + 6) & 0x1f;
  uVar5 = puVar3[1];
  bVar6 = *(char *)(param_1 + 4) == '\x01';
  if (bVar6) {
    uVar5 = uVar5 & 7;
  }
  if ((bVar6 && uVar5 == 1) &&
     (((uint)*(byte *)(param_1 + 5) != (*puVar3 & 0xffff) >> 8 ||
      (uVar2 != (*puVar3 & 0x1fffff) >> 0x10)))) {
    puVar3[1] = 0;
    puVar3[6] = 1;
  }
  *puVar3 = local_14 | uVar2 << 0x10 | (uint)bVar1 << 0x1f;
  puVar3[6] = 1;
  if (*(char *)(param_1 + 4) == '\0') {
    puVar3[1] = 0;
  }
  else {
    puVar3[1] = 1;
  }
  return;
}

