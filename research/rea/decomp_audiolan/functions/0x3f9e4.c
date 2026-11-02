// rea decompile_all
// name: FUN_0003f9e4
// address: 0x3f9e4
// body: available
// range: 0x3f9e4-0x3fbf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0003f9e4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 == 1) {
    iVar4 = 4;
  }
  else {
    if (param_3 != 0x1c) {
      if (*DAT_0003fbf8 == 0) {
        return 0;
      }
      uVar1 = FUN_000203e4(param_3);
      FUN_00024642(3,DAT_0003fbfc,param_2,uVar1);
      return 0;
    }
    iVar4 = 6;
  }
  if ((param_4 == *DAT_0003fc00) || (iVar2 = FUN_00023df0(param_2), iVar2 == 0)) {
    iVar2 = FUN_00021808(param_1,param_2);
    if ((iVar2 == 0) || ((*(int *)(iVar2 + 4) != 0 || (*(int *)(iVar2 + 8) == 0)))) {
      piVar3 = *(int **)(&DAT_00001fcc + param_1);
      if (piVar3 != (int *)0x0) {
        do {
          if ((piVar3[0x501] == iVar4) &&
             ((((param_4 == 0 || (param_4 == *DAT_0003fc0c)) || (param_4 == *DAT_0003fc10)) ||
              ((param_4 == *DAT_0003fc00 || (piVar3[0x500] == param_4)))))) {
            if (iVar4 == 4) {
              if ((char)piVar3[0x502] == '\x7f') {
                if (((*(char *)((int)piVar3 + 0x1409) != '\0') ||
                    (*(char *)((int)piVar3 + 0x140a) != '\0')) ||
                   (*(char *)((int)piVar3 + 0x140b) != '\x01')) goto LAB_0003fafe;
              }
              else if (((char)piVar3[0x502] != -0x57) || (*(char *)((int)piVar3 + 0x1409) != -2)) {
LAB_0003fafe:
                if (*DAT_0003fbf8 == 0) {
                  return 0;
                }
                uVar1 = FUN_000203e4(param_3);
                FUN_00024642(3,DAT_0003fc18,param_2,uVar1,(int)piVar3 + DAT_0003fc14);
                return 0;
              }
            }
            else if (iVar4 == 6) {
              iVar5 = piVar3[0x502];
              iVar2 = piVar3[0x503];
              iVar6 = piVar3[0x504];
              if ((((((iVar2 != 0 || iVar5 != 0) || iVar6 != 0) || ((char)piVar3[0x505] != '\0')) ||
                   (*(char *)((int)piVar3 + 0x1415) != '\0')) ||
                  ((*(char *)((int)piVar3 + 0x1416) != '\0' ||
                   (*(char *)((int)piVar3 + 0x1417) != '\x01')))) &&
                 (((((char)piVar3[0x502] != -2 || (*(byte *)((int)piVar3 + 0x1409) >> 6 != 2)) &&
                   ((((iVar5 != *(int *)(&DAT_000026f0 + param_1) ||
                      (iVar2 != *(int *)(&DAT_000026f4 + param_1))) ||
                     (iVar6 != *(int *)(&DAT_000026f8 + param_1))) ||
                    (piVar3[0x505] != *(int *)(&DAT_000026fc + param_1))))) &&
                  ((((iVar5 != *(int *)(&DAT_00002714 + param_1) ||
                     (iVar2 != *(int *)(&DAT_00002718 + param_1))) ||
                    (iVar6 != *(int *)(&DAT_0000271c + param_1))) ||
                   (piVar3[0x505] != *(int *)(&LAB_00002720 + param_1))))))) {
                if (*DAT_0003fbf8 == 0) {
                  return 0;
                }
                uVar1 = FUN_000203e4(param_3);
                FUN_00024642(3,DAT_0003fc1c,param_2,uVar1,(int)piVar3 + DAT_0003fc14);
                return 0;
              }
            }
          }
          piVar3 = (int *)*piVar3;
        } while (piVar3 != (int *)0x0);
      }
      if (*DAT_0003fbf8 != 0) {
        uVar1 = FUN_000203e4(param_3);
        FUN_00024642(3,DAT_0003fc20,param_2,uVar1);
      }
      return 1;
    }
    if (*DAT_0003fbf8 != 0) {
      uVar1 = FUN_000203e4(param_3);
      FUN_00024642(3,DAT_0003fc08,param_2,uVar1);
    }
  }
  else if (*DAT_0003fbf8 != 0) {
    uVar1 = FUN_000203e4(param_3);
    FUN_00024642(3,DAT_0003fc04,param_2,uVar1);
  }
  return 0;
}

