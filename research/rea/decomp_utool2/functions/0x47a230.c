// rea decompile_all
// name: FUN_0047a230
// address: 0x47a230
// body: available
// range: 0x47a230-0x47a3e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047a230(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint *puVar11;
  int iVar12;
  int local_c;
  
  local_c = 0;
  piVar6 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar5 = *piVar6;
      if (0 < iVar5 + -1) {
        uVar7 = piVar6[1];
        puVar11 = (uint *)(piVar6 + 1);
        iVar8 = 0;
        iVar12 = in_ECX[2];
        param_1[5] = ((int *)*param_1)[2] * (iVar12 + local_c) + *(int *)*param_1;
        piVar2 = (int *)param_1[1];
        param_1[6] = (((iVar12 + local_c) - param_1[4]) % piVar2[5]) * piVar2[2] + *piVar2;
        for (iVar5 = iVar5 + -2; iVar12 = (int)uVar7 >> 8, -1 < iVar5; iVar5 = iVar5 + -1) {
          uVar3 = puVar11[1];
          puVar11 = puVar11 + 2;
          uVar4 = *puVar11;
          if ((int)uVar4 >> 8 == iVar12) {
            iVar8 = iVar8 + (uVar4 - uVar7) * uVar3;
          }
          else {
            iVar8 = (int)((0x100 - (uVar7 & 0xff)) * uVar3 + iVar8) >> 8;
            if (0 < iVar8) {
              if (iVar8 < 0xff) {
                iVar9 = *(int *)(*param_1 + 0xc);
                iVar8 = param_1[2] * iVar8 >> 8;
              }
              else {
                iVar9 = *(int *)(*param_1 + 0xc);
                iVar8 = param_1[2];
              }
              uVar7 = (iVar8 + 1) * 0xff;
              pbVar10 = (byte *)(iVar9 * iVar12 + param_1[5]);
              *pbVar10 = (char)((0x100 - (uVar7 >> 8)) * (uint)*pbVar10 >> 8) + (char)(uVar7 >> 8);
            }
            if (0 < (int)uVar3) {
              iVar8 = ((int)uVar4 >> 8) - (iVar12 + 1);
              if (0 < iVar8) {
                FUN_00487f70(iVar12 + 1,iVar8,uVar3);
              }
            }
            iVar8 = (uVar4 & 0xff) * uVar3;
          }
          uVar7 = uVar4;
        }
        iVar8 = iVar8 >> 8;
        if (0 < iVar8) {
          pbVar10 = (byte *)(*(int *)(*param_1 + 0xc) * iVar12 + param_1[5]);
          iVar5 = param_1[2];
          if (iVar8 < 0xff) {
            iVar5 = iVar5 * iVar8 >> 8;
          }
          uVar7 = (iVar5 + 1) * 0xff;
          *pbVar10 = (char)((0x100 - (uVar7 >> 8)) * (uint)*pbVar10 >> 8) + (char)(uVar7 >> 8);
        }
      }
      local_c = local_c + 1;
      piVar6 = piVar6 + iVar1;
    } while (local_c < (int)in_ECX[4]);
  }
  return;
}

