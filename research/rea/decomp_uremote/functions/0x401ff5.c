// rea decompile_all
// name: FUN_00401ff5
// address: 0x401ff5
// body: available
// range: 0x401ff5-0x4022af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00401ff5(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  char *pcVar7;
  int iVar8;
  int local_98 [12];
  int local_68 [12];
  int local_38;
  char *local_34;
  short *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  char *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_28 = *(int *)(param_2 + 0x54);
  local_8 = 0;
  do {
    local_1c = 0;
    local_14 = 0;
    pcVar7 = &DAT_008f9958 + local_8 * 0xd;
    local_34 = &UNK_008f9964 + local_8 * 0xd;
    if (pcVar7 < local_34) {
      do {
        local_18 = pcVar7;
        if (*pcVar7 == '\0') break;
        iVar2 = FUN_0040f9ab((int)*pcVar7);
        if (((iVar2 != 0) && (iVar2 = FUN_0040ddcc(iVar2,1), iVar2 == 0)) &&
           (0 < *(short *)(local_28 + 0x6e))) {
          iVar1 = *(int *)(local_28 + 0x70);
          local_c = -1;
          iVar2 = 0;
          local_10 = 0;
          local_20 = 0;
          local_24 = 0;
          if (0 < *(short *)(local_28 + 0x6c)) {
            local_30 = *(short **)(local_28 + 0x78);
            local_2c = (int)*(short *)(local_28 + 0x6c);
            do {
              iVar4 = local_c;
              iVar5 = (int)*local_30;
              local_38 = local_c;
              if (iVar2 < iVar5) {
                pcVar7 = local_18;
                if (((local_8 == 0) || (local_8 == 2)) || (local_8 == 3)) {
                  if (iVar2 <= iVar5) {
                    piVar3 = (int *)(iVar1 + 4 + iVar2 * 8);
                    iVar8 = iVar2;
                    do {
                      if ((local_c < 0) || (local_10 < *piVar3)) {
                        local_10 = *piVar3;
                        local_c = iVar8;
                      }
                      iVar8 = iVar8 + 1;
                      piVar3 = piVar3 + 2;
                    } while (iVar8 <= iVar5);
                    goto LAB_0040210f;
                  }
                }
                else if (iVar2 <= iVar5) {
                  piVar3 = (int *)(iVar1 + 4 + iVar2 * 8);
                  iVar8 = iVar2;
                  do {
                    if ((local_c < 0) || (*piVar3 < local_10)) {
                      local_10 = *piVar3;
                      local_c = iVar8;
                    }
                    iVar8 = iVar8 + 1;
                    piVar3 = piVar3 + 2;
                  } while (iVar8 <= iVar5);
LAB_0040210f:
                  if (local_c != iVar4) {
                    local_24 = iVar5;
                    local_20 = iVar2;
                  }
                }
              }
              local_30 = local_30 + 1;
              local_2c = local_2c + -1;
              iVar2 = iVar5 + 1;
            } while (local_2c != 0);
            iVar2 = local_c;
            if (-1 < local_c) {
              do {
                iVar4 = local_24;
                if (local_20 < iVar2) {
                  iVar4 = iVar2 + -1;
                }
                iVar5 = local_c;
              } while (((*(int *)(iVar1 + 4 + iVar4 * 8) - local_10) + 5U < 0xb) &&
                      (iVar2 = iVar4, iVar4 != local_c));
              do {
                iVar2 = local_20;
                if (iVar5 < local_24) {
                  iVar2 = iVar5 + 1;
                }
              } while (((*(int *)(iVar1 + 4 + iVar2 * 8) - local_10) + 5U < 0xb) &&
                      (iVar5 = iVar2, iVar2 != local_c));
              if (((*(byte *)(*(int *)(local_28 + 0x74) + iVar4) & 3) != 1) ||
                 ((*(byte *)(*(int *)(local_28 + 0x74) + iVar2) & 3) != 1)) {
                piVar3 = local_98 + local_14;
                local_14 = local_14 + 1;
                *piVar3 = local_10;
                goto LAB_004021b6;
              }
            }
          }
          piVar3 = local_68 + local_1c;
          local_1c = local_1c + 1;
          *piVar3 = local_10;
        }
LAB_004021b6:
        pcVar7 = pcVar7 + 1;
        local_18 = pcVar7;
      } while (pcVar7 < local_34);
      iVar1 = local_14;
      iVar2 = local_1c;
      if ((local_1c != 0) || (local_14 != 0)) {
        FUN_0040102b(local_14);
        FUN_0040102b(iVar2);
        iVar4 = *(int *)(param_1 + 0x28c);
        piVar3 = (int *)(iVar4 * 0x1c + 0x290 + param_1);
        bVar6 = false;
        *(int *)(param_1 + 0x28c) = iVar4 + 1;
        if (iVar2 == 0) {
          iVar2 = local_98[iVar1 / 2];
LAB_00402226:
          piVar3[3] = iVar2;
          *piVar3 = iVar2;
        }
        else {
          iVar2 = local_68[iVar2 / 2];
          if (iVar1 == 0) goto LAB_00402226;
          *piVar3 = iVar2;
          piVar3[3] = local_98[iVar1 / 2];
        }
        iVar2 = *piVar3;
        if (piVar3[3] != iVar2) {
          if (((local_8 == 0) || (local_8 == 2)) || (local_8 == 3)) {
            bVar6 = true;
          }
          if (iVar2 < piVar3[3] != bVar6) {
            iVar2 = (piVar3[3] + iVar2) / 2;
            piVar3[3] = iVar2;
            *piVar3 = iVar2;
          }
        }
        piVar3[6] = 0;
        if ((((local_8 == 0) || (local_8 == 2)) || (local_8 == 3)) && (piVar3[6] = 2, local_8 == 3))
        {
          piVar3[6] = 6;
        }
      }
    }
    local_8 = local_8 + 1;
    if (5 < local_8) {
      return;
    }
  } while( true );
}

