// rea decompile_all
// name: FUN_004ac8d7
// address: 0x4ac8d7
// body: available
// range: 0x4ac8d7-0x4acd05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ac8d7(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *in_EAX;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *local_24;
  uint *local_20;
  int local_18;
  int local_14;
  int local_8;
  
  local_18 = 0;
  piVar3 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_14 = *piVar3 + -1;
      if (0 < local_14) {
        iVar4 = param_1[2];
        local_8 = 0;
        local_20 = (uint *)(piVar3 + 1);
        uVar10 = *local_20;
        in_EAX[0xd] = ((int *)in_EAX[0xc])[2] * (iVar4 + local_18) + *(int *)in_EAX[0xc];
        if ((char)in_EAX[10] == '\0') {
          if (*(char *)((int)in_EAX + 0x29) == '\0') {
            iVar4 = FUN_00470221(((double)(iVar4 + local_18) - *(double *)(in_EAX + 8)) *
                                 *(double *)(in_EAX + 6));
            in_EAX[3] = iVar4;
          }
        }
        else {
          iVar4 = FUN_00470645(0,in_EAX[1]);
          in_EAX[2] = *(int *)(*in_EAX + iVar4 * 4);
        }
        while( true ) {
          local_14 = local_14 + -1;
          iVar4 = (int)uVar10 >> 8;
          if (local_14 < 0) break;
          uVar8 = local_20[1];
          local_20 = local_20 + 2;
          uVar2 = *local_20;
          if ((int)uVar2 >> 8 == iVar4) {
            local_8 = local_8 + (uVar2 - uVar10) * uVar8;
            uVar10 = uVar2;
          }
          else {
            iVar5 = (int)((0x100 - (uVar10 & 0xff)) * uVar8 + local_8) >> 8;
            if (0 < iVar5) {
              if (iVar5 < 0xff) {
                local_24 = (uint *)(*(int *)(in_EAX[0xc] + 0xc) * iVar4 + in_EAX[0xd]);
                puVar6 = (uint *)FUN_004754e8();
                uVar10 = (*puVar6 >> 8 & 0xff00ff) * iVar5;
                iVar11 = 0x100 - (uVar10 >> 0x18);
                uVar10 = (uVar10 >> 8 & 0xff00ff) +
                         ((*local_24 >> 8 & 0xff00ff) * iVar11 >> 8 & 0xff00ff);
                uVar9 = ((*local_24 & 0xff00ff) * iVar11 >> 8 & 0xff00ff) +
                        ((*puVar6 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
                uVar10 = (((0x100 - (uVar10 >> 8 & 0xff00ff)) * 0x100 | uVar10 * 0x100) ^
                         (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9)) & 0xff00ff ^
                         (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10) << 8;
              }
              else {
                local_24 = (uint *)(*(int *)(in_EAX[0xc] + 0xc) * iVar4 + in_EAX[0xd]);
                puVar6 = (uint *)FUN_004754e8();
                uVar9 = *puVar6;
                iVar5 = 0x100 - (uVar9 >> 0x18);
                uVar10 = (uVar9 >> 8 & 0xff00ff) +
                         ((*local_24 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
                uVar9 = ((*local_24 & 0xff00ff) * iVar5 >> 8 & 0xff00ff) + (uVar9 & 0xff00ff);
                uVar10 = (((0x100 - (uVar10 >> 8 & 0xff00ff)) * 0x100 | uVar10 * 0x100) ^
                         (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9)) & 0xff00ff ^
                         ((0x100 - (uVar10 >> 8 & 0xff00ff)) * 0x100 | uVar10 * 0x100);
              }
              *local_24 = uVar10;
            }
            if (0 < (int)uVar8) {
              iVar5 = ((int)uVar2 >> 8) - (iVar4 + 1);
              if (0 < iVar5) {
                FUN_004b9e5a(in_EAX,iVar4 + 1,iVar5,uVar8);
              }
            }
            local_8 = (uVar2 & 0xff) * uVar8;
            uVar10 = uVar2;
          }
        }
        local_8 = local_8 >> 8;
        if (0 < local_8) {
          puVar6 = (uint *)(*(int *)(in_EAX[0xc] + 0xc) * iVar4 + in_EAX[0xd]);
          if (local_8 < 0xff) {
            puVar7 = (uint *)FUN_004754e8();
            uVar10 = (*puVar7 >> 8 & 0xff00ff) * local_8;
            iVar4 = 0x100 - (uVar10 >> 0x18);
            uVar8 = ((*puVar7 & 0xff00ff) * local_8 >> 8 & 0xff00ff) +
                    ((*puVar6 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
            uVar10 = (uVar10 >> 8 & 0xff00ff) + ((*puVar6 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
            *puVar6 = (((0x100 - (uVar10 >> 8 & 0xff00ff)) * 0x100 | uVar10 * 0x100) ^
                      (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8)) & 0xff00ff ^
                      (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10) << 8;
          }
          else {
            puVar7 = (uint *)FUN_004754e8();
            uVar10 = *puVar7;
            iVar4 = 0x100 - (uVar10 >> 0x18);
            uVar8 = (uVar10 >> 8 & 0xff00ff) + ((*puVar6 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
            uVar10 = ((*puVar6 & 0xff00ff) * iVar4 >> 8 & 0xff00ff) + (uVar10 & 0xff00ff);
            *puVar6 = (((0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100) ^
                      (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10)) & 0xff00ff ^
                      (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) << 8;
          }
        }
      }
      local_18 = local_18 + 1;
      piVar3 = piVar3 + iVar1;
    } while (local_18 < (int)param_1[4]);
  }
  return;
}

