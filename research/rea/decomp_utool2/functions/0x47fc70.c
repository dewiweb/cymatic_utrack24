// rea decompile_all
// name: FUN_0047fc70
// address: 0x47fc70
// body: available
// range: 0x47fc70-0x47fec6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047fc70(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  double dVar8;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  int *local_34;
  undefined8 local_30;
  int local_24;
  uint local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  uint local_10;
  uint local_c;
  
  local_34 = (int *)*in_ECX;
  local_14 = 0;
  if (0 < (int)in_ECX[4]) {
    dVar8 = 6755399441055744.0;
    local_18 = in_ECX;
    do {
      iVar2 = local_18[6];
      local_24 = *local_34;
      piVar1 = local_34 + iVar2;
      if (0 < local_24 + -1) {
        puVar7 = (uint *)(local_34 + 1);
        iVar4 = 0;
        local_c = *puVar7;
        local_10 = local_18[2] + local_14;
        param_1[0xd] = ((int *)param_1[0xc])[2] * local_10 + *(int *)param_1[0xc];
        if ((char)param_1[10] == '\0') {
          if (*(char *)((int)param_1 + 0x29) == '\0') {
            local_30 = ((double)(int)local_10 - *(double *)(param_1 + 8)) * *(double *)(param_1 + 6)
                       + dVar8;
            param_1[3] = (int)local_30;
          }
        }
        else {
          iVar3 = (int)(param_1[4] * local_10 - param_1[3]) >> 0xc;
          if (iVar3 < 0) {
            param_1[2] = *(int *)*param_1;
          }
          else {
            if (param_1[1] < iVar3) {
              iVar3 = param_1[1];
            }
            param_1[2] = *(int *)(*param_1 + iVar3 * 4);
          }
        }
        local_24 = local_24 + -2;
        local_34 = local_34 + iVar2;
        while( true ) {
          iVar2 = (int)local_c >> 8;
          if (local_24 < 0) break;
          local_20 = puVar7[1];
          local_30 = (double)CONCAT44(puVar7 + 2,(int)local_30);
          local_10 = puVar7[2];
          local_1c = (int)local_10 >> 8;
          if (local_1c == iVar2) {
            iVar4 = iVar4 + (local_10 - local_c) * local_20;
          }
          else {
            iVar4 = (int)((0x100 - (local_c & 0xff)) * local_20 + iVar4) >> 8;
            if (0 < iVar4) {
              if (iVar4 < 0xff) {
                pbVar6 = (byte *)(*(int *)(param_1[0xc] + 0xc) * iVar2 + param_1[0xd]);
                iVar3 = FUN_00464e80(local_3c,iVar2);
                uVar5 = (uint)*(byte *)(iVar3 + 3) * (iVar4 + 1);
                *pbVar6 = (char)((0x100 - (uVar5 >> 8)) * (uint)*pbVar6 >> 8) + (char)(uVar5 >> 8);
              }
              else {
                pbVar6 = (byte *)(*(int *)(param_1[0xc] + 0xc) * iVar2 + param_1[0xd]);
                iVar4 = FUN_00464e80(local_38,iVar2);
                *pbVar6 = (char)((0x100 - (uint)*(byte *)(iVar4 + 3)) * (uint)*pbVar6 >> 8) +
                          *(byte *)(iVar4 + 3);
              }
            }
            uVar5 = local_20;
            if (0 < (int)local_20) {
              iVar4 = local_1c - (iVar2 + 1);
              if (0 < iVar4) {
                FUN_00485300(iVar2 + 1,iVar4,local_20);
              }
            }
            iVar4 = (local_10 & 0xff) * uVar5;
          }
          local_24 = local_24 + -1;
          puVar7 = local_30._4_4_;
          local_c = local_10;
        }
        iVar4 = iVar4 >> 8;
        local_30 = (double)CONCAT44(iVar4,(int)local_30);
        piVar1 = local_34;
        if (0 < iVar4) {
          pbVar6 = (byte *)(*(int *)(param_1[0xc] + 0xc) * iVar2 + param_1[0xd]);
          local_c = iVar2;
          if (iVar4 < 0xff) {
            iVar2 = FUN_00464e80(local_44,iVar2);
            uVar5 = (uint)*(byte *)(iVar2 + 3) * ((int)local_30._4_4_ + 1) >> 8;
          }
          else {
            iVar2 = FUN_00464e80(local_40,iVar2);
            uVar5 = (uint)*(byte *)(iVar2 + 3);
          }
          *pbVar6 = (char)((0x100 - uVar5) * (uint)*pbVar6 >> 8) + (char)uVar5;
          piVar1 = local_34;
        }
      }
      local_34 = piVar1;
      local_14 = local_14 + 1;
    } while (local_14 < (int)local_18[4]);
  }
  return;
}

