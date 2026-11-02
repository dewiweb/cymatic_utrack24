// rea decompile_all
// name: FUN_00055d44
// address: 0x55d44
// body: available
// range: 0x55d44-0x55ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00055d44(int param_1,undefined4 param_2,undefined2 *param_3)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar5 = param_1 + 200;
  FUN_001a0700(iVar5);
  piVar1 = *(int **)(param_1 + 0x148);
  while (piVar7 = (int *)*piVar1, piVar7 != piVar1) {
    while (*(short *)(param_1 + 0x11c) != *(short *)(piVar7[2] + 8)) {
      piVar7 = (int *)*piVar7;
      if (piVar7 == piVar1) goto LAB_00055dc8;
    }
    sVar3 = *(short *)(param_1 + 0x11c) + 1;
    *(short *)(param_1 + 0x11c) = sVar3;
    if (sVar3 == 0) {
      *(undefined2 *)(param_1 + 0x11c) = 1;
    }
  }
LAB_00055dc8:
  *param_3 = *(undefined2 *)(param_1 + 0x11c);
  iVar2 = FUN_001a0808(0x20,1);
  if ((iVar2 != 0) &&
     (iVar2 = FUN_000b2158(iVar2,param_1 + 0x110,*(undefined2 *)(param_1 + 0x11c),param_2),
     iVar2 != 0)) {
    piVar1 = *(int **)(param_1 + 0x13c);
    iVar4 = 0;
    if (piVar1 != (int *)0x0) {
      iVar4 = *piVar1;
    }
    iVar6 = *(int *)(param_1 + 0x148);
    if (piVar1 != (int *)0x0) {
      *(int *)(param_1 + 0x13c) = iVar4;
    }
    else {
      if (*(int *)(param_1 + 0x140) == *(int *)(param_1 + 0x144)) {
        FUN_001dc824(param_1 + 0x138);
      }
      piVar1 = *(int **)(param_1 + 0x140);
      *(int **)(param_1 + 0x140) = piVar1 + 3;
    }
    if (piVar1 + 2 != (int *)0x0) {
      piVar1[2] = iVar2;
    }
    *piVar1 = iVar6;
    piVar1[1] = *(int *)(iVar6 + 4);
    **(int **)(iVar6 + 4) = (int)piVar1;
    *(int **)(iVar6 + 4) = piVar1;
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
    sVar3 = *(short *)(param_1 + 0x11c) + 1;
    *(short *)(param_1 + 0x11c) = sVar3;
    if (sVar3 == 0) {
      *(undefined2 *)(param_1 + 0x11c) = 1;
    }
    FUN_001a0d18(iVar5);
    return 1;
  }
  FUN_001a0d18(iVar5);
  return 0;
}

