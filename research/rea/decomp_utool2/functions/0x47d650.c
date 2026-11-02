// rea decompile_all
// name: FUN_0047d650
// address: 0x47d650
// body: available
// range: 0x47d650-0x47d872 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047d650(int param_1)

{
  byte bVar1;
  uint *puVar2;
  undefined4 *in_ECX;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 local_34 [3];
  byte local_31;
  undefined1 local_30 [3];
  byte local_2d;
  uint *local_2c;
  undefined1 local_28 [3];
  byte local_25;
  undefined1 local_24 [3];
  byte local_21;
  uint local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  int *local_10;
  uint local_c;
  int local_8;
  
  local_14 = 0;
  piVar3 = (int *)*in_ECX;
  local_18 = in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      local_10 = piVar3 + local_18[6];
      local_8 = *piVar3;
      if (0 < local_8 + -1) {
        iVar7 = 0;
        iVar5 = local_18[2];
        uVar4 = piVar3[1];
        *(int *)(param_1 + 0x60) = iVar5 + local_14;
        *(int *)(param_1 + 100) =
             (*(int **)(param_1 + 0x48))[2] * (iVar5 + local_14) + **(int **)(param_1 + 0x48);
        puVar2 = (uint *)(piVar3 + 1);
        for (local_8 = local_8 + -2; iVar5 = (int)uVar4 >> 8, -1 < local_8; local_8 = local_8 + -1)
        {
          local_c = puVar2[1];
          local_2c = puVar2 + 2;
          local_20 = *local_2c;
          local_1c = (int)local_20 >> 8;
          if (local_1c == iVar5) {
            iVar7 = iVar7 + (local_20 - uVar4) * local_c;
          }
          else {
            iVar7 = (int)((0x100 - (uVar4 & 0xff)) * local_c + iVar7) >> 8;
            if (0 < iVar7) {
              if (iVar7 < 0xff) {
                FUN_00476510(local_28,iVar5,1);
                uVar4 = (((uint)(*(int *)(param_1 + 0x50) * iVar7) >> 8) + 1) * (uint)local_25;
                pbVar6 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar5 +
                                 *(int *)(param_1 + 100));
                *pbVar6 = (char)((0x100 - (uVar4 >> 8)) * (uint)*pbVar6 >> 8) + (char)(uVar4 >> 8);
              }
              else {
                FUN_00476510(local_24,iVar5,1);
                uVar4 = (*(int *)(param_1 + 0x50) + 1) * (uint)local_21;
                pbVar6 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar5 +
                                 *(int *)(param_1 + 100));
                *pbVar6 = (char)((0x100 - (uVar4 >> 8)) * (uint)*pbVar6 >> 8) + (char)(uVar4 >> 8);
              }
            }
            if (0 < (int)local_c) {
              iVar7 = local_1c - (iVar5 + 1);
              if (0 < iVar7) {
                FUN_00486770(iVar5 + 1,iVar7,local_c);
              }
            }
            iVar7 = (local_20 & 0xff) * local_c;
          }
          puVar2 = local_2c;
          uVar4 = local_20;
        }
        iVar7 = iVar7 >> 8;
        if (0 < iVar7) {
          if (iVar7 < 0xff) {
            FUN_00476510(local_34,iVar5,1);
            pbVar6 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar5 +
                             *(int *)(param_1 + 100));
            uVar4 = (uint)(*(int *)(param_1 + 0x50) * iVar7) >> 8;
            bVar1 = local_31;
          }
          else {
            FUN_00476510(local_30,iVar5,1);
            uVar4 = *(uint *)(param_1 + 0x50);
            pbVar6 = (byte *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar5 +
                             *(int *)(param_1 + 100));
            bVar1 = local_2d;
          }
          uVar4 = (uVar4 + 1) * (uint)bVar1;
          *pbVar6 = (char)((0x100 - (uVar4 >> 8)) * (uint)*pbVar6 >> 8) + (char)(uVar4 >> 8);
        }
      }
      local_14 = local_14 + 1;
      piVar3 = local_10;
    } while (local_14 < (int)local_18[4]);
  }
  return;
}

