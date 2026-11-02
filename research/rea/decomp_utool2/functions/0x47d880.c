// rea decompile_all
// name: FUN_0047d880
// address: 0x47d880
// body: available
// range: 0x47d880-0x47da93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047d880(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *in_ECX;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int local_18;
  undefined1 local_8 [4];
  
  local_18 = 0;
  piVar5 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar2 = *piVar5;
      if (0 < iVar2 + -1) {
        puVar7 = (uint *)(piVar5 + 1);
        iVar10 = 0;
        iVar8 = in_ECX[2];
        uVar6 = *puVar7;
        *(int *)(param_1 + 0x60) = iVar8 + local_18;
        *(int *)(param_1 + 100) =
             (*(int **)(param_1 + 0x48))[2] * (iVar8 + local_18) + **(int **)(param_1 + 0x48);
        for (iVar2 = iVar2 + -2; iVar8 = (int)uVar6 >> 8, -1 < iVar2; iVar2 = iVar2 + -1) {
          uVar3 = puVar7[1];
          puVar7 = puVar7 + 2;
          uVar4 = *puVar7;
          if ((int)uVar4 >> 8 == iVar8) {
            iVar10 = iVar10 + (uVar4 - uVar6) * uVar3;
          }
          else {
            iVar10 = (int)((0x100 - (uVar6 & 0xff)) * uVar3 + iVar10) >> 8;
            if (0 < iVar10) {
              if (iVar10 < 0xff) {
                FUN_0048b9a0(local_8,iVar8,1);
                pbVar9 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar8 +
                                 *(int *)(param_1 + 100));
                uVar6 = (((uint)(*(int *)(param_1 + 0x50) * iVar10) >> 8) + 1) * 0xff;
                *pbVar9 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar9 >> 8) + (char)(uVar6 >> 8);
              }
              else {
                FUN_0048b9a0(local_8,iVar8,1);
                uVar6 = (*(int *)(param_1 + 0x50) + 1) * 0xff;
                pbVar9 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar8 +
                                 *(int *)(param_1 + 100));
                *pbVar9 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar9 >> 8) + (char)(uVar6 >> 8);
              }
            }
            if (0 < (int)uVar3) {
              iVar10 = ((int)uVar4 >> 8) - (iVar8 + 1);
              if (0 < iVar10) {
                FUN_004866c0(iVar8 + 1,iVar10,uVar3);
              }
            }
            iVar10 = (uVar4 & 0xff) * uVar3;
          }
          uVar6 = uVar4;
        }
        iVar10 = iVar10 >> 8;
        if (0 < iVar10) {
          if (iVar10 < 0xff) {
            FUN_0048b9a0(local_8,iVar8,1);
            pbVar9 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar8 +
                             *(int *)(param_1 + 100));
            uVar6 = (uint)(*(int *)(param_1 + 0x50) * iVar10) >> 8;
          }
          else {
            FUN_0048b9a0(local_8,iVar8,1);
            uVar6 = *(uint *)(param_1 + 0x50);
            pbVar9 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar8 +
                             *(int *)(param_1 + 100));
          }
          uVar6 = (uVar6 + 1) * 0xff;
          *pbVar9 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar9 >> 8) + (char)(uVar6 >> 8);
        }
      }
      local_18 = local_18 + 1;
      piVar5 = piVar5 + iVar1;
    } while (local_18 < (int)in_ECX[4]);
  }
  return;
}

