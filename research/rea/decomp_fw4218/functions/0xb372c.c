// rea decompile_all
// name: FUN_000b372c
// address: 0xb372c
// body: available
// range: 0xb372c-0xb3ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b372c(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  piVar7 = *(int **)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x1c) * 4);
  piVar8 = *(int **)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x20) * 4);
  if ((1 < (uint)(piVar7[1] - *piVar7 >> 2)) &&
     (iVar2 = FUN_000b33b8(param_1,piVar7,param_1 + 0x10), iVar2 != 0)) {
    *(int **)(param_1 + 0x24) = piVar7;
    *(int *)(param_1 + 0x28) = iVar2;
    return 1;
  }
  if ((1 < (uint)(piVar8[1] - *piVar8 >> 2)) &&
     (iVar2 = FUN_000b33b8(param_1,piVar8,param_1 + 4), iVar2 != 0)) {
LAB_000b3824:
    *(int *)(param_1 + 0x24) = iVar2;
    *(int **)(param_1 + 0x28) = piVar8;
    return 1;
  }
  if ((*(char *)(*(int *)*piVar7 + 4) == '\x01') &&
     (piVar3 = (int *)FUN_000b33b8(param_1,piVar7,param_1 + 0x10), piVar3 != (int *)0x0)) {
    *(int **)(param_1 + 0x24) = piVar7;
LAB_000b395c:
    *(int **)(param_1 + 0x28) = piVar3;
    return 1;
  }
  if ((*(char *)(*(int *)*piVar8 + 4) == '\x01') &&
     (iVar2 = FUN_000b33b8(param_1,piVar8,param_1 + 4), iVar2 != 0)) goto LAB_000b3824;
  cVar6 = *(char *)(param_1 + 0x2e);
  bVar11 = cVar6 == '\v';
  if (bVar11) {
    cVar6 = *(char *)(param_1 + 0x2f);
  }
  if (bVar11 && cVar6 == '\v') {
    piVar3 = (int *)*piVar7;
    if ((int *)piVar7[1] != piVar3) {
      do {
        if ((int *)piVar8[1] == (int *)*piVar8) {
LAB_000b389c:
          iVar2 = FUN_000b33b8(param_1,piVar7,param_1 + 0x10);
          iVar5 = FUN_000b33b8(param_1,piVar8,param_1 + 4);
          if (iVar2 != 0 || iVar5 != 0) {
            *(int **)(param_1 + 0x24) = piVar7;
            *(int *)(param_1 + 0x28) = iVar2;
            return 1;
          }
          puVar9 = *(undefined4 **)(param_1 + 4);
          if (*(undefined4 **)(param_1 + 8) != puVar9) {
            do {
              puVar10 = (undefined4 *)*puVar9;
              if (*(int **)(param_1 + 0x14) != *(int **)(param_1 + 0x10)) {
                piVar7 = *(int **)(param_1 + 0x10);
                do {
                  piVar3 = (int *)*piVar7;
                  if ((int *)puVar10[1] == (int *)*puVar10) {
LAB_000b3950:
                    if (piVar3 != (int *)0x0) {
                      *(undefined4 **)(param_1 + 0x24) = puVar10;
                      goto LAB_000b395c;
                    }
                    break;
                  }
                  piVar8 = (int *)*puVar10;
                  while ((int *)piVar3[1] != (int *)*piVar3) {
                    piVar4 = (int *)*piVar3;
                    while (*(char *)(*piVar8 + 4) != *(char *)(*piVar4 + 4)) {
                      piVar4 = piVar4 + 1;
                      if ((int *)piVar3[1] == piVar4) goto LAB_000b3970;
                    }
                    piVar8 = piVar8 + 1;
                    if ((int *)puVar10[1] == piVar8) goto LAB_000b3950;
                  }
LAB_000b3970:
                  piVar7 = piVar7 + 1;
                } while (*(int **)(param_1 + 0x14) != piVar7);
              }
              puVar9 = puVar9 + 1;
            } while (*(undefined4 **)(param_1 + 8) != puVar9);
          }
          goto LAB_000b398c;
        }
        piVar4 = (int *)*piVar8;
        while (*(char *)(*piVar3 + 4) != *(char *)(*piVar4 + 4)) {
          piVar4 = piVar4 + 1;
          if ((int *)piVar8[1] == piVar4) goto LAB_000b389c;
        }
        piVar3 = piVar3 + 1;
      } while ((int *)piVar7[1] != piVar3);
    }
    *(int **)(param_1 + 0x24) = piVar7;
    *(int **)(param_1 + 0x28) = piVar8;
    return 1;
  }
LAB_000b398c:
  bVar1 = *(byte *)(param_1 + 0x2e);
  if (bVar1 == 9) {
LAB_000b39d4:
    if (*(char *)(param_1 + 0x2f) != '\v') {
      return 0;
    }
LAB_000b3a0c:
    cVar6 = '\x02';
    goto LAB_000b3a10;
  }
  if (bVar1 < 9) {
    if (bVar1 != 1) {
      if (bVar1 != 8) {
        return 0;
      }
      goto LAB_000b39d4;
    }
LAB_000b39c4:
    if (*(char *)(param_1 + 0x2f) != '\v') {
      return 0;
    }
  }
  else {
    if (bVar1 == 10) goto LAB_000b39c4;
    if (bVar1 != 0xb) {
      return 0;
    }
    cVar6 = *(char *)(param_1 + 0x2f);
    if (cVar6 != '\x01') {
      if (cVar6 == '\b' || cVar6 == '\t') goto LAB_000b3a0c;
      if (cVar6 != '\n') {
        return 0;
      }
    }
  }
  cVar6 = '\x03';
LAB_000b3a10:
  for (puVar9 = *(undefined4 **)(param_1 + 4); *(undefined4 **)(param_1 + 8) != puVar9;
      puVar9 = puVar9 + 1) {
    piVar7 = (int *)*puVar9;
    if ((piVar7[1] - *piVar7 >> 2 == 1) && (*(char *)(*(int *)*piVar7 + 4) == cVar6))
    goto LAB_000b3a58;
  }
  piVar7 = (int *)0x0;
LAB_000b3a58:
  for (puVar9 = *(undefined4 **)(param_1 + 0x10); *(undefined4 **)(param_1 + 0x14) != puVar9;
      puVar9 = puVar9 + 1) {
    puVar10 = (undefined4 *)*puVar9;
    if ((puVar10[1] - (int)*puVar10 >> 2 == 1) && (*(char *)(*(int *)*puVar10 + 4) == cVar6))
    goto LAB_000b3aa4;
  }
  puVar10 = (undefined4 *)0x0;
LAB_000b3aa4:
  if (piVar7 == (int *)0x0 || puVar10 == (undefined4 *)0x0) {
    return 0;
  }
  *(int **)(param_1 + 0x24) = piVar7;
  *(undefined4 **)(param_1 + 0x28) = puVar10;
  return 1;
}

