// rea decompile_all
// name: FUN_005fb0e0
// address: 0x5fb0e0
// body: available
// range: 0x5fb0e0-0x5fb7a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fb0e0(int *param_1,int param_2,int *param_3,uint param_4,byte param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_4 < 0xd) {
    if (param_4 < 9) {
      if (param_4 < 5) {
        if (param_4 < 3) {
          if (param_4 == 2) {
            iVar2 = 0;
            if (0 < param_2) {
              piVar3 = param_1 + -1;
              do {
                *(int *)(param_6 + iVar2 * 4) =
                     piVar3[1] - (piVar3[-1] * param_3[1] + *param_3 * *piVar3 >> (param_5 & 0x1f));
                iVar2 = iVar2 + 1;
                piVar3 = piVar3 + 1;
              } while (iVar2 < param_2);
              return;
            }
          }
          else if (0 < param_2) {
            piVar3 = param_1;
            do {
              *(int *)((param_6 - (int)param_1) + -4 + (int)(piVar3 + 1)) =
                   *piVar3 - (piVar3[-1] * *param_3 >> (param_5 & 0x1f));
              param_2 = param_2 + -1;
              piVar3 = piVar3 + 1;
            } while (param_2 != 0);
            return;
          }
        }
        else {
          iVar2 = 0;
          if (param_4 == 4) {
            if (0 < param_2) {
              piVar3 = param_1 + -3;
              do {
                *(int *)(param_6 + iVar2 * 4) =
                     piVar3[3] -
                     (piVar3[2] * *param_3 + piVar3[-1] * param_3[3] + piVar3[1] * param_3[1] +
                      *piVar3 * param_3[2] >> (param_5 & 0x1f));
                iVar2 = iVar2 + 1;
                piVar3 = piVar3 + 1;
              } while (iVar2 < param_2);
              return;
            }
          }
          else if (0 < param_2) {
            piVar3 = param_1 + -2;
            do {
              *(int *)(param_6 + iVar2 * 4) =
                   piVar3[2] -
                   (piVar3[1] * *param_3 + piVar3[-1] * param_3[2] + *piVar3 * param_3[1] >>
                   (param_5 & 0x1f));
              iVar2 = iVar2 + 1;
              piVar3 = piVar3 + 1;
            } while (iVar2 < param_2);
            return;
          }
        }
      }
      else if (param_4 < 7) {
        if (param_4 == 6) {
          iVar2 = 0;
          if (0 < param_2) {
            piVar3 = param_1 + -5;
            do {
              *(int *)(param_6 + iVar2 * 4) =
                   piVar3[5] -
                   (piVar3[4] * *param_3 + piVar3[3] * param_3[1] + piVar3[2] * param_3[2] +
                    piVar3[-1] * param_3[5] + piVar3[1] * param_3[3] + param_3[4] * *piVar3 >>
                   (param_5 & 0x1f));
              iVar2 = iVar2 + 1;
              piVar3 = piVar3 + 1;
            } while (iVar2 < param_2);
            return;
          }
        }
        else {
          iVar2 = 0;
          if (0 < param_2) {
            piVar3 = param_1 + -4;
            do {
              *(int *)(param_6 + iVar2 * 4) =
                   piVar3[4] -
                   (piVar3[2] * param_3[1] + piVar3[-1] * param_3[4] + piVar3[1] * param_3[2] +
                    piVar3[3] * *param_3 + param_3[3] * *piVar3 >> (param_5 & 0x1f));
              iVar2 = iVar2 + 1;
              piVar3 = piVar3 + 1;
            } while (iVar2 < param_2);
            return;
          }
        }
      }
      else {
        iVar2 = 0;
        if (param_4 == 8) {
          if (0 < param_2) {
            piVar3 = param_1 + -7;
            do {
              *(int *)(param_6 + iVar2 * 4) =
                   piVar3[7] -
                   (piVar3[6] * *param_3 + piVar3[5] * param_3[1] + piVar3[4] * param_3[2] +
                    piVar3[3] * param_3[3] + piVar3[2] * param_3[4] + piVar3[-1] * param_3[7] +
                    piVar3[1] * param_3[5] + param_3[6] * *piVar3 >> (param_5 & 0x1f));
              iVar2 = iVar2 + 1;
              piVar3 = piVar3 + 1;
            } while (iVar2 < param_2);
            return;
          }
        }
        else if (0 < param_2) {
          piVar3 = param_1 + -6;
          do {
            *(int *)(param_6 + iVar2 * 4) =
                 piVar3[6] -
                 (piVar3[4] * param_3[1] + piVar3[3] * param_3[2] + piVar3[2] * param_3[3] +
                  piVar3[-1] * param_3[6] + piVar3[1] * param_3[4] + piVar3[5] * *param_3 +
                  *piVar3 * param_3[5] >> (param_5 & 0x1f));
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 1;
          } while (iVar2 < param_2);
          return;
        }
      }
    }
    else if (param_4 < 0xb) {
      if (param_4 == 10) {
        iVar2 = 0;
        if (0 < param_2) {
          piVar3 = param_1 + -9;
          do {
            *(int *)(param_6 + iVar2 * 4) =
                 piVar3[9] -
                 (piVar3[8] * *param_3 + piVar3[7] * param_3[1] + piVar3[6] * param_3[2] +
                  piVar3[5] * param_3[3] + piVar3[4] * param_3[4] + piVar3[3] * param_3[5] +
                  piVar3[2] * param_3[6] + piVar3[-1] * param_3[9] + piVar3[1] * param_3[7] +
                  param_3[8] * *piVar3 >> (param_5 & 0x1f));
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 1;
          } while (iVar2 < param_2);
          return;
        }
      }
      else {
        iVar2 = 0;
        if (0 < param_2) {
          piVar3 = param_1 + -8;
          do {
            *(int *)(param_6 + iVar2 * 4) =
                 piVar3[8] -
                 (piVar3[6] * param_3[1] + piVar3[5] * param_3[2] + piVar3[4] * param_3[3] +
                  piVar3[3] * param_3[4] + piVar3[2] * param_3[5] + piVar3[-1] * param_3[8] +
                  piVar3[1] * param_3[6] + piVar3[7] * *param_3 + *piVar3 * param_3[7] >>
                 (param_5 & 0x1f));
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 1;
          } while (iVar2 < param_2);
          return;
        }
      }
    }
    else {
      iVar2 = 0;
      if (param_4 == 0xc) {
        if (0 < param_2) {
          piVar3 = param_1 + -0xb;
          do {
            *(int *)(param_6 + iVar2 * 4) =
                 piVar3[0xb] -
                 (piVar3[10] * *param_3 + piVar3[-1] * param_3[0xb] + piVar3[9] * param_3[1] +
                  piVar3[8] * param_3[2] + piVar3[7] * param_3[3] + piVar3[6] * param_3[4] +
                  piVar3[5] * param_3[5] + piVar3[4] * param_3[6] + piVar3[3] * param_3[7] +
                  piVar3[2] * param_3[8] + piVar3[1] * param_3[9] + *piVar3 * param_3[10] >>
                 (param_5 & 0x1f));
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 1;
          } while (iVar2 < param_2);
          return;
        }
      }
      else if (0 < param_2) {
        piVar3 = param_1 + -10;
        do {
          *(int *)(param_6 + iVar2 * 4) =
               piVar3[10] -
               (piVar3[8] * param_3[1] + piVar3[7] * param_3[2] + piVar3[6] * param_3[3] +
                piVar3[5] * param_3[4] + piVar3[4] * param_3[5] + piVar3[3] * param_3[6] +
                piVar3[2] * param_3[7] + piVar3[-1] * param_3[10] + piVar3[1] * param_3[8] +
                piVar3[9] * *param_3 + *piVar3 * param_3[9] >> (param_5 & 0x1f));
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar2 < param_2);
        return;
      }
    }
  }
  else {
    iVar2 = 0;
    if (0 < param_2) {
      param_1 = param_1 + -0x1f;
      do {
        iVar1 = 0;
        switch(param_4) {
        case 0x20:
          iVar1 = param_1[-1] * param_3[0x1f];
        case 0x1f:
          iVar1 = iVar1 + param_3[0x1e] * *param_1;
        case 0x1e:
          iVar1 = iVar1 + param_1[1] * param_3[0x1d];
        case 0x1d:
          iVar1 = iVar1 + param_1[2] * param_3[0x1c];
        case 0x1c:
          iVar1 = iVar1 + param_1[3] * param_3[0x1b];
        case 0x1b:
          iVar1 = iVar1 + param_1[4] * param_3[0x1a];
        case 0x1a:
          iVar1 = iVar1 + param_1[5] * param_3[0x19];
        case 0x19:
          iVar1 = iVar1 + param_1[6] * param_3[0x18];
        case 0x18:
          iVar1 = iVar1 + param_1[7] * param_3[0x17];
        case 0x17:
          iVar1 = iVar1 + param_1[8] * param_3[0x16];
        case 0x16:
          iVar1 = iVar1 + param_1[9] * param_3[0x15];
        case 0x15:
          iVar1 = iVar1 + param_1[10] * param_3[0x14];
        case 0x14:
          iVar1 = iVar1 + param_1[0xb] * param_3[0x13];
        case 0x13:
          iVar1 = iVar1 + param_1[0xc] * param_3[0x12];
        case 0x12:
          iVar1 = iVar1 + param_1[0xd] * param_3[0x11];
        case 0x11:
          iVar1 = iVar1 + param_1[0xe] * param_3[0x10];
        case 0x10:
          iVar1 = iVar1 + param_1[0xf] * param_3[0xf];
        case 0xf:
          iVar1 = iVar1 + param_1[0x10] * param_3[0xe];
        case 0xe:
          iVar1 = iVar1 + param_1[0x11] * param_3[0xd];
        case 0xd:
          iVar1 = iVar1 + param_1[0x1e] * *param_3 +
                  param_1[0x12] * param_3[0xc] + param_1[0x13] * param_3[0xb] +
                  param_1[0x14] * param_3[10] + param_1[0x15] * param_3[9] +
                  param_1[0x16] * param_3[8] + param_1[0x17] * param_3[7] +
                  param_1[0x18] * param_3[6] + param_1[0x19] * param_3[5] +
                  param_1[0x1a] * param_3[4] + param_1[0x1b] * param_3[3] +
                  param_1[0x1c] * param_3[2] + param_1[0x1d] * param_3[1];
        }
        piVar3 = param_1 + 0x1f;
        param_1 = param_1 + 1;
        *(int *)(param_6 + iVar2 * 4) = *piVar3 - (iVar1 >> (param_5 & 0x1f));
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
    }
  }
  return;
}

