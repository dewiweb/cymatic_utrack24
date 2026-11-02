// rea decompile_all
// name: FUN_0047e840
// address: 0x47e840
// body: available
// range: 0x47e840-0x47ec3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047e840(int *param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  int *local_34;
  undefined8 local_30;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  
  local_34 = (int *)*in_ECX;
  local_10 = 0;
  if (0 < (int)in_ECX[4]) {
    dVar10 = 6755399441055744.0;
    local_14 = in_ECX;
    do {
      iVar4 = local_14[6];
      local_28 = *local_34;
      piVar5 = local_34 + iVar4;
      iVar1 = local_18;
      if (0 < local_28 + -1) {
        uVar8 = local_34[1];
        piVar5 = local_34 + 1;
        iVar6 = 0;
        local_c = local_14[2] + local_10;
        param_1[0xd] = ((int *)param_1[0xc])[2] * local_c + *(int *)param_1[0xc];
        if ((char)param_1[10] == '\0') {
          if (*(char *)((int)param_1 + 0x29) == '\0') {
            local_30 = ((double)local_c - *(double *)(param_1 + 8)) * *(double *)(param_1 + 6) +
                       dVar10;
            param_1[3] = (int)local_30;
          }
        }
        else {
          iVar3 = param_1[4] * local_c - param_1[3] >> 0xc;
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
        local_34 = local_34 + iVar4;
        for (local_28 = local_28 + -2; local_18 = (int)uVar8 >> 8, -1 < local_28;
            local_28 = local_28 + -1) {
          local_20 = piVar5[1];
          local_30 = (double)CONCAT44(piVar5 + 2,(int)local_30);
          local_24 = piVar5[2];
          local_1c = (int)local_24 >> 8;
          if (local_1c == local_18) {
            iVar6 = iVar6 + (local_24 - uVar8) * local_20;
          }
          else {
            local_c = (int)((0x100 - (uVar8 & 0xff)) * local_20 + iVar6) >> 8;
            if (0 < local_c) {
              if (local_c < 0xff) {
                puVar7 = (uint *)(*(int *)(param_1[0xc] + 0xc) * local_18 + param_1[0xd]);
                puVar2 = (uint *)FUN_00464e80(local_3c,local_18);
                uVar9 = (*puVar2 >> 8 & 0xff00ff) * local_c;
                iVar4 = 0x100 - (uVar9 >> 0x18);
                uVar8 = ((*puVar2 & 0xff00ff) * local_c >> 8 & 0xff00ff) +
                        ((*puVar7 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
                uVar9 = (uVar9 >> 8 & 0xff00ff) +
                        ((*puVar7 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
              }
              else {
                puVar7 = (uint *)(*(int *)(param_1[0xc] + 0xc) * local_18 + param_1[0xd]);
                puVar2 = (uint *)FUN_00464e80(local_38,local_18);
                uVar9 = *puVar2;
                iVar4 = 0x100 - (uVar9 >> 0x18);
                uVar8 = ((*puVar7 & 0xff00ff) * iVar4 >> 8 & 0xff00ff) + (uVar9 & 0xff00ff);
                uVar9 = (uVar9 >> 8 & 0xff00ff) +
                        ((*puVar7 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
              }
              *puVar7 = (((0x100 - (uVar9 >> 8 & 0xff00ff)) * 0x100 | uVar9 << 8) ^
                        (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8)) & 0xff00ff ^
                        (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) << 8;
            }
            iVar6 = local_20;
            if (0 < local_20) {
              iVar4 = local_1c - (local_18 + 1);
              if (0 < iVar4) {
                FUN_00485d50(local_18 + 1,iVar4,local_20);
              }
            }
            iVar6 = (local_24 & 0xff) * iVar6;
          }
          uVar8 = local_24;
          piVar5 = local_30._4_4_;
          iVar1 = local_18;
        }
        local_28 = iVar6 >> 8;
        piVar5 = local_34;
        if (0 < local_28) {
          local_24 = uVar8;
          if (local_28 < 0xff) {
            puVar7 = (uint *)(*(int *)(param_1[0xc] + 0xc) * local_18 + param_1[0xd]);
            iVar4 = local_18;
            local_18 = iVar1;
            puVar2 = (uint *)FUN_00464e80(local_44,iVar4);
            uVar9 = (*puVar2 >> 8 & 0xff00ff) * local_28;
            iVar4 = 0x100 - (uVar9 >> 0x18);
            uVar8 = ((*puVar2 & 0xff00ff) * local_28 >> 8 & 0xff00ff) +
                    ((*puVar7 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
            uVar9 = (uVar9 >> 8 & 0xff00ff) + ((*puVar7 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
          }
          else {
            puVar7 = (uint *)(*(int *)(param_1[0xc] + 0xc) * local_18 + param_1[0xd]);
            iVar4 = local_18;
            local_18 = iVar1;
            puVar2 = (uint *)FUN_00464e80(local_40,iVar4);
            uVar9 = *puVar2;
            iVar4 = 0x100 - (uVar9 >> 0x18);
            uVar8 = ((*puVar7 & 0xff00ff) * iVar4 >> 8 & 0xff00ff) + (uVar9 & 0xff00ff);
            uVar9 = (uVar9 >> 8 & 0xff00ff) + ((*puVar7 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
          }
          *puVar7 = (((0x100 - (uVar9 >> 8 & 0xff00ff)) * 0x100 | uVar9 << 8) ^
                    (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8)) & 0xff00ff ^
                    (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) << 8;
          piVar5 = local_34;
          iVar1 = local_18;
        }
      }
      local_18 = iVar1;
      local_34 = piVar5;
      local_10 = local_10 + 1;
    } while (local_10 < (int)local_14[4]);
  }
  return;
}

