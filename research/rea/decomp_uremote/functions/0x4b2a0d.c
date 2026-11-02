// rea decompile_all
// name: FUN_004b2a0d
// address: 0x4b2a0d
// body: available
// range: 0x4b2a0d-0x4b2dca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b2a0d(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *unaff_EDI;
  uint *local_2c;
  int local_1c;
  int local_18;
  uint local_10;
  uint *local_c;
  
  local_1c = 0;
  piVar6 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_18 = *piVar6 + -1;
      if (0 < local_18) {
        iVar8 = param_1[2];
        local_c = (uint *)(piVar6 + 1);
        uVar9 = *local_c;
        piVar2 = (int *)unaff_EDI[1];
        unaff_EDI[5] = ((int *)*unaff_EDI)[2] * (iVar8 + local_1c) + *(int *)*unaff_EDI;
        unaff_EDI[6] = (((iVar8 + local_1c) - unaff_EDI[4]) % piVar2[5]) * piVar2[2] + *piVar2;
        iVar8 = 0;
        while( true ) {
          local_18 = local_18 + -1;
          iVar4 = (int)uVar9 >> 8;
          if (local_18 < 0) break;
          uVar10 = local_c[1];
          local_c = local_c + 2;
          uVar3 = *local_c;
          if ((int)uVar3 >> 8 == iVar4) {
            iVar8 = iVar8 + (uVar3 - uVar9) * uVar10;
            uVar9 = uVar3;
          }
          else {
            iVar8 = (int)((0x100 - (uVar9 & 0xff)) * uVar10 + iVar8) >> 8;
            if (0 < iVar8) {
              if (iVar8 < 0xff) {
                puVar5 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar4 + unaff_EDI[5]);
                uVar9 = (uint)*(byte *)(((iVar4 - unaff_EDI[3]) % *(int *)(unaff_EDI[1] + 0x10)) *
                                        *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6]);
                uVar9 = (uVar9 << 0x10 | uVar9) * (unaff_EDI[2] * iVar8 >> 8);
                uVar7 = uVar9 >> 8 & 0xff00ff;
                iVar8 = 0x100 - (uVar9 >> 0x18);
                uVar9 = uVar7 + ((*puVar5 >> 8 & 0xff00ff) * iVar8 >> 8 & 0xff00ff);
                uVar7 = ((*puVar5 & 0xff00ff) * iVar8 >> 8 & 0xff00ff) + uVar7;
                uVar7 = ((0x100 - (uVar9 >> 8 & 0xff00ff)) * 0x100 | uVar9 * 0x100) ^
                        (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7);
                uVar9 = (0x100 - (uVar9 >> 8 & 0xff00ff)) * 0x100 | uVar9 * 0x100;
              }
              else {
                puVar5 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar4 + unaff_EDI[5]);
                uVar9 = (uint)*(byte *)(((iVar4 - unaff_EDI[3]) % *(int *)(unaff_EDI[1] + 0x10)) *
                                        *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6]);
                uVar9 = (uVar9 << 0x10 | uVar9) * unaff_EDI[2];
                uVar7 = uVar9 >> 8 & 0xff00ff;
                iVar8 = 0x100 - (uVar9 >> 0x18);
                uVar9 = uVar7 + ((*puVar5 >> 8 & 0xff00ff) * iVar8 >> 8 & 0xff00ff);
                uVar7 = ((*puVar5 & 0xff00ff) * iVar8 >> 8 & 0xff00ff) + uVar7;
                uVar7 = ((0x100 - (uVar9 >> 8 & 0xff00ff)) * 0x100 | uVar9 * 0x100) ^
                        (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7);
                uVar9 = (0x100 - (uVar9 >> 8 & 0xff00ff)) * 0x100 | uVar9 * 0x100;
              }
              *puVar5 = uVar7 & 0xff00ff ^ uVar9;
            }
            if (0 < (int)uVar10) {
              iVar8 = ((int)uVar3 >> 8) - (iVar4 + 1);
              if (0 < iVar8) {
                FUN_004bc4ef(unaff_EDI,iVar4 + 1,iVar8,uVar10);
              }
            }
            iVar8 = (uVar3 & 0xff) * uVar10;
            uVar9 = uVar3;
          }
        }
        iVar8 = iVar8 >> 8;
        if (0 < iVar8) {
          if (iVar8 < 0xff) {
            local_2c = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar4 + unaff_EDI[5]);
            uVar9 = *local_2c;
            uVar10 = (uint)*(byte *)(((iVar4 - unaff_EDI[3]) % *(int *)(unaff_EDI[1] + 0x10)) *
                                     *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6]);
            uVar10 = (uVar10 << 0x10 | uVar10) * (unaff_EDI[2] * iVar8 >> 8);
            local_10 = uVar10 >> 8 & 0xff00ff;
            iVar8 = 0x100 - (uVar10 >> 0x18);
            uVar10 = ((uVar9 & 0xff00ff) * iVar8 >> 8 & 0xff00ff) + local_10;
          }
          else {
            local_2c = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar4 + unaff_EDI[5]);
            uVar9 = *local_2c;
            uVar10 = (uint)*(byte *)(((iVar4 - unaff_EDI[3]) % *(int *)(unaff_EDI[1] + 0x10)) *
                                     *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6]);
            uVar10 = (uVar10 << 0x10 | uVar10) * unaff_EDI[2];
            local_10 = uVar10 >> 8 & 0xff00ff;
            iVar8 = 0x100 - (uVar10 >> 0x18);
            uVar10 = ((uVar9 & 0xff00ff) * iVar8 >> 8 & 0xff00ff) + local_10;
          }
          local_10 = local_10 + ((uVar9 >> 8 & 0xff00ff) * iVar8 >> 8 & 0xff00ff);
          *local_2c = (((0x100 - (local_10 >> 8 & 0xff00ff)) * 0x100 | local_10 * 0x100) ^
                      (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10)) & 0xff00ff ^
                      ((0x100 - (local_10 >> 8 & 0xff00ff)) * 0x100 | local_10 * 0x100);
        }
      }
      local_1c = local_1c + 1;
      piVar6 = piVar6 + iVar1;
    } while (local_1c < (int)param_1[4]);
  }
  return;
}

