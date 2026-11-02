// rea decompile_all
// name: FUN_0047dcc0
// address: 0x47dcc0
// body: available
// range: 0x47dcc0-0x47dee2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047dcc0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *in_ECX;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int local_18;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  local_18 = 0;
  piVar6 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar2 = in_ECX[6];
      iVar3 = *piVar6;
      if (0 < iVar3 + -1) {
        puVar8 = (uint *)(piVar6 + 1);
        iVar11 = 0;
        iVar9 = in_ECX[2];
        uVar7 = *puVar8;
        *(int *)(param_1 + 0x60) = iVar9 + local_18;
        *(int *)(param_1 + 100) =
             (*(int **)(param_1 + 0x48))[2] * (iVar9 + local_18) + **(int **)(param_1 + 0x48);
        for (iVar3 = iVar3 + -2; iVar9 = (int)uVar7 >> 8, -1 < iVar3; iVar3 = iVar3 + -1) {
          uVar4 = puVar8[1];
          puVar8 = puVar8 + 2;
          uVar5 = *puVar8;
          if ((int)uVar5 >> 8 == iVar9) {
            iVar11 = iVar11 + (uVar5 - uVar7) * uVar4;
          }
          else {
            iVar11 = (int)((0x100 - (uVar7 & 0xff)) * uVar4 + iVar11) >> 8;
            if (0 < iVar11) {
              if (iVar11 < 0xff) {
                FUN_0048b680(&local_6,iVar9,1);
                uVar7 = (((uint)(*(int *)(param_1 + 0x50) * iVar11) >> 8) + 1) * (uint)local_6;
                pbVar10 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar9 +
                                  *(int *)(param_1 + 100));
                *pbVar10 = (char)((0x100 - (uVar7 >> 8)) * (uint)*pbVar10 >> 8) + (char)(uVar7 >> 8)
                ;
              }
              else {
                FUN_0048b680(&local_5,iVar9,1);
                uVar7 = (*(int *)(param_1 + 0x50) + 1) * (uint)local_5;
                pbVar10 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar9 +
                                  *(int *)(param_1 + 100));
                *pbVar10 = (char)((0x100 - (uVar7 >> 8)) * (uint)*pbVar10 >> 8) + (char)(uVar7 >> 8)
                ;
              }
            }
            if (0 < (int)uVar4) {
              iVar11 = ((int)uVar5 >> 8) - (iVar9 + 1);
              if (0 < iVar11) {
                FUN_00486530(iVar9 + 1,iVar11,uVar4);
              }
            }
            iVar11 = (uVar5 & 0xff) * uVar4;
          }
          uVar7 = uVar5;
        }
        iVar11 = iVar11 >> 8;
        if (0 < iVar11) {
          if (iVar11 < 0xff) {
            FUN_0048b680(&local_8,iVar9,1);
            pbVar10 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar9 +
                              *(int *)(param_1 + 100));
            uVar7 = (uint)(*(int *)(param_1 + 0x50) * iVar11) >> 8;
            bVar1 = local_8;
          }
          else {
            FUN_0048b680(&local_7,iVar9,1);
            uVar7 = *(uint *)(param_1 + 0x50);
            pbVar10 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar9 +
                              *(int *)(param_1 + 100));
            bVar1 = local_7;
          }
          uVar7 = (uVar7 + 1) * (uint)bVar1;
          *pbVar10 = (char)((0x100 - (uVar7 >> 8)) * (uint)*pbVar10 >> 8) + (char)(uVar7 >> 8);
        }
      }
      local_18 = local_18 + 1;
      piVar6 = piVar6 + iVar2;
    } while (local_18 < (int)in_ECX[4]);
  }
  return;
}

