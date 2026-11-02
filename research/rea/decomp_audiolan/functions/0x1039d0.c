// rea decompile_all
// name: FUN_001039d0
// address: 0x1039d0
// body: available
// range: 0x1039d0-0x103c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001039d0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  piVar2 = *(int **)(param_1 + 0x20);
  piVar7 = piVar2;
  if ((piVar2 != (int *)0x0) && (piVar2[0x15] == param_2)) {
    uVar3 = FUN_0017bfc0();
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    piVar7 = *(int **)(param_1 + 0x20);
    bVar4 = *(byte *)(piVar7 + 0x17);
    if (1 < bVar4) {
      piVar2 = (int *)*piVar7;
      while( true ) {
        if (piVar2 != (int *)0x0) {
          bVar4 = *(byte *)(piVar2 + 0x17);
        }
        if (piVar2 == (int *)0x0 || bVar4 == 0) break;
        *(undefined1 *)(piVar2 + 0x17) = 0;
        piVar2 = (int *)*piVar2;
      }
    }
    *(uint *)(param_1 + 0x38) =
         *(int *)(param_1 + 0x38) - (uint)*(byte *)(*(int *)(param_1 + 0x20) + 0x5a);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    FUN_00023d5c(*(int *)(param_1 + 0xc) + 8);
    FUN_00023d38(*(int *)(param_1 + 0xc) + 0xc);
    if (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x24)) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    *(int *)(param_1 + 0x20) = *piVar7;
    if (piVar7 != (int *)0x0) {
      uVar5 = 0;
      if (*(char *)((int)piVar7 + 0x5a) != '\0') {
        do {
          FUN_000efbd8(piVar7[uVar5 + 1]);
          uVar5 = uVar5 + 1 & 0xfffeffff;
        } while (uVar5 < *(byte *)((int)piVar7 + 0x5a));
      }
      FUN_0016d758(piVar7);
    }
    if ((param_3 & 0xf0000) < 0x90001) {
      *(short *)(param_1 + 0x48) = (short)(1 << ((param_3 & 0xf0000) >> 0x10));
    }
    if ((param_3 & 0xf00000) < 0x500001) {
      uVar5 = (param_3 & 0xf00000) >> 0x14;
      uVar1 = 0x80 << uVar5;
      if (uVar1 < 0x81) {
        *(uint *)(param_1 + 0x4c) = uVar1;
        *(int *)(param_1 + 0x50) = 0x10 << uVar5;
      }
      else {
        *(undefined4 *)(param_1 + 0x4c) = 0x80;
        *(undefined4 *)(param_1 + 0x50) = 0x10;
      }
    }
    return 1;
  }
  while( true ) {
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    if (piVar7[0x15] == param_2) break;
    piVar7 = (int *)*piVar7;
  }
  if (piVar7 == (int *)0x0) {
    return 0;
  }
  while (piVar2 != piVar7) {
    iVar6 = *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - (uint)*(byte *)(iVar6 + 0x5a);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    FUN_00023d5c(*(int *)(param_1 + 0xc) + 8);
    FUN_00023d38(*(int *)(param_1 + 0xc) + 0xc);
    piVar2 = (int *)**(undefined4 **)(param_1 + 0x20);
    *(int **)(param_1 + 0x20) = piVar2;
    if (iVar6 != 0) {
      uVar5 = 0;
      if (*(char *)(iVar6 + 0x5a) != '\0') {
        do {
          FUN_000efbd8(*(undefined4 *)(iVar6 + uVar5 * 4 + 4));
          uVar5 = uVar5 + 1 & 0xfffeffff;
        } while (uVar5 < *(byte *)(iVar6 + 0x5a));
      }
      FUN_0016d758(iVar6);
      piVar2 = *(int **)(param_1 + 0x20);
    }
  }
  iVar6 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - (uint)*(byte *)(iVar6 + 0x5a);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  FUN_00023d5c(*(int *)(param_1 + 0xc) + 8);
  FUN_00023d38(*(int *)(param_1 + 0xc) + 0xc);
  if (*(undefined4 **)(param_1 + 0x20) == *(undefined4 **)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = **(undefined4 **)(param_1 + 0x20);
  if (iVar6 == 0) {
    return 1;
  }
  uVar5 = 0;
  if (*(char *)(iVar6 + 0x5a) != '\0') {
    do {
      FUN_000efbd8(*(undefined4 *)(iVar6 + uVar5 * 4 + 4));
      uVar5 = uVar5 + 1 & 0xfffeffff;
    } while (uVar5 < *(byte *)(iVar6 + 0x5a));
  }
  FUN_0016d758(iVar6);
  return 1;
}

