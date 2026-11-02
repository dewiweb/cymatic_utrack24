// rea decompile_all
// name: FUN_00161778
// address: 0x161778
// body: available
// range: 0x161778-0x161993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00161778(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 4);
  while( true ) {
    iVar3 = FUN_00172670(param_2,iVar7);
    bVar8 = iVar3 < 0;
    bVar9 = iVar3 == 0;
    if (0 < iVar3) {
      iVar3 = 1;
    }
    if (bVar8) {
      iVar3 = 0;
    }
    if (bVar9) break;
    iVar5 = *(int *)(iVar7 + iVar3 * 4 + 0x2c);
    if (iVar5 == 0) {
      return 0;
    }
    bVar2 = 0;
    if (iVar3 != 0) {
      bVar2 = *(byte *)(iVar7 + 0x34);
    }
    iVar7 = iVar5;
    if (iVar3 != 0 && (bVar2 & 0x80) != 0) {
      return 0;
    }
  }
  if (iVar7 == 0) {
    return 0;
  }
  iVar3 = *(int *)(iVar7 + 0x18);
  if ((iVar3 == 0) || (iVar5 = FUN_0014cc60(iVar3,param_3), iVar5 != 0)) {
    iVar3 = *(int *)(param_1 + 0xc);
    iVar5 = iVar3;
    if (iVar3 != 0) {
      do {
        uVar10 = FUN_0014cc60(param_3,iVar3);
        iVar6 = (int)((ulonglong)uVar10 >> 0x20);
        iVar5 = (int)uVar10;
        if (0 < iVar5) {
          iVar6 = 1;
        }
        if (iVar5 < 0) {
          iVar6 = 0;
        }
        if (iVar5 == 0) {
          iVar5 = iVar3;
          if (iVar3 != 0) goto LAB_00161890;
          break;
        }
        iVar4 = *(int *)(iVar3 + iVar6 * 4 + 0x10);
        iVar5 = 0;
        if (iVar4 == 0) break;
        bVar2 = 0;
        if (iVar6 != 0) {
          bVar2 = *(byte *)(iVar3 + 0x18);
        }
        iVar3 = iVar4;
      } while (iVar6 == 0 || (bVar2 & 0x80) == 0);
    }
    iVar3 = FUN_001c6b14(0x1c,DAT_00161994);
    if (iVar3 != 0) {
      iVar5 = FUN_0014cd58();
      *(undefined4 *)(iVar5 + 0xc) = 0;
      FUN_0014cdc0(iVar5,param_3);
    }
    FUN_00207038(param_1 + 8,iVar5);
    iVar3 = iVar5;
  }
LAB_00161890:
  *(int *)(iVar7 + 0x18) = iVar3;
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 != 0) {
    for (iVar6 = *(int *)(iVar5 + 0x2c); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x2c)) {
      iVar5 = iVar6;
    }
    while (iVar5 != 0) {
      iVar6 = FUN_00172670(iVar5 + 0xc,param_2);
      if (iVar6 == 0) {
        if (((param_4 != 0) && (*(char *)(iVar7 + 0x1c) == '\0')) && (*(int *)(iVar7 + 0x18) != 0))
        {
          *(undefined1 *)(iVar7 + 0x1c) = 2;
          *(undefined1 *)(iVar7 + 0x28) = 0;
        }
        *(int *)(iVar5 + 0x18) = iVar3;
      }
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 4);
        if (iVar5 == 0) break;
        for (iVar6 = *(int *)(iVar5 + 0x2c); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x2c)) {
          iVar5 = iVar6;
        }
      }
      else {
        pbVar1 = (byte *)(iVar5 + 0x34);
        iVar5 = *(int *)(iVar5 + 0x30);
        iVar6 = iVar5;
        if ((*pbVar1 & 0x80) == 0) {
          do {
            iVar5 = iVar6;
            if (iVar5 == 0) goto LAB_0016197c;
            iVar6 = *(int *)(iVar5 + 0x2c);
          } while (*(int *)(iVar5 + 0x2c) != 0);
        }
      }
    }
  }
LAB_0016197c:
  if (*(char *)(iVar7 + 0x1c) == '\x01') {
    *(undefined1 *)(iVar7 + 0x1c) = 0;
  }
  return 1;
}

