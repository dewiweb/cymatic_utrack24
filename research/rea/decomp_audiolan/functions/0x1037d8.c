// rea decompile_all
// name: FUN_001037d8
// address: 0x1037d8
// body: available
// range: 0x1037d8-0x1039c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001037d8(int param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  uVar3 = FUN_0017bfc0();
  uVar6 = DAT_001039c8;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_1 + 0x1c);
    uVar4 = *(int *)(param_1 + 0x1c) + 1;
    lVar2 = (ulonglong)uVar4 * (ulonglong)uVar6;
    iVar5 = (int)((ulonglong)lVar2 >> 0x20);
    iVar7 = iVar5 >> 0x1f;
    *(uint *)(param_1 + 0x1c) = uVar4 + iVar7 * -0x10000000;
    *(int *)(param_1 + 0x20) = param_2;
    *(int *)(param_1 + 0x24) = param_2;
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 0x38) = 1;
    FUN_00023d84(*(int *)(param_1 + 0xc) + 8,-iVar7,iVar5,(int)lVar2);
    iVar7 = *(int *)(param_1 + 0xc) + 0xc;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x24);
    if ((((iVar7 == 0) || (*(char *)(iVar7 + 0x5c) != '\0')) ||
        (uVar4 = (uint)*(byte *)(iVar7 + 0x5a), 0x12 < uVar4)) ||
       (DAT_001039cc <=
        (uint)*(ushort *)(iVar7 + 0x58) + (uint)*(ushort *)(param_2 + 0x58) + uVar4 * 2 + 2)) {
      *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_1 + 0x1c);
      uVar4 = *(int *)(param_1 + 0x1c) + 1;
      lVar2 = (ulonglong)uVar4 * (ulonglong)uVar6;
      iVar5 = (int)((ulonglong)lVar2 >> 0x20);
      iVar7 = iVar5 >> 0x1f;
      *(uint *)(param_1 + 0x1c) = uVar4 + iVar7 * -0x10000000;
      **(int **)(param_1 + 0x24) = param_2;
      *(int *)(param_1 + 0x24) = param_2;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      FUN_00023d84(*(int *)(param_1 + 0xc) + 0xc,-iVar7,iVar5,(int)lVar2);
    }
    else {
      iVar5 = *(int *)(param_2 + 4);
      *(int *)(iVar7 + uVar4 * 4 + 4) = iVar5;
      bVar1 = *(byte *)(iVar7 + 0x5a);
      *(byte *)(iVar7 + 0x5a) = bVar1 + 1;
      FUN_000efbc0(*(undefined4 *)(iVar7 + (uint)bVar1 * 4 + 4));
      *(short *)(iVar7 + 0x58) = *(short *)(iVar5 + 0x10) + *(short *)(iVar7 + 0x58);
      if (param_2 != 0) {
        uVar6 = 0;
        if (*(char *)(param_2 + 0x5a) != '\0') {
          do {
            FUN_000efbd8(*(undefined4 *)(param_2 + uVar6 * 4 + 4));
            uVar6 = uVar6 + 1 & 0xfffeffff;
          } while (uVar6 < *(byte *)(param_2 + 0x5a));
        }
        FUN_0016d758(param_2);
      }
    }
    iVar7 = *(int *)(param_1 + 0xc) + 8;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  FUN_00023d84(iVar7);
  uVar3 = 0;
  if ((*(uint *)(param_1 + 0x4c) >> 1 <= *(uint *)(param_1 + 0x38)) &&
     (uVar3 = 1, *(char *)(param_1 + 0x54) == '\0')) {
    *(undefined1 *)(param_1 + 0x54) = 1;
    FUN_00023d84(*(int *)(param_1 + 0xc) + 0x4c);
    iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 0x44);
    *(int *)(iVar7 + 0xda0) = *(int *)(iVar7 + 0xda0) + 1;
  }
  return uVar3;
}

