// rea decompile_all
// name: FUN_001a0e74
// address: 0x1a0e74
// body: available
// range: 0x1a0e74-0x1a12ab inclusive
// range: 0x1a1350-0x1a1581 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001a0e74(int *param_1,ushort *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  undefined1 uStack_59;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar6 = *param_1;
  uVar8 = param_1[2];
  uVar7 = param_1[1];
  uVar9 = param_1[3];
  iVar11 = 0x10;
  puVar10 = &local_58;
  do {
    uVar3 = *param_2;
    pbVar1 = (byte *)((int)param_2 + 3);
    puVar2 = param_2 + 1;
    param_2 = param_2 + 2;
    *puVar10 = (uint)uVar3 | (uint)(byte)*puVar2 << 0x10 | (uint)*pbVar1 << 0x18;
    puVar10 = puVar10 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  uVar5 = (uVar7 & uVar8 | uVar9 & ~uVar7) + DAT_001a12ac + local_58 + iVar6;
  uVar5 = (uVar5 >> 0x19 | uVar5 * 0x80) + uVar7;
  uVar9 = (uVar5 & uVar7 | uVar8 & ~uVar5) + DAT_001a12b0 + local_54 + uVar9;
  uVar9 = (uVar9 >> 0x14 | uVar9 * 0x1000) + uVar5;
  uVar8 = (uVar9 & uVar5 | uVar7 & ~uVar9) + DAT_001a12b4 + local_50 + uVar8;
  uVar12 = (uVar8 >> 0xf | uVar8 * 0x20000) + uVar9;
  uVar7 = (uVar12 & uVar9 | uVar5 & ~uVar12) + DAT_001a12b8 + local_4c + uVar7;
  uVar8 = (uVar7 >> 10 | uVar7 * 0x400000) + uVar12;
  uVar7 = (uVar8 & uVar12 | uVar9 & ~uVar8) + DAT_001a12bc + local_48 + uVar5;
  uVar7 = (uVar7 >> 0x19 | uVar7 * 0x80) + uVar8;
  uVar9 = (uVar7 & uVar8 | uVar12 & ~uVar7) + DAT_001a12c0 + local_44 + uVar9;
  uVar9 = (uVar9 >> 0x14 | uVar9 * 0x1000) + uVar7;
  uVar5 = (uVar9 & uVar7 | uVar8 & ~uVar9) + DAT_001a12c4 + local_40 + uVar12;
  uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) + uVar9;
  uVar8 = (uVar5 & uVar9 | uVar7 & ~uVar5) + DAT_001a12c8 + local_3c + uVar8;
  uVar8 = (uVar8 >> 10 | uVar8 * 0x400000) + uVar5;
  uVar7 = (uVar8 & uVar5 | uVar9 & ~uVar8) + DAT_001a12cc + local_38 + uVar7;
  uVar7 = (uVar7 >> 0x19 | uVar7 * 0x80) + uVar8;
  uVar9 = (uVar7 & uVar8 | uVar5 & ~uVar7) + DAT_001a12d0 + local_34 + uVar9;
  uVar9 = (uVar9 >> 0x14 | uVar9 * 0x1000) + uVar7;
  uVar5 = (uVar9 & uVar7 | uVar8 & ~uVar9) + DAT_001a12d4 + local_30 + uVar5;
  uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) + uVar9;
  uVar8 = (uVar5 & uVar9 | uVar7 & ~uVar5) + DAT_001a12d8 + local_2c + uVar8;
  uVar8 = (uVar8 >> 10 | uVar8 * 0x400000) + uVar5;
  uVar7 = (uVar8 & uVar5 | uVar9 & ~uVar8) + DAT_001a12dc + local_28 + uVar7;
  uVar7 = (uVar7 >> 0x19 | uVar7 * 0x80) + uVar8;
  uVar9 = (uVar7 & uVar8 | uVar5 & ~uVar7) + DAT_001a12e0 + local_24 + uVar9;
  uVar9 = (uVar9 >> 0x14 | uVar9 * 0x1000) + uVar7;
  uVar5 = (uVar9 & uVar7 | uVar8 & ~uVar9) + DAT_001a12e4 + local_20 + uVar5;
  uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) + uVar9;
  uVar8 = (uVar5 & uVar9 | uVar7 & ~uVar5) + DAT_001a12e8 + local_1c + uVar8;
  uVar8 = (uVar8 >> 10 | uVar8 * 0x400000) + uVar5;
  uVar7 = (uVar8 & uVar9 | uVar5 & ~uVar9) + DAT_001a12ec + local_54 + uVar7;
  uVar7 = (uVar7 >> 0x1b | uVar7 * 0x20) + uVar8;
  uVar9 = (uVar7 & uVar5 | uVar8 & ~uVar5) + DAT_001a12f0 + local_40 + uVar9;
  uVar9 = (uVar9 >> 0x17 | uVar9 * 0x200) + uVar7;
  uVar5 = (uVar9 & uVar8 | uVar7 & ~uVar8) + DAT_001a12f4 + local_2c + uVar5;
  uVar5 = (uVar5 >> 0x12 | uVar5 * 0x4000) + uVar9;
  uVar8 = (uVar5 & uVar7 | uVar9 & ~uVar7) + DAT_001a12f8 + local_58 + uVar8;
  uVar8 = (uVar8 >> 0xc | uVar8 * 0x100000) + uVar5;
  uVar7 = (uVar8 & uVar9 | uVar5 & ~uVar9) + DAT_001a12fc + local_44 + uVar7;
  uVar7 = (uVar7 >> 0x1b | uVar7 * 0x20) + uVar8;
  uVar9 = (uVar7 & uVar5 | uVar8 & ~uVar5) + DAT_001a1300 + local_30 + uVar9;
  uVar9 = (uVar9 >> 0x17 | uVar9 * 0x200) + uVar7;
  uVar5 = (uVar9 & uVar8 | uVar7 & ~uVar8) + DAT_001a1304 + local_1c + uVar5;
  uVar5 = (uVar5 >> 0x12 | uVar5 * 0x4000) + uVar9;
  uVar8 = (uVar5 & uVar7 | uVar9 & ~uVar7) + DAT_001a1308 + local_48 + uVar8;
  uVar8 = (uVar8 >> 0xc | uVar8 * 0x100000) + uVar5;
  uVar7 = (uVar8 & uVar9 | uVar5 & ~uVar9) + DAT_001a130c + local_34 + uVar7;
  uVar7 = (uVar7 >> 0x1b | uVar7 * 0x20) + uVar8;
  uVar9 = (uVar7 & uVar5 | uVar8 & ~uVar5) + DAT_001a1310 + local_20 + uVar9;
  uVar9 = (uVar9 >> 0x17 | uVar9 * 0x200) + uVar7;
  uVar5 = (uVar9 & uVar8 | uVar7 & ~uVar8) + DAT_001a1314 + local_4c + uVar5;
  uVar5 = (uVar5 >> 0x12 | uVar5 * 0x4000) + uVar9;
  uVar8 = (uVar5 & uVar7 | uVar9 & ~uVar7) + DAT_001a1318 + local_38 + uVar8;
  uVar8 = (uVar8 >> 0xc | uVar8 * 0x100000) + uVar5;
  uVar7 = (uVar8 & uVar9 | uVar5 & ~uVar9) + DAT_001a131c + local_24 + uVar7;
  uVar7 = (uVar7 >> 0x1b | uVar7 * 0x20) + uVar8;
  uVar9 = (uVar7 & uVar5 | uVar8 & ~uVar5) + DAT_001a1320 + local_50 + uVar9;
  uVar9 = (uVar9 >> 0x17 | uVar9 * 0x200) + uVar7;
  uVar5 = (uVar9 & uVar8 | uVar7 & ~uVar8) + DAT_001a1324 + local_3c + uVar5;
  uVar5 = (uVar5 >> 0x12 | uVar5 * 0x4000) + uVar9;
  uVar8 = (uVar5 & uVar7 | uVar9 & ~uVar7) + DAT_001a1328 + local_28 + uVar8;
  uVar8 = (uVar8 >> 0xc | uVar8 * 0x100000) + uVar5;
  uVar7 = local_44 + uVar7 + (uVar8 ^ uVar5 ^ uVar9) + DAT_001a132c;
  uVar7 = (uVar7 >> 0x1c | uVar7 * 0x10) + uVar8;
  uVar9 = local_38 + uVar9 + (uVar7 ^ uVar8 ^ uVar5) + DAT_001a1330;
  uVar9 = (uVar9 >> 0x15 | uVar9 * 0x800) + uVar7;
  uVar5 = local_2c + uVar5 + (uVar9 ^ uVar7 ^ uVar8) + DAT_001a1334;
  uVar5 = (uVar5 >> 0x10 | uVar5 * 0x10000) + uVar9;
  uVar8 = local_20 + uVar8 + (uVar5 ^ uVar9 ^ uVar7) + DAT_001a1338;
  uVar8 = (uVar8 >> 9 | uVar8 * 0x800000) + uVar5;
  uVar7 = local_54 + uVar7 + (uVar8 ^ uVar5 ^ uVar9) + DAT_001a133c;
  uVar7 = (uVar7 >> 0x1c | uVar7 * 0x10) + uVar8;
  uVar9 = local_48 + uVar9 + (uVar7 ^ uVar8 ^ uVar5) + DAT_001a1340;
  uVar9 = (uVar9 >> 0x15 | uVar9 * 0x800) + uVar7;
  uVar5 = local_3c + uVar5 + (uVar9 ^ uVar7 ^ uVar8) + DAT_001a1344;
  uVar5 = (uVar5 >> 0x10 | uVar5 * 0x10000) + uVar9;
  uVar8 = local_30 + uVar8 + (uVar5 ^ uVar9 ^ uVar7) + DAT_001a1348;
  uVar8 = (uVar8 >> 9 | uVar8 * 0x800000) + uVar5;
  uVar7 = local_24 + uVar7 + (uVar8 ^ uVar5 ^ uVar9) + DAT_001a134c;
  uVar7 = (uVar7 >> 0x1c | uVar7 * 0x10) + uVar8;
  uVar9 = local_58 + uVar9 + (uVar7 ^ uVar8 ^ uVar5) + DAT_001a1584;
  uVar9 = (uVar9 >> 0x15 | uVar9 * 0x800) + uVar7;
  uVar5 = local_4c + uVar5 + (uVar9 ^ uVar7 ^ uVar8) + DAT_001a1588;
  uVar5 = (uVar5 >> 0x10 | uVar5 * 0x10000) + uVar9;
  uVar8 = local_40 + uVar8 + (uVar5 ^ uVar9 ^ uVar7) + DAT_001a158c;
  uVar8 = (uVar8 >> 9 | uVar8 * 0x800000) + uVar5;
  uVar7 = local_34 + uVar7 + (uVar8 ^ uVar5 ^ uVar9) + DAT_001a1590;
  uVar7 = (uVar7 >> 0x1c | uVar7 * 0x10) + uVar8;
  uVar9 = local_28 + uVar9 + (uVar7 ^ uVar8 ^ uVar5) + DAT_001a1594;
  uVar9 = (uVar9 >> 0x15 | uVar9 * 0x800) + uVar7;
  uVar5 = local_1c + uVar5 + (uVar9 ^ uVar7 ^ uVar8) + DAT_001a1598;
  uVar5 = (uVar5 >> 0x10 | uVar5 * 0x10000) + uVar9;
  uVar8 = local_50 + uVar8 + (uVar5 ^ uVar9 ^ uVar7) + DAT_001a159c;
  uVar8 = (uVar8 >> 9 | uVar8 * 0x800000) + uVar5;
  uVar7 = local_58 + uVar7 + ((~uVar9 | uVar8) ^ uVar5) + DAT_001a15a0;
  uVar7 = (uVar7 >> 0x1a | uVar7 * 0x40) + uVar8;
  uVar9 = local_3c + uVar9 + ((~uVar5 | uVar7) ^ uVar8) + DAT_001a15a4;
  uVar9 = (uVar9 >> 0x16 | uVar9 * 0x400) + uVar7;
  uVar5 = local_20 + uVar5 + ((~uVar8 | uVar9) ^ uVar7) + DAT_001a15a8;
  uVar5 = (uVar5 >> 0x11 | uVar5 * 0x8000) + uVar9;
  uVar8 = local_44 + uVar8 + ((~uVar7 | uVar5) ^ uVar9) + DAT_001a15ac;
  uVar8 = (uVar8 >> 0xb | uVar8 * 0x200000) + uVar5;
  uVar7 = local_28 + uVar7 + ((~uVar9 | uVar8) ^ uVar5) + DAT_001a15b0;
  uVar7 = (uVar7 >> 0x1a | uVar7 * 0x40) + uVar8;
  uVar9 = local_4c + uVar9 + ((~uVar5 | uVar7) ^ uVar8) + DAT_001a15b4;
  uVar9 = (uVar9 >> 0x16 | uVar9 * 0x400) + uVar7;
  uVar5 = local_30 + uVar5 + ((~uVar8 | uVar9) ^ uVar7) + DAT_001a15b8;
  uVar5 = (uVar5 >> 0x11 | uVar5 * 0x8000) + uVar9;
  uVar8 = local_54 + uVar8 + ((~uVar7 | uVar5) ^ uVar9) + DAT_001a15bc;
  uVar8 = (uVar8 >> 0xb | uVar8 * 0x200000) + uVar5;
  uVar7 = local_38 + uVar7 + ((~uVar9 | uVar8) ^ uVar5) + DAT_001a15c0;
  uVar7 = (uVar7 >> 0x1a | uVar7 * 0x40) + uVar8;
  uVar9 = local_1c + uVar9 + ((~uVar5 | uVar7) ^ uVar8) + DAT_001a15c4;
  uVar9 = (uVar9 >> 0x16 | uVar9 * 0x400) + uVar7;
  uVar5 = local_40 + uVar5 + ((~uVar8 | uVar9) ^ uVar7) + DAT_001a15c8;
  uVar5 = (uVar5 >> 0x11 | uVar5 * 0x8000) + uVar9;
  uVar8 = local_24 + uVar8 + ((~uVar7 | uVar5) ^ uVar9) + DAT_001a15cc;
  uVar8 = (uVar8 >> 0xb | uVar8 * 0x200000) + uVar5;
  uVar7 = local_48 + uVar7 + ((~uVar9 | uVar8) ^ uVar5) + DAT_001a15d0;
  uVar7 = (uVar7 >> 0x1a | uVar7 * 0x40) + uVar8;
  uVar9 = local_2c + uVar9 + ((~uVar5 | uVar7) ^ uVar8) + DAT_001a15d4;
  uVar9 = (uVar9 >> 0x16 | uVar9 * 0x400) + uVar7;
  uVar5 = local_50 + uVar5 + ((~uVar8 | uVar9) ^ uVar7) + DAT_001a15d8;
  uVar5 = (uVar5 >> 0x11 | uVar5 * 0x8000) + uVar9;
  uVar8 = local_34 + uVar8 + ((~uVar7 | uVar5) ^ uVar9) + DAT_001a15dc;
  *param_1 = *param_1 + uVar7;
  param_1[1] = param_1[1] + (uVar8 >> 0xb | uVar8 * 0x200000) + uVar5;
  param_1[2] = param_1[2] + uVar5;
  param_1[3] = param_1[3] + uVar9;
  puVar4 = &uStack_59;
  iVar6 = 0x20;
  do {
    puVar4[1] = 0;
    puVar4 = puVar4 + 2;
    iVar6 = iVar6 + -1;
    *puVar4 = 0;
  } while (iVar6 != 0);
  return;
}

