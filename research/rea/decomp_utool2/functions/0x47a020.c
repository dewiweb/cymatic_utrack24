// rea decompile_all
// name: FUN_0047a020
// address: 0x47a020
// body: available
// range: 0x47a020-0x47a22f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047a020(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_ECX;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int local_c;
  
  local_c = 0;
  piVar6 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar9 = *piVar6;
      if (0 < iVar9 + -1) {
        uVar7 = piVar6[1];
        puVar5 = (uint *)(piVar6 + 1);
        iVar8 = 0;
        iVar4 = in_ECX[2];
        param_1[5] = ((int *)*param_1)[2] * (iVar4 + local_c) + *(int *)*param_1;
        param_1[6] = ((iVar4 + local_c) - param_1[4]) * ((int *)param_1[1])[2] + *(int *)param_1[1];
        for (iVar9 = iVar9 + -2; iVar4 = (int)uVar7 >> 8, -1 < iVar9; iVar9 = iVar9 + -1) {
          uVar2 = puVar5[1];
          puVar5 = puVar5 + 2;
          uVar3 = *puVar5;
          if ((int)uVar3 >> 8 == iVar4) {
            iVar8 = iVar8 + (uVar3 - uVar7) * uVar2;
          }
          else {
            iVar8 = (int)((0x100 - (uVar7 & 0xff)) * uVar2 + iVar8) >> 8;
            if (0 < iVar8) {
              if (iVar8 < 0xff) {
                pbVar10 = (byte *)(*(int *)(*param_1 + 0xc) * iVar4 + param_1[5]);
                uVar7 = (uint)*(byte *)((iVar4 - param_1[3]) * *(int *)(param_1[1] + 0xc) + 3 +
                                       param_1[6]) * ((param_1[2] * iVar8 >> 8) + 1);
                *pbVar10 = (char)((0x100 - (uVar7 >> 8)) * (uint)*pbVar10 >> 8) + (char)(uVar7 >> 8)
                ;
              }
              else {
                pbVar10 = (byte *)(*(int *)(*param_1 + 0xc) * iVar4 + param_1[5]);
                uVar7 = (uint)*(byte *)((iVar4 - param_1[3]) * *(int *)(param_1[1] + 0xc) + 3 +
                                       param_1[6]) * (param_1[2] + 1);
                *pbVar10 = (char)((0x100 - (uVar7 >> 8)) * (uint)*pbVar10 >> 8) + (char)(uVar7 >> 8)
                ;
              }
            }
            if (0 < (int)uVar2) {
              iVar8 = ((int)uVar3 >> 8) - (iVar4 + 1);
              if (0 < iVar8) {
                FUN_004880e0(iVar4 + 1,iVar8,uVar2);
              }
            }
            iVar8 = (uVar3 & 0xff) * uVar2;
          }
          uVar7 = uVar3;
        }
        iVar8 = iVar8 >> 8;
        if (0 < iVar8) {
          pbVar10 = (byte *)(*(int *)(*param_1 + 0xc) * iVar4 + param_1[5]);
          iVar9 = param_1[2];
          if (iVar8 < 0xff) {
            iVar9 = iVar9 * iVar8 >> 8;
          }
          uVar7 = (uint)*(byte *)((iVar4 - param_1[3]) * *(int *)(param_1[1] + 0xc) + 3 + param_1[6]
                                 ) * (iVar9 + 1);
          *pbVar10 = (char)((0x100 - (uVar7 >> 8)) * (uint)*pbVar10 >> 8) + (char)(uVar7 >> 8);
        }
      }
      local_c = local_c + 1;
      piVar6 = piVar6 + iVar1;
    } while (local_c < (int)in_ECX[4]);
  }
  return;
}

