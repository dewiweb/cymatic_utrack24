// rea decompile_all
// name: FUN_00478ab0
// address: 0x478ab0
// body: available
// range: 0x478ab0-0x478e72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00478ab0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  byte *local_24;
  int local_10;
  byte *local_8;
  
  local_10 = 0;
  piVar3 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar4 = *piVar3;
      if (0 < iVar4 + -1) {
        uVar8 = piVar3[1];
        piVar10 = piVar3 + 1;
        iVar11 = 0;
        iVar5 = in_ECX[2];
        param_1[5] = ((int *)*param_1)[2] * (iVar5 + local_10) + *(int *)*param_1;
        param_1[6] = ((iVar5 + local_10) - param_1[4]) * ((int *)param_1[1])[2] + *(int *)param_1[1]
        ;
        for (iVar4 = iVar4 + -2; iVar5 = (int)uVar8 >> 8, -1 < iVar4; iVar4 = iVar4 + -1) {
          iVar2 = piVar10[1];
          uVar7 = piVar10[2];
          piVar10 = piVar10 + 2;
          if ((int)uVar7 >> 8 == iVar5) {
            iVar11 = iVar11 + (uVar7 - uVar8) * iVar2;
          }
          else {
            iVar11 = (int)((0x100 - (uVar8 & 0xff)) * iVar2 + iVar11) >> 8;
            if (0 < iVar11) {
              if (iVar11 < 0xff) {
                iVar12 = param_1[2] * iVar11 >> 8;
                local_8 = (byte *)(*(int *)(*param_1 + 0xc) * iVar5 + param_1[5]);
                uVar8 = *(uint *)((iVar5 - param_1[3]) * *(int *)(param_1[1] + 0xc) + param_1[6]);
                uVar6 = (uVar8 >> 8 & 0xff00ff) * iVar12;
                iVar11 = 0x100 - (uVar6 >> 0x18);
                sVar9 = (short)((uint)local_8[1] * iVar11 >> 8) + ((ushort)(uVar6 >> 8) & 0xff);
                uVar8 = (((uint)local_8[2] << 0x10 | (uint)*local_8) * iVar11 >> 8 & 0xff00ff) +
                        ((uVar8 & 0xff00ff) * iVar12 >> 8 & 0xff00ff);
              }
              else {
                uVar8 = *(uint *)((iVar5 - param_1[3]) * *(int *)(param_1[1] + 0xc) + param_1[6]);
                local_8 = (byte *)(*(int *)(*param_1 + 0xc) * iVar5 + param_1[5]);
                uVar6 = (uVar8 >> 8 & 0xff00ff) * param_1[2];
                iVar11 = 0x100 - (uVar6 >> 0x18);
                sVar9 = (short)((uint)local_8[1] * iVar11 >> 8) + ((ushort)(uVar6 >> 8) & 0xff);
                uVar8 = (((uint)local_8[2] << 0x10 | (uint)*local_8) * iVar11 >> 8 & 0xff00ff) +
                        ((uVar8 & 0xff00ff) * param_1[2] >> 8 & 0xff00ff);
              }
              uVar8 = (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) & 0xff00ff;
              local_8[1] = -(char)((ushort)sVar9 >> 8) | (byte)sVar9;
              local_8[2] = (byte)(uVar8 >> 0x10);
              *local_8 = (byte)uVar8;
            }
            if (0 < iVar2) {
              iVar11 = ((int)uVar7 >> 8) - (iVar5 + 1);
              if (0 < iVar11) {
                FUN_004891f0(iVar5 + 1,iVar11,iVar2);
              }
            }
            iVar11 = (uVar7 & 0xff) * iVar2;
          }
          uVar8 = uVar7;
        }
        iVar11 = iVar11 >> 8;
        if (0 < iVar11) {
          if (iVar11 < 0xff) {
            iVar11 = param_1[2] * iVar11 >> 8;
            uVar8 = *(uint *)((iVar5 - param_1[3]) * *(int *)(param_1[1] + 0xc) + param_1[6]);
            local_24 = (byte *)(*(int *)(*param_1 + 0xc) * iVar5 + param_1[5]);
            uVar7 = (uVar8 >> 8 & 0xff00ff) * iVar11;
            iVar4 = 0x100 - (uVar7 >> 0x18);
            sVar9 = (short)((uint)local_24[1] * iVar4 >> 8) + ((ushort)(uVar7 >> 8) & 0xff);
            uVar8 = (((uint)local_24[2] << 0x10 | (uint)*local_24) * iVar4 >> 8 & 0xff00ff) +
                    ((uVar8 & 0xff00ff) * iVar11 >> 8 & 0xff00ff);
          }
          else {
            local_24 = (byte *)(*(int *)(*param_1 + 0xc) * iVar5 + param_1[5]);
            uVar8 = *(uint *)((iVar5 - param_1[3]) * *(int *)(param_1[1] + 0xc) + param_1[6]);
            uVar7 = (uVar8 >> 8 & 0xff00ff) * param_1[2];
            iVar4 = 0x100 - (uVar7 >> 0x18);
            sVar9 = (short)((uint)local_24[1] * iVar4 >> 8) + ((ushort)(uVar7 >> 8) & 0xff);
            uVar8 = (((uint)local_24[2] << 0x10 | (uint)*local_24) * iVar4 >> 8 & 0xff00ff) +
                    ((uVar8 & 0xff00ff) * param_1[2] >> 8 & 0xff00ff);
          }
          uVar8 = (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) & 0xff00ff;
          local_24[1] = -(char)((ushort)sVar9 >> 8) | (byte)sVar9;
          *local_24 = (byte)uVar8;
          local_24[2] = (byte)(uVar8 >> 0x10);
        }
      }
      local_10 = local_10 + 1;
      piVar3 = piVar3 + iVar1;
    } while (local_10 < (int)in_ECX[4]);
  }
  return;
}

