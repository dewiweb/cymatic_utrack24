// rea decompile_all
// name: FUN_00185d34
// address: 0x185d34
// body: available
// range: 0x185d34-0x185e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00185d34(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *extraout_r1;
  int *extraout_r1_00;
  
  piVar5 = *(int **)(param_1 + 0x14);
  if ((int *)(param_2 - *(int *)(param_1 + 0x10)) < piVar5) {
    return 0;
  }
  *(int *)(param_1 + 0x10) = param_2;
  if (100 < (uint)(param_2 - *(int *)(param_1 + 0x18))) {
    *(int *)(param_1 + 0x18) = param_2;
    FUN_001848d8(param_1);
    piVar5 = extraout_r1;
  }
  piVar1 = *(int **)(param_1 + 0x30);
  piVar2 = piVar1;
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      piVar5 = (int *)piVar1[0x57];
    }
    if (piVar1 != (int *)0x0 && piVar5 != (int *)0x0) {
      do {
        piVar1 = piVar5;
        piVar5 = (int *)piVar1[0x57];
      } while ((int *)piVar1[0x57] != (int *)0x0);
    }
    *(int **)(param_1 + 0x30) = piVar1;
    piVar2 = piVar1;
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  do {
    (**(code **)(*piVar1 + 0x38))();
    iVar3 = FUN_00187a14(*(undefined4 *)(param_1 + 0x30),param_2);
    if (iVar3 != 0) {
      (**(code **)(**(int **)(param_1 + 0x30) + 0x3c))();
      uVar4 = 5;
      goto LAB_00185e60;
    }
    piVar5 = *(int **)(param_1 + 0x30);
    uVar4 = FUN_0022c0cc(param_1 + 4,piVar5);
    *(undefined4 *)(param_1 + 0x30) = uVar4;
    (**(code **)(*piVar5 + 0x3c))(piVar5);
    piVar1 = *(int **)(param_1 + 0x30);
    if (piVar1 == (int *)0x0) {
      piVar1 = *(int **)(param_1 + 8);
      piVar5 = extraout_r1_00;
      if (piVar1 != (int *)0x0) {
        piVar5 = (int *)piVar1[0x57];
      }
      if (piVar1 != (int *)0x0 && piVar5 != (int *)0x0) {
        do {
          piVar1 = piVar5;
          piVar5 = (int *)piVar1[0x57];
        } while ((int *)piVar1[0x57] != (int *)0x0);
      }
      *(int **)(param_1 + 0x30) = piVar1;
      if (piVar1 == (int *)0x0) break;
    }
  } while (piVar1 != piVar2);
  uVar4 = 100;
LAB_00185e60:
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return iVar3;
}

