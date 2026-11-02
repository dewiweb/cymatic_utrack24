// rea decompile_all
// name: FUN_005cb920
// address: 0x5cb920
// body: available
// range: 0x5cb920-0x5cbd32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cb920(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  float *pfVar10;
  float *pfVar11;
  int in_ECX;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  double in_XMM0_Qa;
  double dVar16;
  LARGE_INTEGER local_3c;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071af9b;
  local_10 = ExceptionList;
  uVar8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1c0));
  local_8 = 0;
  FUN_005caef0(param_1,param_2,param_5);
  FUN_005caef0(param_3,param_4,param_5);
  if (*(int *)(in_ECX + 0xa4) < 1) {
    iVar13 = 0;
    if (0 < param_4) {
      do {
        _memset((void *)param_3[iVar13],0,param_5 << 2);
        iVar13 = iVar13 + 1;
      } while (iVar13 < param_4);
    }
  }
  else {
    QueryPerformanceCounter(&local_3c);
    FUN_006f5730(uVar8);
    in_XMM0_Qa = in_XMM0_Qa * _DAT_00c8a910;
    local_28 = 1;
    if (1 < (int)param_5) {
      local_28 = param_5;
    }
    iVar13 = 1;
    if (1 < param_4) {
      iVar13 = param_4;
    }
    local_8._0_1_ = 1;
    dVar16 = in_XMM0_Qa;
    if ((local_28 != *(uint *)(local_14 + 0x100)) || (iVar13 != *(int *)(local_14 + 0xfc))) {
      local_2c = local_28 + 3 & 0xfffffffc;
      local_30 = iVar13 * 4 + 0x13U & 0xfffffff0;
      uVar8 = local_30 + local_2c * iVar13 * 4 + 0x20;
      if (*(uint *)(local_14 + 0x104) < uVar8) {
        puVar1 = (undefined4 *)(local_14 + 0x10c);
        *(uint *)(local_14 + 0x104) = uVar8;
        FUN_00403500(uVar8,CONCAT31((int3)(local_2c * iVar13 >> 8),*(char *)(local_14 + 400) != '\0'
                                   ));
        *(undefined4 *)(local_14 + 0x108) = *puVar1;
      }
      else if (*(char *)(local_14 + 400) != '\0') {
        _memset(*(void **)(local_14 + 0x10c),0,uVar8);
      }
      iVar12 = 0;
      iVar14 = *(int *)(local_14 + 0x10c) + local_30;
      if (0 < iVar13) {
        do {
          *(int *)(*(int *)(local_14 + 0x108) + iVar12 * 4) = iVar14;
          iVar12 = iVar12 + 1;
          iVar14 = iVar14 + local_2c * 4;
        } while (iVar12 < iVar13);
      }
      *(undefined4 *)(*(int *)(local_14 + 0x108) + iVar13 * 4) = 0;
      *(uint *)(local_14 + 0x100) = local_28;
      *(int *)(local_14 + 0xfc) = iVar13;
    }
    iVar13 = local_14;
    local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)(*(int *)**(undefined4 **)(local_14 + 0x9c) + 4))
              (param_1,param_2,param_3,param_4,param_5);
    local_24 = *(int *)(iVar13 + 0x108);
    *(undefined1 *)(iVar13 + 400) = 0;
    local_30 = *(uint *)(iVar13 + 0xa4);
    while (local_30 = local_30 - 1, 0 < (int)local_30) {
      (**(code **)(**(int **)(*(int *)(iVar13 + 0x9c) + local_30 * 4) + 4))
                (param_1,param_2,local_24,param_4,param_5);
      if (0 < param_4) {
        local_1c = local_24 - (int)param_3;
        local_2c = param_4;
        local_18 = param_3;
        do {
          local_3c.s.HighPart = *(uint *)(local_1c + (int)local_18);
          if (((local_3c.s.HighPart != 0) && (local_28 = *local_18, local_28 != 0)) &&
             (iVar13 = 0, 0 < (int)param_5)) {
            if ((7 < param_5) &&
               ((local_3c.s.HighPart + (param_5 - 1) * 4 < local_28 ||
                (local_28 + (param_5 - 1) * 4 < (uint)local_3c.s.HighPart)))) {
              uVar8 = param_5 & 0x80000007;
              if ((int)uVar8 < 0) {
                uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
              }
              local_20 = param_5 - uVar8;
              local_34 = local_3c.s.HighPart - local_28;
              pauVar9 = (undefined1 (*) [16])(local_28 + 0x10);
              do {
                fVar15 = *(float *)(pauVar9[-1] + 4);
                fVar3 = *(float *)(pauVar9[-1] + 8);
                fVar4 = *(float *)(pauVar9[-1] + 0xc);
                pfVar11 = (float *)(local_3c.s.HighPart + iVar13 * 4);
                fVar5 = pfVar11[1];
                fVar6 = pfVar11[2];
                fVar7 = pfVar11[3];
                iVar13 = iVar13 + 8;
                *(float *)pauVar9[-1] = *pfVar11 + *(float *)pauVar9[-1];
                *(float *)(pauVar9[-1] + 4) = fVar5 + fVar15;
                *(float *)(pauVar9[-1] + 8) = fVar6 + fVar3;
                *(float *)(pauVar9[-1] + 0xc) = fVar7 + fVar4;
                pfVar11 = (float *)(local_34 + (int)pauVar9);
                fVar15 = pfVar11[1];
                fVar3 = pfVar11[2];
                fVar4 = pfVar11[3];
                auVar2 = *pauVar9;
                dVar16 = auVar2._0_8_;
                *(float *)*pauVar9 = *pfVar11 + auVar2._0_4_;
                *(float *)(*pauVar9 + 4) = fVar15 + auVar2._4_4_;
                *(float *)(*pauVar9 + 8) = fVar3 + auVar2._8_4_;
                *(float *)(*pauVar9 + 0xc) = fVar4 + auVar2._12_4_;
                pauVar9 = pauVar9 + 2;
              } while (iVar13 < local_20);
            }
            if (iVar13 < (int)param_5) {
              if (3 < (int)(param_5 - iVar13)) {
                pfVar11 = (float *)(local_3c.s.HighPart + (iVar13 + 3) * 4);
                pfVar10 = (float *)(local_28 + iVar13 * 4 + 4);
                local_34 = local_3c.s.HighPart - *local_18;
                iVar12 = ((param_5 - iVar13) - 4 >> 2) + 1;
                iVar13 = iVar13 + iVar12 * 4;
                do {
                  pfVar10[-1] = pfVar11[-3] + pfVar10[-1];
                  *pfVar10 = *(float *)((int)pfVar10 + local_34) + *pfVar10;
                  pfVar10[1] = pfVar11[-1] + pfVar10[1];
                  fVar15 = *pfVar11;
                  pfVar11 = pfVar11 + 4;
                  dVar16 = (double)(ulonglong)(uint)(fVar15 + pfVar10[2]);
                  pfVar10[2] = fVar15 + pfVar10[2];
                  pfVar10 = pfVar10 + 4;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
              }
              if (iVar13 < (int)param_5) {
                pfVar11 = (float *)(local_28 + iVar13 * 4);
                iVar13 = param_5 - iVar13;
                do {
                  fVar15 = *(float *)((int)pfVar11 + (local_3c.s.HighPart - local_28)) + *pfVar11;
                  dVar16 = (double)(ulonglong)(uint)fVar15;
                  *pfVar11 = fVar15;
                  pfVar11 = pfVar11 + 1;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
              }
            }
          }
          local_18 = local_18 + 1;
          local_2c = local_2c + -1;
        } while (local_2c != 0);
        local_2c = 0;
        iVar13 = local_14;
      }
    }
    QueryPerformanceCounter(&local_3c);
    FUN_006f5730();
    *(double *)(iVar13 + 0x1f0) =
         ((dVar16 * _DAT_00c8a910 - in_XMM0_Qa) - *(double *)(iVar13 + 0x1f0)) * 0.2 +
         *(double *)(iVar13 + 0x1f0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1c0));
  ExceptionList = local_10;
  return;
}

