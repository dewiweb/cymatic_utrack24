// rea decompile_all
// name: FUN_00165bfc
// address: 0x165bfc
// body: available
// range: 0x165bfc-0x165d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00165bfc(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x54) != param_2) {
    return;
  }
  uVar1 = FUN_001d06b8();
  uVar2 = param_3 & 0xff00;
  *(uint *)(param_1 + 0x40) = uVar1;
  if (uVar2 == 0x1200) {
    *(undefined1 *)(param_1 + 0x4a) = 1;
    uVar3 = FUN_001d06b8();
    *(undefined4 *)(param_1 + 0x44) = uVar3;
    iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x44);
    *(int *)(iVar4 + 0xda4) = *(int *)(iVar4 + 0xda4) + 1;
  }
  else if (uVar2 == 0x2200) {
    *(undefined1 *)(param_1 + 0x4a) = 0;
  }
  else if (uVar2 == 0x4200) {
    piVar6 = *(int **)(param_1 + 0x20);
    piVar5 = piVar6;
    if (1 < *(byte *)(piVar6 + 0x17)) {
      while( true ) {
        piVar5 = (int *)*piVar5;
        if (piVar5 != (int *)0x0) {
          uVar1 = (uint)*(byte *)(piVar5 + 0x17);
        }
        if (piVar5 == (int *)0x0 || uVar1 == 0) break;
        *(undefined1 *)(piVar5 + 0x17) = 0;
      }
    }
    *(uint *)(param_1 + 0x38) =
         *(int *)(param_1 + 0x38) - (uint)*(byte *)(*(int *)(param_1 + 0x20) + 0x5a);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    FUN_000298b8(*(int *)(param_1 + 0xc) + 8);
    FUN_00029894(*(int *)(param_1 + 0xc) + 0xc);
    if (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x24)) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    *(int *)(param_1 + 0x20) = *piVar6;
    if (piVar6 != (int *)0x0) {
      uVar1 = 0;
      if (*(char *)((int)piVar6 + 0x5a) != '\0') {
        do {
          FUN_0015223c(piVar6[uVar1 + 1]);
          uVar1 = uVar1 + 1 & 0xfffeffff;
        } while (uVar1 < *(byte *)((int)piVar6 + 0x5a));
      }
      FUN_001c6a78(piVar6);
    }
  }
  if ((param_3 & 0xf0000) < 0x90001) {
    *(short *)(param_1 + 0x48) = (short)(1 << ((param_3 & 0xf0000) >> 0x10));
  }
  if (0x500000 < (param_3 & 0xf00000)) {
    return;
  }
  uVar1 = (param_3 & 0xf00000) >> 0x14;
  uVar2 = 0x80 << uVar1;
  if (uVar2 < 0x81) {
    *(uint *)(param_1 + 0x4c) = uVar2;
    *(int *)(param_1 + 0x50) = 0x10 << uVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = 0x80;
    *(undefined4 *)(param_1 + 0x50) = 0x10;
  }
  return;
}

