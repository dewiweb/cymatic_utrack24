// rea decompile_all
// name: FUN_001806b8
// address: 0x1806b8
// body: available
// range: 0x1806b8-0x18078f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001806b8(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  while (piVar3 = *(int **)(param_1 + 0x120), piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x50))(piVar3);
    piVar1 = *(int **)(param_1 + 0x120);
    if (piVar1 != (int *)0x0) {
      if (piVar1 == piVar3) {
        *(int *)(param_1 + 0x120) = piVar1[0x12];
      }
      if (*(int **)(param_1 + 0x124) == piVar3) {
        *(int *)(param_1 + 0x124) = (*(int **)(param_1 + 0x124))[0x11];
      }
      if (piVar3[0x11] != 0) {
        *(int *)(piVar3[0x11] + 0x48) = piVar3[0x12];
      }
      if (piVar3[0x12] != 0) {
        *(int *)(piVar3[0x12] + 0x44) = piVar3[0x11];
      }
      piVar3[0x11] = 0;
      piVar3[0x12] = 0;
      *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
    }
    (**(code **)(*piVar3 + 0x3c))(piVar3);
  }
  piVar1 = (int *)(param_1 + 0x140);
  piVar3 = (int *)*piVar1;
  while (piVar3 != (int *)0x0) {
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)*piVar1;
    }
    else {
      iVar2 = *piVar3;
      piVar3 = (int *)piVar3[2];
      (**(code **)(iVar2 + 4))();
    }
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  return;
}

