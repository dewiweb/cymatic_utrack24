// rea decompile_all
// name: FUN_00480d10
// address: 0x480d10
// body: available
// range: 0x480d10-0x480f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480d10(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined4 *in_ECX;
  int *piVar5;
  uint *puVar6;
  size_t _Size;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int local_c;
  
  local_c = 0;
  piVar5 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar9 = *piVar5;
      if (0 < iVar9 + -1) {
        uVar7 = piVar5[1];
        puVar6 = (uint *)(piVar5 + 1);
        iVar11 = 0;
        param_1[1] = (in_ECX[2] + local_c) * ((int *)*param_1)[2] + *(int *)*param_1;
        for (iVar9 = iVar9 + -2; iVar8 = (int)uVar7 >> 8, -1 < iVar9; iVar9 = iVar9 + -1) {
          uVar2 = puVar6[1];
          puVar6 = puVar6 + 2;
          uVar3 = *puVar6;
          if ((int)uVar3 >> 8 == iVar8) {
            iVar11 = iVar11 + (uVar3 - uVar7) * uVar2;
          }
          else {
            iVar11 = (int)((0x100 - (uVar7 & 0xff)) * uVar2 + iVar11) >> 8;
            if (0 < iVar11) {
              uVar7 = (uint)*(byte *)((int)param_1 + 0xb);
              pbVar10 = (byte *)(*(int *)(*param_1 + 0xc) * iVar8 + param_1[1]);
              if (iVar11 < 0xff) {
                uVar7 = uVar7 * (iVar11 + 1) >> 8;
              }
              *pbVar10 = (char)((0x100 - uVar7) * (uint)*pbVar10 >> 8) + (char)uVar7;
            }
            if (0 < (int)uVar2) {
              _Size = ((int)uVar3 >> 8) - (iVar8 + 1);
              if (0 < (int)_Size) {
                uVar7 = ((uint)param_1[2] >> 8 & 0xff00ff) * (uVar2 + 1);
                iVar11 = *(int *)(*param_1 + 0xc);
                pbVar10 = (byte *)(iVar11 * (iVar8 + 1) + param_1[1]);
                bVar4 = (byte)(uVar7 >> 0x18);
                if (bVar4 == 0xff) {
                  if (iVar11 == 1) {
                    _memset(pbVar10,uVar7 >> 0x18,_Size);
                  }
                  else {
                    do {
                      *pbVar10 = 0xff;
                      _Size = _Size - 1;
                      pbVar10 = pbVar10 + iVar11;
                    } while (0 < (int)_Size);
                  }
                }
                else {
                  do {
                    _Size = _Size - 1;
                    *pbVar10 = (char)((uint)*pbVar10 * (0x100 - (uint)bVar4) >> 8) + bVar4;
                    pbVar10 = pbVar10 + iVar11;
                  } while (0 < (int)_Size);
                }
              }
            }
            iVar11 = (uVar3 & 0xff) * uVar2;
          }
          uVar7 = uVar3;
        }
        iVar11 = iVar11 >> 8;
        if (0 < iVar11) {
          uVar7 = (uint)*(byte *)((int)param_1 + 0xb);
          pbVar10 = (byte *)(*(int *)(*param_1 + 0xc) * iVar8 + param_1[1]);
          if (iVar11 < 0xff) {
            uVar7 = uVar7 * (iVar11 + 1) >> 8;
          }
          *pbVar10 = (char)((0x100 - uVar7) * (uint)*pbVar10 >> 8) + (char)uVar7;
        }
      }
      local_c = local_c + 1;
      piVar5 = piVar5 + iVar1;
    } while (local_c < (int)in_ECX[4]);
  }
  return;
}

