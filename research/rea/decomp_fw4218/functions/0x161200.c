// rea decompile_all
// name: FUN_00161200
// address: 0x161200
// body: available
// range: 0x161200-0x16133b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00161200(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 4);
  while( true ) {
    iVar2 = FUN_00172670(param_2,iVar7);
    bVar8 = iVar2 < 0;
    bVar9 = iVar2 == 0;
    if (0 < iVar2) {
      iVar2 = 1;
    }
    if (bVar8) {
      iVar2 = 0;
    }
    if (bVar9) break;
    iVar5 = *(int *)(iVar7 + iVar2 * 4 + 0x2c);
    if (iVar5 == 0) {
      return 0;
    }
    bVar1 = 0;
    if (iVar2 != 0) {
      bVar1 = *(byte *)(iVar7 + 0x34);
    }
    iVar7 = iVar5;
    if (iVar2 != 0 && (bVar1 & 0x80) != 0) {
      return 0;
    }
  }
  if (iVar7 == 0) {
    return 0;
  }
  if (*(char *)(iVar7 + 0x1c) != '\x01') {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar5 = iVar2;
  if (iVar2 != 0) {
    do {
      iVar3 = FUN_0014cc60(param_4,iVar2);
      bVar8 = iVar3 < 0;
      bVar9 = iVar3 == 0;
      if (0 < iVar3) {
        iVar3 = 1;
      }
      if (bVar8) {
        iVar3 = 0;
      }
      if (bVar9) {
        iVar5 = iVar2;
        if (iVar2 != 0) goto LAB_00161308;
        break;
      }
      iVar6 = *(int *)(iVar2 + iVar3 * 4 + 0x10);
      iVar5 = 0;
      if (iVar6 == 0) break;
      bVar1 = 0;
      if (iVar3 != 0) {
        bVar1 = *(byte *)(iVar2 + 0x18);
      }
      iVar2 = iVar6;
    } while (iVar3 == 0 || (bVar1 & 0x80) == 0);
  }
  iVar2 = FUN_001c6b14(0x1c,DAT_0016133c);
  if (iVar2 != 0) {
    iVar5 = FUN_0014cd58();
    *(undefined4 *)(iVar5 + 0xc) = 0;
    FUN_0014cdc0(iVar5,param_4);
  }
  FUN_00207038(param_1 + 8,iVar5);
  iVar2 = iVar5;
LAB_00161308:
  FUN_00172728(iVar7 + 0xc,param_3);
  *(int *)(iVar7 + 0x18) = iVar2;
  *(undefined4 *)(iVar7 + 0x24) = 0;
  *(undefined1 *)(iVar7 + 0x1c) = 0;
  uVar4 = FUN_001d06b8();
  *(undefined4 *)(iVar7 + 0x20) = uVar4;
  return 1;
}

