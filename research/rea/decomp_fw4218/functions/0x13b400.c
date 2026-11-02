// rea decompile_all
// name: FUN_0013b400
// address: 0x13b400
// body: available
// range: 0x13b400-0x13b55b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0013b400(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  
  uVar7 = DAT_0013b564;
  iVar6 = DAT_0013b560;
  iVar5 = DAT_0013b55c;
  uVar14 = 0;
  do {
    if (((*DAT_0013b568 & 1) == 0) &&
       (iVar9 = FUN_001c7162(DAT_0013b568), puVar8 = DAT_0013b56c, iVar9 != 0)) {
      iVar9 = DAT_0013b570 + -0x20;
      DAT_0013b56c[1] = DAT_0013b570;
      puVar8[2] = iVar9;
      puVar8[3] = 0;
      puVar8[4] = 1;
      uVar12 = DAT_0013b574;
      *puVar8 = uVar7;
      FUN_001c70ac(puVar8,DAT_0013b578,uVar12);
    }
    pbVar13 = (byte *)(iVar5 + uVar14 * 4);
    bVar1 = *pbVar13;
    bVar2 = pbVar13[1];
    bVar3 = pbVar13[2];
    bVar4 = pbVar13[3];
    *(undefined4 *)(iVar6 + 0x100) = 0;
    *(undefined4 *)(iVar6 + 0x104) = 0;
    *(undefined4 *)(iVar6 + 0x108) = 1;
    *(uint *)(iVar6 + 0x100) =
         (bVar2 & 1) << 5 | (bVar1 & 0xf) << 8 | 0x10000 | (bVar3 & 1) << 4 | bVar4 & 7;
    FUN_001d0130(100);
    uVar10 = *(uint *)(iVar6 + 0x100);
    uVar11 = uVar10 & 0xfffeffff;
    *(uint *)(iVar6 + 0x100) = uVar11;
    iVar15 = *(int *)(iVar6 + 0x104);
    iVar9 = *(int *)(iVar6 + 0x108) + -1;
    if ((uVar10 & 0x20000) != 0) {
      *(undefined4 *)(iVar6 + 0x108) = 1;
      *(undefined4 *)(iVar6 + 0x104) = 0;
      uVar11 = uVar10 & 0xfffcffff;
      iVar9 = DAT_0013b57c;
    }
    *(uint *)(iVar6 + 0x100) = uVar11 | 0x10000;
    uVar12 = FUN_00006604(iVar15 * 100,iVar9);
    FUN_00002898(s_<____30s__3u___(_d__d)_0013b581 + 3,*(undefined4 *)(_DAT_0013b580 + uVar14 * 4),
                 uVar12,iVar15,iVar9);
    uVar14 = uVar14 + 1;
  } while (uVar14 < 6);
  return 0;
}

