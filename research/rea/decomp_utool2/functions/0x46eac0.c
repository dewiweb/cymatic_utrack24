// rea decompile_all
// name: FUN_0046eac0
// address: 0x46eac0
// body: available
// range: 0x46eac0-0x46eef6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046eac0(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int local_28;
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_28 = in_ECX[2] + -1;
  if (0 < local_28) {
    do {
      piVar8 = (int *)(local_14 * 0x10 + *in_ECX);
      iVar10 = *piVar8;
      iVar7 = piVar8[2];
      iVar4 = piVar8[1];
      iVar9 = piVar8[3] + iVar4;
      if (local_14 < local_28) {
        piVar5 = (int *)(local_28 * 0x10 + *in_ECX);
        do {
          iVar6 = piVar5[2];
          iVar1 = *piVar5;
          iVar2 = piVar5[1];
          iVar11 = piVar5[3] + iVar2;
          if ((iVar1 == iVar10 + iVar7) || (iVar1 + iVar6 == iVar10)) {
            if ((iVar4 < iVar2) && (iVar2 < iVar9)) {
              piVar8[3] = iVar2 - iVar4;
              iVar4 = in_ECX[2];
              iVar6 = iVar4 + 1;
              if (in_ECX[1] < iVar6) {
                if (iVar6 < 0) {
                  iVar6 = iVar4 + 2;
                }
                uVar12 = iVar4 + 9 + (iVar6 >> 1) & 0xfffffff8;
                if (in_ECX[1] != uVar12) {
                  if ((int)uVar12 < 1) {
                    FID_conflict__free((void *)*in_ECX);
                    *in_ECX = 0;
                  }
                  else if (*in_ECX == 0) {
                    iVar4 = FUN_004c554b();
                    *in_ECX = iVar4;
                  }
                  else {
                    iVar4 = FUN_004c553b(*in_ECX,uVar12 << 4);
                    *in_ECX = iVar4;
                  }
                  in_ECX[1] = uVar12;
                }
              }
              iVar4 = in_ECX[2];
              in_ECX[2] = iVar4 + 1;
              piVar8 = (int *)(iVar4 * 0x10 + *in_ECX);
              if (piVar8 != (int *)0x0) {
                *piVar8 = iVar10;
                piVar8[1] = iVar2;
                piVar8[2] = iVar7;
                piVar8[3] = iVar9 - iVar2;
              }
              local_14 = -1;
            }
            else if ((iVar4 < iVar11) && (iVar11 < iVar9)) {
              piVar8[3] = iVar11 - iVar4;
              iVar4 = in_ECX[2];
              iVar6 = iVar4 + 1;
              if (in_ECX[1] < iVar6) {
                if (iVar6 < 0) {
                  iVar6 = iVar4 + 2;
                }
                uVar12 = iVar4 + 9 + (iVar6 >> 1) & 0xfffffff8;
                if (in_ECX[1] != uVar12) {
                  if ((int)uVar12 < 1) {
                    FID_conflict__free((void *)*in_ECX);
                    *in_ECX = 0;
                  }
                  else if (*in_ECX == 0) {
                    iVar4 = FUN_004c554b();
                    *in_ECX = iVar4;
                  }
                  else {
                    iVar4 = FUN_004c553b(*in_ECX,uVar12 << 4);
                    *in_ECX = iVar4;
                  }
                  in_ECX[1] = uVar12;
                }
              }
              iVar4 = in_ECX[2];
              in_ECX[2] = iVar4 + 1;
              piVar8 = (int *)(iVar4 * 0x10 + *in_ECX);
              if (piVar8 != (int *)0x0) {
                *piVar8 = iVar10;
                piVar8[1] = iVar11;
                piVar8[2] = iVar7;
                piVar8[3] = iVar9 - iVar11;
              }
              local_14 = -1;
            }
            else {
              if ((iVar2 < iVar4) && (iVar4 < iVar11)) {
                piVar5[3] = iVar4 - iVar2;
                iVar10 = in_ECX[2];
                iVar7 = iVar10 + 1;
                if (in_ECX[1] < iVar7) {
                  if (iVar7 < 0) {
                    iVar7 = iVar10 + 2;
                  }
                  uVar12 = iVar10 + 9 + (iVar7 >> 1) & 0xfffffff8;
                  if (in_ECX[1] != uVar12) {
                    if ((int)uVar12 < 1) {
                      FID_conflict__free((void *)*in_ECX);
                      *in_ECX = 0;
                    }
                    else if (*in_ECX == 0) {
                      iVar10 = FUN_004c554b();
                      *in_ECX = iVar10;
                    }
                    else {
                      iVar10 = FUN_004c553b(*in_ECX,uVar12 << 4);
                      *in_ECX = iVar10;
                    }
                    in_ECX[1] = uVar12;
                  }
                }
                iVar10 = in_ECX[2];
                in_ECX[2] = iVar10 + 1;
                piVar8 = (int *)(iVar10 * 0x10 + *in_ECX);
                if (piVar8 != (int *)0x0) {
                  *piVar8 = iVar1;
                  piVar8[1] = iVar4;
                  piVar8[2] = iVar6;
                  piVar8[3] = iVar11 - iVar4;
                }
              }
              else {
                if ((iVar9 <= iVar2) || (iVar11 <= iVar9)) goto LAB_0046eb9d;
                piVar5[3] = iVar9 - iVar2;
                iVar10 = in_ECX[2];
                iVar7 = iVar10 + 1;
                if (in_ECX[1] < iVar7) {
                  if (iVar7 < 0) {
                    iVar7 = iVar10 + 2;
                  }
                  FUN_0040ede0((iVar7 >> 1) + iVar10 + 9 & 0xfffffff8);
                }
                iVar10 = in_ECX[2];
                in_ECX[2] = iVar10 + 1;
                piVar8 = (int *)(iVar10 * 0x10 + *in_ECX);
                if (piVar8 != (int *)0x0) {
                  *piVar8 = iVar1;
                  piVar8[1] = iVar9;
                  piVar8[2] = iVar6;
                  piVar8[3] = iVar11 - iVar9;
                  local_14 = -1;
                  break;
                }
              }
              local_14 = -1;
            }
            break;
          }
LAB_0046eb9d:
          local_28 = local_28 + -1;
          piVar5 = piVar5 + -4;
        } while (local_14 < local_28);
      }
      local_14 = local_14 + 1;
      local_28 = in_ECX[2] + -1;
    } while (local_14 < local_28);
  }
  uVar12 = in_ECX[2] - 1;
  local_10 = 0;
  if (0 < (int)uVar12) {
    do {
      if (local_10 < (int)uVar12) {
        iVar10 = uVar12 << 4;
        do {
          cVar3 = FUN_00471dc0(*in_ECX + iVar10);
          if (cVar3 != '\0') {
            if (uVar12 < (uint)in_ECX[2]) {
              iVar10 = in_ECX[2] - 1;
              iVar7 = uVar12 * 0x10 + *in_ECX;
              in_ECX[2] = iVar10;
              iVar10 = iVar10 - uVar12;
              if (0 < iVar10) {
                FUN_004c1df0(iVar7,iVar7 + 0x10,iVar10 * 0x10);
              }
              iVar10 = in_ECX[2];
              iVar7 = in_ECX[1];
              iVar4 = 0;
              if (0 < iVar10 * 2) {
                iVar4 = iVar10 * 2;
              }
              if (iVar4 < iVar7) {
                if (iVar10 < 4) {
                  iVar10 = 4;
                }
                if ((iVar10 < iVar7) && (iVar7 != iVar10)) {
                  if (iVar10 < 1) {
                    FID_conflict__free((void *)*in_ECX);
                    *in_ECX = 0;
                  }
                  else if (*in_ECX == 0) {
                    iVar7 = FUN_004c554b();
                    *in_ECX = iVar7;
                  }
                  else {
                    iVar7 = FUN_004c553b(*in_ECX,iVar10 << 4);
                    *in_ECX = iVar7;
                  }
                  in_ECX[1] = iVar10;
                }
              }
            }
            local_10 = -1;
            break;
          }
          uVar12 = uVar12 - 1;
          iVar10 = iVar10 + -0x10;
        } while (local_10 < (int)uVar12);
      }
      local_10 = local_10 + 1;
      uVar12 = in_ECX[2] - 1;
    } while (local_10 < (int)uVar12);
  }
  return;
}

