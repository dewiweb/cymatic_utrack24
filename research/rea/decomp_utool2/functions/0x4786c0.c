// rea decompile_all
// name: FUN_004786c0
// address: 0x4786c0
// body: available
// range: 0x4786c0-0x478aa9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004786c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  byte *local_24;
  int local_10;
  byte *local_8;
  
  local_10 = 0;
  piVar4 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar5 = *piVar4;
      if (0 < iVar5 + -1) {
        uVar8 = piVar4[1];
        puVar11 = (uint *)(piVar4 + 1);
        iVar10 = 0;
        iVar12 = in_ECX[2];
        param_1[5] = ((int *)*param_1)[2] * (iVar12 + local_10) + *(int *)*param_1;
        piVar2 = (int *)param_1[1];
        param_1[6] = (((iVar12 + local_10) - param_1[4]) % piVar2[5]) * piVar2[2] + *piVar2;
        for (iVar5 = iVar5 + -2; iVar12 = (int)uVar8 >> 8, -1 < iVar5; iVar5 = iVar5 + -1) {
          uVar7 = puVar11[1];
          puVar11 = puVar11 + 2;
          uVar3 = *puVar11;
          if ((int)uVar3 >> 8 == iVar12) {
            iVar10 = iVar10 + (uVar3 - uVar8) * uVar7;
          }
          else {
            iVar10 = (int)((0x100 - (uVar8 & 0xff)) * uVar7 + iVar10) >> 8;
            if (0 < iVar10) {
              if (iVar10 < 0xff) {
                iVar13 = param_1[2] * iVar10 >> 8;
                uVar8 = *(uint *)(((iVar12 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                                  *(int *)(param_1[1] + 0xc) + param_1[6]);
                uVar6 = (uVar8 >> 8 & 0xff00ff) * iVar13;
                local_8 = (byte *)(*(int *)(*param_1 + 0xc) * iVar12 + param_1[5]);
                iVar10 = 0x100 - (uVar6 >> 0x18);
                sVar9 = (short)((uint)local_8[1] * iVar10 >> 8) + ((ushort)(uVar6 >> 8) & 0xff);
                uVar8 = (((uint)local_8[2] << 0x10 | (uint)*local_8) * iVar10 >> 8 & 0xff00ff) +
                        ((uVar8 & 0xff00ff) * iVar13 >> 8 & 0xff00ff);
              }
              else {
                local_8 = (byte *)(*(int *)(*param_1 + 0xc) * iVar12 + param_1[5]);
                uVar8 = *(uint *)(((iVar12 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                                  *(int *)(param_1[1] + 0xc) + param_1[6]);
                uVar6 = (uVar8 >> 8 & 0xff00ff) * param_1[2];
                iVar10 = 0x100 - (uVar6 >> 0x18);
                sVar9 = (short)((uint)local_8[1] * iVar10 >> 8) + ((ushort)(uVar6 >> 8) & 0xff);
                uVar8 = (((uint)local_8[2] << 0x10 | (uint)*local_8) * iVar10 >> 8 & 0xff00ff) +
                        ((uVar8 & 0xff00ff) * param_1[2] >> 8 & 0xff00ff);
              }
              uVar8 = (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) & 0xff00ff;
              local_8[1] = -(char)((ushort)sVar9 >> 8) | (byte)sVar9;
              local_8[2] = (byte)(uVar8 >> 0x10);
              *local_8 = (byte)uVar8;
            }
            if (0 < (int)uVar7) {
              iVar10 = ((int)uVar3 >> 8) - (iVar12 + 1);
              if (0 < iVar10) {
                FUN_00489590(iVar12 + 1,iVar10,uVar7);
              }
            }
            iVar10 = (uVar3 & 0xff) * uVar7;
          }
          uVar8 = uVar3;
        }
        iVar10 = iVar10 >> 8;
        if (0 < iVar10) {
          if (iVar10 < 0xff) {
            iVar10 = param_1[2] * iVar10 >> 8;
            uVar8 = *(uint *)(((iVar12 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                              *(int *)(param_1[1] + 0xc) + param_1[6]);
            local_24 = (byte *)(*(int *)(*param_1 + 0xc) * iVar12 + param_1[5]);
            uVar7 = (uVar8 >> 8 & 0xff00ff) * iVar10;
            iVar5 = 0x100 - (uVar7 >> 0x18);
            sVar9 = (short)((uint)local_24[1] * iVar5 >> 8) + ((ushort)(uVar7 >> 8) & 0xff);
            uVar8 = (((uint)local_24[2] << 0x10 | (uint)*local_24) * iVar5 >> 8 & 0xff00ff) +
                    ((uVar8 & 0xff00ff) * iVar10 >> 8 & 0xff00ff);
          }
          else {
            local_24 = (byte *)(*(int *)(*param_1 + 0xc) * iVar12 + param_1[5]);
            uVar8 = *(uint *)(((iVar12 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                              *(int *)(param_1[1] + 0xc) + param_1[6]);
            uVar7 = (uVar8 >> 8 & 0xff00ff) * param_1[2];
            iVar5 = 0x100 - (uVar7 >> 0x18);
            sVar9 = (short)((uint)local_24[1] * iVar5 >> 8) + ((ushort)(uVar7 >> 8) & 0xff);
            uVar8 = (((uint)local_24[2] << 0x10 | (uint)*local_24) * iVar5 >> 8 & 0xff00ff) +
                    ((uVar8 & 0xff00ff) * param_1[2] >> 8 & 0xff00ff);
          }
          uVar8 = (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) & 0xff00ff;
          local_24[1] = -(char)((ushort)sVar9 >> 8) | (byte)sVar9;
          *local_24 = (byte)uVar8;
          local_24[2] = (byte)(uVar8 >> 0x10);
        }
      }
      local_10 = local_10 + 1;
      piVar4 = piVar4 + iVar1;
    } while (local_10 < (int)in_ECX[4]);
  }
  return;
}

