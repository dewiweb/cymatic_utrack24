// rea decompile_all
// name: FUN_0014a07c
// address: 0x14a07c
// body: available
// range: 0x14a07c-0x14a1ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0014a07c(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if ((uint)(param_2 - *(int *)(param_1 + 0x88)) <= *(uint *)(param_1 + 0x90)) {
LAB_0014a1b4:
    if ((*(int **)(param_1 + 4) != (int *)0x0) && (500 < (uint)(param_2 - *(int *)(param_1 + 0x8c)))
       ) {
      *(int *)(param_1 + 0x8c) = param_2;
      (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
    }
    return *(int *)(param_1 + 0xa0) != 0;
  }
  *(undefined4 *)(param_1 + 0x90) = 600;
  *(int *)(param_1 + 0x88) = param_2;
  piVar2 = *(int **)(param_1 + 0x98);
  iVar3 = 2;
LAB_0014a19c:
  if (piVar2 != (int *)0x0) {
    do {
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x90) = 1;
        break;
      }
      (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),piVar2[4]);
      piVar1 = *(int **)(param_1 + 0x98);
      if (piVar1 == (int *)0x0 || piVar2 == (int *)0x0) {
        if (piVar2 != (int *)0x0) goto LAB_0014a138;
      }
      else {
        if (piVar1 == piVar2) {
          *(int *)(param_1 + 0x98) = piVar1[2];
        }
        if (*(int **)(param_1 + 0x9c) == piVar2) {
          *(int *)(param_1 + 0x9c) = (*(int **)(param_1 + 0x9c))[1];
        }
        if (piVar2[1] != 0) {
          *(int *)(piVar2[1] + 8) = piVar2[2];
        }
        if (piVar2[2] != 0) {
          *(int *)(piVar2[2] + 4) = piVar2[1];
        }
        piVar2[1] = 0;
        piVar2[2] = 0;
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
LAB_0014a138:
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      piVar2 = *(int **)(param_1 + 0x98);
      iVar3 = iVar3 + -1;
      if ((piVar2 == (int *)0x0) || ((uint)(param_2 - piVar2[3]) <= *(uint *)(param_1 + 0x94)))
      goto LAB_0014a18c;
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) + 0x32;
      FUN_0012c1a4(*(int *)(param_1 + 0x28) + 0x584,*(undefined4 *)(param_1 + 0xa0));
    } while( true );
  }
  goto LAB_0014a1b4;
LAB_0014a18c:
  if (100 < *(uint *)(param_1 + 0x94)) {
    *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) - 0x32;
  }
  goto LAB_0014a19c;
}

