// rea decompile_all
// name: FUN_004ac4d1
// address: 0x4ac4d1
// body: available
// range: 0x4ac4d1-0x4ac8d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ac4d1(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  int in_EAX;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *local_28;
  uint *local_24;
  int local_1c;
  int local_18;
  int local_c;
  
  local_1c = 0;
  piVar4 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_18 = *piVar4 + -1;
      if (0 < local_18) {
        local_c = 0;
        local_24 = (uint *)(piVar4 + 1);
        uVar10 = *local_24;
        fVar3 = (float)(param_1[2] + local_1c);
        *(int *)(in_EAX + 0x6c) =
             (*(int **)(in_EAX + 0x68))[2] * (param_1[2] + local_1c) + **(int **)(in_EAX + 0x68);
        *(double *)(in_EAX + 0x40) =
             (double)((*(float *)(in_EAX + 0x54) * fVar3 + *(float *)(in_EAX + 0x58)) -
                     (float)*(double *)(in_EAX + 8));
        *(double *)(in_EAX + 0x48) =
             (double)((*(float *)(in_EAX + 0x60) * fVar3 + *(float *)(in_EAX + 100)) -
                     (float)*(double *)(in_EAX + 0x10));
        while( true ) {
          local_18 = local_18 + -1;
          iVar12 = (int)uVar10 >> 8;
          if (local_18 < 0) break;
          uVar8 = local_24[1];
          local_24 = local_24 + 2;
          uVar2 = *local_24;
          if ((int)uVar2 >> 8 == iVar12) {
            local_c = local_c + (uVar2 - uVar10) * uVar8;
            uVar10 = uVar2;
          }
          else {
            iVar5 = (int)((0x100 - (uVar10 & 0xff)) * uVar8 + local_c) >> 8;
            if (0 < iVar5) {
              iVar11 = *(int *)(*(int *)(in_EAX + 0x68) + 0xc);
              if (iVar5 < 0xff) {
                local_28 = (uint *)(iVar11 * iVar12 + *(int *)(in_EAX + 0x6c));
                puVar6 = (uint *)FUN_004755ed(iVar12);
                uVar10 = (*puVar6 >> 8 & 0xff00ff) * iVar5;
                iVar11 = 0x100 - (uVar10 >> 0x18);
                uVar10 = (uVar10 >> 8 & 0xff00ff) +
                         ((*local_28 >> 8 & 0xff00ff) * iVar11 >> 8 & 0xff00ff);
                uVar9 = ((*local_28 & 0xff00ff) * iVar11 >> 8 & 0xff00ff) +
                        ((*puVar6 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
                uVar10 = (((0x100 - (uVar10 >> 8 & 0xff00ff)) * 0x100 | uVar10 * 0x100) ^
                         (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9)) & 0xff00ff ^
                         (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10) << 8;
              }
              else {
                local_28 = (uint *)(iVar11 * iVar12 + *(int *)(in_EAX + 0x6c));
                puVar6 = (uint *)FUN_004755ed(iVar12);
                uVar9 = *puVar6;
                iVar5 = 0x100 - (uVar9 >> 0x18);
                uVar10 = (uVar9 >> 8 & 0xff00ff) +
                         ((*local_28 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
                uVar9 = ((*local_28 & 0xff00ff) * iVar5 >> 8 & 0xff00ff) + (uVar9 & 0xff00ff);
                uVar10 = (((0x100 - (uVar10 >> 8 & 0xff00ff)) * 0x100 | uVar10 * 0x100) ^
                         (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9)) & 0xff00ff ^
                         ((0x100 - (uVar10 >> 8 & 0xff00ff)) * 0x100 | uVar10 * 0x100);
              }
              *local_28 = uVar10;
            }
            if (0 < (int)uVar8) {
              iVar5 = ((int)uVar2 >> 8) - (iVar12 + 1);
              if (0 < iVar5) {
                FUN_004b9be7(in_EAX,iVar12 + 1,iVar5,uVar8);
              }
            }
            local_c = (uVar2 & 0xff) * uVar8;
            uVar10 = uVar2;
          }
        }
        local_c = local_c >> 8;
        if (0 < local_c) {
          puVar6 = (uint *)(*(int *)(*(int *)(in_EAX + 0x68) + 0xc) * iVar12 +
                           *(int *)(in_EAX + 0x6c));
          if (local_c < 0xff) {
            puVar7 = (uint *)FUN_004755ed(iVar12);
            uVar10 = (*puVar7 >> 8 & 0xff00ff) * local_c;
            iVar12 = 0x100 - (uVar10 >> 0x18);
            uVar8 = ((*puVar7 & 0xff00ff) * local_c >> 8 & 0xff00ff) +
                    ((*puVar6 & 0xff00ff) * iVar12 >> 8 & 0xff00ff);
            uVar10 = (uVar10 >> 8 & 0xff00ff) + ((*puVar6 >> 8 & 0xff00ff) * iVar12 >> 8 & 0xff00ff)
            ;
            *puVar6 = (((0x100 - (uVar10 >> 8 & 0xff00ff)) * 0x100 | uVar10 * 0x100) ^
                      (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8)) & 0xff00ff ^
                      (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10) << 8;
          }
          else {
            puVar7 = (uint *)FUN_004755ed(iVar12);
            uVar10 = *puVar7;
            iVar12 = 0x100 - (uVar10 >> 0x18);
            uVar8 = (uVar10 >> 8 & 0xff00ff) + ((*puVar6 >> 8 & 0xff00ff) * iVar12 >> 8 & 0xff00ff);
            uVar10 = ((*puVar6 & 0xff00ff) * iVar12 >> 8 & 0xff00ff) + (uVar10 & 0xff00ff);
            *puVar6 = (((0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100) ^
                      (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10)) & 0xff00ff ^
                      (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) << 8;
          }
        }
      }
      local_1c = local_1c + 1;
      piVar4 = piVar4 + iVar1;
    } while (local_1c < (int)param_1[4]);
  }
  return;
}

