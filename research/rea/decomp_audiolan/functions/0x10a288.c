// rea decompile_all
// name: FUN_0010a288
// address: 0x10a288
// body: available
// range: 0x10a288-0x10a363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0010a288(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int unaff_r8;
  int iVar5;
  
  piVar3 = *(int **)(param_1 + 0x6fc);
  if (piVar3 != (int *)0x0) {
    unaff_r8 = param_1 + 0x400;
  }
  iVar5 = 0;
  if (piVar3 != (int *)0x0) {
    do {
      if (piVar3 == (int *)0x0) {
        piVar4 = *(int **)(unaff_r8 + 0x2fc);
      }
      else {
        piVar4 = (int *)piVar3[2];
      }
      iVar1 = FUN_0015e940(piVar3 + 3,param_2);
      if (iVar1 != 0) {
        if (piVar3[6] != 0) {
          FUN_000efbd8();
        }
        piVar3[6] = 0;
        piVar2 = *(int **)(param_1 + 0x6fc);
        if (piVar2 != (int *)0x0 && piVar3 != (int *)0x0) {
          if (piVar2 == piVar3) {
            *(int *)(param_1 + 0x6fc) = piVar2[2];
          }
          if (*(int **)(param_1 + 0x700) == piVar3) {
            *(int *)(param_1 + 0x700) = (*(int **)(param_1 + 0x700))[1];
          }
          if (piVar3[1] != 0) {
            *(int *)(piVar3[1] + 8) = piVar3[2];
          }
          if (piVar3[2] != 0) {
            *(int *)(piVar3[2] + 4) = piVar3[1];
          }
          piVar3[1] = 0;
          piVar3[2] = 0;
          *(int *)(param_1 + 0x704) = *(int *)(param_1 + 0x704) + -1;
          (**(code **)(*piVar3 + 4))(piVar3);
        }
        iVar5 = iVar5 + 1;
      }
      piVar3 = piVar4;
    } while (piVar4 != (int *)0x0);
  }
  return iVar5;
}

