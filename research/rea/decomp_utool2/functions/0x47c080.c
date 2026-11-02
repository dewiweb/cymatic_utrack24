// rea decompile_all
// name: FUN_0047c080
// address: 0x47c080
// body: available
// range: 0x47c080-0x47c379 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047c080(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint local_38;
  uint local_34;
  int *local_30;
  uint local_2c;
  uint local_28;
  byte *local_24;
  byte *local_20;
  undefined4 *local_1c;
  int local_18;
  byte *local_14;
  int local_10;
  int local_c;
  byte *local_8;
  
  local_18 = 0;
  piVar3 = (int *)*in_ECX;
  local_1c = in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = local_1c[6];
      local_c = *piVar3;
      if (0 < local_c + -1) {
        local_30 = piVar3 + 1;
        iVar5 = 0;
        iVar4 = local_1c[2];
        local_8 = (byte *)*local_30;
        *(int *)(param_1 + 0x60) = iVar4 + local_18;
        *(int *)(param_1 + 100) =
             (*(int **)(param_1 + 0x48))[2] * (iVar4 + local_18) + **(int **)(param_1 + 0x48);
        for (local_c = local_c + -2; pbVar8 = (byte *)((int)local_8 >> 8), -1 < local_c;
            local_c = local_c + -1) {
          local_10 = local_30[1];
          local_14 = (byte *)local_30[2];
          local_30 = local_30 + 2;
          local_24 = (byte *)((int)local_14 >> 8);
          local_20 = pbVar8;
          if (local_24 == pbVar8) {
            iVar5 = iVar5 + ((int)local_14 - (int)local_8) * local_10;
          }
          else {
            iVar4 = (int)((0x100 - ((uint)local_8 & 0xff)) * local_10 + iVar5) >> 8;
            if (0 < iVar4) {
              if (iVar4 < 0xff) {
                FUN_0048bac0(&local_2c,pbVar8,1);
                local_8 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * (int)pbVar8 +
                                  *(int *)(param_1 + 100));
                uVar7 = (uint)(*(int *)(param_1 + 0x50) * iVar4) >> 8;
                uVar2 = local_2c;
              }
              else {
                FUN_0048bac0(&local_28,pbVar8,1);
                uVar7 = *(uint *)(param_1 + 0x50);
                local_8 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * (int)pbVar8 +
                                  *(int *)(param_1 + 100));
                uVar2 = local_28;
              }
              uVar6 = (uVar2 >> 8 & 0xff00ff) * uVar7;
              iVar4 = 0x100 - (uVar6 >> 0x18);
              iVar5 = ((uint)local_8[1] * iVar4 >> 8) + (uVar6 >> 8 & 0xff00ff);
              uVar7 = (((uint)local_8[2] << 0x10 | (uint)*local_8) * iVar4 >> 8 & 0xff00ff) +
                      ((uVar2 & 0xff00ff) * uVar7 >> 8 & 0xff00ff);
              uVar7 = (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) & 0xff00ff;
              local_8[1] = -(char)((uint)iVar5 >> 8) | (byte)iVar5;
              local_8[2] = (byte)(uVar7 >> 0x10);
              *local_8 = (byte)uVar7;
            }
            if (0 < local_10) {
              iVar4 = (int)local_24 - (int)(local_20 + 1);
              if (0 < iVar4) {
                FUN_004870e0(local_20 + 1,iVar4,local_10);
              }
            }
            iVar5 = ((uint)local_14 & 0xff) * local_10;
          }
          local_8 = local_14;
        }
        local_30 = (int *)(iVar5 >> 8);
        if (0 < (int)local_30) {
          local_8 = pbVar8;
          if ((int)local_30 < 0xff) {
            FUN_0048bac0(&local_38,pbVar8,1);
            local_24 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * (int)local_8 +
                               *(int *)(param_1 + 100));
            uVar7 = (uint)(*(int *)(param_1 + 0x50) * (int)local_30) >> 8;
            uVar2 = local_38;
          }
          else {
            FUN_0048bac0(&local_34,pbVar8,1);
            local_24 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * (int)local_8 +
                               *(int *)(param_1 + 100));
            uVar7 = *(uint *)(param_1 + 0x50);
            uVar2 = local_34;
          }
          uVar6 = (uVar2 >> 8 & 0xff00ff) * uVar7;
          iVar4 = 0x100 - (uVar6 >> 0x18);
          iVar5 = ((uint)local_24[1] * iVar4 >> 8) + (uVar6 >> 8 & 0xff00ff);
          uVar7 = (((uint)local_24[2] << 0x10 | (uint)*local_24) * iVar4 >> 8 & 0xff00ff) +
                  ((uVar2 & 0xff00ff) * uVar7 >> 8 & 0xff00ff);
          uVar7 = (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) & 0xff00ff;
          local_24[1] = -(char)((uint)iVar5 >> 8) | (byte)iVar5;
          *local_24 = (byte)uVar7;
          local_24[2] = (byte)(uVar7 >> 0x10);
        }
      }
      local_18 = local_18 + 1;
      piVar3 = piVar3 + iVar1;
    } while (local_18 < (int)local_1c[4]);
  }
  return;
}

