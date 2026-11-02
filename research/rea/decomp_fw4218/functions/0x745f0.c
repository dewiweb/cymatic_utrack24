// rea decompile_all
// name: FUN_000745f0
// address: 0x745f0
// body: available
// range: 0x745f0-0x747d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000745f0(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  FUN_00003c18(DAT_000747d8,0x10);
  puVar4 = DAT_000747dc;
  DAT_000747dc[1] = 0;
  iVar2 = DAT_000747e0;
  puVar4[2] = 0;
  FUN_00003c18(iVar2,0x40);
  iVar2 = DAT_000747e0;
  *(undefined1 *)(DAT_000747e0 + 0x3f) = 1;
  FUN_00003c18(iVar2 + 0x40,0x10);
  iVar2 = DAT_000747e4;
  uVar1 = 0;
  do {
    puVar5 = (undefined4 *)(iVar2 + uVar1 * 8);
    uVar1 = uVar1 + 2;
    *puVar5 = 0;
    puVar5[2] = 0;
  } while (uVar1 < 0x40);
  puVar5 = (undefined4 *)FUN_001f01c4(4,10);
  *puVar4 = puVar5;
  *puVar5 = 0x26000000;
  FUN_00044fdc(DAT_000747ec,*DAT_000747e8);
  iVar2 = DAT_000747f0;
  uVar1 = 0;
  do {
    if (uVar1 < 0x40) {
      *(uint *)(iVar2 + uVar1 * 0x40) = uVar1 | uVar1 << 0x10;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x40);
  FUN_000762f4(10,DAT_000747f4,0);
  FUN_000762f4(0xb,DAT_000747f8,0);
  FUN_000762f4(0xc,DAT_000747fc,0);
  FUN_000762f4(0xd,DAT_00074800,0);
  FUN_000763a8(10);
  FUN_0007640c(0xb);
  FUN_000763a8(0xc);
  FUN_000763a8(0xd);
  puVar4 = DAT_00074804 + 4;
  puVar5 = DAT_00074804 + 8;
  puVar6 = DAT_00074804 + 0xc;
  uVar1 = (uint)DAT_00074804 & (int)DAT_00074804 >> 0xc;
  *DAT_00074804 = 1;
  *puVar4 = 1;
  *puVar5 = 1;
  *puVar6 = 1;
  *(undefined4 *)(uVar1 + 0x10) = 5;
  iVar2 = FUN_001f01c4(0x34,1);
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00064398(iVar2,0x3e,1), piVar3 != (int *)0x0)) {
    (**(code **)(*piVar3 + 8))(piVar3,0x20);
    FUN_000640b8(piVar3,0xb);
    FUN_000640e8(piVar3,0);
    FUN_000640f4(piVar3,0xb);
    FUN_00064124(piVar3,0);
    FUN_000641c8(piVar3);
    piVar3[5] = -0x4c000000;
    iVar2 = DAT_00074808;
    *(undefined4 *)(DAT_00074808 + piVar3[1] * 0x40 + 0xc) = 0xb4000000;
    piVar3[6] = -0x40000000;
    *(undefined4 *)(iVar2 + piVar3[1] * 0x40 + 8) = 0xc0000000;
    return 1;
  }
  return 0;
}

