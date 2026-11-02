// rea decompile_all
// name: FUN_0047c680
// address: 0x47c680
// body: available
// range: 0x47c680-0x47ca6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047c680(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *piVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  uint *puVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int local_28;
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_c;
  byte local_b;
  byte local_a;
  byte local_8;
  byte local_7;
  byte local_6;
  
  local_28 = 0;
  piVar3 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar5 = *piVar3;
      if (0 < iVar5 + -1) {
        puVar7 = (uint *)(piVar3 + 1);
        iVar11 = 0;
        iVar8 = in_ECX[2];
        uVar4 = *puVar7;
        *(int *)(param_1 + 0x60) = iVar8 + local_28;
        *(int *)(param_1 + 100) =
             (*(int **)(param_1 + 0x48))[2] * (iVar8 + local_28) + **(int **)(param_1 + 0x48);
        for (iVar5 = iVar5 + -2; iVar8 = (int)uVar4 >> 8, -1 < iVar5; iVar5 = iVar5 + -1) {
          uVar10 = puVar7[1];
          puVar7 = puVar7 + 2;
          uVar2 = *puVar7;
          if ((int)uVar2 >> 8 == iVar8) {
            iVar11 = iVar11 + (uVar2 - uVar4) * uVar10;
          }
          else {
            iVar11 = (int)((0x100 - (uVar4 & 0xff)) * uVar10 + iVar11) >> 8;
            if (0 < iVar11) {
              if (iVar11 < 0xff) {
                FUN_0048b9a0(&local_c,iVar8,1);
                pbVar9 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar8 +
                                 *(int *)(param_1 + 100));
                uVar12 = (uint)(*(int *)(param_1 + 0x50) * iVar11) >> 8;
                uVar4 = (local_b | 0xff0000) * uVar12;
                iVar11 = 0x100 - (uVar4 >> 0x18);
                sVar6 = (short)((uint)pbVar9[1] * iVar11 >> 8) + ((ushort)(uVar4 >> 8) & 0xff);
                uVar4 = (((uint)local_a << 0x10 | (uint)local_c) * uVar12 >> 8 & 0xff00ff) +
                        (((uint)pbVar9[2] << 0x10 | (uint)*pbVar9) * iVar11 >> 8 & 0xff00ff);
                uVar4 = 0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4;
              }
              else {
                FUN_0048b9a0(&local_8,iVar8,1);
                pbVar9 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar8 +
                                 *(int *)(param_1 + 100));
                uVar4 = (local_7 | 0xff0000) * *(int *)(param_1 + 0x50);
                iVar11 = 0x100 - (uVar4 >> 0x18);
                sVar6 = (short)((uint)pbVar9[1] * iVar11 >> 8) + ((ushort)(uVar4 >> 8) & 0xff);
                uVar4 = (((uint)pbVar9[2] << 0x10 | (uint)*pbVar9) * iVar11 >> 8 & 0xff00ff) +
                        (((uint)local_6 << 0x10 | (uint)local_8) * *(int *)(param_1 + 0x50) >> 8 &
                        0xff00ff);
                uVar4 = 0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4;
              }
              pbVar9[1] = -(char)((ushort)sVar6 >> 8) | (byte)sVar6;
              *pbVar9 = (byte)(uVar4 & 0xff00ff);
              pbVar9[2] = (byte)((uVar4 & 0xff00ff) >> 0x10);
            }
            if (0 < (int)uVar10) {
              iVar11 = ((int)uVar2 >> 8) - (iVar8 + 1);
              if (0 < iVar11) {
                FUN_00486db0(iVar8 + 1,iVar11,uVar10);
              }
            }
            iVar11 = (uVar2 & 0xff) * uVar10;
          }
          uVar4 = uVar2;
        }
        iVar11 = iVar11 >> 8;
        if (0 < iVar11) {
          if (iVar11 < 0xff) {
            FUN_0048b9a0(&local_14,iVar8,1);
            pbVar9 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar8 +
                             *(int *)(param_1 + 100));
            uVar10 = (uint)(*(int *)(param_1 + 0x50) * iVar11) >> 8;
            uVar4 = (local_13 | 0xff0000) * uVar10;
            iVar5 = 0x100 - (uVar4 >> 0x18);
            sVar6 = (short)((uint)pbVar9[1] * iVar5 >> 8) + ((ushort)(uVar4 >> 8) & 0xff);
            uVar4 = (((uint)pbVar9[2] << 0x10 | (uint)*pbVar9) * iVar5 >> 8 & 0xff00ff) +
                    (((uint)local_12 << 0x10 | (uint)local_14) * uVar10 >> 8 & 0xff00ff);
            uVar4 = 0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4;
          }
          else {
            FUN_0048b9a0(&local_10,iVar8,1);
            uVar4 = (local_f | 0xff0000) * *(int *)(param_1 + 0x50);
            pbVar9 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar8 +
                             *(int *)(param_1 + 100));
            iVar5 = 0x100 - (uVar4 >> 0x18);
            sVar6 = (short)((uint)pbVar9[1] * iVar5 >> 8) + ((ushort)(uVar4 >> 8) & 0xff);
            uVar4 = (((uint)local_e << 0x10 | (uint)local_10) * *(int *)(param_1 + 0x50) >> 8 &
                    0xff00ff) + (((uint)pbVar9[2] << 0x10 | (uint)*pbVar9) * iVar5 >> 8 & 0xff00ff);
            uVar4 = 0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4;
          }
          pbVar9[1] = -(char)((ushort)sVar6 >> 8) | (byte)sVar6;
          *pbVar9 = (byte)(uVar4 & 0xff00ff);
          pbVar9[2] = (byte)((uVar4 & 0xff00ff) >> 0x10);
        }
      }
      local_28 = local_28 + 1;
      piVar3 = piVar3 + iVar1;
    } while (local_28 < (int)in_ECX[4]);
  }
  return;
}

