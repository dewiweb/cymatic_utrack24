// rea decompile_all
// name: FUN_004b0350
// address: 0x4b0350
// body: available
// range: 0x4b0350-0x4b05c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b0350(float *param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int *in_ECX;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 in_stack_ffffffd8;
  float *in_stack_ffffffdc;
  void *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if ((0.0 < param_1[2]) && (0.0 < param_1[3])) {
    if (in_ECX[2] == 0) {
      FUN_0044dd00(param_1);
      return;
    }
    bVar3 = false;
    pfVar7 = (float *)(in_ECX[2] + -1);
    if (-1 < (int)pfVar7) {
      local_8 = (int)pfVar7 * 0x10;
      bVar2 = bVar3;
      do {
        fVar10 = *param_1;
        pfVar5 = (float *)(*in_ECX + local_8);
        fVar9 = fVar10 + param_1[2];
        fVar1 = *pfVar5;
        if ((((fVar1 < fVar9) &&
             (fVar11 = param_1[1] + param_1[3], pfVar5[1] <= fVar11 && fVar11 != pfVar5[1])) &&
            (fVar10 < pfVar5[2] + fVar1)) &&
           (((fVar12 = pfVar5[3] + pfVar5[1], param_1[1] <= fVar12 && fVar12 != param_1[1] &&
             (0.0 < param_1[2])) && ((0.0 < param_1[3] && ((0.0 < pfVar5[2] && (0.0 < pfVar5[3])))))
            ))) {
          if ((fVar1 < fVar10) ||
             (((pfVar5[1] < param_1[1] || (fVar9 < pfVar5[2] + fVar1)) || (fVar11 < fVar12)))) {
            in_stack_ffffffd8 = 0x4b0449;
            in_stack_ffffffdc = param_1;
            cVar4 = FUN_004b09c0(param_1);
            bVar2 = bVar3;
            if (cVar4 == '\0') {
              bVar2 = true;
              bVar3 = bVar2;
            }
          }
          else if (pfVar7 < (float *)in_ECX[2]) {
            in_stack_ffffffd8 = 0x4b043e;
            in_stack_ffffffdc = pfVar7;
            FUN_00472850(pfVar7);
            bVar2 = bVar3;
          }
        }
        local_8 = local_8 + -0x10;
        pfVar7 = (float *)((int)pfVar7 + -1);
      } while (-1 < (int)pfVar7);
      if ((bVar2) && (0 < in_ECX[2])) {
        local_14 = (void *)0x0;
        local_10 = 0;
        local_c = 0;
        if ((0.0 < param_1[2]) && (0.0 < param_1[3])) {
          in_stack_ffffffd8 = 0x4b04ad;
          in_stack_ffffffdc = param_1;
          FUN_0044dd00(param_1);
        }
        iVar8 = in_ECX[2] + -1;
        if (-1 < iVar8) {
          iVar6 = iVar8 * 0x10;
          do {
            pfVar7 = (float *)(*in_ECX + iVar6);
            if (*pfVar7 < *param_1 + param_1[2]) {
              fVar10 = param_1[1] + param_1[3];
              if (((pfVar7[1] <= fVar10 && fVar10 != pfVar7[1]) && (*param_1 < pfVar7[2] + *pfVar7))
                 && ((param_1[1] < pfVar7[3] + pfVar7[1] &&
                     ((((0.0 < param_1[2] && (0.0 < param_1[3])) && (0.0 < pfVar7[2])) &&
                      (0.0 < pfVar7[3])))))) {
                in_stack_ffffffd8 = 0x4b0538;
                FUN_004b0760(pfVar7);
                in_stack_ffffffdc = pfVar7;
                if (local_c == 0) goto LAB_004b0562;
              }
            }
            iVar6 = iVar6 + -0x10;
            iVar8 = iVar8 + -1;
          } while (-1 < iVar8);
        }
        FUN_00473690(&local_14,in_stack_ffffffd8,in_stack_ffffffdc);
LAB_004b0562:
        FID_conflict__free(local_14);
        return;
      }
    }
    iVar8 = in_ECX[2] + 1;
    if (in_ECX[1] < iVar8) {
      FUN_0040ede0(iVar8 / 2 + in_ECX[2] + 9 & 0xfffffff8);
    }
    iVar8 = in_ECX[2];
    in_ECX[2] = iVar8 + 1;
    pfVar7 = (float *)(iVar8 * 0x10 + *in_ECX);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = *param_1;
      pfVar7[1] = param_1[1];
      pfVar7[2] = param_1[2];
      pfVar7[3] = param_1[3];
    }
  }
  return;
}

