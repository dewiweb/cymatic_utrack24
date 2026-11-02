// rea decompile_all
// name: FUN_000b2af4
// address: 0xb2af4
// body: available
// range: 0xb2af4-0xb2f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_000b2af4(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  
  if (*(int *)(param_1 + 0x3c) == *(int *)(param_1 + 0x38)) {
    return (int *)0x0;
  }
  iVar2 = FUN_000b372c(param_1);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  iVar2 = 0;
  piVar13 = (int *)(*(undefined4 **)(param_1 + 0x24))[1];
  piVar14 = (int *)**(undefined4 **)(param_1 + 0x24);
  if (piVar13 != piVar14) {
    piVar10 = (int *)(*(undefined4 **)(param_1 + 0x28))[1];
    piVar12 = (int *)**(undefined4 **)(param_1 + 0x28);
    do {
      if (piVar10 != piVar12) {
        piVar3 = piVar12;
        do {
          if (*(char *)(*piVar14 + 4) == *(char *)(*piVar3 + 4)) {
            iVar4 = *(int *)(*piVar14 + 8);
            if (iVar4 <= *(int *)(*piVar3 + 8)) {
              iVar4 = *(int *)(*piVar3 + 8);
            }
            iVar2 = iVar2 + iVar4;
            break;
          }
          piVar3 = piVar3 + 1;
        } while (piVar10 != piVar3);
      }
      piVar14 = piVar14 + 1;
    } while (piVar13 != piVar14);
  }
  *(int *)(param_1 + 0x38) = iVar2;
  uVar5 = FUN_000b34e8(param_1);
  piVar13 = (int *)0x0;
  bVar1 = 1 < *(uint *)(param_1 + 0x38);
  piVar14 = (int *)0x0;
  piVar10 = (int *)0x0;
  if (uVar5 == 1) {
    uVar8 = FUN_000b3294(param_1,1);
    iVar2 = FUN_001f01c4(0x2c,uVar8);
    if (iVar2 == 0) {
      return (int *)0x0;
    }
    piVar12 = (int *)FUN_0006d6cc(iVar2,bVar1);
    piVar13 = piVar12;
  }
  else if (uVar5 == 2) {
    uVar8 = FUN_000b3294(param_1,2);
    iVar2 = FUN_001f01c4(0x2c,uVar8);
    if (iVar2 == 0) {
      return (int *)0x0;
    }
    piVar12 = (int *)FUN_00076088(iVar2,bVar1);
    piVar14 = piVar12;
  }
  else if (uVar5 == 3) {
    uVar8 = FUN_000b3294(param_1,3);
    iVar2 = FUN_001f01c4(0x34,uVar8);
    if (iVar2 == 0) {
      return (int *)0x0;
    }
    piVar12 = (int *)FUN_00064304(iVar2,bVar1);
    piVar10 = piVar12;
  }
  else {
    if (uVar5 != 4) {
      return (int *)0x0;
    }
    uVar8 = FUN_000b3294(param_1,4);
    iVar2 = FUN_001f01c4(0x14,uVar8);
    if (iVar2 == 0) {
      return (int *)0x0;
    }
    piVar12 = (int *)FUN_00064528();
  }
  if (piVar12 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = 0;
  piVar6 = (int *)**(int **)(param_1 + 0x28);
  piVar11 = (int *)(*(int **)(param_1 + 0x28))[1];
  piVar3 = piVar6;
  while (piVar11 != piVar3) {
    iVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    if (*(byte *)(iVar4 + 4) == uVar5) {
      iVar2 = *(int *)(iVar4 + 0xc);
    }
  }
  piVar15 = (int *)(*(int **)(param_1 + 0x24))[1];
  piVar7 = (int *)**(int **)(param_1 + 0x24);
  for (piVar3 = piVar7; piVar15 != piVar3; piVar3 = piVar3 + 1) {
    if (*(byte *)(*piVar3 + 4) == uVar5) {
      iVar4 = *(int *)(*piVar3 + 0xc);
      if (iVar2 <= iVar4) {
        iVar2 = iVar4;
      }
      goto LAB_000b2d24;
    }
  }
  iVar2 = 0;
LAB_000b2d24:
  iVar4 = 0;
  while (piVar11 != piVar6) {
    iVar9 = *piVar6;
    piVar6 = piVar6 + 1;
    if (*(byte *)(iVar9 + 4) == uVar5) {
      iVar4 = *(int *)(iVar9 + 0x10);
    }
  }
  for (; piVar15 != piVar7; piVar7 = piVar7 + 1) {
    if (*(byte *)(*piVar7 + 4) == uVar5) {
      iVar9 = *(int *)(*piVar7 + 0x10);
      if (iVar4 <= iVar9) {
        iVar4 = iVar9;
      }
      if (iVar4 != 0) {
        iVar2 = (**(code **)(*piVar12 + 0xc))(piVar12);
        goto LAB_000b2dac;
      }
      break;
    }
  }
  iVar2 = (**(code **)(*piVar12 + 8))(piVar12,iVar2);
LAB_000b2dac:
  if (iVar2 != 0) {
    if (uVar5 == 1) {
      FUN_0006d398(piVar13,*(undefined1 *)(param_1 + 0x2c));
      FUN_0006d520(piVar13,*(undefined1 *)(param_1 + 0x2d));
      if (*(char *)(param_1 + 0x30) != '\0') {
        FUN_0006d550(piVar13,*(undefined1 *)(param_1 + 0x32));
        FUN_0006d514(piVar13,*(undefined1 *)(param_1 + 0x31));
      }
      if (*(char *)(param_1 + 0x33) != '\0') {
        FUN_0006d55c(piVar13,*(undefined4 *)(param_1 + 0x34));
      }
      iVar2 = FUN_0006d5c4(piVar13);
    }
    else if (uVar5 == 2) {
      FUN_00075eb8(piVar14,*(undefined1 *)(param_1 + 0x2c));
      FUN_00075efc(piVar14,*(undefined1 *)(param_1 + 0x2d));
      if (*(char *)(param_1 + 0x33) != '\0') {
        FUN_00075f38(piVar14,*(undefined4 *)(param_1 + 0x34));
      }
      iVar2 = FUN_00075fe8(piVar14);
    }
    else {
      if (uVar5 != 3) {
        if (uVar5 != 4) goto joined_r0x000b2ddc;
        goto LAB_000b2ef4;
      }
      FUN_000640b8(piVar10,*(undefined1 *)(param_1 + 0x2c));
      FUN_000640f4(piVar10,*(undefined1 *)(param_1 + 0x2d));
      if (*(char *)(param_1 + 0x30) != '\0') {
        FUN_00064124(piVar10,*(undefined1 *)(param_1 + 0x32));
        FUN_000640e8(piVar10,*(undefined1 *)(param_1 + 0x31));
      }
      if (*(char *)(param_1 + 0x33) != '\0') {
        FUN_00064148(piVar10,*(undefined4 *)(param_1 + 0x34));
      }
      iVar2 = FUN_000641c8(piVar10);
    }
    if (iVar2 != 0) {
LAB_000b2ef4:
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      return piVar12;
    }
  }
joined_r0x000b2ddc:
  if (piVar12 != (int *)0x0) {
    (**(code **)(*piVar12 + 4))(piVar12);
  }
  return (int *)0x0;
}

