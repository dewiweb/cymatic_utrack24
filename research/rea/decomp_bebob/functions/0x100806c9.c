// rea decompile_all
// name: FUN_100806c9
// address: 0x100806c9
// body: available
// range: 0x100806c9-0x10080945 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_100806c9(void *this,int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  double *pdVar2;
  code *pcVar3;
  int *piVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  void *pvVar10;
  uint uVar11;
  int iVar12;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *piVar13;
  int iVar14;
  int iVar15;
  float10 fVar16;
  ulonglong uVar17;
  double dVar18;
  double local_50;
  double local_48;
  double local_38;
  double local_30;
  int *local_18;
  int local_10;
  uint local_c;
  int local_8;
  
  if ((0 < param_1) && (0 < (int)param_2)) {
    CMFCZoomKernel::Empty(this);
    dVar6 = (double)(int)param_2;
    *(uint *)((int)this + 4) = param_2;
    if ((int)param_2 < 0) {
      dVar6 = dVar6 + 4294967296.0;
    }
    dVar6 = dVar6 / (double)param_1;
    pcVar3 = (code *)(&PTR_Filter_Box_10161468)[param_5 * 3];
    local_38 = *(double *)(&DAT_1016146c + param_5 * 0xc);
    pvVar10 = FUN_1000858a(-(uint)((int)((ulonglong)param_2 * 8 >> 0x20) != 0) |
                           (uint)((ulonglong)param_2 * 8));
    *(void **)((int)this + 8) = pvVar10;
    local_48 = 1.0;
    local_50 = -0.25;
    if (dVar6 < 1.0) {
      local_38 = local_38 / dVar6;
      local_50 = 0.25;
      local_48 = dVar6;
    }
    local_c = 0;
    if (*(int *)((int)this + 4) != 0) {
      do {
        dVar7 = (double)(int)local_c;
        if ((int)local_c < 0) {
          dVar7 = dVar7 + 4294967296.0;
        }
        dVar7 = dVar7 / dVar6;
        FUN_100fcd10(dVar7 - local_38);
        uVar17 = FUN_100f8660(extraout_ECX,extraout_EDX);
        local_8 = (int)uVar17;
        dVar18 = dVar7 + local_38;
        FUN_100fcbf0(dVar18);
        uVar17 = FUN_100f8660((int)((ulonglong)dVar18 >> 0x20),extraout_EDX_00);
        iVar14 = (int)uVar17;
        uVar11 = (iVar14 - local_8) + 1;
        iVar1 = local_c * 8;
        *(undefined4 *)(iVar1 + *(int *)((int)this + 8)) = 0;
        if (uVar11 != 0) {
          lVar5 = (ulonglong)uVar11 * 0xc;
          pvVar10 = FUN_1000858a(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5);
          param_5 = 0;
          local_30 = 0.0;
          *(void **)(*(int *)((int)this + 8) + 4 + iVar1) = pvVar10;
          piVar4 = *(int **)(*(int *)((int)this + 8) + 4 + iVar1);
          bVar9 = false;
          bVar8 = true;
          if (local_8 <= iVar14) {
            iVar15 = local_8 + param_3;
            local_10 = -iVar15;
            local_18 = piVar4;
            do {
              fVar16 = (float10)(*pcVar3)(((dVar7 - (double)local_8) + local_50) * local_48);
              fVar16 = fVar16 * (float10)local_48;
              if ((float10)0 == fVar16) {
                if (!bVar8) break;
              }
              else {
                bVar8 = false;
                if (iVar15 < 0) {
                  bVar9 = true;
                  iVar12 = local_10;
LAB_1008089c:
                  uVar11 = 0;
                  piVar13 = piVar4;
                  if (param_5 != 0) {
                    do {
                      if (*piVar13 == iVar12) {
                        *(double *)(piVar4 + uVar11 * 3 + 1) =
                             (double)((float10)*(double *)(piVar4 + uVar11 * 3 + 1) + fVar16);
                        goto LAB_100808d5;
                      }
                      uVar11 = uVar11 + 1;
                      piVar13 = piVar13 + 3;
                    } while (uVar11 < param_5);
                  }
                }
                else {
                  iVar12 = iVar15;
                  if (param_4 <= iVar15) {
                    iVar12 = (param_4 * 2 - iVar15) + -1;
                    bVar9 = true;
                  }
                  if (bVar9) goto LAB_1008089c;
                }
                param_5 = param_5 + 1;
                *(double *)(local_18 + 1) = (double)fVar16;
                *local_18 = iVar12;
                local_18 = local_18 + 3;
                *(uint *)(iVar1 + *(int *)((int)this + 8)) = param_5;
LAB_100808d5:
                local_30 = (double)(fVar16 + (float10)local_30);
              }
              local_8 = local_8 + 1;
              iVar15 = iVar15 + 1;
              local_10 = local_10 + -1;
            } while (local_8 <= iVar14);
            if ((float10)local_30 != (float10)0) {
              uVar11 = 0;
              iVar14 = 0;
              do {
                pdVar2 = (double *)(*(int *)(*(int *)((int)this + 8) + 4 + iVar1) + 4 + iVar14);
                uVar11 = uVar11 + 1;
                iVar14 = iVar14 + 0xc;
                *pdVar2 = *pdVar2 / local_30;
              } while (uVar11 <= *(uint *)(iVar1 + *(int *)((int)this + 8)));
            }
          }
        }
        local_c = local_c + 1;
      } while (local_c < *(uint *)((int)this + 4));
    }
  }
  return;
}

