// rea decompile_all
// name: FUN_0047f830
// address: 0x47f830
// body: available
// range: 0x47f830-0x47fa36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047f830(int param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  double dVar7;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  uint *local_28;
  uint local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  int *local_14;
  uint local_10;
  int local_c;
  
  local_18 = 0;
  piVar2 = (int *)*in_ECX;
  local_1c = in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      local_14 = piVar2 + local_1c[6];
      local_c = *piVar2;
      if (0 < local_c + -1) {
        local_28 = (uint *)(piVar2 + 1);
        iVar4 = 0;
        uVar3 = *local_28;
        dVar7 = (double)(local_1c[2] + local_18) - *(double *)(param_1 + 0x10);
        *(int *)(param_1 + 0x34) =
             (*(int **)(param_1 + 0x30))[2] * (local_1c[2] + local_18) + **(int **)(param_1 + 0x30);
        *(double *)(param_1 + 0x28) = dVar7 * dVar7;
        for (local_c = local_c + -2; iVar6 = (int)uVar3 >> 8, -1 < local_c; local_c = local_c + -1)
        {
          local_10 = local_28[1];
          local_28 = local_28 + 2;
          local_24 = *local_28;
          local_20 = (int)local_24 >> 8;
          if (local_20 == iVar6) {
            iVar4 = iVar4 + (local_24 - uVar3) * local_10;
          }
          else {
            iVar4 = (int)((0x100 - (uVar3 & 0xff)) * local_10 + iVar4) >> 8;
            if (0 < iVar4) {
              if (iVar4 < 0xff) {
                pbVar5 = (byte *)(*(int *)(*(int *)(param_1 + 0x30) + 0xc) * iVar6 +
                                 *(int *)(param_1 + 0x34));
                iVar1 = FUN_00464ee0(local_30,iVar6);
                uVar3 = (uint)*(byte *)(iVar1 + 3) * (iVar4 + 1);
                *pbVar5 = (char)((0x100 - (uVar3 >> 8)) * (uint)*pbVar5 >> 8) + (char)(uVar3 >> 8);
              }
              else {
                pbVar5 = (byte *)(*(int *)(*(int *)(param_1 + 0x30) + 0xc) * iVar6 +
                                 *(int *)(param_1 + 0x34));
                iVar4 = FUN_00464ee0(local_2c,iVar6);
                *pbVar5 = (char)((0x100 - (uint)*(byte *)(iVar4 + 3)) * (uint)*pbVar5 >> 8) +
                          *(byte *)(iVar4 + 3);
              }
            }
            if (0 < (int)local_10) {
              iVar4 = local_20 - (iVar6 + 1);
              if (0 < iVar4) {
                FUN_00485460(iVar6 + 1,iVar4,local_10);
              }
            }
            iVar4 = (local_24 & 0xff) * local_10;
          }
          uVar3 = local_24;
        }
        local_28 = (uint *)(iVar4 >> 8);
        if (0 < (int)local_28) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x30) + 0xc);
          if ((int)local_28 < 0xff) {
            pbVar5 = (byte *)(iVar4 * iVar6 + *(int *)(param_1 + 0x34));
            iVar4 = FUN_00464ee0(local_38,iVar6);
            uVar3 = (uint)*(byte *)(iVar4 + 3) * ((int)local_28 + 1) >> 8;
          }
          else {
            pbVar5 = (byte *)(iVar4 * iVar6 + *(int *)(param_1 + 0x34));
            iVar4 = FUN_00464ee0(local_34,iVar6);
            uVar3 = (uint)*(byte *)(iVar4 + 3);
          }
          *pbVar5 = (char)((0x100 - uVar3) * (uint)*pbVar5 >> 8) + (char)uVar3;
        }
      }
      local_18 = local_18 + 1;
      piVar2 = local_14;
    } while (local_18 < (int)local_1c[4]);
  }
  return;
}

