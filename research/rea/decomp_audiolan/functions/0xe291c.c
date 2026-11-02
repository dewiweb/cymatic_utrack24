// rea decompile_all
// name: FUN_000e291c
// address: 0xe291c
// body: available
// range: 0xe291c-0xe2a7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000e291c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  
  puVar12 = *(undefined4 **)(param_1 + 0x48);
  if (*(undefined4 **)(param_1 + 0x4c) == puVar12) {
    return 1;
  }
  while( true ) {
    piVar13 = (int *)*puVar12;
    uVar1 = FUN_0015727c(piVar13);
    uVar2 = FUN_00159a08(param_2);
    iVar3 = FUN_00160a14(uVar1,uVar2);
    uVar1 = DAT_000e2a7c;
    if (iVar3 != 0) break;
    puVar12 = puVar12 + 1;
    if (*(undefined4 **)(param_1 + 0x4c) == puVar12) {
      return 1;
    }
  }
  FUN_001a0700();
  piVar4 = (int *)piVar13[3];
  if ((int *)piVar13[4] != piVar4) {
    piVar8 = (int *)piVar13[4];
    piVar5 = piVar4;
    do {
      if (*piVar5 == param_2) {
        if (piVar4 != piVar8) {
          piVar4 = piVar5 + 1;
          if (piVar4 != piVar8) {
            iVar3 = (int)piVar8 - (int)piVar4 >> 2;
            if (0 < iVar3) {
              iVar10 = 0;
              if (piVar4 < piVar8) {
                uVar9 = ((int)piVar8 - (int)piVar4 & 7U) >> 2;
                if (uVar9 == 1) {
                  *piVar5 = *piVar4;
                  iVar10 = 1;
                }
              }
              else {
                uVar9 = 0;
              }
              for (; (int)uVar9 < iVar3; uVar9 = uVar9 + 2) {
                iVar11 = iVar10 + 1;
                piVar5[iVar10] = piVar4[iVar10];
                iVar10 = iVar10 + 2;
                piVar5[iVar11] = piVar4[iVar11];
              }
            }
          }
          piVar13[4] = piVar13[4] + -4;
        }
        FUN_001a0d18(uVar1);
        if (piVar13[2] != 0) {
          return 1;
        }
        if (piVar13[3] != piVar13[4]) {
          return 1;
        }
        puVar7 = *(undefined4 **)(param_1 + 0x4c);
        if (*(undefined4 **)(param_1 + 0x48) != puVar7) {
          puVar6 = puVar12 + 1;
          if (puVar6 != puVar7) {
            iVar3 = (int)puVar7 - (int)puVar6 >> 2;
            if (0 < iVar3) {
              iVar10 = 0;
              if (puVar6 < puVar7) {
                uVar9 = ((int)puVar7 - (int)puVar6 & 7U) >> 2;
                if (uVar9 == 1) {
                  *puVar12 = *puVar6;
                  iVar10 = 1;
                }
              }
              else {
                uVar9 = 0;
              }
              for (; (int)uVar9 < iVar3; uVar9 = uVar9 + 2) {
                iVar11 = iVar10 + 1;
                puVar12[iVar10] = puVar6[iVar10];
                iVar10 = iVar10 + 2;
                puVar12[iVar11] = puVar6[iVar11];
              }
            }
          }
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -4;
        }
        if (piVar13 == (int *)0x0) {
          return 1;
        }
        (**(code **)(*piVar13 + 4))(piVar13);
        return 1;
      }
      piVar5 = piVar5 + 1;
    } while (piVar8 != piVar5);
  }
  FUN_001a0d18(uVar1);
  return 0;
}

