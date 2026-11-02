// rea decompile_all
// name: FUN_0040369d
// address: 0x40369d
// body: available
// range: 0x40369d-0x403941 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040369d(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  int local_130 [32];
  int local_b0 [32];
  short *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  char local_d;
  int local_c;
  int local_8;
  
  local_28 = *(int *)(param_2 + 0x54);
  local_8 = 0;
  do {
    piVar6 = (int *)(&DAT_008f99e0 + local_8 * 0x100);
    local_14 = 0;
    local_18 = 0;
    local_20 = 0;
    do {
      local_d = local_20 == 0;
      local_24 = piVar6;
      local_1c = piVar6;
      if (piVar6 < piVar6 + 0x20) {
        do {
          if (*local_1c == 0) break;
          iVar2 = FUN_0040f9ab(*local_1c);
          if (((iVar2 != 0) && (iVar2 = FUN_0040ddcc(iVar2,1), iVar2 == 0)) &&
             (0 < *(short *)(local_28 + 0x6e))) {
            iVar1 = *(int *)(local_28 + 0x70);
            local_c = -1;
            iVar4 = 0;
            iVar2 = 0;
            if (0 < *(short *)(local_28 + 0x6c)) {
              local_30 = *(short **)(local_28 + 0x78);
              local_2c = (int)*(short *)(local_28 + 0x6c);
              do {
                iVar5 = (int)*local_30;
                if (iVar2 < iVar5) {
                  if (local_8 == 0) {
                    if (iVar2 <= iVar5) {
                      piVar3 = (int *)(iVar1 + 4 + iVar2 * 8);
                      do {
                        if ((local_c < 0) || (iVar4 < *piVar3)) {
                          iVar4 = *piVar3;
                          local_c = iVar2;
                        }
                        iVar2 = iVar2 + 1;
                        piVar3 = piVar3 + 2;
                        piVar6 = local_24;
                      } while (iVar2 <= iVar5);
                    }
                  }
                  else if (local_8 == 1) {
                    if (iVar2 <= iVar5) {
                      piVar3 = (int *)(iVar1 + 4 + iVar2 * 8);
                      do {
                        if ((local_c < 0) || (*piVar3 < iVar4)) {
                          iVar4 = *piVar3;
                          local_c = iVar2;
                        }
                        iVar2 = iVar2 + 1;
                        piVar3 = piVar3 + 2;
                        piVar6 = local_24;
                      } while (iVar2 <= iVar5);
                    }
                  }
                  else if (local_8 == 2) {
                    for (; iVar2 <= iVar5; iVar2 = iVar2 + 1) {
                      if ((local_c < 0) || (*(int *)(iVar1 + iVar2 * 8) < iVar4)) {
                        iVar4 = *(int *)(iVar1 + iVar2 * 8);
                        local_c = iVar2;
                      }
                    }
                  }
                  else if (local_8 == 3) {
                    for (; iVar2 <= iVar5; iVar2 = iVar2 + 1) {
                      if ((local_c < 0) || (iVar4 < *(int *)(iVar1 + iVar2 * 8))) {
                        iVar4 = *(int *)(iVar1 + iVar2 * 8);
                        local_c = iVar2;
                      }
                    }
                  }
                }
                local_30 = local_30 + 1;
                local_2c = local_2c + -1;
                iVar2 = iVar5 + 1;
              } while (local_2c != 0);
            }
            if (local_d == '\0') {
              piVar3 = local_130 + local_18;
              local_18 = local_18 + 1;
              *piVar3 = iVar4;
            }
            else {
              piVar3 = local_b0 + local_14;
              local_14 = local_14 + 1;
              *piVar3 = iVar4;
            }
          }
          local_1c = local_1c + 1;
        } while (local_1c < piVar6 + 0x20);
      }
      iVar2 = local_18;
      local_20 = local_20 + 1;
      piVar6 = piVar6 + 0x20;
    } while (local_20 < 2);
    if ((local_18 != 0) || (local_14 != 0)) {
      local_24 = piVar6;
      FUN_0040102b(local_18);
      iVar1 = local_14;
      FUN_0040102b(local_14);
      if ((local_8 == 0) || (local_8 == 1)) {
        iVar4 = param_1 + 0x17c;
      }
      else {
        iVar4 = param_1 + 0x28;
      }
      iVar5 = *(int *)(iVar4 + 0xd8);
      piVar6 = (int *)(iVar5 * 0x1c + 0xdc + iVar4);
      *(int *)(iVar4 + 0xd8) = iVar5 + 1;
      if (iVar2 == 0) {
        iVar2 = local_b0[iVar1 / 2];
LAB_004038ab:
        *piVar6 = iVar2;
      }
      else {
        if (iVar1 == 0) {
          iVar2 = local_130[iVar2 / 2];
          goto LAB_004038ab;
        }
        *piVar6 = local_b0[iVar1 / 2];
        iVar2 = local_130[iVar2 / 2];
      }
      piVar6[3] = iVar2;
      iVar1 = *piVar6;
      if (iVar2 != iVar1) {
        bVar7 = false;
        if ((local_8 == 0) || (local_8 == 3)) {
          bVar7 = true;
        }
        if (iVar2 < iVar1 != bVar7) {
          iVar2 = (iVar2 + iVar1) / 2;
          *piVar6 = iVar2;
          piVar6[3] = iVar2;
        }
      }
      piVar6[6] = 0;
      if (local_8 == 0) {
        piVar6[6] = 2;
      }
      else if (local_8 == 3) {
        piVar6[6] = 4;
      }
    }
    local_8 = local_8 + 1;
    if (3 < local_8) {
      return;
    }
  } while( true );
}

