// rea decompile_all
// name: FUN_0015750c
// address: 0x15750c
// body: available
// range: 0x15750c-0x1575df inclusive
// range: 0x15a46c-0x15a67b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0015750c(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  
  if ((((*(char *)(param_1 + 8) == *(char *)(param_2 + 8)) &&
       (*(char *)(param_1 + 9) == *(char *)(param_2 + 9))) &&
      (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
     (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) {
    piVar3 = *(int **)(param_1 + 0x14);
    piVar8 = *(int **)(param_1 + 0x18);
    piVar5 = *(int **)(param_2 + 0x14);
    if ((int)piVar8 - (int)piVar3 >> 2 == *(int *)(param_2 + 0x18) - (int)piVar5 >> 2) {
      for (; (piVar3 != piVar8 && (*piVar3 == *piVar5)); piVar3 = piVar3 + 1) {
        piVar5 = piVar5 + 1;
      }
      if (piVar3 == piVar8) {
        pcVar1 = *(char **)(param_1 + 0x20);
        if (pcVar1 == (char *)0x0) {
          if (*(int *)(param_2 + 0x20) == 0) {
            return 1;
          }
        }
        else {
          pcVar2 = *(char **)(param_2 + 0x20);
          if (pcVar2 != (char *)0x0) {
            if (*pcVar1 == '\0' && *pcVar2 == '\0') {
              return 1;
            }
            if ((((*pcVar1 == *pcVar2) && (*(int *)(pcVar1 + 4) == *(int *)(pcVar2 + 4))) &&
                ((*(int *)(pcVar1 + 8) == *(int *)(pcVar2 + 8) &&
                 (((*(int *)(pcVar1 + 0xc) == *(int *)(pcVar2 + 0xc) &&
                   (*(int *)(pcVar1 + 0x10) == *(int *)(pcVar2 + 0x10))) &&
                  (*(int *)(pcVar1 + 0x14) == *(int *)(pcVar2 + 0x14))))))) &&
               (*(int *)(pcVar1 + 0x18) == *(int *)(pcVar2 + 0x18))) {
              pcVar4 = *(char **)(pcVar1 + 0x1c);
              pcVar9 = *(char **)(pcVar1 + 0x20);
              iVar6 = (int)((ulonglong)
                            ((longlong)DAT_0015a67c * (longlong)((int)pcVar9 - (int)pcVar4)) >> 0x20
                           );
              pcVar7 = *(char **)(pcVar2 + 0x1c);
              iVar10 = (int)((ulonglong)
                             ((longlong)DAT_0015a67c *
                             (longlong)(*(int *)(pcVar2 + 0x20) - (int)pcVar7)) >> 0x20);
              if (iVar6 - (iVar6 >> 0x1f) == iVar10 - (iVar10 >> 0x1f)) {
                for (; ((pcVar4 != pcVar9 && (*pcVar4 == *pcVar7)) &&
                       ((*(short *)(pcVar4 + 2) == *(short *)(pcVar7 + 2) &&
                        (*(short *)(pcVar4 + 4) == *(short *)(pcVar7 + 4))))); pcVar4 = pcVar4 + 6)
                {
                  pcVar7 = pcVar7 + 6;
                }
                if (pcVar4 == pcVar9) {
                  pcVar4 = *(char **)(pcVar1 + 0x28);
                  pcVar9 = *(char **)(pcVar1 + 0x2c);
                  iVar6 = (int)((ulonglong)
                                ((longlong)DAT_0015a67c * (longlong)((int)pcVar9 - (int)pcVar4)) >>
                               0x20);
                  pcVar7 = *(char **)(pcVar2 + 0x28);
                  iVar10 = (int)((ulonglong)
                                 ((longlong)DAT_0015a67c *
                                 (longlong)(*(int *)(pcVar2 + 0x2c) - (int)pcVar7)) >> 0x20);
                  if (iVar6 - (iVar6 >> 0x1f) == iVar10 - (iVar10 >> 0x1f)) {
                    for (; ((pcVar4 != pcVar9 && (*pcVar4 == *pcVar7)) &&
                           ((*(short *)(pcVar4 + 2) == *(short *)(pcVar7 + 2) &&
                            (*(short *)(pcVar4 + 4) == *(short *)(pcVar7 + 4)))));
                        pcVar4 = pcVar4 + 6) {
                      pcVar7 = pcVar7 + 6;
                    }
                    if (pcVar4 == pcVar9) {
                      pcVar4 = *(char **)(pcVar1 + 0x34);
                      pcVar7 = *(char **)(pcVar1 + 0x38);
                      iVar6 = (int)((ulonglong)
                                    ((longlong)DAT_0015a67c * (longlong)((int)pcVar7 - (int)pcVar4))
                                   >> 0x20);
                      pcVar1 = *(char **)(pcVar2 + 0x34);
                      iVar10 = (int)((ulonglong)
                                     ((longlong)DAT_0015a67c *
                                     (longlong)(*(int *)(pcVar2 + 0x38) - (int)pcVar1)) >> 0x20);
                      if (iVar6 - (iVar6 >> 0x1f) == iVar10 - (iVar10 >> 0x1f)) {
                        for (; (((pcVar4 != pcVar7 && (*pcVar4 == *pcVar1)) &&
                                (*(short *)(pcVar4 + 2) == *(short *)(pcVar1 + 2))) &&
                               (*(short *)(pcVar4 + 4) == *(short *)(pcVar1 + 4)));
                            pcVar4 = pcVar4 + 6) {
                          pcVar1 = pcVar1 + 6;
                        }
                        if (pcVar4 == pcVar7) {
                          return 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            return 0;
          }
        }
      }
    }
  }
  return 0;
}

