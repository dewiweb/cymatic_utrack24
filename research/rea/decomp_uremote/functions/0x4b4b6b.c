// rea decompile_all
// name: FUN_004b4b6b
// address: 0x4b4b6b
// body: available
// range: 0x4b4b6b-0x4b4d79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b4b6b(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *in_ECX;
  int *piVar8;
  uint *puVar9;
  byte *pbVar10;
  int local_18;
  int local_14;
  int local_c;
  
  local_18 = 0;
  piVar8 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_14 = *piVar8 + -1;
      if (0 < local_14) {
        iVar5 = param_1[2];
        puVar9 = (uint *)(piVar8 + 1);
        uVar7 = *puVar9;
        in_ECX[5] = ((int *)*in_ECX)[2] * (iVar5 + local_18) + *(int *)*in_ECX;
        piVar2 = (int *)in_ECX[1];
        local_c = 0;
        in_ECX[6] = (((iVar5 + local_18) - in_ECX[4]) % piVar2[5]) * piVar2[2] + *piVar2;
        while( true ) {
          local_14 = local_14 + -1;
          iVar5 = (int)uVar7 >> 8;
          if (local_14 < 0) break;
          uVar3 = puVar9[1];
          puVar9 = puVar9 + 2;
          uVar4 = *puVar9;
          if ((int)uVar4 >> 8 == iVar5) {
            local_c = local_c + (uVar4 - uVar7) * uVar3;
            uVar7 = uVar4;
          }
          else {
            iVar6 = (int)((0x100 - (uVar7 & 0xff)) * uVar3 + local_c) >> 8;
            if (0 < iVar6) {
              if (iVar6 < 0xff) {
                pbVar10 = (byte *)(*(int *)(*in_ECX + 0xc) * iVar5 + in_ECX[5]);
                uVar7 = ((in_ECX[2] * iVar6 >> 8) + 1) * 0xff;
                *pbVar10 = (char)((0x100 - (uVar7 >> 8)) * (uint)*pbVar10 >> 8) + (char)(uVar7 >> 8)
                ;
              }
              else {
                pbVar10 = (byte *)(*(int *)(*in_ECX + 0xc) * iVar5 + in_ECX[5]);
                uVar7 = (in_ECX[2] + 1) * 0xff;
                *pbVar10 = (char)((0x100 - (uVar7 >> 8)) * (uint)*pbVar10 >> 8) + (char)(uVar7 >> 8)
                ;
              }
            }
            if (0 < (int)uVar3) {
              local_c = ((int)uVar4 >> 8) - (iVar5 + 1);
              if (0 < local_c) {
                iVar6 = *(int *)(*in_ECX + 0xc);
                pbVar10 = (byte *)(iVar6 * (iVar5 + 1) + in_ECX[5]);
                iVar5 = (int)(in_ECX[2] * uVar3) >> 8;
                if (iVar5 < 0xfe) {
                  uVar7 = (iVar5 + 1) * 0xff;
                  do {
                    *pbVar10 = (char)((uint)*pbVar10 * (0x100 - (uVar7 >> 8)) >> 8) +
                               (char)(uVar7 >> 8);
                    pbVar10 = pbVar10 + iVar6;
                    local_c = local_c + -1;
                  } while (0 < local_c);
                }
                else {
                  do {
                    *pbVar10 = 0xff;
                    pbVar10 = pbVar10 + iVar6;
                    local_c = local_c + -1;
                  } while (0 < local_c);
                }
              }
            }
            local_c = (uVar4 & 0xff) * uVar3;
            uVar7 = uVar4;
          }
        }
        local_c = local_c >> 8;
        if (0 < local_c) {
          iVar6 = in_ECX[2];
          pbVar10 = (byte *)(*(int *)(*in_ECX + 0xc) * iVar5 + in_ECX[5]);
          if (local_c < 0xff) {
            iVar6 = iVar6 * local_c >> 8;
          }
          uVar7 = (iVar6 + 1) * 0xff;
          *pbVar10 = (char)((0x100 - (uVar7 >> 8)) * (uint)*pbVar10 >> 8) + (char)(uVar7 >> 8);
        }
      }
      local_18 = local_18 + 1;
      piVar8 = piVar8 + iVar1;
    } while (local_18 < (int)param_1[4]);
  }
  return;
}

