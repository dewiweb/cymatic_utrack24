// rea decompile_all
// name: FUN_0048d726
// address: 0x48d726
// body: available
// range: 0x48d726-0x48da5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048d726(void)

{
  short sVar1;
  int iVar2;
  int in_EAX;
  short *psVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int *in_EDX;
  int iVar7;
  int local_2c;
  int local_24;
  short *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = *(int *)(*(int *)(in_EAX + 0x1a8) + 0x18);
  local_1c = *in_EDX;
  local_24 = in_EDX[3];
  local_10 = in_EDX[4];
  local_14 = in_EDX[1];
  local_2c = in_EDX[2];
  local_18 = in_EDX[5];
  iVar5 = local_1c;
  if (local_1c < local_14) {
    do {
      if (local_2c <= local_24) {
        psVar4 = (short *)(*(int *)(iVar2 + iVar5 * 4) + (local_2c * 0x20 + local_10) * 2);
        iVar6 = local_10;
        local_c = local_2c;
        psVar3 = psVar4;
        do {
          for (; iVar6 <= local_18; iVar6 = iVar6 + 1) {
            sVar1 = *psVar4;
            psVar4 = psVar4 + 1;
            if (sVar1 != 0) {
              *in_EDX = iVar5;
              local_1c = iVar5;
              goto LAB_0048d7c5;
            }
          }
          local_c = local_c + 1;
          psVar4 = psVar3 + 0x20;
          iVar6 = local_10;
          psVar3 = psVar4;
        } while (local_c <= local_24);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= local_14);
LAB_0048d7c5:
    iVar5 = local_14;
    if (local_1c < local_14) {
      do {
        if (local_2c <= local_24) {
          psVar4 = (short *)(*(int *)(iVar2 + iVar5 * 4) + (local_2c * 0x20 + local_10) * 2);
          iVar6 = local_10;
          local_c = local_2c;
          psVar3 = psVar4;
          do {
            for (; iVar6 <= local_18; iVar6 = iVar6 + 1) {
              sVar1 = *psVar4;
              psVar4 = psVar4 + 1;
              if (sVar1 != 0) {
                in_EDX[1] = iVar5;
                local_14 = iVar5;
                goto LAB_0048d82d;
              }
            }
            local_c = local_c + 1;
            psVar4 = psVar3 + 0x20;
            iVar6 = local_10;
            psVar3 = psVar4;
          } while (local_c <= local_24);
        }
        iVar5 = iVar5 + -1;
      } while (local_1c <= iVar5);
    }
  }
LAB_0048d82d:
  if (local_2c < local_24) {
    iVar5 = (local_2c * 0x20 + local_10) * 2;
    iVar6 = local_1c;
    local_c = local_2c;
    do {
      for (; iVar6 <= local_14; iVar6 = iVar6 + 1) {
        psVar4 = (short *)(*(int *)(iVar2 + iVar6 * 4) + iVar5);
        for (iVar7 = local_10; iVar7 <= local_18; iVar7 = iVar7 + 1) {
          sVar1 = *psVar4;
          psVar4 = psVar4 + 1;
          if (sVar1 != 0) {
            local_2c = local_c;
            in_EDX[2] = local_c;
            goto LAB_0048d89a;
          }
        }
      }
      local_c = local_c + 1;
      iVar5 = iVar5 + 0x40;
      iVar6 = local_1c;
    } while (local_c <= local_24);
LAB_0048d89a:
    if (local_2c < local_24) {
      iVar5 = (local_24 * 0x20 + local_10) * 2;
      iVar6 = local_1c;
      local_c = local_24;
      do {
        for (; iVar6 <= local_14; iVar6 = iVar6 + 1) {
          psVar4 = (short *)(*(int *)(iVar2 + iVar6 * 4) + iVar5);
          for (iVar7 = local_10; iVar7 <= local_18; iVar7 = iVar7 + 1) {
            sVar1 = *psVar4;
            psVar4 = psVar4 + 1;
            if (sVar1 != 0) {
              local_24 = local_c;
              in_EDX[3] = local_c;
              goto LAB_0048d906;
            }
          }
        }
        local_c = local_c + -1;
        iVar5 = iVar5 + -0x40;
        iVar6 = local_1c;
      } while (local_2c <= local_c);
    }
  }
LAB_0048d906:
  local_8 = local_10;
  if (local_10 < local_18) {
    do {
      local_20 = (short *)local_1c;
      if (local_1c <= local_14) {
        do {
          psVar4 = (short *)(*(int *)(iVar2 + (int)local_20 * 4) + (local_2c * 0x20 + local_8) * 2);
          for (iVar5 = local_2c; iVar5 <= local_24; iVar5 = iVar5 + 1) {
            if (*psVar4 != 0) {
              local_10 = local_8;
              in_EDX[4] = local_8;
              goto LAB_0048d96a;
            }
            psVar4 = psVar4 + 0x20;
          }
          local_20 = (short *)((int)local_20 + 1);
        } while ((int)local_20 <= local_14);
      }
      local_8 = local_8 + 1;
    } while (local_8 <= local_18);
LAB_0048d96a:
    local_8 = local_18;
    if (local_10 < local_18) {
      do {
        local_20 = (short *)local_1c;
        if (local_1c <= local_14) {
          do {
            psVar4 = (short *)(*(int *)(iVar2 + (int)local_20 * 4) + (local_2c * 0x20 + local_8) * 2
                              );
            for (iVar5 = local_2c; iVar5 <= local_24; iVar5 = iVar5 + 1) {
              if (*psVar4 != 0) {
                local_18 = local_8;
                in_EDX[5] = local_8;
                goto LAB_0048d9ca;
              }
              psVar4 = psVar4 + 0x20;
            }
            local_20 = (short *)((int)local_20 + 1);
          } while ((int)local_20 <= local_14);
        }
        local_8 = local_8 + -1;
      } while (local_10 <= local_8);
    }
  }
LAB_0048d9ca:
  iVar6 = (local_24 - local_2c) * 0xc;
  iVar7 = (local_18 - local_10) * 8;
  iVar5 = (local_14 - local_1c) * 0x10;
  local_c = 0;
  in_EDX[6] = iVar7 * iVar7 + iVar6 * iVar6 + iVar5 * iVar5;
  for (iVar5 = local_1c; iVar5 <= local_14; iVar5 = iVar5 + 1) {
    if (local_2c <= local_24) {
      psVar4 = (short *)(*(int *)(iVar2 + iVar5 * 4) + (local_2c * 0x20 + local_10) * 2);
      iVar6 = (local_24 - local_2c) + 1;
      do {
        if (local_10 <= local_18) {
          local_1c = (local_18 - local_10) + 1;
          local_20 = psVar4;
          do {
            if (*local_20 != 0) {
              local_c = local_c + 1;
            }
            local_20 = local_20 + 1;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
        psVar4 = psVar4 + 0x20;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  in_EDX[7] = local_c;
  return;
}

