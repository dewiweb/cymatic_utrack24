// rea decompile_all
// name: FUN_0009bd46
// address: 0x9bd46
// body: available
// range: 0x9bd46-0x9be41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0009bd46(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = 0;
  iVar9 = 8;
  bVar1 = true;
  do {
    piVar4 = *(int **)(*(int *)(param_1 + 8) + 0x14);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4,*(undefined4 *)(*(int *)(param_1 + 8) + 0x10));
    }
    FUN_00018e10(*(undefined2 *)(param_1 + 0x18));
    if (bVar1) {
      for (iVar6 = *(int *)(param_1 + 0x14); iVar6 != 0; iVar6 = iVar6 + -1) {
        piVar4 = *(int **)(*(int *)(param_1 + 8) + 0x14);
        if ((piVar4 != (int *)0x0) &&
           (iVar2 = (**(code **)(*piVar4 + 0x18))
                              (piVar4,*(undefined4 *)(*(int *)(param_1 + 8) + 0x10)), iVar2 == 1))
        break;
        FUN_00018e10(1);
      }
    }
    piVar4 = *(int **)(*(int *)(param_1 + 0xc) + 0x14);
    if ((piVar4 == (int *)0x0) ||
       (iVar6 = (**(code **)(*piVar4 + 0x18))
                          (piVar4,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10)), iVar6 != 1)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    piVar4 = *(int **)(*(int *)(param_1 + 8) + 0x14);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4,*(undefined4 *)(*(int *)(param_1 + 8) + 0x10));
    }
    FUN_00018e10(*(undefined2 *)(param_1 + 0x18));
    uVar8 = (uVar8 & 0x7f) << 1 | uVar7;
    bVar1 = false;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar9 = *(int *)(param_1 + 0xc);
  piVar4 = *(int **)(iVar9 + 0x14);
  if (param_2 == 0) {
    if (piVar4 == (int *)0x0) goto LAB_0009bdf4;
    uVar3 = *(undefined4 *)(iVar9 + 0x10);
    pcVar5 = *(code **)(*piVar4 + 0xc);
  }
  else {
    if (piVar4 == (int *)0x0) goto LAB_0009bdf4;
    uVar3 = *(undefined4 *)(iVar9 + 0x10);
    pcVar5 = *(code **)(*piVar4 + 8);
  }
  (*pcVar5)(piVar4,uVar3);
LAB_0009bdf4:
  FUN_00018e10(*(undefined2 *)(param_1 + 0x18));
  piVar4 = *(int **)(*(int *)(param_1 + 8) + 0x14);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4,*(undefined4 *)(*(int *)(param_1 + 8) + 0x10));
  }
  FUN_00018e10(*(undefined2 *)(param_1 + 0x18));
  piVar4 = *(int **)(*(int *)(param_1 + 8) + 0x14);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4,*(undefined4 *)(*(int *)(param_1 + 8) + 0x10));
  }
  FUN_00018e10(*(undefined2 *)(param_1 + 0x18));
  piVar4 = *(int **)(*(int *)(param_1 + 0xc) + 0x14);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10));
  }
  FUN_00018e10(*(undefined2 *)(param_1 + 0x18));
  return uVar8;
}

