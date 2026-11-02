// rea decompile_all
// name: FUN_004b1c52
// address: 0x4b1c52
// body: available
// range: 0x4b1c52-0x4b20c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b1c52(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *unaff_EDI;
  uint *local_20;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  piVar2 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_14 = *piVar2 + -1;
      if (0 < local_14) {
        local_20 = (uint *)(piVar2 + 1);
        uVar5 = *local_20;
        iVar10 = param_1[2];
        local_10 = 0;
        unaff_EDI[5] = ((int *)*unaff_EDI)[2] * (iVar10 + local_18) + *(int *)*unaff_EDI;
        unaff_EDI[6] = ((iVar10 + local_18) - unaff_EDI[4]) * ((int *)unaff_EDI[1])[2] +
                       *(int *)unaff_EDI[1];
        while( true ) {
          local_14 = local_14 + -1;
          iVar10 = (int)uVar5 >> 8;
          if (local_14 < 0) break;
          uVar6 = local_20[1];
          local_20 = local_20 + 2;
          uVar11 = *local_20;
          if ((int)uVar11 >> 8 == iVar10) {
            local_10 = local_10 + (uVar11 - uVar5) * uVar6;
            uVar5 = uVar11;
          }
          else {
            iVar7 = (int)((0x100 - (uVar5 & 0xff)) * uVar6 + local_10) >> 8;
            if (0 < iVar7) {
              if (iVar7 < 0xff) {
                uVar5 = *(uint *)((iVar10 - unaff_EDI[3]) * *(int *)(unaff_EDI[1] + 0xc) +
                                 unaff_EDI[6]);
                iVar7 = unaff_EDI[2] * iVar7 >> 8;
                puVar3 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar10 + unaff_EDI[5]);
                uVar4 = (uVar5 >> 8 & 0xff00ff) * iVar7;
                iVar9 = 0x100 - (uVar4 >> 0x18);
                uVar8 = ((*puVar3 & 0xff00ff) * iVar9 >> 8 & 0xff00ff) +
                        ((uVar5 & 0xff00ff) * iVar7 >> 8 & 0xff00ff);
                uVar5 = (uVar4 >> 8 & 0xff00ff) +
                        ((*puVar3 >> 8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
                uVar4 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) << 8 ^
                        (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8);
                uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100;
              }
              else {
                uVar5 = *(uint *)((iVar10 - unaff_EDI[3]) * *(int *)(unaff_EDI[1] + 0xc) +
                                 unaff_EDI[6]);
                puVar3 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar10 + unaff_EDI[5]);
                uVar4 = (uVar5 >> 8 & 0xff00ff) * unaff_EDI[2];
                iVar7 = 0x100 - (uVar4 >> 0x18);
                uVar8 = ((*puVar3 & 0xff00ff) * iVar7 >> 8 & 0xff00ff) +
                        ((uVar5 & 0xff00ff) * unaff_EDI[2] >> 8 & 0xff00ff);
                uVar5 = (uVar4 >> 8 & 0xff00ff) +
                        ((*puVar3 >> 8 & 0xff00ff) * iVar7 >> 8 & 0xff00ff);
                uVar4 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) << 8 ^
                        (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8);
                uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100;
              }
              *puVar3 = uVar4 & 0xff00ff ^ uVar5;
            }
            if (0 < (int)uVar6) {
              iVar7 = ((int)uVar11 >> 8) - (iVar10 + 1);
              if (0 < iVar7) {
                FUN_004b9168(unaff_EDI,iVar10 + 1,iVar7,uVar6);
              }
            }
            local_10 = (uVar11 & 0xff) * uVar6;
            uVar5 = uVar11;
          }
        }
        local_10 = local_10 >> 8;
        if (0 < local_10) {
          if (local_10 < 0xff) {
            iVar7 = unaff_EDI[2] * local_10 >> 8;
            puVar3 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar10 + unaff_EDI[5]);
            uVar5 = *(uint *)((iVar10 - unaff_EDI[3]) * *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6])
            ;
            uVar6 = (uVar5 >> 8 & 0xff00ff) * iVar7;
            iVar10 = 0x100 - (uVar6 >> 0x18);
            uVar11 = ((uVar5 & 0xff00ff) * iVar7 >> 8 & 0xff00ff) +
                     ((*puVar3 & 0xff00ff) * iVar10 >> 8 & 0xff00ff);
            uVar5 = (uVar6 >> 8 & 0xff00ff) + ((*puVar3 >> 8 & 0xff00ff) * iVar10 >> 8 & 0xff00ff);
            uVar6 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) << 8 ^
                    (0x100 - (uVar11 >> 8 & 0xff00ff) | uVar11);
            uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100;
          }
          else {
            uVar5 = *(uint *)((iVar10 - unaff_EDI[3]) * *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6])
            ;
            puVar3 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar10 + unaff_EDI[5]);
            uVar6 = (uVar5 >> 8 & 0xff00ff) * unaff_EDI[2];
            iVar10 = 0x100 - (uVar6 >> 0x18);
            uVar11 = ((*puVar3 & 0xff00ff) * iVar10 >> 8 & 0xff00ff) +
                     ((uVar5 & 0xff00ff) * unaff_EDI[2] >> 8 & 0xff00ff);
            uVar5 = (uVar6 >> 8 & 0xff00ff) + ((*puVar3 >> 8 & 0xff00ff) * iVar10 >> 8 & 0xff00ff);
            uVar6 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) << 8 ^
                    (0x100 - (uVar11 >> 8 & 0xff00ff) | uVar11);
            uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100;
          }
          *puVar3 = uVar6 & 0xff00ff ^ uVar5;
        }
      }
      local_18 = local_18 + 1;
      piVar2 = piVar2 + iVar1;
    } while (local_18 < (int)param_1[4]);
  }
  return;
}

