// rea decompile_all
// name: FUN_0047a3f0
// address: 0x47a3f0
// body: available
// range: 0x47a3f0-0x47a588 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047a3f0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  int iVar11;
  int local_c;
  
  local_c = 0;
  piVar6 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar5 = *piVar6;
      if (0 < iVar5 + -1) {
        uVar8 = piVar6[1];
        piVar9 = piVar6 + 1;
        iVar11 = 0;
        iVar4 = in_ECX[2];
        param_1[5] = ((int *)*param_1)[2] * (iVar4 + local_c) + *(int *)*param_1;
        param_1[6] = ((iVar4 + local_c) - param_1[4]) * ((int *)param_1[1])[2] + *(int *)param_1[1];
        for (iVar5 = iVar5 + -2; iVar4 = (int)uVar8 >> 8, -1 < iVar5; iVar5 = iVar5 + -1) {
          iVar2 = piVar9[1];
          uVar3 = piVar9[2];
          piVar9 = piVar9 + 2;
          if ((int)uVar3 >> 8 == iVar4) {
            iVar11 = iVar11 + (uVar3 - uVar8) * iVar2;
          }
          else {
            iVar11 = (int)((0x100 - (uVar8 & 0xff)) * iVar2 + iVar11) >> 8;
            if (0 < iVar11) {
              iVar7 = param_1[2];
              pbVar10 = (byte *)(*(int *)(*param_1 + 0xc) * iVar4 + param_1[5]);
              if (iVar11 < 0xff) {
                iVar7 = iVar7 * iVar11 >> 8;
              }
              uVar8 = (iVar7 + 1) * 0xff;
              *pbVar10 = (char)((0x100 - (uVar8 >> 8)) * (uint)*pbVar10 >> 8) + (char)(uVar8 >> 8);
            }
            if (0 < iVar2) {
              iVar11 = ((int)uVar3 >> 8) - (iVar4 + 1);
              if (0 < iVar11) {
                FUN_00487e40(iVar4 + 1,iVar11,iVar2);
              }
            }
            iVar11 = (uVar3 & 0xff) * iVar2;
          }
          uVar8 = uVar3;
        }
        iVar11 = iVar11 >> 8;
        if (0 < iVar11) {
          pbVar10 = (byte *)(*(int *)(*param_1 + 0xc) * iVar4 + param_1[5]);
          iVar5 = param_1[2];
          if (iVar11 < 0xff) {
            iVar5 = iVar5 * iVar11 >> 8;
          }
          uVar8 = (iVar5 + 1) * 0xff;
          *pbVar10 = (char)((0x100 - (uVar8 >> 8)) * (uint)*pbVar10 >> 8) + (char)(uVar8 >> 8);
        }
      }
      local_c = local_c + 1;
      piVar6 = piVar6 + iVar1;
    } while (local_c < (int)in_ECX[4]);
  }
  return;
}

