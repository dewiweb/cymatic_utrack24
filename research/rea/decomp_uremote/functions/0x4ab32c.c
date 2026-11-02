// rea decompile_all
// name: FUN_004ab32c
// address: 0x4ab32c
// body: available
// range: 0x4ab32c-0x4ab730 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ab32c(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *unaff_EDI;
  uint *local_20;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  local_18 = 0;
  piVar3 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_14 = *piVar3 + -1;
      if (0 < local_14) {
        local_8 = 0;
        local_20 = (uint *)(piVar3 + 1);
        uVar8 = *local_20;
        unaff_EDI[1] = (param_1[2] + local_18) * ((int *)*unaff_EDI)[2] + *(int *)*unaff_EDI;
        while( true ) {
          local_14 = local_14 + -1;
          iVar10 = (int)uVar8 >> 8;
          if (local_14 < 0) break;
          uVar7 = local_20[1];
          local_20 = local_20 + 2;
          uVar2 = *local_20;
          if ((int)uVar2 >> 8 == iVar10) {
            local_8 = local_8 + (uVar2 - uVar8) * uVar7;
            uVar8 = uVar2;
          }
          else {
            iVar5 = (int)((0x100 - (uVar8 & 0xff)) * uVar7 + local_8) >> 8;
            if (0 < iVar5) {
              puVar4 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar10 + unaff_EDI[1]);
              if (iVar5 < 0xff) {
                uVar8 = ((uint)unaff_EDI[2] >> 8 & 0xff00ff) * iVar5;
                iVar9 = 0x100 - (uVar8 >> 0x18);
                uVar6 = ((*puVar4 & 0xff00ff) * iVar9 >> 8 & 0xff00ff) +
                        ((unaff_EDI[2] & 0xff00ffU) * iVar5 >> 8 & 0xff00ff);
                uVar8 = (uVar8 >> 8 & 0xff00ff) +
                        ((*puVar4 >> 8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
                uVar6 = (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) << 8 ^
                        (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6);
                uVar8 = (0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100;
              }
              else {
                iVar5 = 0x100 - ((uint)unaff_EDI[2] >> 0x18);
                uVar8 = ((uint)unaff_EDI[2] >> 8 & 0xff00ff) +
                        ((*puVar4 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
                uVar6 = ((*puVar4 & 0xff00ff) * iVar5 >> 8 & 0xff00ff) + (unaff_EDI[2] & 0xff00ffU);
                uVar6 = ((0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100) ^
                        (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6);
                uVar8 = (0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100;
              }
              *puVar4 = uVar6 & 0xff00ff ^ uVar8;
            }
            if (0 < (int)uVar7) {
              local_c = ((int)uVar2 >> 8) - (iVar10 + 1);
              if (0 < local_c) {
                uVar8 = unaff_EDI[2];
                iVar5 = uVar7 + 1;
                uVar6 = (uVar8 >> 8 & 0xff00ff) * iVar5;
                uVar8 = ((uVar8 & 0xff00ff) * iVar5 >> 8 ^ (uVar8 >> 8 & 0xffff00ff) * iVar5) &
                        0xff00ff ^ uVar6;
                iVar5 = *(int *)(*unaff_EDI + 0xc);
                puVar4 = (uint *)(iVar5 * (iVar10 + 1) + unaff_EDI[1]);
                if ((char)(uVar6 >> 0x18) == -1) {
                  do {
                    *puVar4 = uVar8;
                    puVar4 = (uint *)((int)puVar4 + iVar5);
                    local_c = local_c + -1;
                  } while (0 < local_c);
                }
                else {
                  FUN_004be2cb(puVar4,uVar8,local_c);
                }
              }
            }
            local_8 = (uVar2 & 0xff) * uVar7;
            uVar8 = uVar2;
          }
        }
        local_8 = local_8 >> 8;
        if (0 < local_8) {
          puVar4 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar10 + unaff_EDI[1]);
          if (local_8 < 0xff) {
            uVar8 = ((uint)unaff_EDI[2] >> 8 & 0xff00ff) * local_8;
            iVar10 = 0x100 - (uVar8 >> 0x18);
            uVar7 = ((*puVar4 & 0xff00ff) * iVar10 >> 8 & 0xff00ff) +
                    ((unaff_EDI[2] & 0xff00ffU) * local_8 >> 8 & 0xff00ff);
            uVar8 = (uVar8 >> 8 & 0xff00ff) + ((*puVar4 >> 8 & 0xff00ff) * iVar10 >> 8 & 0xff00ff);
            uVar7 = (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) << 8 ^
                    (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7);
            uVar8 = (0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100;
          }
          else {
            iVar10 = 0x100 - ((uint)unaff_EDI[2] >> 0x18);
            uVar8 = ((uint)unaff_EDI[2] >> 8 & 0xff00ff) +
                    ((*puVar4 >> 8 & 0xff00ff) * iVar10 >> 8 & 0xff00ff);
            uVar7 = ((*puVar4 & 0xff00ff) * iVar10 >> 8 & 0xff00ff) + (unaff_EDI[2] & 0xff00ffU);
            uVar7 = ((0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100) ^
                    (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7);
            uVar8 = (0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100;
          }
          *puVar4 = uVar7 & 0xff00ff ^ uVar8;
        }
      }
      local_18 = local_18 + 1;
      piVar3 = piVar3 + iVar1;
    } while (local_18 < (int)param_1[4]);
  }
  return;
}

