// rea decompile_all
// name: FUN_000ffc2c
// address: 0xffc2c
// body: available
// range: 0xffc2c-0xffdff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000ffc2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if ((*(int *)(param_1 + 8) != 0) && (*(char *)(*(int *)(param_1 + 8) + 4) == '\a')) {
    iVar1 = FUN_0015e308();
    if ((iVar1 == 0) || (iVar1 = FUN_0001c8d0(iVar1,param_2), iVar1 == 0)) {
      return 1;
    }
    piVar4 = *(int **)(param_1 + 8);
    if ((piVar4 != (int *)0x0) && ((char)piVar4[1] == '\a')) {
      FUN_001047c4(piVar4);
      (**(code **)(*piVar4 + 0xc))(piVar4);
      (**(code **)(*piVar4 + 4))(piVar4);
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  iVar1 = FUN_0016d7a4(DAT_000ffe04,DAT_000ffe00);
  if ((iVar1 == 0) ||
     (piVar4 = (int *)FUN_00104988(iVar1,*(undefined4 *)(param_1 + 4),
                                   *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),
                                   *(undefined4 *)(param_1 + 0x14)), piVar4 == (int *)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
    iVar1 = (**(code **)(*piVar4 + 8))(piVar4);
    if ((iVar1 == 0) ||
       ((iVar1 = FUN_00104704(piVar4,param_2), iVar1 == 0 ||
        (iVar1 = FUN_0015e31c(piVar4,param_3), iVar1 == 0)))) {
      uVar6 = 0;
      FUN_001047c4(piVar4);
      (**(code **)(*piVar4 + 0xc))(piVar4);
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    else {
      *(int **)(param_1 + 8) = piVar4;
      puVar2 = (uint *)FUN_0001c424();
      if (puVar2 != (uint *)0x0) {
        uVar5 = 0;
        if (*puVar2 != 0) {
          do {
            iVar1 = FUN_0001c8d0(*(undefined4 *)(puVar2[1] + uVar5 * 4),param_2);
            if (iVar1 == 0) {
              FUN_0010e2f8(param_4,*(undefined4 *)(puVar2[2] + uVar5 * 4));
              break;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < *puVar2);
        }
        FUN_0001c3ec(puVar2);
      }
      piVar3 = *(int **)(param_1 + 0x14);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x10))(piVar3,piVar4);
      }
    }
  }
  return uVar6;
}

