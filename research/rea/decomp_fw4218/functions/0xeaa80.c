// rea decompile_all
// name: FUN_000eaa80
// address: 0xeaa80
// body: available
// range: 0xeaa80-0xeac53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xeaae8 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000eaa80(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  iVar7 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 8) != iVar7) {
    *(uint *)(param_1 + 0xc) = iVar7 - (iVar7 - *(int *)(param_1 + 8) & 0xfffffffcU);
  }
  if (*param_2 != 0xff) {
    do {
      piVar8 = *(int **)(param_1 + 0xc);
      piVar9 = (int *)(param_1 + 8);
      if (piVar8 == *(int **)(param_1 + 0x10)) {
        uVar1 = (int)piVar8 - *piVar9 >> 2;
        if (uVar1 < (uint)((int)*(int **)(param_1 + 0x10) - *piVar9 >> 2)) {
          *(int **)(param_1 + 0xc) = piVar8 + 1;
          if (piVar8 != (int *)0x0) {
            *piVar8 = piVar8[-1];
          }
          piVar9 = piVar8 + -1;
          iVar7 = (int)piVar9 - (int)piVar8;
          if (0 < iVar7 >> 2) {
            piVar4 = piVar8;
            if (iVar7 * 0x20000000 < 0) {
              piVar9 = piVar8 + -2;
              piVar4 = piVar8 + -1;
              *piVar4 = *piVar9;
            }
            for (iVar7 = iVar7 >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
              piVar4[-1] = piVar9[-1];
              piVar9 = piVar9 + -2;
              piVar4 = piVar4 + -2;
              *piVar4 = *piVar9;
            }
          }
          *piVar8 = *param_2;
        }
        else {
          uVar3 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          uVar10 = uVar1 + 1;
          if (uVar1 + 1 <= uVar3) {
            uVar10 = uVar3;
          }
          piVar2 = (int *)FUN_00173860(uVar10 << 2,0);
          piVar5 = piVar2;
          for (piVar4 = (int *)*piVar9; piVar4 != piVar8; piVar4 = piVar4 + 1) {
            if (piVar5 != (int *)0x0) {
              *piVar5 = *piVar4;
            }
            piVar5 = piVar5 + 1;
          }
          piVar4 = (int *)(((int)piVar8 - *piVar9 & 0xfffffffcU) + (int)piVar2);
          if (piVar4 != (int *)0x0) {
            *piVar4 = *param_2;
          }
          piVar5 = *(int **)(param_1 + 0xc);
          piVar4 = (int *)(((int)piVar8 - *piVar9 & 0xfffffffcU) + (int)piVar2);
          for (; piVar8 != piVar5; piVar8 = piVar8 + 1) {
            piVar4 = piVar4 + 1;
            if (piVar4 != (int *)0x0) {
              *piVar4 = *piVar8;
            }
          }
          iVar7 = *piVar9;
          iVar6 = *(int *)(param_1 + 0xc);
          FUN_00173a54(iVar7,*(int *)(param_1 + 0x10) - iVar7 >> 2,0);
          *(int **)(param_1 + 0x10) = piVar2 + uVar10;
          *(int **)(param_1 + 0xc) = piVar2 + (iVar6 - iVar7 >> 2) + 1;
          *piVar9 = (int)piVar2;
        }
      }
      else {
        *(int **)(param_1 + 0xc) = piVar8 + 1;
        if (piVar8 != (int *)0x0) {
          *piVar8 = *param_2;
        }
      }
      param_2 = param_2 + 1;
    } while (*param_2 != 0xff);
    return;
  }
  return;
}

