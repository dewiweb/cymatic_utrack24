// rea decompile_all
// name: FUN_00016664
// address: 0x16664
// body: available
// range: 0x16664-0x1688f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00016664(int param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = (uint)*(byte *)(param_1 + 0x34);
  if (uVar6 != 0) {
    if (param_2 == 0) {
      return 0;
    }
    bVar7 = *(byte *)(param_1 + 4) < uVar6;
    if (bVar7) {
      uVar6 = (uint)*(byte *)(param_1 + 0x33);
    }
    if (bVar7 && uVar6 < 4) {
      *(char *)(param_1 + 0x33) = (char)uVar6 + '\x01';
      *(int *)(param_1 + uVar6 * 4 + 0x3c) = param_2;
      *(char *)(param_1 + 0x32) = *(char *)(param_1 + 0x32) + *(char *)(param_1 + 4);
      *(char *)(param_1 + 0x34) = *(char *)(param_1 + 0x34) - *(char *)(param_1 + 4);
      return 0;
    }
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  iVar4 = DAT_00016890;
  *(int *)(DAT_00016890 + 8) = *(int *)(DAT_00016890 + 8) + 1;
  if (param_2 != 0) {
    bVar2 = *(byte *)(param_1 + 0x33);
    if (bVar2 < 4) {
      *(byte *)(param_1 + 0x33) = bVar2 + 1;
      *(int *)(param_1 + (uint)bVar2 * 4 + 0x3c) = param_2;
      *(char *)(param_1 + 0x32) = *(char *)(param_1 + 0x32) + *(char *)(param_1 + 4);
    }
    else {
      FUN_00012bfc();
      *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1;
    }
  }
  piVar1 = DAT_00016894;
  if ((*(uint *)(*DAT_000168a0 + 4) & 1 << (*(uint *)(*(int *)(param_1 + 0xc) + 0x14) & 0xff)) != 0)
  {
    *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
    return 1;
  }
  if ((*(byte *)(*(int *)(param_1 + 0xa0) + 0x12) & 1) != 0) {
    *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
    return 1;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x32);
  bVar7 = *(byte *)(param_1 + 0x30) <= uVar3;
  uVar6 = (uint)*(byte *)(param_1 + 0x2f) + (uint)bVar7;
  if (!bVar7) {
    if (*(byte *)(param_1 + 0x31) < uVar3) goto LAB_000167bc;
    uVar6 = uVar6 - 1;
  }
  uVar6 = uVar6 & 0xff;
LAB_000167bc:
  if (uVar3 < uVar6) {
    FUN_00016530(param_1,(uint)*(byte *)(param_1 + 0x2f));
  }
  else {
    *(uint *)(param_1 + 0x10) =
         *(uint *)(param_1 + 0x10) & 0xffffc0ff | ((int)*(short *)(param_1 + 0x22) & 0x3fU) << 8;
    iVar4 = *piVar1;
    if (iVar4 != 99) {
      *(int *)(param_1 + 0x10) = piVar1[1] << 0x1d | iVar4 << 0x1a;
    }
    puVar5 = (undefined4 *)((uint)*(byte *)(param_1 + 0x1c) * 4 + 0x20 + *(int *)(param_1 + 0xa0));
    *puVar5 = *(undefined4 *)(param_1 + 0x10);
    *puVar5 = *(undefined4 *)(param_1 + 0x14);
    *puVar5 = *(undefined4 *)(param_1 + 0x18);
    *(char *)(param_1 + 0x14) = (char)*(undefined4 *)(param_1 + 0x14) + (char)uVar6;
    *(undefined1 *)(param_1 + 0x2d) = 0;
    bVar2 = *(char *)(param_1 + 4) - *(char *)(param_1 + 0x2e);
    if (bVar2 < uVar6) {
      *(byte *)(param_1 + 0x2d) = (char)uVar6 - bVar2;
      uVar6 = (uint)bVar2;
    }
    FUN_000168a4(param_1,uVar6);
  }
  return 1;
}

