// rea decompile_all
// name: FUN_001047c4
// address: 0x1047c4
// body: available
// range: 0x1047c4-0x10497f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001047c4(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  FUN_001a0700(param_1 + 0xd4);
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_0001c804();
    FUN_0001c3c8(*(undefined4 *)(param_1 + 0x34));
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_001a0d18(param_1 + 0xd4);
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_0016d758();
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_00102934(param_1);
  FUN_001a0700(param_1 + 0x100);
  piVar2 = *(int **)(param_1 + 0x50);
  while (piVar2 != (int *)0x0) {
    if (piVar2 == (int *)0x0) {
      piVar2 = *(int **)(param_1 + 0x50);
    }
    else {
      iVar3 = *piVar2;
      piVar2 = (int *)piVar2[2];
      (**(code **)(iVar3 + 4))();
    }
  }
  piVar2 = *(int **)(param_1 + 0x5c);
  while (piVar2 != (int *)0x0) {
    if (piVar2 == (int *)0x0) {
      piVar2 = *(int **)(param_1 + 0x5c);
    }
    else {
      iVar3 = *piVar2;
      piVar2 = (int *)piVar2[2];
      (**(code **)(iVar3 + 4))();
    }
  }
  piVar2 = *(int **)(param_1 + 0x68);
  while (piVar2 != (int *)0x0) {
    if (piVar2 == (int *)0x0) {
      piVar2 = *(int **)(param_1 + 0x68);
    }
    else {
      iVar3 = *piVar2;
      piVar2 = (int *)piVar2[2];
      (**(code **)(iVar3 + 4))();
    }
  }
  FUN_001a0d18(param_1 + 0x100);
  FUN_001a0700(param_1 + 0x158);
  piVar2 = *(int **)(param_1 + 0x74);
  while (piVar2 != (int *)0x0) {
    if (piVar2 == (int *)0x0) {
      piVar2 = *(int **)(param_1 + 0x74);
    }
    else {
      iVar3 = *piVar2;
      piVar2 = (int *)piVar2[2];
      (**(code **)(iVar3 + 4))();
    }
  }
  FUN_001a0d18(param_1 + 0x158);
  FUN_001a0700(param_1 + 0x9c);
  while (piVar2 = *(int **)(param_1 + 0x84), piVar2 != (int *)0x0) {
    for (piVar1 = (int *)*piVar2; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
      piVar2 = piVar1;
    }
    if (piVar2 == (int *)0x0) break;
    FUN_00103e20(piVar2);
    FUN_001bec44(param_1 + 0x80,piVar2 + 4);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  FUN_001a0d18(param_1 + 0x9c);
  FUN_000fb0a4(param_1 + 0xdd0);
  return 1;
}

