// rea decompile_all
// name: FUN_00158d58
// address: 0x158d58
// body: available
// range: 0x158d58-0x158fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00158d58(undefined4 *param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  
  puVar4 = DAT_00158fac;
  iVar10 = DAT_00158fa8;
  iVar5 = 1;
  uVar9 = *(uint *)(DAT_00158fa8 + 0x10);
  uVar12 = uVar9;
  while (uVar12 < 7) {
    iVar5 = iVar5 + 1;
    uVar12 = iVar5 * uVar9;
  }
  uVar12 = 0;
  uVar9 = uVar9 * iVar5 - 6 & 0x3f | 0x80000000;
  do {
    uVar11 = uVar12 & 3;
    uVar9 = uVar9 & 0xfffffcff | uVar11 << 8;
    *(uint *)(iVar10 + 0xf0) = uVar9;
    do {
      uVar6 = *puVar4;
    } while ((uVar6 & 0x80000000) == 0);
  } while (((uVar6 & 0x20000000) != 0) && (uVar12 = uVar12 + 1, uVar12 < 4));
  if ((uVar6 & 0x70000000) != 0) {
    return 0;
  }
  uVar1 = (ushort)((uVar6 << 10) >> 0x1a);
  uVar2 = (ushort)uVar6 & 0xf;
  uVar3 = (ushort)((uVar6 << 0x14) >> 0x1c);
  iVar10 = iVar10 + param_2 * 0x80;
  *(uint *)(iVar10 + 0x144) = (uint)uVar2 | (uint)uVar3 << 8 | (uint)uVar1 << 0x10 | uVar11 << 0x1c;
  uVar7 = FUN_001e3fe4(param_3);
  uVar8 = FUN_001e3fe4(*param_1);
  uVar7 = FUN_001e3d8c(uVar8,uVar7);
  uVar13 = FUN_001e3c58();
  FUN_001e43b8((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0xfffffffc);
  iVar5 = FUN_001e34dc();
  uVar9 = iVar5 * 2 + 2;
  uVar8 = FUN_001e3fe4(uVar9);
  uVar7 = FUN_001e3d8c(uVar7,uVar8);
  uVar13 = FUN_001e3c58();
  FUN_001e3a58((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,DAT_00158fb0);
  uVar12 = FUN_001e34dc();
  if (3 < uVar12) {
    uVar12 = 3;
  }
  uVar8 = FUN_001e3fe4(uVar12);
  uVar7 = FUN_001e4220(uVar8,uVar7);
  uVar7 = FUN_001e4234(uVar7,DAT_00158fb4);
  *(uint *)(iVar10 + 0x148) = (uVar12 & 3) << 0x10 | uVar9 & 0x3fff;
  uVar12 = FUN_001e3f60(uVar7);
  uVar8 = FUN_001e3fe4();
  uVar7 = FUN_001e4220(uVar8,uVar7);
  uVar11 = (uint)uVar3;
  uVar8 = FUN_001e3fe4((uVar1 * uVar11 + (uint)uVar2) * 0x800);
  FUN_001e400c(uVar8,uVar7);
  iVar5 = FUN_001e3f60();
  uVar9 = FUN_00006158(iVar5,uVar11 << 0xb);
  *(uint *)(iVar10 + 0x140) =
       iVar5 + uVar11 * uVar9 * -0x800 & 0x7fff | (uVar9 & 0x3f) << 0xf | (uVar12 & 1) << 0x15 |
       0x80000000;
  *(uint *)(iVar10 + 0x148) = *(uint *)(iVar10 + 0x148) | 0x100000;
  return 1;
}

