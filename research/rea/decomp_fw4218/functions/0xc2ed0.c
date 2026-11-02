// rea decompile_all
// name: FUN_000c2ed0
// address: 0xc2ed0
// body: available
// range: 0xc2ed0-0xc33e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_000c2ed0(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,uint param_6,
            int param_7,byte param_8,int param_9,byte *param_10,undefined1 param_11)

{
  byte bVar1;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  int local_40;
  uint local_3c;
  undefined4 local_2c [2];
  undefined1 uVar2;
  
  local_40 = (param_6 & 3) << 6;
  param_8 = param_8 & 0x7f;
  bVar3 = (byte)param_7 & 0x7f;
  bVar4 = (byte)param_2 & 0x7f;
  piVar7 = (int *)(param_1 + 0x4c8);
  if (param_3 == 0) {
    if (param_4 == 0 && param_5 == 2) {
      *(undefined1 *)(param_1 + 0xd6) = 2;
      *(undefined1 *)(param_1 + 0xd7) = 0;
      *(undefined4 *)(param_1 + 0xd8) = param_2;
      *(undefined1 *)(param_1 + 0xd5) = 0;
      *(undefined1 *)(param_1 + 0xd4) = 0;
      *(byte *)(*(int *)(param_1 + 0x4c8) + 0x84) =
           *(byte *)(*(int *)(param_1 + 0x4c8) + 0x84) & 0x80 | bVar4;
      *(undefined1 *)(param_1 + 0x1f6) = 2;
      *(undefined1 *)(param_1 + 0x1f7) = 0;
      *(undefined4 *)(param_1 + 0x1f8) = param_2;
      *(undefined1 *)(param_1 + 0x1f5) = 0;
      *(undefined1 *)(param_1 + 500) = 0;
      *(byte *)(*piVar7 + 0x80) = *(byte *)(*piVar7 + 0x80) & 0x80 | bVar4;
      if (*(int *)(param_1 + 0x314) == 1) {
        FUN_001fe1e4(local_48);
        *(byte *)(*(int *)(param_1 + 0x4c8) + 0x1b) =
             *(byte *)(*(int *)(param_1 + 0x4c8) + 0x1b) & 0xe0;
        FUN_001fe1f8(local_48[0]);
      }
      FUN_001fe1e4(local_50);
      if (param_7 != -1) {
        *(byte *)(*(int *)(param_1 + 0x4c8) + 0x82) = bVar3 | (byte)(param_9 << 7);
        *(byte *)(*piVar7 + 0x86) = bVar3 | (byte)(param_9 << 7);
        *(byte *)(*piVar7 + 0x83) = *(byte *)(*piVar7 + 0x83) & 0x80 | param_8;
        *(byte *)(*piVar7 + 0x87) = *(byte *)(*piVar7 + 0x87) & 0x80 | param_8;
      }
      if (*(int *)(param_1 + 0x314) == 1) {
        *(byte *)(*(int *)(param_1 + 0x4c8) + 0x1b) =
             *(byte *)(*(int *)(param_1 + 0x4c8) + 0x1b) & 0xe0;
        *(byte *)(*piVar7 + 0x1a) = (byte)local_40 | *(byte *)(*piVar7 + 0x1a) & 0x3f;
      }
      FUN_001fe1f8(local_50[0]);
      *param_10 = 0;
      return 1;
    }
    return 0;
  }
  bVar1 = (byte)param_3;
  uVar2 = (undefined1)param_4;
  if (*(int *)(param_1 + 0x314) == 0) {
    param_1 = param_1 + param_3 * 0x24;
    if (param_5 == 0) {
      *(undefined1 *)(param_1 + 0x1f7) = uVar2;
      *(undefined1 *)(param_1 + 0x1f6) = 0;
      *(undefined4 *)(param_1 + 0x1f8) = param_2;
      *(undefined1 *)(param_1 + 0x208) = param_11;
      *(byte *)(param_1 + 0x1f5) = bVar1;
      *(byte *)(param_1 + 500) = bVar1;
    }
    else {
      if (param_5 != 1) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0xd7) = uVar2;
      *(undefined1 *)(param_1 + 0xd6) = 1;
      *(undefined4 *)(param_1 + 0xd8) = param_2;
      *(undefined1 *)(param_1 + 0xe8) = param_11;
      *(byte *)(param_1 + 0xd5) = bVar1;
      *(byte *)(param_1 + 0xd4) = bVar1;
    }
    *param_10 = bVar1;
    return 1;
  }
  if (param_5 == 0) {
    uVar8 = 1;
    while (*(char *)(param_1 + uVar8 * 0x24 + 0x1f5) != -1) {
      uVar8 = uVar8 + 1 & 0xff;
      if (7 < uVar8) {
        return 0;
      }
    }
  }
  else {
    if (param_5 != 1) {
      if (param_5 != 2 || param_4 != 0) {
        return 0;
      }
      if (*(char *)(param_1 + 0xd5) != -1) {
        return 0;
      }
      *param_10 = 0;
      goto LAB_000c3174;
    }
    uVar8 = 1;
    while (*(char *)(param_1 + uVar8 * 0x24 + 0xd5) != -1) {
      uVar8 = uVar8 + 1 & 0xff;
      if (7 < uVar8) {
        return 0;
      }
    }
  }
  *param_10 = (byte)uVar8;
