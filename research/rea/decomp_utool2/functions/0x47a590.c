// rea decompile_all
// name: FUN_0047a590
// address: 0x47a590
// body: available
// range: 0x47a590-0x47a7ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047a590(int *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_ECX;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  byte *pbVar11;
  int iVar12;
  int local_18;
  
  local_18 = 0;
  piVar7 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar2 = in_ECX[6];
      iVar6 = *piVar7;
      if (0 < iVar6 + -1) {
        puVar10 = (uint *)(piVar7 + 1);
        iVar12 = 0;
        iVar9 = in_ECX[2];
        uVar8 = *puVar10;
        param_1[5] = ((int *)*param_1)[2] * (iVar9 + local_18) + *(int *)*param_1;
        piVar3 = (int *)param_1[1];
        param_1[6] = (((iVar9 + local_18) - param_1[4]) % piVar3[5]) * piVar3[2] + *piVar3;
        for (iVar6 = iVar6 + -2; iVar9 = (int)uVar8 >> 8, -1 < iVar6; iVar6 = iVar6 + -1) {
          uVar4 = puVar10[1];
          puVar10 = puVar10 + 2;
          uVar5 = *puVar10;
          if ((int)uVar5 >> 8 == iVar9) {
            iVar12 = iVar12 + (uVar5 - uVar8) * uVar4;
          }
          else {
            iVar12 = (int)((0x100 - (uVar8 & 0xff)) * uVar4 + iVar12) >> 8;
            if (0 < iVar12) {
              if (iVar12 < 0xff) {
                pbVar11 = (byte *)(*(int *)(*param_1 + 0xc) * iVar9 + param_1[5]);
                uVar8 = (uint)*(byte *)(((iVar9 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                                        *(int *)(param_1[1] + 0xc) + param_1[6]) *
                        ((param_1[2] * iVar12 >> 8) + 1);
                *pbVar11 = (char)((0x100 - (uVar8 >> 8)) * (uint)*pbVar11 >> 8) + (char)(uVar8 >> 8)
                ;
              }
              else {
                pbVar11 = (byte *)(*(int *)(*param_1 + 0xc) * iVar9 + param_1[5]);
                uVar8 = (uint)*(byte *)(((iVar9 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                                        *(int *)(param_1[1] + 0xc) + param_1[6]) * (param_1[2] + 1);
                *pbVar11 = (char)((0x100 - (uVar8 >> 8)) * (uint)*pbVar11 >> 8) + (char)(uVar8 >> 8)
                ;
              }
            }
            if (0 < (int)uVar4) {
              iVar12 = ((int)uVar5 >> 8) - (iVar9 + 1);
              if (0 < iVar12) {
                FUN_00487cb0(iVar9 + 1,iVar12,uVar4);
              }
            }
            iVar12 = (uVar5 & 0xff) * uVar4;
          }
          uVar8 = uVar5;
        }
        iVar12 = iVar12 >> 8;
        if (0 < iVar12) {
          if (iVar12 < 0xff) {
            pbVar11 = (byte *)(*(int *)(*param_1 + 0xc) * iVar9 + param_1[5]);
            bVar1 = *(byte *)(((iVar9 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                              *(int *)(param_1[1] + 0xc) + param_1[6]);
            iVar6 = param_1[2] * iVar12 >> 8;
          }
          else {
            pbVar11 = (byte *)(*(int *)(*param_1 + 0xc) * iVar9 + param_1[5]);
            bVar1 = *(byte *)(((iVar9 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                              *(int *)(param_1[1] + 0xc) + param_1[6]);
            iVar6 = param_1[2];
          }
          uVar8 = (uint)bVar1 * (iVar6 + 1);
          *pbVar11 = (char)((0x100 - (uVar8 >> 8)) * (uint)*pbVar11 >> 8) + (char)(uVar8 >> 8);
        }
      }
      local_18 = local_18 + 1;
      piVar7 = piVar7 + iVar2;
    } while (local_18 < (int)in_ECX[4]);
  }
  return;
}

