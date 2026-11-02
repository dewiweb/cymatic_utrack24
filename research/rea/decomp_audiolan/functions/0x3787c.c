// rea decompile_all
// name: FUN_0003787c
// address: 0x3787c
// body: available
// range: 0x3787c-0x379f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0003787c(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((*(byte *)(param_2 + 4) & 0x32) == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    return 0;
  }
  for (piVar4 = *(int **)(&DAT_00001fb8 + param_1); piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
    if (((((*(short *)((int)piVar4 + 6) == *(short *)(param_3 + 6)) &&
          (*(short *)(piVar4 + 2) == *(short *)(param_3 + 8))) &&
         (piVar4[5] == *(int *)(param_3 + 0x14))) &&
        ((*(short *)(piVar4 + 4) == *(short *)(param_3 + 0x10) &&
         (piVar4[6] == *(int *)(param_3 + 0x18))))) &&
       ((iVar2 = FUN_0003b600(piVar4 + 1,*(int *)(param_3 + 0x24) + 4,DAT_000379fc), iVar2 != 0 &&
        (iVar2 = FUN_0003b48a(piVar4[8],*(undefined4 *)(param_3 + 0x20)), iVar2 != 0)))) {
      iVar2 = piVar4[0xd];
      piVar1 = piVar4;
      while (iVar3 = iVar2, iVar3 != 0) {
        piVar1 = (int *)iVar3;
        iVar2 = *(int *)(iVar3 + 0x34);
      }
      if (piVar1 == (int *)param_2) {
        return 0;
      }
    }
  }
  for (piVar4 = *(int **)(&DAT_00001fbc + param_1); piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
    if ((((*(short *)((int)piVar4 + 6) == *(short *)(param_3 + 6)) &&
         (*(short *)(piVar4 + 2) == *(short *)(param_3 + 8))) &&
        ((piVar4[5] == *(int *)(param_3 + 0x14) &&
         (((*(short *)(piVar4 + 4) == *(short *)(param_3 + 0x10) &&
           (piVar4[6] == *(int *)(param_3 + 0x18))) &&
          (iVar2 = FUN_0003b600(piVar4 + 1,*(int *)(param_3 + 0x24) + 4,DAT_000379fc), iVar2 != 0)))
         ))) && (iVar2 = FUN_0003b48a(piVar4[8],*(undefined4 *)(param_3 + 0x20)), iVar2 != 0)) {
      iVar2 = piVar4[0xd];
      piVar1 = piVar4;
      while (iVar3 = iVar2, iVar3 != 0) {
        piVar1 = (int *)iVar3;
        iVar2 = *(int *)(iVar3 + 0x34);
      }
      if (piVar1 == (int *)param_2) {
        return 0;
      }
    }
  }
  iVar2 = *(int *)(param_2 + 0x38);
  if (*(int *)(param_2 + 0x38) == 0) {
    iVar2 = param_2;
  }
  for (piVar4 = *(int **)(&DAT_00001fb8 + param_1); piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
    if ((((*(short *)((int)piVar4 + 6) == *(short *)(param_3 + 6)) &&
         (*(short *)(piVar4 + 2) == *(short *)(param_3 + 8))) &&
        ((piVar4[5] == *(int *)(param_3 + 0x14) &&
         ((*(short *)(piVar4 + 4) == *(short *)(param_3 + 0x10) &&
          (piVar4[6] == *(int *)(param_3 + 0x18))))))) &&
       ((iVar3 = FUN_0003b600(piVar4 + 1,*(int *)(param_3 + 0x24) + 4,DAT_000379fc), iVar3 != 0 &&
        (iVar3 = FUN_0003b48a(piVar4[8],*(undefined4 *)(param_3 + 0x20)), iVar3 != 0))))
    goto LAB_000379b8;
  }
  iVar3 = 0;
  goto LAB_000379cc;
  while (piVar4 != (int *)iVar3) {
LAB_000379b8:
    iVar3 = (int)piVar4;
    piVar4 = *(int **)(iVar3 + 0x38);
    if (piVar4 == (int *)0x0) break;
  }
LAB_000379cc:
  if ((iVar3 != iVar2) &&
     ((*(int3 *)(param_2 + 0x49) == 0 && *(char *)(param_2 + 0x4c) == '\0' || (iVar3 == 0)))) {
    return 1;
  }
  return 0;
}

