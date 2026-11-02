// rea decompile_all
// name: FUN_004ac14f
// address: 0x4ac14f
// body: available
// range: 0x4ac14f-0x4ac4d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ac14f(undefined4 *param_1)

{
  int iVar1;
  double dVar2;
  int in_EAX;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int local_34;
  uint *local_28;
  uint *local_24;
  int local_1c;
  int local_18;
  int local_c;
  
  local_1c = 0;
  piVar3 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_18 = *piVar3 + -1;
      if (0 < local_18) {
        local_c = 0;
        local_24 = (uint *)(piVar3 + 1);
        uVar11 = *local_24;
        iVar9 = param_1[2];
        iVar4 = (*(int **)(in_EAX + 0x30))[2];
        dVar2 = (double)(iVar9 + local_1c) - *(double *)(in_EAX + 0x10);
        iVar12 = **(int **)(in_EAX + 0x30);
        *(double *)(in_EAX + 0x28) = dVar2 * dVar2;
        *(int *)(in_EAX + 0x34) = iVar4 * (iVar9 + local_1c) + iVar12;
        while( true ) {
          local_18 = local_18 + -1;
          iVar9 = (int)uVar11 >> 8;
          if (local_18 < 0) break;
          uVar8 = local_24[1];
          local_24 = local_24 + 2;
          uVar7 = *local_24;
          if ((int)uVar7 >> 8 == iVar9) {
            local_c = local_c + (uVar7 - uVar11) * uVar8;
            uVar11 = uVar7;
          }
          else {
            iVar4 = (int)((0x100 - (uVar11 & 0xff)) * uVar8 + local_c) >> 8;
            if (0 < iVar4) {
              iVar12 = *(int *)(*(int *)(in_EAX + 0x30) + 0xc);
              if (iVar4 < 0xff) {
                local_28 = (uint *)(iVar12 * iVar9 + *(int *)(in_EAX + 0x34));
                puVar5 = (uint *)FUN_00475582(iVar9);
                uVar11 = (*puVar5 >> 8 & 0xff00ff) * iVar4;
                iVar12 = 0x100 - (uVar11 >> 0x18);
                uVar11 = (uVar11 >> 8 & 0xff00ff) +
                         ((*local_28 >> 8 & 0xff00ff) * iVar12 >> 8 & 0xff00ff);
                uVar10 = ((*local_28 & 0xff00ff) * iVar12 >> 8 & 0xff00ff) +
                         ((*puVar5 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
                uVar11 = (((0x100 - (uVar11 >> 8 & 0xff00ff)) * 0x100 | uVar11 * 0x100) ^
                         (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10)) & 0xff00ff ^
                         (0x100 - (uVar11 >> 8 & 0xff00ff) | uVar11) << 8;
              }
              else {
                local_28 = (uint *)(iVar12 * iVar9 + *(int *)(in_EAX + 0x34));
                puVar5 = (uint *)FUN_00475582(iVar9);
                uVar10 = *puVar5;
                iVar4 = 0x100 - (uVar10 >> 0x18);
                uVar11 = (uVar10 >> 8 & 0xff00ff) +
                         ((*local_28 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
                uVar10 = ((*local_28 & 0xff00ff) * iVar4 >> 8 & 0xff00ff) + (uVar10 & 0xff00ff);
                uVar11 = (((0x100 - (uVar11 >> 8 & 0xff00ff)) * 0x100 | uVar11 * 0x100) ^
                         (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10)) & 0xff00ff ^
                         ((0x100 - (uVar11 >> 8 & 0xff00ff)) * 0x100 | uVar11 * 0x100);
              }
              *local_28 = uVar11;
            }
            if (0 < (int)uVar8) {
              iVar4 = ((int)uVar7 >> 8) - (iVar9 + 1);
              if (0 < iVar4) {
                FUN_004b9974(in_EAX,iVar9 + 1,iVar4,uVar8);
              }
            }
            local_c = (uVar7 & 0xff) * uVar8;
            uVar11 = uVar7;
          }
        }
        local_c = local_c >> 8;
        if (0 < local_c) {
          puVar5 = (uint *)(*(int *)(*(int *)(in_EAX + 0x30) + 0xc) * iVar9 +
                           *(int *)(in_EAX + 0x34));
          if (local_c < 0xff) {
            puVar6 = (uint *)FUN_00475582(iVar9);
            uVar7 = (*puVar6 >> 8 & 0xff00ff) * local_c;
            local_34 = 0x100 - (uVar7 >> 0x18);
            uVar8 = *puVar5;
            uVar10 = (uVar8 & 0xff00ff) * local_34;
            uVar11 = (*puVar6 & 0xff00ff) * local_c >> 8;
          }
          else {
            puVar6 = (uint *)FUN_00475582(iVar9);
            uVar11 = *puVar6;
            local_34 = 0x100 - (uVar11 >> 0x18);
            uVar8 = *puVar5;
            uVar10 = (uVar8 & 0xff00ff) * local_34;
            uVar7 = uVar11;
          }
          uVar8 = (uVar7 >> 8 & 0xff00ff) + ((uVar8 >> 8 & 0xff00ff) * local_34 >> 8 & 0xff00ff);
          uVar11 = (uVar10 >> 8 & 0xff00ff) + (uVar11 & 0xff00ff);
          *puVar5 = (((0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100) ^
                    (0x100 - (uVar11 >> 8 & 0xff00ff) | uVar11)) & 0xff00ff ^
                    (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) << 8;
        }
      }
      local_1c = local_1c + 1;
      piVar3 = piVar3 + iVar1;
    } while (local_1c < (int)param_1[4]);
  }
  return;
}

