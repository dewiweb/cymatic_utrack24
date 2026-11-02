// rea decompile_all
// name: FUN_0012ed84
// address: 0x12ed84
// body: available
// range: 0x12ed84-0x12eef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x12eef4 to 0x1a0d18 FUN_001a0d18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0012ed84(int param_1,uint param_2)

{
  int *piVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_001a0700(param_1 + 8);
  piVar3 = *(int **)(param_1 + 0x34);
  if (piVar3 != (int *)0x0) {
    *(short *)(piVar3 + 1) = (short)piVar3[1] + 1;
  }
  FUN_001a0d18(param_1 + 8);
  while (piVar3 != (int *)0x0) {
    if (((char)piVar3[7] == '\0') &&
       (((uint)piVar3[6] < param_2 || (*(char *)(piVar3[5] + 0x3c) != '\0')))) {
      (**(code **)(*(int *)piVar3[5] + 0x44))((int *)piVar3[5],piVar3[3],piVar3[4]);
      *(undefined1 *)(piVar3 + 7) = 1;
    }
    piVar4 = (int *)0x0;
    FUN_001a0700(param_1 + 8);
    if (piVar3 != (int *)0x0) {
      piVar4 = (int *)piVar3[2];
      if (piVar4 != (int *)0x0) {
        *(short *)(piVar4 + 1) = (short)piVar4[1] + 1;
      }
      sVar2 = (short)piVar3[1] + -1;
      *(short *)(piVar3 + 1) = sVar2;
      if (sVar2 == 0) {
        (**(code **)(*piVar3 + 4))();
      }
    }
    FUN_001a0d18(param_1 + 8);
    piVar3 = piVar4;
  }
  FUN_001a0700(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0;
  piVar4 = *(int **)(param_1 + 0x34);
  piVar3 = (int *)0x0;
  while (piVar1 = piVar4, piVar1 != (int *)0x0) {
    piVar4 = (int *)piVar1[2];
    if ((char)piVar1[7] == '\0') {
      *(int **)(param_1 + 0x38) = piVar1;
      piVar3 = piVar1;
    }
    else {
      if (*(int **)(param_1 + 0x34) == piVar1) {
        *(int **)(param_1 + 0x34) = piVar4;
      }
      else {
        piVar3[2] = (int)piVar4;
      }
      piVar1[2] = 0;
      sVar2 = (short)piVar1[1] + -1;
      *(short *)(piVar1 + 1) = sVar2;
      if (sVar2 == 0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
  }
  FUN_001a0d18(param_1 + 8);
  return;
}

