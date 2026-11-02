// rea decompile_all
// name: FUN_004b17c5
// address: 0x4b17c5
// body: available
// range: 0x4b17c5-0x4b1c51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b17c5(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *unaff_EDI;
  int local_18;
  int local_14;
  uint *local_c;
  
  local_18 = 0;
  piVar7 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_14 = *piVar7 + -1;
      if (0 < local_14) {
        iVar9 = param_1[2];
        local_c = (uint *)(piVar7 + 1);
        uVar5 = *local_c;
        piVar2 = (int *)unaff_EDI[1];
        unaff_EDI[5] = ((int *)*unaff_EDI)[2] * (iVar9 + local_18) + *(int *)*unaff_EDI;
        unaff_EDI[6] = (((iVar9 + local_18) - unaff_EDI[4]) % piVar2[5]) * piVar2[2] + *piVar2;
        iVar9 = 0;
        while( true ) {
          local_14 = local_14 + -1;
          iVar12 = (int)uVar5 >> 8;
          if (local_14 < 0) break;
          uVar6 = local_c[1];
          local_c = local_c + 2;
          uVar8 = *local_c;
          if ((int)uVar8 >> 8 == iVar12) {
            iVar9 = iVar9 + (uVar8 - uVar5) * uVar6;
            uVar5 = uVar8;
          }
          else {
            iVar9 = (int)((0x100 - (uVar5 & 0xff)) * uVar6 + iVar9) >> 8;
            if (0 < iVar9) {
              if (iVar9 < 0xff) {
                iVar9 = unaff_EDI[2] * iVar9 >> 8;
                puVar3 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar12 + unaff_EDI[5]);
                uVar5 = *(uint *)(((iVar12 - unaff_EDI[3]) % *(int *)(unaff_EDI[1] + 0x10)) *
                                  *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6]);
                uVar4 = (uVar5 >> 8 & 0xff00ff) * iVar9;
                iVar11 = 0x100 - (uVar4 >> 0x18);
                uVar10 = ((*puVar3 & 0xff00ff) * iVar11 >> 8 & 0xff00ff) +
                         ((uVar5 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
                uVar5 = (uVar4 >> 8 & 0xff00ff) +
                        ((*puVar3 >> 8 & 0xff00ff) * iVar11 >> 8 & 0xff00ff);
                uVar4 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) << 8 ^
                        (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10);
                uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100;
              }
              else {
                puVar3 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar12 + unaff_EDI[5]);
                uVar5 = *(uint *)(((iVar12 - unaff_EDI[3]) % *(int *)(unaff_EDI[1] + 0x10)) *
                                  *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6]);
                uVar4 = (uVar5 >> 8 & 0xff00ff) * unaff_EDI[2];
                iVar9 = 0x100 - (uVar4 >> 0x18);
                uVar10 = ((*puVar3 & 0xff00ff) * iVar9 >> 8 & 0xff00ff) +
                         ((uVar5 & 0xff00ff) * unaff_EDI[2] >> 8 & 0xff00ff);
                uVar5 = (uVar4 >> 8 & 0xff00ff) +
                        ((*puVar3 >> 8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
                uVar4 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) << 8 ^
                        (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10);
                uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100;
              }
              *puVar3 = uVar4 & 0xff00ff ^ uVar5;
            }
            if (0 < (int)uVar6) {
              iVar9 = ((int)uVar8 >> 8) - (iVar12 + 1);
              if (0 < iVar9) {
                FUN_004bbba8(unaff_EDI,iVar12 + 1,iVar9,uVar6);
              }
            }
            iVar9 = (uVar8 & 0xff) * uVar6;
            uVar5 = uVar8;
          }
        }
        iVar9 = iVar9 >> 8;
        if (0 < iVar9) {
          if (iVar9 < 0xff) {
            iVar9 = unaff_EDI[2] * iVar9 >> 8;
            puVar3 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar12 + unaff_EDI[5]);
            uVar5 = *(uint *)(((iVar12 - unaff_EDI[3]) % *(int *)(unaff_EDI[1] + 0x10)) *
                              *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6]);
            uVar6 = (uVar5 >> 8 & 0xff00ff) * iVar9;
            iVar12 = 0x100 - (uVar6 >> 0x18);
            uVar8 = ((uVar5 & 0xff00ff) * iVar9 >> 8 & 0xff00ff) +
                    ((*puVar3 & 0xff00ff) * iVar12 >> 8 & 0xff00ff);
            uVar5 = (uVar6 >> 8 & 0xff00ff) + ((*puVar3 >> 8 & 0xff00ff) * iVar12 >> 8 & 0xff00ff);
            uVar6 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) << 8 ^
                    (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8);
            uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100;
          }
          else {
            puVar3 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar12 + unaff_EDI[5]);
            uVar5 = *(uint *)(((iVar12 - unaff_EDI[3]) % *(int *)(unaff_EDI[1] + 0x10)) *
                              *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6]);
            uVar6 = (uVar5 >> 8 & 0xff00ff) * unaff_EDI[2];
            iVar9 = 0x100 - (uVar6 >> 0x18);
            uVar8 = ((uVar5 & 0xff00ff) * unaff_EDI[2] >> 8 & 0xff00ff) +
                    ((*puVar3 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
            uVar5 = (uVar6 >> 8 & 0xff00ff) + ((*puVar3 >> 8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
            uVar6 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) << 8 ^
                    (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8);
            uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100;
          }
          *puVar3 = uVar6 & 0xff00ff ^ uVar5;
        }
      }
      local_18 = local_18 + 1;
      piVar7 = piVar7 + iVar1;
    } while (local_18 < (int)param_1[4]);
  }
  return;
}

