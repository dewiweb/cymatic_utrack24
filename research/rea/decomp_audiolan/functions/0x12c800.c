// rea decompile_all
// name: FUN_0012c800
// address: 0x12c800
// body: available
// range: 0x12c800-0x12c90b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0012c800(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x28))();
    piVar3 = *(int **)(param_1 + 8);
    piVar2 = (int *)0x0;
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      if (piVar1[1] == param_2) {
        if (piVar2 == (int *)0x0) {
          *(int *)(param_1 + 8) = piVar1[6];
        }
        else {
          piVar2[6] = piVar1[6];
        }
        piVar1[6] = 0;
        if ((char)piVar1[2] == '\0') {
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          uVar5 = (**(code **)(**(int **)(param_1 + 4) + 0x80))();
          uVar4 = (uint)uVar5 - piVar1[4];
          *(uint *)(param_1 + 0x1c) =
               *(int *)(param_1 + 0x1c) +
               ((int)((ulonglong)uVar5 >> 0x20) -
               (piVar1[5] + (uint)((uint)uVar5 < (uint)piVar1[4]))) +
               (uint)CARRY4(uVar4,*(uint *)(param_1 + 0x18));
          *(uint *)(param_1 + 0x18) = uVar4 + *(uint *)(param_1 + 0x18);
        }
        else {
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        }
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))(piVar1);
        }
        break;
      }
      piVar2 = piVar1;
      piVar3 = (int *)piVar1[6];
    }
    (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
  }
  return *(int *)(param_1 + 8) == 0;
}

