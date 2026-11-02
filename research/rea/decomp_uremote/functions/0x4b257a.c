// rea decompile_all
// name: FUN_004b257a
// address: 0x4b257a
// body: available
// range: 0x4b257a-0x4b2a0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b257a(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *unaff_EDI;
  int local_18;
  int local_14;
  uint *local_c;
  
  local_18 = 0;
  piVar3 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_14 = *piVar3 + -1;
      if (0 < local_14) {
        local_c = (uint *)(piVar3 + 1);
        uVar5 = *local_c;
        iVar11 = param_1[2];
        unaff_EDI[5] = ((int *)*unaff_EDI)[2] * (iVar11 + local_18) + *(int *)*unaff_EDI;
        iVar6 = 0;
        unaff_EDI[6] = ((iVar11 + local_18) - unaff_EDI[4]) * ((int *)unaff_EDI[1])[2] +
                       *(int *)unaff_EDI[1];
        while( true ) {
          local_14 = local_14 + -1;
          iVar11 = (int)uVar5 >> 8;
          if (local_14 < 0) break;
          uVar9 = local_c[1];
          local_c = local_c + 2;
          uVar2 = *local_c;
          if ((int)uVar2 >> 8 == iVar11) {
            iVar6 = iVar6 + (uVar2 - uVar5) * uVar9;
            uVar5 = uVar2;
          }
          else {
            iVar6 = (int)((0x100 - (uVar5 & 0xff)) * uVar9 + iVar6) >> 8;
            if (0 < iVar6) {
              if (iVar6 < 0xff) {
                pbVar4 = (byte *)((iVar11 - unaff_EDI[3]) * *(int *)(unaff_EDI[1] + 0xc) +
                                 unaff_EDI[6]);
                iVar6 = unaff_EDI[2] * iVar6 >> 8;
                puVar7 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar11 + unaff_EDI[5]);
                uVar5 = (pbVar4[1] | 0xff0000) * iVar6;
                iVar8 = 0x100 - (uVar5 >> 0x18);
                uVar10 = (((uint)pbVar4[2] << 0x10 | (uint)*pbVar4) * iVar6 >> 8 & 0xff00ff) +
                         ((*puVar7 & 0xff00ff) * iVar8 >> 8 & 0xff00ff);
                uVar5 = (uVar5 >> 8 & 0xff00ff) +
                        ((*puVar7 >> 8 & 0xff00ff) * iVar8 >> 8 & 0xff00ff);
                uVar10 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) << 8 ^
                         (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10);
                uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100;
              }
              else {
                pbVar4 = (byte *)((iVar11 - unaff_EDI[3]) * *(int *)(unaff_EDI[1] + 0xc) +
                                 unaff_EDI[6]);
                puVar7 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar11 + unaff_EDI[5]);
                uVar5 = (pbVar4[1] | 0xff0000) * unaff_EDI[2];
                iVar6 = 0x100 - (uVar5 >> 0x18);
                uVar10 = (((uint)pbVar4[2] << 0x10 | (uint)*pbVar4) * unaff_EDI[2] >> 8 & 0xff00ff)
                         + ((*puVar7 & 0xff00ff) * iVar6 >> 8 & 0xff00ff);
                uVar5 = (uVar5 >> 8 & 0xff00ff) +
                        ((*puVar7 >> 8 & 0xff00ff) * iVar6 >> 8 & 0xff00ff);
                uVar10 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) << 8 ^
                         (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10);
                uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100;
              }
              *puVar7 = uVar10 & 0xff00ff ^ uVar5;
            }
            if (0 < (int)uVar9) {
              iVar6 = ((int)uVar2 >> 8) - (iVar11 + 1);
              if (0 < iVar6) {
                FUN_004bc1e1(unaff_EDI,iVar11 + 1,iVar6,uVar9);
              }
            }
            iVar6 = (uVar2 & 0xff) * uVar9;
            uVar5 = uVar2;
          }
        }
        iVar6 = iVar6 >> 8;
        if (0 < iVar6) {
          if (iVar6 < 0xff) {
            iVar6 = unaff_EDI[2] * iVar6 >> 8;
            pbVar4 = (byte *)((iVar11 - unaff_EDI[3]) * *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6])
            ;
            puVar7 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar11 + unaff_EDI[5]);
            uVar5 = (pbVar4[1] | 0xff0000) * iVar6;
            iVar11 = 0x100 - (uVar5 >> 0x18);
            uVar9 = (((uint)pbVar4[2] << 0x10 | (uint)*pbVar4) * iVar6 >> 8 & 0xff00ff) +
                    ((*puVar7 & 0xff00ff) * iVar11 >> 8 & 0xff00ff);
            uVar5 = (uVar5 >> 8 & 0xff00ff) + ((*puVar7 >> 8 & 0xff00ff) * iVar11 >> 8 & 0xff00ff);
            uVar9 = ((0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100) ^
                    (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9);
            uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100;
          }
          else {
            pbVar4 = (byte *)((iVar11 - unaff_EDI[3]) * *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6])
            ;
            puVar7 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar11 + unaff_EDI[5]);
            uVar5 = (pbVar4[1] | 0xff0000) * unaff_EDI[2];
            iVar11 = 0x100 - (uVar5 >> 0x18);
            uVar9 = (((uint)pbVar4[2] << 0x10 | (uint)*pbVar4) * unaff_EDI[2] >> 8 & 0xff00ff) +
                    ((*puVar7 & 0xff00ff) * iVar11 >> 8 & 0xff00ff);
            uVar5 = (uVar5 >> 8 & 0xff00ff) + ((*puVar7 >> 8 & 0xff00ff) * iVar11 >> 8 & 0xff00ff);
            uVar9 = ((0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100) ^
                    (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9);
            uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100;
          }
          *puVar7 = uVar9 & 0xff00ff ^ uVar5;
        }
      }
      local_18 = local_18 + 1;
      piVar3 = piVar3 + iVar1;
    } while (local_18 < (int)param_1[4]);
  }
  return;
}

