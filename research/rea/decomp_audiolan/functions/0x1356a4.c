// rea decompile_all
// name: FUN_001356a4
// address: 0x1356a4
// body: available
// range: 0x1356a4-0x13586f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001356a4(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_30 [3];
  undefined1 auStack_24 [12];
  
  piVar3 = (int *)param_1[1];
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar3 + 0x48))(piVar3);
    if (piVar1 == param_2) {
      return (int *)0x0;
    }
    iVar2 = (**(code **)(*piVar3 + 0x48))(piVar3);
    if (iVar2 != 0) {
      (**(code **)(*param_2 + 0x44))(auStack_24,param_2);
      piVar1 = (int *)(**(code **)(*piVar3 + 0x48))(piVar3);
      (**(code **)(*piVar1 + 0x44))(local_30,piVar1);
      iVar2 = FUN_0015e940(local_30,auStack_24);
      if (iVar2 != 0) {
        return (int *)0x0;
      }
    }
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)param_1[1];
    }
    else {
      piVar3 = (int *)piVar3[0x1e];
    }
  }
  iVar4 = *param_1;
  iVar5 = *(int *)(iVar4 + 0x24);
  FUN_001a0700(iVar5 + 0x14);
  iVar2 = FUN_0016d7a4(0x148,DAT_00135870);
  if ((iVar2 != 0) &&
     (local_30[0] = iVar4, piVar3 = (int *)FUN_00130814(iVar2,0,iVar5,param_2), piVar3 != (int *)0x0
     )) {
    iVar2 = FUN_000e9bb4(piVar3,5,iVar5 + 0x548);
    if (iVar2 != 0) {
      FUN_001a0d18(iVar5 + 0x14);
      piVar3[0x1d] = 0;
      piVar3[0x1e] = 0;
      if (param_1[2] == 0) {
        param_1[1] = (int)piVar3;
        param_1[2] = (int)piVar3;
      }
      else {
        piVar3[0x1d] = param_1[2];
        *(int **)(param_1[2] + 0x78) = piVar3;
        param_1[2] = (int)piVar3;
      }
      param_1[3] = param_1[3] + 1;
      iVar2 = piVar3[9];
      FUN_001a0700(iVar2 + 0x14);
      local_30[0] = 10;
      FUN_0012eb90(*(int *)(piVar3[0x21] + 0x24) + 0x828,0,0,piVar3);
      FUN_001a0d18(iVar2 + 0x14);
      return piVar3;
    }
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  FUN_001a0d18(iVar5 + 0x14);
  return (int *)0x0;
}

