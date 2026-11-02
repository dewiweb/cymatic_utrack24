// rea decompile_all
// name: FUN_0005a570
// address: 0x5a570
// body: available
// range: 0x5a570-0x5a79b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0005a570(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  for (iVar6 = *(int *)(param_1 + 4); *(int *)(param_1 + 8) != iVar6; iVar6 = iVar6 + 0x1c) {
    for (piVar5 = *(int **)(iVar6 + 0x10); *(int **)(iVar6 + 0x14) != piVar5; piVar5 = piVar5 + 1) {
      if (*(int *)*piVar5 == param_2) {
        iVar7 = *piVar5;
        if (iVar7 != 0) {
          if (*(int *)(iVar7 + 0xc) != 0) {
            FUN_0019f30c();
            *(undefined4 *)(iVar7 + 0xc) = 0;
          }
          FUN_0019f30c(iVar7);
        }
        piVar3 = *(int **)(iVar6 + 0x14);
        if (*(int **)(iVar6 + 0x10) != piVar3) {
          piVar1 = piVar5 + 1;
          if (piVar1 != piVar3) {
            iVar7 = (int)piVar3 - (int)piVar1 >> 2;
            if (0 < iVar7) {
              iVar2 = 0;
              if (piVar1 < piVar3) {
                iVar4 = -(((int)piVar3 - (int)piVar1) * 0x20000000 >> 0x1f);
                if (iVar4 == 1) {
                  iVar2 = 1;
                  *piVar5 = *piVar1;
                }
              }
              else {
                iVar4 = 0;
              }
              for (; iVar4 < iVar7; iVar4 = iVar4 + 2) {
                piVar5[iVar2] = piVar1[iVar2];
                piVar5[iVar2 + 1] = piVar1[iVar2 + 1];
                iVar2 = iVar2 + 2;
              }
            }
          }
          *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + -4;
        }
        return 0;
      }
    }
  }
  piVar5 = *(int **)(param_1 + 0x10);
  while( true ) {
    if (*(int **)(param_1 + 0x14) == piVar5) {
      return -1;
    }
    if (*(int *)*piVar5 == param_2) break;
    piVar5 = piVar5 + 1;
  }
  iVar6 = FUN_0019f30c(param_2);
  if (iVar6 != 0) {
    return iVar6;
  }
  iVar6 = *piVar5;
  if (iVar6 != 0) {
    if (*(int *)(iVar6 + 0xc) != 0) {
      FUN_0019f30c();
      *(undefined4 *)(iVar6 + 0xc) = 0;
    }
    FUN_0019f30c(iVar6);
  }
  piVar3 = *(int **)(param_1 + 0x14);
  if (*(int **)(param_1 + 0x10) == piVar3) {
    return 0;
  }
  piVar1 = piVar5 + 1;
  if (piVar1 != piVar3) {
    iVar6 = (int)piVar3 - (int)piVar1 >> 2;
    if (0 < iVar6) {
      iVar7 = 0;
      if (piVar1 < piVar3) {
        iVar2 = -(((int)piVar3 - (int)piVar1) * 0x20000000 >> 0x1f);
        if (iVar2 == 1) {
          iVar7 = 1;
          *piVar5 = *piVar1;
        }
      }
      else {
        iVar2 = 0;
      }
      for (; iVar2 < iVar6; iVar2 = iVar2 + 2) {
        piVar5[iVar7] = piVar1[iVar7];
        piVar5[iVar7 + 1] = piVar1[iVar7 + 1];
        iVar7 = iVar7 + 2;
      }
    }
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -4;
  return 0;
}

