// rea decompile_all
// name: FUN_00076170
// address: 0x76170
// body: available
// range: 0x76170-0x762cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00076170(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint local_20 [2];
  
  iVar3 = DAT_000762d0;
  *(undefined4 *)(DAT_000762d0 + 0x84) = 0xf0000;
  *(undefined4 *)(iVar3 + 0x80) = 0x100000;
  iVar6 = DAT_000762d8;
  *(int *)(iVar3 + 4) =
       DAT_000762d8 + ((int)(DAT_000762d4 + ((uint)(DAT_000762d4 >> 0x1f) >> 0x1e)) >> 2);
  iVar6 = iVar6 + -8 + ((int)(DAT_000762dc + ((uint)(DAT_000762dc >> 0x1f) >> 0x1e)) >> 2);
  *(int *)(iVar3 + 0x18) = iVar6;
  *(int *)(iVar3 + 0x1c) = iVar6;
  uVar5 = DAT_000762e4;
  puVar4 = DAT_000762e0;
  *DAT_000762e0 = DAT_000762e4;
  puVar4[1] = 0;
  iVar6 = 0;
  iVar11 = 0x26;
  puVar7 = puVar4 + 1;
  do {
    puVar4[iVar6 * 2] = uVar5;
    puVar7[2] = 0;
    (puVar4 + iVar6 * 2)[2] = uVar5;
    iVar11 = iVar11 + -1;
    iVar6 = iVar6 + 2;
    puVar7 = puVar7 + 4;
    *puVar7 = 0;
  } while (iVar11 != 0);
  pcVar8 = (char *)FUN_001dc42c();
  uVar9 = 0;
  iVar6 = 8;
  puVar10 = (uint *)(pcVar8 + 4);
  local_20[0] = 0;
  local_20[1] = 0;
  do {
    uVar12 = *puVar10;
    uVar1 = uVar9 >> 2;
    if (*pcVar8 == '\x01') {
      uVar12 = uVar12 | 0x80;
    }
    uVar2 = uVar9 & 3;
    iVar6 = iVar6 + -1;
    puVar10 = puVar10 + 2;
    pcVar8 = pcVar8 + 8;
    uVar9 = uVar9 + 1;
    local_20[uVar1] = local_20[uVar1] | uVar12 << (uVar2 << 3);
  } while (iVar6 != 0);
  *(uint *)(iVar3 + 0x100) = local_20[0];
  *(uint *)(iVar3 + 0x104) = local_20[1];
  iVar6 = FUN_001dc42c();
  uVar9 = 0;
  do {
    if (*(int *)(iVar6 + uVar9 * 8 + 4) == 1) {
      *(int *)(iVar3 + 0x88) = 1 << (uVar9 & 0xff);
      goto LAB_000762b4;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 8);
  *(undefined4 *)(iVar3 + 0x180) = 2;
LAB_000762b4:
  *(undefined4 *)(iVar3 + 0x84) = 1;
  FUN_00044fdc(DAT_000762ec,*DAT_000762e8);
  return;
}

