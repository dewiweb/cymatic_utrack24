// rea decompile_all
// name: FUN_00103c8c
// address: 0x103c8c
// body: available
// range: 0x103c8c-0x103e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00103c8c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x54) != param_2) {
    return;
  }
  uVar2 = FUN_0017bfc0();
  puVar3 = (undefined *)(param_3 & 0xff00);
  *(uint *)(param_1 + 0x40) = uVar2;
  if (puVar3 == (undefined *)0x1200) {
    *(undefined1 *)(param_1 + 0x4a) = 1;
    uVar4 = FUN_0017bfc0();
    *(undefined4 *)(param_1 + 0x44) = uVar4;
    iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 0x44);
    *(int *)(iVar5 + 0xda4) = *(int *)(iVar5 + 0xda4) + 1;
  }
  else if (puVar3 == (undefined *)0x2200) {
    *(undefined1 *)(param_1 + 0x4a) = 0;
  }
  else if (puVar3 == &DAT_00004200) {
    piVar7 = *(int **)(param_1 + 0x20);
    piVar6 = piVar7;
    if (1 < *(byte *)(piVar7 + 0x17)) {
      while( true ) {
        piVar6 = (int *)*piVar6;
        if (piVar6 != (int *)0x0) {
          uVar2 = (uint)*(byte *)(piVar6 + 0x17);
        }
        if (piVar6 == (int *)0x0 || uVar2 == 0) break;
        *(undefined1 *)(piVar6 + 0x17) = 0;
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
      uVar2 = 0;
      if (*(char *)((int)piVar7 + 0x5a) != '\0') {
        do {
          FUN_000efbd8(piVar7[uVar2 + 1]);
          uVar2 = uVar2 + 1 & 0xfffeffff;
        } while (uVar2 < *(byte *)((int)piVar7 + 0x5a));
      }
      FUN_0016d758(piVar7);
    }
  }
  if ((param_3 & 0xf0000) < 0x90001) {
    *(short *)(param_1 + 0x48) = (short)(1 << ((param_3 & 0xf0000) >> 0x10));
  }
  if (0x500000 < (param_3 & 0xf00000)) {
    return;
  }
  uVar2 = (param_3 & 0xf00000) >> 0x14;
  uVar1 = 0x80 << uVar2;
  if (uVar1 < 0x81) {
    *(uint *)(param_1 + 0x4c) = uVar1;
    *(int *)(param_1 + 0x50) = 0x10 << uVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = 0x80;
    *(undefined4 *)(param_1 + 0x50) = 0x10;
  }
  return;
}

