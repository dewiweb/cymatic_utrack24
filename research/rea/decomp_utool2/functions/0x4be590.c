// rea decompile_all
// name: FUN_004be590
// address: 0x4be590
// body: available
// range: 0x4be590-0x4be78a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be590(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *in_ECX;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int local_c;
  
  local_c = 0;
  piVar5 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar2 = in_ECX[6];
      iVar10 = *piVar5;
      if (0 < iVar10 + -1) {
        puVar8 = (uint *)(piVar5 + 1);
        iVar9 = 0;
        uVar4 = *puVar8;
        *(int *)(param_1 + 8) = in_ECX[2] + local_c;
        for (iVar10 = iVar10 + -2; uVar11 = (int)uVar4 >> 8, -1 < iVar10; iVar10 = iVar10 + -1) {
          uVar7 = puVar8[1];
          puVar8 = puVar8 + 2;
          uVar3 = *puVar8;
          if ((int)uVar3 >> 8 == uVar11) {
            iVar9 = iVar9 + (uVar3 - uVar4) * uVar7;
          }
          else {
            uVar4 = uVar4 & 0xff;
            iVar9 = (int)((0x100 - uVar4) * uVar7 + iVar9) >> 8;
            if (0 < iVar9) {
              if (iVar9 < 0xff) {
                uVar6 = *(uint *)(param_1 + 4);
                iVar9 = iVar9 + 1;
                uVar4 = (uVar6 >> 8 & 0xff00ff) * iVar9;
                uVar6 = ((uVar6 & 0xff00ff) * iVar9 >> 8 ^ (uVar6 >> 8 & 0xffff00ff) * iVar9) &
                        0xff00ff ^ uVar4;
                uVar12 = *(undefined4 *)(param_1 + 8);
              }
              else {
                uVar6 = *(uint *)(param_1 + 4);
                uVar12 = *(undefined4 *)(param_1 + 8);
              }
              FUN_004b9660(uVar11,uVar12,1,uVar4,uVar6);
            }
            if (0 < (int)uVar7) {
              iVar9 = ((int)uVar3 >> 8) - (uVar11 + 1);
              if (0 < iVar9) {
                uVar4 = *(uint *)(param_1 + 4);
                iVar1 = uVar7 + 1;
                uVar6 = (uVar4 >> 8 & 0xff00ff) * iVar1;
                FUN_004b9660(uVar11 + 1,*(undefined4 *)(param_1 + 8),iVar9,uVar6,
                             ((uVar4 & 0xff00ff) * iVar1 >> 8 ^ (uVar4 >> 8 & 0xffff00ff) * iVar1) &
                             0xff00ff ^ uVar6);
              }
            }
            iVar9 = (uVar3 & 0xff) * uVar7;
          }
          uVar4 = uVar3;
        }
        iVar9 = iVar9 >> 8;
        if (0 < iVar9) {
          if (iVar9 < 0xff) {
            uVar4 = *(uint *)(param_1 + 4);
            iVar9 = iVar9 + 1;
            uVar7 = (uVar4 >> 8 & 0xff00ff) * iVar9;
            uVar4 = ((uVar4 & 0xff00ff) * iVar9 >> 8 ^ (uVar4 >> 8 & 0xffff00ff) * iVar9) & 0xff00ff
                    ^ uVar7;
            uVar12 = *(undefined4 *)(param_1 + 8);
          }
          else {
            uVar4 = *(uint *)(param_1 + 4);
            uVar12 = *(undefined4 *)(param_1 + 8);
            uVar7 = uVar11;
          }
          FUN_004b9660(uVar11,uVar12,1,uVar7,uVar4);
        }
      }
      local_c = local_c + 1;
      piVar5 = piVar5 + iVar2;
    } while (local_c < (int)in_ECX[4]);
  }
  return;
}

