// rea decompile_all
// name: FUN_000d3d08
// address: 0xd3d08
// body: available
// range: 0xd3d08-0xd3f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d3d08(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  
  piVar5 = *(int **)(param_1 + 0x5ac);
  piVar1 = *(int **)(param_1 + 0x5b0);
  if (param_3 == 0) {
    uVar6 = 0;
    if (piVar1 != piVar5) {
      do {
        piVar1 = (int *)FUN_0006a6e4();
        iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,*piVar5);
        if (iVar2 == 0) {
          FUN_000028a4(DAT_000d3f34,*piVar5);
        }
        piVar5 = piVar5 + 1;
      } while (*(int **)(param_1 + 0x5b0) != piVar5);
    }
    iVar2 = *(int *)(param_1 + 0x5b0);
    iVar4 = *(int *)(param_1 + 0x5ac);
    if (iVar4 != iVar2) {
      *(uint *)(param_1 + 0x5b0) = iVar2 - (iVar2 - iVar4 & 0xfffffffcU);
    }
    iVar2 = *(int *)(param_1 + 0x5bc);
    iVar4 = *(int *)(param_1 + 0x5b8);
    if (iVar4 != iVar2) {
      *(uint *)(param_1 + 0x5bc) = iVar2 - (iVar2 - iVar4 & 0xfffffffcU);
    }
  }
  else {
    uVar6 = 0x1b;
    if (piVar1 != piVar5) {
      while (*piVar5 != param_3) {
        piVar5 = piVar5 + 1;
        if (piVar1 == piVar5) goto LAB_000d3f18;
      }
      piVar1 = (int *)FUN_0006a6e4();
      iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_3);
      if (iVar2 == 0) {
        FUN_000028a4(DAT_000d3f34,*piVar5);
      }
      piVar1 = *(int **)(param_1 + 0x5b0);
      if (*(int **)(param_1 + 0x5ac) != piVar1) {
        piVar7 = piVar5 + 1;
        if ((piVar1 != piVar7) && (iVar2 = (int)piVar1 - (int)piVar7, 0 < iVar2 >> 2)) {
          piVar1 = piVar5;
          piVar3 = piVar5 + -1;
          if (iVar2 * 0x20000000 < 0) {
            *piVar5 = *piVar7;
            piVar1 = piVar7;
            piVar3 = piVar5;
          }
          for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
            piVar3[1] = piVar1[1];
            piVar1 = piVar1 + 2;
            piVar3 = piVar3 + 2;
            *piVar3 = *piVar1;
          }
        }
        *(int *)(param_1 + 0x5b0) = *(int *)(param_1 + 0x5b0) + -4;
      }
      piVar1 = *(int **)(param_1 + 0x5b8);
      if (*(int **)(param_1 + 0x5bc) != piVar1) {
        piVar7 = *(int **)(param_1 + 0x5bc);
        piVar5 = piVar1;
        do {
          if (*piVar5 == param_3) {
            if (piVar1 != piVar7) {
              piVar1 = piVar5 + 1;
              if ((piVar1 != piVar7) && (iVar2 = (int)piVar7 - (int)piVar1, 0 < iVar2 >> 2)) {
                piVar7 = piVar5 + -1;
                if (iVar2 * 0x20000000 < 0) {
                  *piVar5 = *piVar1;
                  piVar7 = piVar5;
                  piVar5 = piVar1;
                }
                for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
                  piVar7[1] = piVar5[1];
                  piVar5 = piVar5 + 2;
                  piVar7 = piVar7 + 2;
                  *piVar7 = *piVar5;
                }
              }
              *(int *)(param_1 + 0x5bc) = *(int *)(param_1 + 0x5bc) + -4;
            }
            break;
          }
          piVar5 = piVar5 + 1;
        } while (piVar7 != piVar5);
      }
      uVar6 = 0;
    }
  }
LAB_000d3f18:
                    /* WARNING: Could not recover jumptable at 0x000d3f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,uVar6);
  return;
}

