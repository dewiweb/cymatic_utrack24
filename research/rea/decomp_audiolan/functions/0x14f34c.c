// rea decompile_all
// name: FUN_0014f34c
// address: 0x14f34c
// body: available
// range: 0x14f34c-0x14f523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0014f34c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = *(int **)(param_1 + 0x4c);
  piVar5 = (int *)(param_1 + 0x3c);
  if (piVar4 != (int *)0x0) {
    piVar3 = (int *)*piVar4;
    while (piVar1 = piVar3, piVar1 != piVar4) {
      piVar3 = *(int **)(param_1 + 0x4c);
      if (piVar1 != *(int **)(param_1 + 0x4c)) {
        piVar3 = (int *)*piVar1;
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
        *piVar1 = *(int *)(param_1 + 0x40);
        *(int **)(param_1 + 0x40) = piVar1;
      }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x4c);
    *puVar2 = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 **)(param_1 + 0x40) = puVar2;
    piVar4 = (int *)*piVar5;
    while (piVar4 != (int *)0x0) {
      *piVar5 = *piVar4;
      FUN_0010fa20(piVar4[2],piVar4[1],0);
      FUN_0010fa20(piVar4,1,0);
      piVar4 = (int *)*piVar5;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  piVar4 = (int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_001dcef8(piVar4);
    puVar2 = *(undefined4 **)(param_1 + 0x34);
    *puVar2 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 **)(param_1 + 0x28) = puVar2;
    piVar5 = (int *)*piVar4;
    while (piVar5 != (int *)0x0) {
      *piVar4 = *piVar5;
      FUN_0010fa20(piVar5[2],piVar5[1],0);
      FUN_0010fa20(piVar5,1,0);
      piVar5 = (int *)*piVar4;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  piVar4 = (int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_001dcef8(piVar4);
    puVar2 = *(undefined4 **)(param_1 + 0x1c);
    *puVar2 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 **)(param_1 + 0x10) = puVar2;
    piVar5 = (int *)*piVar4;
    while (piVar5 != (int *)0x0) {
      *piVar4 = *piVar5;
      FUN_0010fa20(piVar5[2],piVar5[1],0);
      FUN_0010fa20(piVar5,1,0);
      piVar5 = (int *)*piVar4;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_001da314(param_1 + 8);
  FUN_001da314(param_1 + 4);
  return param_1;
}