LAB_000c3174:
  local_3c = param_3 & 0xf;
  bVar5 = (byte)((param_4 & 3) << 4);
  if (param_5 == 0) {
    *(undefined1 *)(param_1 + (uint)*param_10 * 0x24 + 0x1f6) = 0;
    *(undefined1 *)(param_1 + (uint)*param_10 * 0x24 + 0x1f7) = uVar2;
    *(undefined4 *)(param_1 + (uint)*param_10 * 0x24 + 0x1f8) = param_2;
    *(byte *)(param_1 + (uint)*param_10 * 0x24 + 0x1f5) = bVar1;
    *(byte *)(param_1 + (uint)*param_10 * 0x24 + 500) = *param_10;
    iVar6 = (uint)*param_10 * 8 + 0x80;
    *(byte *)(*(int *)(param_1 + 0x4c8) + iVar6) =
         *(byte *)(*(int *)(param_1 + 0x4c8) + iVar6) & 0x80 | bVar4;
    FUN_001fe1e4(local_2c);
    if (param_7 != -1) {
      *(byte *)(*(int *)(param_1 + 0x4c8) + (uint)*param_10 * 8 + 0x82) =
           bVar3 | (byte)(param_9 << 7);
      iVar6 = (uint)*param_10 * 8 + 0x83;
      *(byte *)(*piVar7 + iVar6) = *(byte *)(*piVar7 + iVar6) & 0x80 | param_8;
    }
    *(byte *)(*(int *)(param_1 + 0x4c8) + 0x1a) = (byte)local_40 | (byte)local_3c & 0xf | bVar5;
    FUN_001fe1f8(local_2c[0]);
  }
  else {
    if (param_5 != 1) {
      return 0;
    }
    *(undefined1 *)(param_1 + (uint)*param_10 * 0x24 + 0xd6) = 1;
    *(undefined1 *)(param_1 + (uint)*param_10 * 0x24 + 0xd7) = uVar2;
    *(undefined4 *)(param_1 + (uint)*param_10 * 0x24 + 0xd8) = param_2;
    *(byte *)(param_1 + (uint)*param_10 * 0x24 + 0xd5) = bVar1;
    *(byte *)(param_1 + (uint)*param_10 * 0x24 + 0xd4) = *param_10;
    iVar6 = (uint)*param_10 * 8 + 0x84;
    *(byte *)(*(int *)(param_1 + 0x4c8) + iVar6) =
         *(byte *)(*(int *)(param_1 + 0x4c8) + iVar6) & 0x80 | bVar4;
    FUN_001fe1e4(local_2c);
    if (param_7 != -1) {
      *(byte *)(*(int *)(param_1 + 0x4c8) + (uint)*param_10 * 8 + 0x86) =
           bVar3 | (byte)(param_9 << 7);
      iVar6 = (uint)*param_10 * 8 + 0x87;
      *(byte *)(*piVar7 + iVar6) = *(byte *)(*piVar7 + iVar6) & 0x80 | param_8;
    }
    *(byte *)(*(int *)(param_1 + 0x4c8) + 0x1c) = (byte)local_40 | (byte)local_3c & 0xf | bVar5;
    FUN_001fe1f8(local_2c[0]);
  }
  return 1;
}

