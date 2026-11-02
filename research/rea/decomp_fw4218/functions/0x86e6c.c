// rea decompile_all
// name: FUN_00086e6c
// address: 0x86e6c
// body: available
// range: 0x86e6c-0x86ff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00086efc) */
/* WARNING: Removing unreachable block (ram,0x00086f00) */

undefined4 FUN_00086e6c(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  
  iVar8 = param_1 + 0x8a0;
  param_1 = param_1 + DAT_00086ff8;
  iVar1 = param_1;
  if (param_3 == 2) {
    iVar1 = iVar8;
  }
  iVar10 = *(int *)(*(int *)(iVar1 + 0x10) + 8);
  iVar1 = iVar8;
  if (param_3 != 2) {
    iVar1 = param_1;
  }
  if (iVar10 != *(int *)(iVar1 + 0x10)) {
    do {
      if (((*(int *)(iVar10 + 0x14) != 0) &&
          (iVar1 = FUN_001c7218(*(int *)(iVar10 + 0x14),DAT_00087000,DAT_00086ffc,0xffffffff),
          iVar1 != 0)) && (*(char *)(iVar1 + 0x2a) != '\0')) {
        piVar2 = (int *)param_2[1];
        if (piVar2 == (int *)param_2[2]) {
          uVar11 = (int)piVar2 - *param_2 >> 2;
          if (uVar11 < (uint)(param_2[2] - *param_2 >> 2)) {
            param_2[1] = (int)(piVar2 + 1);
            if (piVar2 != (int *)0x0) {
              *piVar2 = piVar2[-1];
            }
            *piVar2 = iVar1;
          }
          else {
            uVar5 = (uVar11 >> 1) + uVar11 + (uVar11 >> 3);
            uVar3 = uVar11 + 1;
            if (uVar11 + 1 <= uVar5) {
              uVar3 = uVar5;
            }
            piVar4 = (int *)FUN_00173860(uVar3 * 4,0);
            piVar9 = piVar4;
            for (piVar6 = (int *)*param_2; piVar6 != piVar2; piVar6 = piVar6 + 1) {
              if (piVar9 != (int *)0x0) {
                *piVar9 = *piVar6;
              }
              piVar9 = piVar9 + 1;
            }
            piVar6 = (int *)(((int)piVar2 - *param_2 & 0xfffffffcU) + (int)piVar4);
            if (piVar6 != (int *)0x0) {
              *piVar6 = iVar1;
            }
            piVar9 = (int *)param_2[1];
            piVar6 = (int *)(((int)piVar2 - *param_2 & 0xfffffffcU) + (int)piVar4);
            for (; piVar2 != piVar9; piVar2 = piVar2 + 1) {
              piVar6 = piVar6 + 1;
              if (piVar6 != (int *)0x0) {
                *piVar6 = *piVar2;
              }
            }
            iVar7 = param_2[1];
            iVar1 = *param_2;
            FUN_00173a54(iVar1,param_2[2] - iVar1 >> 2,0);
            *param_2 = (int)piVar4;
            param_2[1] = (int)(piVar4 + (iVar7 - iVar1 >> 2) + 1);
            param_2[2] = (int)(piVar4 + uVar3);
          }
        }
        else {
          param_2[1] = (int)(piVar2 + 1);
          if (piVar2 != (int *)0x0) {
            *piVar2 = iVar1;
          }
        }
      }
      iVar1 = *(int *)(iVar10 + 0xc);
      if (*(int *)(iVar10 + 0xc) == 0) {
        iVar1 = *(int *)(iVar10 + 4);
        while (iVar7 = iVar1, iVar10 == *(int *)(iVar7 + 0xc)) {
          iVar10 = iVar7;
          iVar1 = *(int *)(iVar7 + 4);
        }
        if (*(int *)(iVar10 + 0xc) != iVar7) {
          iVar10 = iVar7;
        }
      }
      else {
        do {
          iVar10 = iVar1;
          iVar1 = *(int *)(iVar10 + 8);
        } while (*(int *)(iVar10 + 8) != 0);
      }
      iVar1 = iVar8;
      if (param_3 != 2) {
        iVar1 = param_1;
      }
    } while (iVar10 != *(int *)(iVar1 + 0x10));
  }
  return 1;
}

