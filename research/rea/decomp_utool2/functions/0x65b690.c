// rea decompile_all
// name: FUN_0065b690
// address: 0x65b690
// body: available
// range: 0x65b690-0x65b94a inclusive
// range: 0x65b950-0x65ba67 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065b690(void)

{
  short sVar1;
  int iVar2;
  int in_ECX;
  short *psVar3;
  int *in_EDX;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = *(int *)(*(int *)(in_ECX + 0x1a8) + 0x18);
  local_18 = *in_EDX;
  local_10 = in_EDX[1];
  local_8 = in_EDX[2];
  local_c = in_EDX[4];
  local_14 = in_EDX[3];
  iVar8 = in_EDX[5];
  iVar4 = local_18;
  if (local_18 < local_10) {
    do {
      if (local_8 <= local_14) {
        psVar3 = (short *)(*(int *)(iVar2 + iVar4 * 4) + (local_8 * 0x20 + local_c) * 2);
        iVar6 = local_c;
        psVar7 = psVar3;
        iVar9 = local_8;
        do {
          for (; iVar6 <= iVar8; iVar6 = iVar6 + 1) {
            sVar1 = *psVar3;
            psVar3 = psVar3 + 1;
            if (sVar1 != 0) {
              *in_EDX = iVar4;
              local_18 = iVar4;
              goto LAB_0065b734;
            }
          }
          iVar9 = iVar9 + 1;
          psVar3 = psVar7 + 0x20;
          iVar6 = local_c;
          psVar7 = psVar3;
        } while (iVar9 <= local_14);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= local_10);
LAB_0065b734:
    iVar4 = local_10;
    if (local_18 < local_10) {
      do {
        if (local_8 <= local_14) {
          psVar3 = (short *)(*(int *)(iVar2 + iVar4 * 4) + (local_8 * 0x20 + local_c) * 2);
          iVar6 = local_c;
          psVar7 = psVar3;
          iVar9 = local_8;
          do {
            for (; iVar6 <= iVar8; iVar6 = iVar6 + 1) {
              sVar1 = *psVar3;
              psVar3 = psVar3 + 1;
              if (sVar1 != 0) {
                in_EDX[1] = iVar4;
                local_10 = iVar4;
                goto LAB_0065b7c3;
              }
            }
            iVar9 = iVar9 + 1;
            psVar3 = psVar7 + 0x20;
            iVar6 = local_c;
            psVar7 = psVar3;
          } while (iVar9 <= local_14);
        }
        iVar4 = iVar4 + -1;
      } while (local_18 <= iVar4);
    }
  }
LAB_0065b7c3:
  if (local_8 < local_14) {
    if (local_8 <= local_14) {
      iVar4 = (local_8 * 0x20 + local_c) * 2;
      iVar6 = local_18;
      iVar9 = local_8;
      do {
        for (; iVar6 <= local_10; iVar6 = iVar6 + 1) {
          psVar3 = (short *)(*(int *)(iVar2 + iVar6 * 4) + iVar4);
          for (iVar5 = local_c; iVar5 <= iVar8; iVar5 = iVar5 + 1) {
            sVar1 = *psVar3;
            psVar3 = psVar3 + 1;
            if (sVar1 != 0) {
              in_EDX[2] = iVar9;
              local_8 = iVar9;
              goto LAB_0065b846;
            }
          }
        }
        iVar9 = iVar9 + 1;
        iVar4 = iVar4 + 0x40;
        iVar6 = local_18;
      } while (iVar9 <= local_14);
    }
LAB_0065b846:
    if (local_8 < local_14) {
      iVar4 = (local_14 * 0x20 + local_c) * 2;
      iVar6 = local_18;
      iVar9 = local_14;
      do {
        for (; iVar6 <= local_10; iVar6 = iVar6 + 1) {
          psVar3 = (short *)(*(int *)(iVar2 + iVar6 * 4) + iVar4);
          for (iVar5 = local_c; iVar5 <= iVar8; iVar5 = iVar5 + 1) {
            sVar1 = *psVar3;
            psVar3 = psVar3 + 1;
            if (sVar1 != 0) {
              in_EDX[3] = iVar9;
              local_14 = iVar9;
              goto LAB_0065b8bb;
            }
          }
        }
        iVar9 = iVar9 + -1;
        iVar4 = iVar4 + -0x40;
        iVar6 = local_18;
      } while (local_8 <= iVar9);
    }
  }
LAB_0065b8bb:
  iVar4 = local_c;
  if (local_c < iVar8) {
    do {
      if (local_18 <= local_10) {
        iVar6 = local_18;
        do {
          psVar3 = (short *)(*(int *)(iVar2 + iVar6 * 4) + (local_8 * 0x20 + iVar4) * 2);
          for (iVar9 = local_8; iVar9 <= local_14; iVar9 = iVar9 + 1) {
            if (*psVar3 != 0) {
              in_EDX[4] = iVar4;
              local_c = iVar4;
              goto LAB_0065b92b;
            }
            psVar3 = psVar3 + 0x20;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 <= local_10);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= iVar8);
LAB_0065b92b:
    iVar4 = iVar8;
    if (local_c < iVar8) {
      do {
        if (local_18 <= local_10) {
          iVar6 = local_18;
          do {
            psVar3 = (short *)(*(int *)(iVar2 + iVar6 * 4) + (local_8 * 0x20 + iVar4) * 2);
            for (iVar9 = local_8; iVar9 <= local_14; iVar9 = iVar9 + 1) {
              if (*psVar3 != 0) {
                in_EDX[5] = iVar4;
                iVar8 = iVar4;
                goto LAB_0065b993;
              }
              psVar3 = psVar3 + 0x20;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 <= local_10);
        }
        iVar4 = iVar4 + -1;
      } while (local_c <= iVar4);
    }
  }
LAB_0065b993:
  iVar4 = 0;
  iVar5 = (local_10 - local_18) * 0x10;
  iVar9 = (local_14 - local_8) * 0xc;
  iVar6 = (iVar8 - local_c) * 8;
  in_EDX[6] = iVar6 * iVar6 + iVar9 * iVar9 + iVar5 * iVar5;
  if (local_18 <= local_10) {
    do {
      if (local_8 <= local_14) {
        psVar3 = (short *)(*(int *)(iVar2 + local_18 * 4) + (local_8 * 0x20 + local_c) * 2);
        iVar6 = (local_14 - local_8) + 1;
        do {
          if (local_c <= iVar8) {
            iVar5 = (iVar8 - local_c) + 1;
            psVar7 = psVar3;
            iVar9 = iVar4;
            do {
              sVar1 = *psVar7;
              psVar7 = psVar7 + 1;
              iVar4 = iVar9 + 1;
              if (sVar1 == 0) {
                iVar4 = iVar9;
              }
              iVar5 = iVar5 + -1;
              iVar9 = iVar4;
            } while (iVar5 != 0);
          }
          psVar3 = psVar3 + 0x20;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_18 = local_18 + 1;
    } while (local_18 <= local_10);
    in_EDX[7] = iVar4;
    return;
  }
  in_EDX[7] = 0;
  return;
}

