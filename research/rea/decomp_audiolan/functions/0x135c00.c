// rea decompile_all
// name: FUN_00135c00
// address: 0x135c00
// body: available
// range: 0x135c00-0x135e7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00135c00(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  while (piVar3 = *(int **)(param_1 + 8), piVar3 != (int *)0x0) {
    *(int *)(param_1 + 8) = piVar3[2];
    if (*(int **)(param_1 + 0xc) == piVar3) {
      *(int *)(param_1 + 0xc) = (*(int **)(param_1 + 0xc))[1];
    }
    if (piVar3[1] != 0) {
      *(int *)(piVar3[1] + 8) = piVar3[2];
    }
    if (piVar3[2] != 0) {
      *(int *)(piVar3[2] + 4) = piVar3[1];
    }
    piVar3[1] = 0;
    piVar3[2] = 0;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    (**(code **)(*piVar3 + 4))();
  }
  iVar4 = *(int *)(param_1 + 0x20);
  uVar1 = DAT_00135e7c;
  while (DAT_00135e7c = uVar1, iVar4 != 0) {
    *(undefined2 *)(iVar4 + 0x12) = 1;
    uVar1 = DAT_00135e7c;
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x20);
    }
    else {
      iVar4 = *(int *)(iVar4 + 8);
    }
  }
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x6c);
  while (piVar3 != (int *)0x0) {
    iVar7 = 0;
    iVar4 = (**(code **)(*piVar3 + 0x60))(piVar3);
    if (0 < iVar4) {
      do {
        puVar5 = (undefined4 *)FUN_0016d7a4(0x14,DAT_00135e80);
        if (puVar5 != (undefined4 *)0x0) {
          puVar5[1] = 0;
          *puVar5 = uVar1;
          puVar5[2] = 0;
          puVar5[3] = piVar3;
          puVar5[4] = iVar7;
          (**(code **)(*piVar3 + 0x38))(piVar3);
          puVar5[1] = 0;
          puVar5[2] = 0;
          if (*(int *)(param_1 + 0xc) == 0) {
            *(undefined4 **)(param_1 + 8) = puVar5;
          }
          else {
            puVar5[1] = *(int *)(param_1 + 0xc);
            *(undefined4 **)(*(int *)(param_1 + 0xc) + 8) = puVar5;
          }
          *(undefined4 **)(param_1 + 0xc) = puVar5;
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        }
        iVar7 = iVar7 + 1;
        iVar4 = (**(code **)(*piVar3 + 0x60))(piVar3);
      } while (iVar7 < iVar4);
    }
    iVar4 = *(int *)(param_1 + 0x20);
    while (iVar4 != 0) {
      uVar6 = (**(code **)(*piVar3 + 0x5c))(piVar3);
      if (uVar6 == *(ushort *)(iVar4 + 0x10)) {
        sVar2 = (**(code **)(*piVar3 + 0x60))(piVar3);
        *(short *)(iVar4 + 0x12) = sVar2 + *(short *)(iVar4 + 0x12);
      }
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0x20);
      }
      else {
        iVar4 = *(int *)(iVar4 + 8);
      }
    }
    if (piVar3 == (int *)0x0) {
      piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x6c);
    }
    else {
      piVar3 = (int *)piVar3[0x1e];
    }
  }
  iVar4 = *(int *)(param_1 + 0x14);
  while (iVar4 != 0) {
    iVar7 = *(int *)(param_1 + 0x20);
    while (iVar7 != 0) {
      if (*(short *)(iVar7 + 0x10) == *(short *)(iVar4 + 0x14)) {
        *(short *)(iVar7 + 0x12) = *(short *)(iVar7 + 0x12) + 1;
      }
      if (iVar7 == 0) {
        iVar7 = *(int *)(param_1 + 0x20);
      }
      else {
        iVar7 = *(int *)(iVar7 + 8);
      }
    }
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x14);
    }
    else {
      iVar4 = *(int *)(iVar4 + 8);
    }
  }
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 != 0) {
    do {
      (**(code **)(**(int **)(iVar4 + 0xc) + 0x40))
                (*(int **)(iVar4 + 0xc),*(undefined2 *)(iVar4 + 0x12));
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0x20);
      }
      else {
        iVar4 = *(int *)(iVar4 + 8);
      }
    } while (iVar4 != 0);
    return;
  }
  return;
}

