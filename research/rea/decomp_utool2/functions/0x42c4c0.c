// rea decompile_all
// name: FUN_0042c4c0
// address: 0x42c4c0
// body: available
// range: 0x42c4c0-0x42c8bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042c4c0(void)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *in_ECX;
  short *psVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  undefined1 local_24 [4];
  uint *local_20;
  int local_1c [2];
  uint local_14;
  uint local_10;
  short *local_c;
  short *local_8;
  
  piVar2 = (int *)in_ECX[0x10];
  if ((piVar2 == (int *)0x0) ||
     (local_20 = in_ECX, iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2,local_24,local_1c), iVar3 < 0)
     ) {
    return 1;
  }
  local_1c[0] = local_1c[0] - *in_ECX;
  if (local_1c[0] < 0) {
    local_1c[0] = local_1c[0] + in_ECX[2];
  }
  if ((int)in_ECX[1] <= local_1c[0]) {
    local_c = (short *)0x0;
    local_8 = (short *)0x0;
    local_14 = 0;
    local_10 = 0;
    iVar3 = (**(code **)(*(int *)in_ECX[0x10] + 0x20))
                      ((int *)in_ECX[0x10],*in_ECX,in_ECX[1],&local_c,&local_14,&local_8,&local_10,0
                      );
    if (-1 < iVar3) {
      if (in_ECX[3] == 0x10) {
        pfVar6 = (float *)in_ECX[0xc];
        pfVar7 = (float *)in_ECX[0xd];
        uVar4 = local_14 >> 2;
        uVar9 = local_10 >> 2;
        if (pfVar6 == (float *)0x0) {
          iVar3 = uVar4 - 1;
          if (-1 < iVar3) {
            psVar5 = local_c;
            if (3 < uVar4) {
              uVar4 = local_14 >> 4;
              iVar3 = iVar3 + uVar4 * -4;
              do {
                *pfVar7 = (float)(int)psVar5[1] * 3.0517578e-05;
                pfVar7[1] = (float)(int)psVar5[3] * 3.0517578e-05;
                pfVar7[2] = (float)(int)psVar5[5] * 3.0517578e-05;
                psVar1 = psVar5 + 7;
                psVar5 = psVar5 + 8;
                pfVar7[3] = (float)(int)*psVar1 * 3.0517578e-05;
                pfVar7 = pfVar7 + 4;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
            for (; -1 < iVar3; iVar3 = iVar3 + -1) {
              *pfVar7 = (float)(int)psVar5[1] * 3.0517578e-05;
              pfVar7 = pfVar7 + 1;
              psVar5 = psVar5 + 2;
            }
          }
          iVar3 = uVar9 - 1;
          if (-1 < iVar3) {
            psVar5 = local_8;
            if (3 < uVar9) {
              uVar4 = local_10 >> 4;
              iVar3 = iVar3 + uVar4 * -4;
              do {
                *pfVar7 = (float)(int)psVar5[1] * 3.0517578e-05;
                pfVar7[1] = (float)(int)psVar5[3] * 3.0517578e-05;
                pfVar7[2] = (float)(int)psVar5[5] * 3.0517578e-05;
                psVar1 = psVar5 + 7;
                psVar5 = psVar5 + 8;
                pfVar7[3] = (float)(int)*psVar1 * 3.0517578e-05;
                pfVar7 = pfVar7 + 4;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
            for (; -1 < iVar3; iVar3 = iVar3 + -1) {
              *pfVar7 = (float)(int)psVar5[1] * 3.0517578e-05;
              psVar5 = psVar5 + 2;
              pfVar7 = pfVar7 + 1;
            }
          }
        }
        else {
          psVar5 = local_c;
          if (pfVar7 == (float *)0x0) {
            iVar3 = uVar4 - 1;
            if (-1 < iVar3) {
              if (3 < uVar4) {
                uVar4 = local_14 >> 4;
                iVar3 = iVar3 + uVar4 * -4;
                do {
                  *pfVar6 = (float)(int)*psVar5 * 3.0517578e-05;
                  pfVar6[1] = (float)(int)psVar5[2] * 3.0517578e-05;
                  pfVar6[2] = (float)(int)psVar5[4] * 3.0517578e-05;
                  psVar1 = psVar5 + 6;
                  psVar5 = psVar5 + 8;
                  pfVar6[3] = (float)(int)*psVar1 * 3.0517578e-05;
                  pfVar6 = pfVar6 + 4;
                  uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
              }
              if (-1 < iVar3) {
                iVar8 = (int)psVar5 - (int)pfVar6;
                do {
                  *pfVar6 = (float)(int)*(short *)(iVar8 + (int)pfVar6) * 3.0517578e-05;
                  pfVar6 = pfVar6 + 1;
                  iVar3 = iVar3 + -1;
                } while (-1 < iVar3);
              }
            }
            iVar3 = uVar9 - 1;
            if (-1 < iVar3) {
              psVar5 = local_8;
              if (3 < uVar9) {
                uVar4 = local_10 >> 4;
                iVar3 = iVar3 + uVar4 * -4;
                do {
                  *pfVar6 = (float)(int)*psVar5 * 3.0517578e-05;
                  pfVar6[1] = (float)(int)psVar5[2] * 3.0517578e-05;
                  pfVar6[2] = (float)(int)psVar5[4] * 3.0517578e-05;
                  psVar1 = psVar5 + 6;
                  psVar5 = psVar5 + 8;
                  pfVar6[3] = (float)(int)*psVar1 * 3.0517578e-05;
                  pfVar6 = pfVar6 + 4;
                  uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
              }
              if (-1 < iVar3) {
                pfVar7 = pfVar6;
                do {
                  iVar3 = iVar3 + -1;
                  *pfVar7 = (float)(int)*(short *)(((int)psVar5 - (int)pfVar6) + (int)pfVar7) *
                            3.0517578e-05;
                  pfVar7 = pfVar7 + 1;
                } while (-1 < iVar3);
              }
            }
          }
          else {
            while (uVar4 = uVar4 - 1, psVar1 = local_8, -1 < (int)uVar4) {
              *pfVar6 = (float)(int)*psVar5 * 3.0517578e-05;
              pfVar6 = pfVar6 + 1;
              *pfVar7 = (float)(int)psVar5[1] * 3.0517578e-05;
              pfVar7 = pfVar7 + 1;
              psVar5 = psVar5 + 2;
            }
            while (uVar9 = uVar9 - 1, -1 < (int)uVar9) {
              *pfVar6 = (float)(int)*psVar1 * 3.0517578e-05;
              *pfVar7 = (float)(int)psVar1[1] * 3.0517578e-05;
              psVar1 = psVar1 + 2;
              pfVar6 = pfVar6 + 1;
              pfVar7 = pfVar7 + 1;
            }
          }
        }
      }
      *local_20 = (*local_20 + local_10 + local_14) % local_20[2];
      (**(code **)(*(int *)local_20[0x10] + 0x2c))
                ((int *)local_20[0x10],local_c,local_14,local_8,local_10);
    }
    return 1;
  }
  return 0;
}

