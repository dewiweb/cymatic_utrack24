// rea decompile_all
// name: FUN_0047ce60
// address: 0x47ce60
// body: available
// range: 0x47ce60-0x47d133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047ce60(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int local_18;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  local_18 = 0;
  piVar3 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar4 = *piVar3;
      if (0 < iVar4 + -1) {
        puVar5 = (uint *)(piVar3 + 1);
        iVar11 = 0;
        iVar7 = in_ECX[2];
        uVar9 = *puVar5;
        *(int *)(param_1 + 0x60) = iVar7 + local_18;
        *(int *)(param_1 + 100) =
             (*(int **)(param_1 + 0x48))[2] * (iVar7 + local_18) + **(int **)(param_1 + 0x48);
        for (iVar4 = iVar4 + -2; iVar7 = (int)uVar9 >> 8, -1 < iVar4; iVar4 = iVar4 + -1) {
          uVar10 = puVar5[1];
          puVar5 = puVar5 + 2;
          uVar2 = *puVar5;
          if ((int)uVar2 >> 8 == iVar7) {
            iVar11 = iVar11 + (uVar2 - uVar9) * uVar10;
          }
          else {
            iVar11 = (int)((0x100 - (uVar9 & 0xff)) * uVar10 + iVar11) >> 8;
            if (0 < iVar11) {
              if (iVar11 < 0xff) {
                FUN_0048b680(&local_6,iVar7,1);
                pbVar12 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar7 +
                                  *(int *)(param_1 + 100));
                uVar9 = ((uint)local_6 << 0x10 | (uint)local_6) *
                        ((uint)(*(int *)(param_1 + 0x50) * iVar11) >> 8);
              }
              else {
                FUN_0048b680(&local_5,iVar7,1);
                pbVar12 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar7 +
                                  *(int *)(param_1 + 100));
                uVar9 = ((uint)local_5 << 0x10 | (uint)local_5) * *(int *)(param_1 + 0x50);
              }
              uVar8 = uVar9 >> 8 & 0xff00ff;
              iVar11 = 0x100 - (uVar9 >> 0x18);
              iVar6 = ((uint)pbVar12[1] * iVar11 >> 8) + uVar8;
              uVar8 = (((uint)pbVar12[2] << 0x10 | (uint)*pbVar12) * iVar11 >> 8 & 0xff00ff) + uVar8
              ;
              uVar9 = (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) & 0xff00ff;
              pbVar12[1] = -(char)((uint)iVar6 >> 8) | (byte)iVar6;
              *pbVar12 = (byte)uVar9;
              pbVar12[2] = (byte)(uVar9 >> 0x10);
            }
            if (0 < (int)uVar10) {
              iVar11 = ((int)uVar2 >> 8) - (iVar7 + 1);
              if (0 < iVar11) {
                FUN_00486ac0(iVar7 + 1,iVar11,uVar10);
              }
            }
            iVar11 = (uVar2 & 0xff) * uVar10;
          }
          uVar9 = uVar2;
        }
        iVar11 = iVar11 >> 8;
        if (0 < iVar11) {
          if (iVar11 < 0xff) {
            FUN_0048b680(&local_8,iVar7,1);
            pbVar12 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar7 +
                              *(int *)(param_1 + 100));
            uVar9 = ((uint)local_8 << 0x10 | (uint)local_8) *
                    ((uint)(*(int *)(param_1 + 0x50) * iVar11) >> 8);
          }
          else {
            FUN_0048b680(&local_7,iVar7,1);
            pbVar12 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar7 +
                              *(int *)(param_1 + 100));
            uVar9 = ((uint)local_7 << 0x10 | (uint)local_7) * *(int *)(param_1 + 0x50);
          }
          uVar10 = uVar9 >> 8 & 0xff00ff;
          iVar4 = 0x100 - (uVar9 >> 0x18);
          iVar7 = ((uint)pbVar12[1] * iVar4 >> 8) + uVar10;
          uVar10 = (((uint)pbVar12[2] << 0x10 | (uint)*pbVar12) * iVar4 >> 8 & 0xff00ff) + uVar10;
          uVar9 = (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10) & 0xff00ff;
          pbVar12[1] = -(char)((uint)iVar7 >> 8) | (byte)iVar7;
          *pbVar12 = (byte)uVar9;
          pbVar12[2] = (byte)(uVar9 >> 0x10);
        }
      }
      local_18 = local_18 + 1;
      piVar3 = piVar3 + iVar1;
    } while (local_18 < (int)in_ECX[4]);
  }
  return;
}

