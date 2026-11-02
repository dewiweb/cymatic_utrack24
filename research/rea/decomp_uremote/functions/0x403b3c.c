// rea decompile_all
// name: FUN_00403b3c
// address: 0x403b3c
// body: available
// range: 0x403b3c-0x403de5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00403b3c(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int in_ECX;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  
  piVar10 = (int *)(param_1 * 0x1c + 0x2c + in_ECX);
  piVar6 = (int *)piVar10[2];
  iVar1 = piVar10[6];
  iVar3 = *(int *)(*(int *)(in_ECX + 0x6c) + 0x24) * 8;
  piVar10 = piVar6 + *piVar10 * 0xc;
  iVar4 = FUN_0040d2d8();
  if (piVar6 < piVar10) {
    pcVar5 = (char *)((int)piVar6 + 1);
    do {
      if ((*(int *)(pcVar5 + 0x27) != *(int *)(pcVar5 + 0x2b)) && (*pcVar5 == iVar1)) {
        piVar7 = piVar6 + 1;
        do {
          if (((piVar7 + -1 != (int *)(pcVar5 + -1)) &&
              ((int)*(char *)((int)piVar7 + -3) + (int)*pcVar5 == 0)) &&
             (iVar11 = (int)*(short *)((int)piVar7 + -2) - (int)*(short *)(pcVar5 + 1), -1 < iVar11)
             ) {
            param_1 = (int)*(short *)(pcVar5 + 3);
            if ((int)*(short *)(pcVar5 + 3) < (int)(short)*piVar7) {
              param_1 = (int)(short)*piVar7;
            }
            iVar9 = (int)*(short *)(pcVar5 + 5);
            if ((int)*(short *)((int)piVar7 + 2) < (int)*(short *)(pcVar5 + 5)) {
              iVar9 = (int)*(short *)((int)piVar7 + 2);
            }
            iVar9 = iVar9 - param_1;
            if ((int)(iVar3 + (iVar3 >> 0x1f & 0x7ffU)) >> 0xb <= iVar9) {
              iVar12 = iVar11 * 8;
              if ((iVar12 < *(int *)(pcVar5 + 0x1f) * 9) &&
                 ((iVar12 < *(int *)(pcVar5 + 0x1f) * 7 || (*(int *)(pcVar5 + 0x23) < iVar9)))) {
                *(int *)(pcVar5 + 0x1f) = iVar11;
                *(int *)(pcVar5 + 0x23) = iVar9;
                *(int **)(pcVar5 + 0x13) = piVar7 + -1;
              }
              if ((iVar12 < piVar7[7] * 9) && ((iVar12 < piVar7[7] * 7 || (piVar7[8] < iVar9)))) {
                piVar7[8] = iVar9;
                piVar7[7] = iVar11;
                piVar7[4] = (int)(pcVar5 + -1);
              }
            }
          }
          piVar8 = piVar7 + 0xb;
          piVar7 = piVar7 + 0xc;
        } while (piVar8 < piVar10);
      }
      piVar7 = (int *)(pcVar5 + 0x2f);
      pcVar5 = pcVar5 + 0x30;
    } while (piVar7 < piVar10);
    if (piVar6 < piVar10) {
      piVar7 = piVar6 + 8;
      do {
        iVar1 = piVar7[-3];
        if ((((iVar1 != 0) && (*(int **)(iVar1 + 0x14) == piVar7 + -8)) &&
            (*(short *)((int)piVar7 + -0x1e) < *(short *)(iVar1 + 2))) && (*piVar7 < iVar4)) {
          psVar13 = (short *)((int)piVar6 + 2);
          do {
            if ((((*psVar13 <= *(short *)((int)piVar7 + -0x1e)) &&
                 (piVar7 + -8 != (int *)(psVar13 + -1))) &&
                ((psVar2 = *(short **)(psVar13 + 9), psVar2 != (short *)0x0 &&
                 ((*(int **)(psVar2 + 10) == (int *)(psVar13 + -1) &&
                  (*(short *)(iVar1 + 2) <= psVar2[1])))))) &&
               ((*(short *)((int)piVar7 + -0x1e) != *psVar13 || (*(short *)(iVar1 + 2) != psVar2[1])
                ))) {
              if ((*piVar7 < *(int *)(psVar13 + 0xf)) && (*(int *)(psVar13 + 0xf) < *piVar7 * 4)) {
                if (piVar7[1] < *(int *)(psVar13 + 0x11) * 3) {
                  *(undefined4 *)(iVar1 + 0x14) = 0;
                  piVar7[-3] = 0;
                  break;
                }
                piVar8 = piVar6 + 5;
                iVar3 = (uint)((int)piVar10 + (-1 - (int)piVar6)) / 0x30 + 1;
                do {
                  if ((short *)*piVar8 == psVar13 + -1) {
                    piVar8[1] = iVar1;
LAB_00403d6c:
                    *piVar8 = 0;
                  }
                  else if ((short *)*piVar8 == psVar2) {
                    piVar8[1] = (int)(piVar7 + -8);
                    goto LAB_00403d6c;
                  }
                  piVar8 = piVar8 + 0xc;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
            }
            piVar8 = (int *)(psVar13 + 0x17);
            psVar13 = psVar13 + 0x18;
          } while (piVar8 < piVar10);
        }
        piVar8 = piVar7 + 4;
        piVar7 = piVar7 + 0xc;
      } while (piVar8 < piVar10);
    }
  }
  if (piVar6 < piVar10) {
    piVar6 = piVar6 + 5;
    do {
      iVar1 = *piVar6;
      if ((iVar1 != 0) &&
         (*(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1,
         *(int **)(iVar1 + 0x14) != piVar6 + -5)) {
        *piVar6 = 0;
        if ((*(int *)(iVar1 + 0x20) < iVar4) || (piVar6[3] < *(int *)(iVar1 + 0x20) * 4)) {
          piVar6[1] = *(int *)(iVar1 + 0x14);
        }
        else {
          *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + -1;
        }
      }
      piVar7 = piVar6 + 7;
      piVar6 = piVar6 + 0xc;
    } while (piVar7 < piVar10);
  }
  return;
}

