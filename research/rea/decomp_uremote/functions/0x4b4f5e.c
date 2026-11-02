// rea decompile_all
// name: FUN_004b4f5e
// address: 0x4b4f5e
// body: available
// range: 0x4b4f5e-0x4b5160 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b4f5e(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *in_EAX;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  int local_14;
  int local_10;
  int local_8;
  
  local_14 = 0;
  piVar9 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_10 = *piVar9 + -1;
      if (0 < local_10) {
        iVar5 = param_1[2];
        piVar2 = (int *)in_EAX[1];
        puVar10 = (uint *)(piVar9 + 1);
        uVar6 = *puVar10;
        in_EAX[5] = ((int *)*in_EAX)[2] * (iVar5 + local_14) + *(int *)*in_EAX;
        local_8 = 0;
        in_EAX[6] = (((iVar5 + local_14) - in_EAX[4]) % piVar2[5]) * piVar2[2] + *piVar2;
        while( true ) {
          local_10 = local_10 + -1;
          iVar5 = (int)uVar6 >> 8;
          if (local_10 < 0) break;
          uVar3 = puVar10[1];
          puVar10 = puVar10 + 2;
          uVar4 = *puVar10;
          if ((int)uVar4 >> 8 == iVar5) {
            local_8 = local_8 + (uVar4 - uVar6) * uVar3;
            uVar6 = uVar4;
          }
          else {
            iVar8 = (int)((0x100 - (uVar6 & 0xff)) * uVar3 + local_8) >> 8;
            if (0 < iVar8) {
              if (iVar8 < 0xff) {
                pbVar7 = (byte *)(*(int *)(*in_EAX + 0xc) * iVar5 + in_EAX[5]);
                uVar6 = (uint)*(byte *)(((iVar5 - in_EAX[3]) % *(int *)(in_EAX[1] + 0x10)) *
                                        *(int *)(in_EAX[1] + 0xc) + in_EAX[6]) *
                        ((in_EAX[2] * iVar8 >> 8) + 1);
                *pbVar7 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar7 >> 8) + (char)(uVar6 >> 8);
              }
              else {
                pbVar7 = (byte *)(*(int *)(*in_EAX + 0xc) * iVar5 + in_EAX[5]);
                uVar6 = (uint)*(byte *)(((iVar5 - in_EAX[3]) % *(int *)(in_EAX[1] + 0x10)) *
                                        *(int *)(in_EAX[1] + 0xc) + in_EAX[6]) * (in_EAX[2] + 1);
                *pbVar7 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar7 >> 8) + (char)(uVar6 >> 8);
              }
            }
            if ((0 < (int)uVar3) && (iVar5 = ((int)uVar4 >> 8) - (iVar5 + 1), 0 < iVar5)) {
              FUN_004be17b(iVar5,uVar3);
            }
            local_8 = (uVar4 & 0xff) * uVar3;
            uVar6 = uVar4;
          }
        }
        local_8 = local_8 >> 8;
        if (0 < local_8) {
          pbVar7 = (byte *)(*(int *)(*in_EAX + 0xc) * iVar5 + in_EAX[5]);
          iVar8 = in_EAX[2];
          if (local_8 < 0xff) {
            iVar8 = iVar8 * local_8 >> 8;
          }
          uVar6 = (uint)*(byte *)(((iVar5 - in_EAX[3]) % *(int *)(in_EAX[1] + 0x10)) *
                                  *(int *)(in_EAX[1] + 0xc) + in_EAX[6]) * (iVar8 + 1);
          *pbVar7 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar7 >> 8) + (char)(uVar6 >> 8);
        }
      }
      local_14 = local_14 + 1;
      piVar9 = piVar9 + iVar1;
    } while (local_14 < (int)param_1[4]);
  }
  return;
}

