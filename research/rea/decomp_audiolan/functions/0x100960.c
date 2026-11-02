// rea decompile_all
// name: FUN_00100960
// address: 0x100960
// body: available
// range: 0x100960-0x100a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00100960(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  uVar1 = DAT_00100a70;
  if (*(char *)(param_1 + 0x184) != '\0') {
    FUN_000fb0a4(param_1 + 0x10);
    FUN_001a0700(param_1 + 0x134);
    piVar2 = *(int **)(param_1 + 0x124);
    while (piVar2 != (int *)0x0) {
      piVar3 = *(int **)(param_1 + 0x124);
      if (piVar3 == (int *)0x0 || piVar2 == (int *)0x0) {
        if (piVar2 != (int *)0x0) goto LAB_00100a08;
      }
      else {
        if (piVar3 == piVar2) {
          *(int *)(param_1 + 0x124) = piVar3[2];
        }
        if (*(int **)(param_1 + 0x128) == piVar2) {
          *(int *)(param_1 + 0x128) = (*(int **)(param_1 + 0x128))[1];
        }
        if (piVar2[1] != 0) {
          *(int *)(piVar2[1] + 8) = piVar2[2];
        }
        if (piVar2[2] != 0) {
          *(int *)(piVar2[2] + 4) = piVar2[1];
        }
        piVar2[1] = 0;
        piVar2[2] = 0;
        *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + -1;
LAB_00100a08:
        (**(code **)(*piVar2 + 4))();
      }
      piVar2 = *(int **)(param_1 + 0x124);
    }
    FUN_001a0d18(param_1 + 0x134);
    uVar4 = 0;
    if (*(int *)(param_1 + 0x180) != 0) {
      do {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x17c) + uVar4 * 0xc) + 0x1c))();
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x180));
    }
    uVar1 = 0;
    if (*(int *)(param_1 + 0x17c) != 0) {
      FUN_0016d744();
    }
  }
  return uVar1;
}

