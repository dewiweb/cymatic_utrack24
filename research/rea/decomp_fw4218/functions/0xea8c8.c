// rea decompile_all
// name: FUN_000ea8c8
// address: 0xea8c8
// body: available
// range: 0xea8c8-0xeaa7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xea930 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000ea8c8(int param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  if (*param_2 != '\0') {
    do {
      pcVar6 = *(char **)(param_1 + 0x18);
      piVar8 = (int *)(param_1 + 0x14);
      if (pcVar6 == *(char **)(param_1 + 0x1c)) {
        uVar1 = (int)pcVar6 - *piVar8;
        if (uVar1 < (uint)((int)*(char **)(param_1 + 0x1c) - *piVar8)) {
          *(char **)(param_1 + 0x18) = pcVar6 + 1;
          if (pcVar6 != (char *)0x0) {
            *pcVar6 = pcVar6[-1];
          }
          pcVar2 = pcVar6 + -1;
          uVar1 = (int)pcVar2 - (int)pcVar6;
          if (0 < (int)uVar1) {
            pcVar7 = pcVar6;
            if ((uVar1 & 1) != 0) {
              pcVar2 = pcVar6 + -2;
              pcVar7 = pcVar6 + -1;
              *pcVar7 = *pcVar2;
            }
            for (iVar4 = (int)uVar1 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
              pcVar7[-1] = pcVar2[-1];
              pcVar2 = pcVar2 + -2;
              pcVar7 = pcVar7 + -2;
              *pcVar7 = *pcVar2;
            }
          }
          *pcVar6 = *param_2;
        }
        else {
          uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar9 < uVar1 + 1) {
            uVar9 = uVar1 + 1;
          }
          pcVar3 = (char *)FUN_00173860(uVar9,0);
          pcVar7 = pcVar3;
          for (pcVar2 = (char *)*piVar8; pcVar2 != pcVar6; pcVar2 = pcVar2 + 1) {
            if (pcVar7 != (char *)0x0) {
              *pcVar7 = *pcVar2;
            }
            pcVar7 = pcVar7 + 1;
          }
          if (pcVar3 + ((int)pcVar6 - *piVar8) != (char *)0x0) {
            pcVar3[(int)pcVar6 - *piVar8] = *param_2;
          }
          pcVar7 = *(char **)(param_1 + 0x18);
          pcVar2 = pcVar3 + ((int)pcVar6 - *piVar8);
          for (; pcVar6 != pcVar7; pcVar6 = pcVar6 + 1) {
            pcVar2 = pcVar2 + 1;
            if (pcVar2 != (char *)0x0) {
              *pcVar2 = *pcVar6;
            }
          }
          iVar4 = *piVar8;
          iVar5 = *(int *)(param_1 + 0x18);
          FUN_00173a54(iVar4,*(int *)(param_1 + 0x1c) - iVar4,0);
          *(char **)(param_1 + 0x1c) = pcVar3 + uVar9;
          *(char **)(param_1 + 0x18) = pcVar3 + (iVar5 - iVar4) + 1;
          *piVar8 = (int)pcVar3;
        }
      }
      else {
        *(char **)(param_1 + 0x18) = pcVar6 + 1;
        if (pcVar6 != (char *)0x0) {
          *pcVar6 = *param_2;
        }
      }
      param_2 = param_2 + 1;
    } while (*param_2 != '\0');
    return;
  }
  return;
}

