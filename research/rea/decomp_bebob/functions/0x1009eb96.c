// rea decompile_all
// name: FUN_1009eb96
// address: 0x1009eb96
// body: available
// range: 0x1009eb96-0x1009f583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009ec8a to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_1009eb96(int *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  HDC pHVar6;
  int iVar7;
  HBITMAP pHVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  undefined4 extraout_ECX;
  uint *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint *extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  uint *puVar13;
  undefined4 extraout_ECX_12;
  uint *extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 extraout_ECX_21;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  uint uVar14;
  int iVar15;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  CGdiObject *local_c0;
  HBITMAP__ *local_bc;
  CDC local_b8 [4];
  HDC__ *local_b4;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  CDrawingManager *local_78;
  uint local_74;
  double local_70;
  undefined **local_68;
  void *local_64;
  uint *local_60;
  double local_5c;
  double local_54;
  uint *local_4c;
  undefined8 local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  double local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 200;
  local_8 = 0x1009eba5;
  if ((param_2 != 0xffffffff) || (param_3 != 0xffffffff)) {
    local_d0 = *param_1;
    local_cc = param_1[1];
    local_c8 = param_1[2];
    local_c4 = param_1[3];
    CRect::NormalizeRect((CRect *)&local_d0);
    iVar15 = local_c4 - local_cc;
    local_28 = local_c8 - local_d0;
    if ((local_28 != 0) && (iVar15 != 0)) {
      local_24 = iVar15;
      FUN_1001714b((undefined4 *)local_b8);
      local_8 = 0;
      pHVar6 = (HDC)0x0;
      if (*(int *)(local_78 + 4) != 0) {
        pHVar6 = *(HDC *)(*(int *)(local_78 + 4) + 4);
      }
      pHVar6 = CreateCompatibleDC(pHVar6);
      iVar7 = CDC::Attach(local_b8,pHVar6);
      if (iVar7 != 0) {
        local_64 = (void *)0x0;
        local_68 = CBitmap::vftable;
        local_8 = CONCAT31(local_8._1_3_,1);
        pHVar8 = CreateCompatibleBitmap(*(HDC *)(*(int *)(local_78 + 4) + 4),local_28,iVar15);
        iVar15 = CMenu::Attach((CMenu *)&local_68,(HMENU__ *)pHVar8);
        if (iVar15 != 0) {
          local_c0 = CDC::SelectGdiObject(local_b4,local_64);
          if (local_c0 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          local_bc = CDrawingManager::CreateBitmap_32
                               ((CSize *)&local_28,(void **)((int)&local_48 + 4));
          if ((local_bc != (HBITMAP__ *)0x0) && (iVar15 = local_48._4_4_, local_48._4_4_ != 0)) {
            SelectObject(local_b4,local_bc);
            iVar7 = local_28;
            if (param_3 == 0xffffffff) {
              param_3 = param_2;
            }
            local_40 = param_3 & 0xff;
            local_3c = param_3 >> 8 & 0xff;
            local_38 = param_3 >> 0x10 & 0xff;
            local_4c = (uint *)(param_2 >> 0x10 & 0xff);
            local_34 = (uint)(param_2 != 0xffffffff);
            local_74 = param_2 & 0xff;
            local_60 = (uint *)(param_2 >> 8 & 0xff);
            puVar13 = local_60;
            if (local_34 != 0) {
              param_2 = ((local_74 | 0xffffff00) << 8 | (uint)local_60) << 8 | (uint)local_4c;
              puVar13 = local_4c;
            }
            dVar21 = 0.0;
            dVar4 = (double)(local_28 + -1);
            dVar2 = (double)(local_24 + -1);
            dVar5 = dVar21;
            dVar20 = dVar4;
            if (dVar4 < 0.0) {
              dVar20 = 0.0;
              dVar5 = dVar4;
            }
            dVar4 = dVar2;
            if (0.0 <= dVar2) {
              dVar4 = 0.0;
              dVar21 = dVar2;
            }
            bVar1 = dVar21 - dVar4 <= dVar20 - dVar5;
            dVar2 = dVar21;
            dVar3 = dVar5;
            if (bVar1) {
              dVar2 = dVar20;
              dVar20 = dVar21;
              dVar3 = dVar4;
              dVar4 = dVar5;
            }
            local_80 = (dVar20 - dVar3) * 0.5;
            local_90 = (dVar2 - dVar4) * 0.5;
            local_70 = (dVar20 + dVar3) * 0.5;
            local_5c = (dVar2 + dVar4) * 0.5;
            if (local_34 != 0) {
              FUN_100fcbf0(local_70 - local_80);
              uVar16 = FUN_100f8660(extraout_ECX,extraout_EDX);
              param_1 = (int *)uVar16;
              dVar20 = local_70 + local_80;
              FUN_100fcd10(dVar20);
              uVar16 = FUN_100f8660((int)((ulonglong)dVar20 >> 0x20),extraout_EDX_00);
              local_20 = (int)uVar16;
              puVar13 = extraout_ECX_00;
              if ((int)param_1 <= local_20) {
                local_1c = (int)param_1 * iVar7;
                do {
                  dVar20 = ((double)(int)param_1 - local_70) / local_80;
                  dVar20 = 1.0 - dVar20 * dVar20;
                  if (0.0 <= dVar20) {
                    FUN_100fd174(puVar13,SUB84(dVar20,0),(uint)((ulonglong)dVar20 >> 0x20));
                    local_54 = (double)(extraout_ST0 * (float10)local_90);
                    FUN_100fcbf0(local_5c - local_54);
                    uVar16 = FUN_100f8660(extraout_ECX_01,extraout_EDX_01);
                    iVar10 = (int)uVar16;
                    dVar20 = local_54 + local_5c;
                    FUN_100fcd10(dVar20);
                    uVar16 = FUN_100f8660((int)((ulonglong)dVar20 >> 0x20),extraout_EDX_02);
                    iVar9 = (int)uVar16;
                    if (bVar1) {
                      puVar13 = (uint *)(local_1c + iVar10);
                      if (iVar10 <= iVar9) {
                        puVar13 = (uint *)(iVar15 + (int)puVar13 * 4);
                        for (iVar10 = (iVar9 - iVar10) + 1; iVar10 != 0; iVar10 = iVar10 + -1) {
                          *puVar13 = param_2;
                          puVar13 = puVar13 + 1;
                        }
                        puVar13 = (uint *)0x0;
                        iVar15 = local_48._4_4_;
                      }
                    }
                    else {
                      puVar13 = (uint *)(iVar15 + (int)(iVar10 * iVar7 + (int)param_1) * 4);
                      if (iVar10 <= iVar9) {
                        iVar10 = (iVar9 - iVar10) + 1;
                        do {
                          *puVar13 = param_2;
                          puVar13 = puVar13 + iVar7;
                          iVar10 = iVar10 + -1;
                        } while (iVar10 != 0);
                      }
                    }
                  }
                  param_1 = (int *)((int)param_1 + 1);
                  local_1c = local_1c + iVar7;
                } while ((int)param_1 <= local_20);
              }
            }
            local_a0 = local_90 * local_90;
            local_30 = local_80 * local_80;
            dVar20 = local_a0 + local_30;
            FUN_100fd174(puVar13,SUB84(dVar20,0),(uint)((ulonglong)dVar20 >> 0x20));
            local_48 = (double)((float10)local_30 / extraout_ST0_00);
            FUN_100fcd10(local_70 - local_48);
            uVar16 = FUN_100f8660(extraout_ECX_02,extraout_EDX_03);
            iVar10 = (int)uVar16;
            dVar21 = local_48 + local_70;
            FUN_100fcbf0(dVar21);
            uVar16 = FUN_100f8660((int)((ulonglong)dVar21 >> 0x20),extraout_EDX_04);
            local_48 = (double)CONCAT44((int)uVar16,(undefined4)local_48);
            puVar13 = extraout_ECX_03;
            local_14 = iVar10;
            if (iVar10 <= (int)uVar16) {
              local_1c = iVar10 * iVar7;
              do {
                dVar21 = ((double)local_14 - local_70) / local_80;
                dVar21 = 1.0 - dVar21 * dVar21;
                if (0.0 <= dVar21) {
                  FUN_100fd174(puVar13,SUB84(dVar21,0),(uint)((ulonglong)dVar21 >> 0x20));
                  local_30 = (double)(extraout_ST0_01 * (float10)local_90);
                  dVar21 = local_30 + local_5c;
                  FUN_100fcbf0(dVar21);
                  uVar16 = FUN_100f8660((int)((ulonglong)dVar21 >> 0x20),extraout_EDX_05);
                  iVar7 = (int)uVar16;
                  local_98 = (double)(int)local_38;
                  uVar16 = FUN_100f8660(extraout_ECX_04,(int)(uVar16 >> 0x20));
                  local_18 = (uint)uVar16;
                  local_88 = (double)(int)local_3c;
                  uVar16 = FUN_100f8660(extraout_ECX_05,(int)(uVar16 >> 0x20));
                  local_54 = (double)(int)local_40;
                  uVar17 = FUN_100f8660(extraout_ECX_06,(int)(uVar16 >> 0x20));
                  uVar18 = FUN_100f8660(extraout_ECX_07,(int)(uVar17 >> 0x20));
                  local_20 = (int)uVar18;
                  if (local_34 == 0) {
                    uVar14 = (local_20 << 8 | (uint)uVar17 & 0xff) << 8 | (uint)uVar16 & 0xff;
                    uVar11 = local_18;
                  }
                  else {
                    uVar18 = FUN_100f8696();
                    uVar19 = FUN_100f8696();
                    uVar14 = ((uint)uVar18 & 0xff | 0xffffff00) << 8 | (uint)uVar19 & 0xff;
                    uVar18 = FUN_100f8696();
                    uVar11 = (uint)uVar18;
                  }
                  uVar14 = uVar14 << 8 | uVar11 & 0xff;
                  param_2._0_1_ = (char)uVar17;
                  param_1._0_1_ = (char)uVar16;
                  uVar11 = (((uint)(byte)((char)local_40 - (char)param_2) | (-1 - local_20) * 0x100)
                            << 8 | (uint)(byte)((char)local_3c - (char)param_1)) << 8 |
                           (uint)(byte)((char)local_38 - (char)local_18);
                  if (bVar1) {
                    puVar13 = (uint *)(iVar15 + (iVar7 + local_1c) * 4);
                    *puVar13 = uVar11;
                    puVar13[-1] = uVar14;
                  }
                  else {
                    *(uint *)(iVar15 + (iVar7 * local_28 + local_14) * 4) = uVar11;
                    *(uint *)(iVar15 + ((iVar7 + -1) * local_28 + local_14) * 4) = uVar14;
                  }
                  dVar21 = local_5c - local_30;
                  local_30 = dVar21;
                  FUN_100fcd10(dVar21);
                  uVar16 = FUN_100f8660((int)((ulonglong)dVar21 >> 0x20),extraout_EDX_06);
                  iVar10 = (int)uVar16;
                  uVar16 = FUN_100f8660(extraout_ECX_08,(int)(uVar16 >> 0x20));
                  local_18 = (uint)uVar16;
                  uVar16 = FUN_100f8660(extraout_ECX_09,(int)(uVar16 >> 0x20));
                  uVar17 = FUN_100f8660(extraout_ECX_10,(int)(uVar16 >> 0x20));
                  uVar18 = FUN_100f8660(extraout_ECX_11,(int)(uVar17 >> 0x20));
                  local_20 = (int)uVar18;
                  if (local_34 == 0) {
                    uVar14 = (local_20 << 8 | (uint)uVar17 & 0xff) << 8 | (uint)uVar16 & 0xff;
                    uVar11 = local_18;
                  }
                  else {
                    uVar18 = FUN_100f8696();
                    uVar19 = FUN_100f8696();
                    uVar14 = ((uint)uVar18 & 0xff | 0xffffff00) << 8 | (uint)uVar19 & 0xff;
                    uVar18 = FUN_100f8696();
                    uVar11 = (uint)uVar18;
                  }
                  uVar14 = uVar14 << 8 | uVar11 & 0xff;
                  param_2._0_1_ = (char)uVar17;
                  param_1._0_1_ = (char)uVar16;
                  uVar11 = (((uint)(byte)((char)local_40 - (char)param_2) | (-1 - local_20) * 0x100)
                            << 8 | (uint)(byte)((char)local_3c - (char)param_1)) << 8 |
                           (uint)(byte)((char)local_38 - (char)local_18);
                  iVar7 = local_28;
                  if (bVar1) {
                    puVar13 = (uint *)(iVar15 + (iVar10 + local_1c) * 4);
                    *puVar13 = uVar11;
                    puVar13[1] = uVar14;
                  }
                  else {
                    puVar13 = (uint *)(iVar10 * local_28 + local_14);
                    *(uint *)(iVar15 + (int)puVar13 * 4) = uVar11;
                    *(uint *)(iVar15 + ((iVar10 + 1) * local_28 + local_14) * 4) = uVar14;
                  }
                }
                local_14 = local_14 + 1;
                local_1c = local_1c + iVar7;
              } while (local_14 <= local_48._4_4_);
            }
            FUN_100fd174(puVar13,SUB84(dVar20,0),(uint)((ulonglong)dVar20 >> 0x20));
            local_48 = (double)((float10)local_a0 / extraout_ST0_02);
            FUN_100fcbf0(local_5c - local_48);
            uVar16 = FUN_100f8660(extraout_ECX_12,extraout_EDX_07);
            iVar10 = (int)uVar16;
            dVar20 = local_48 + local_5c;
            FUN_100fcd10(dVar20);
            uVar16 = FUN_100f8660((int)((ulonglong)dVar20 >> 0x20),extraout_EDX_08);
            local_48 = (double)CONCAT44((int)uVar16,(undefined4)local_48);
            local_14 = iVar10;
            if (iVar10 <= (int)uVar16) {
              local_1c = iVar10 * iVar7;
              puVar13 = extraout_ECX_13;
              do {
                dVar20 = ((double)local_14 - local_5c) / local_90;
                dVar20 = 1.0 - dVar20 * dVar20;
                if (0.0 <= dVar20) {
                  FUN_100fd174(puVar13,SUB84(dVar20,0),(uint)((ulonglong)dVar20 >> 0x20));
                  local_30 = (double)(extraout_ST0_03 * (float10)local_80);
                  dVar20 = local_70 - local_30;
                  local_a0 = dVar20;
                  FUN_100fcd10(dVar20);
                  uVar16 = FUN_100f8660((int)((ulonglong)dVar20 >> 0x20),extraout_EDX_09);
                  iVar7 = (int)uVar16;
                  local_98 = (double)(int)local_38;
                  uVar16 = FUN_100f8660(extraout_ECX_14,(int)(uVar16 >> 0x20));
                  local_18 = (uint)uVar16;
                  local_88 = (double)(int)local_3c;
                  uVar16 = FUN_100f8660(extraout_ECX_15,(int)(uVar16 >> 0x20));
                  local_54 = (double)(int)local_40;
                  uVar17 = FUN_100f8660(extraout_ECX_16,(int)(uVar16 >> 0x20));
                  uVar18 = FUN_100f8660(extraout_ECX_17,(int)(uVar17 >> 0x20));
                  local_20 = (int)uVar18;
                  if (local_34 == 0) {
                    uVar14 = (local_20 << 8 | (uint)uVar17 & 0xff) << 8 | (uint)uVar16 & 0xff;
                    uVar11 = local_18;
                  }
                  else {
                    uVar18 = FUN_100f8696();
                    uVar19 = FUN_100f8696();
                    uVar14 = ((uint)uVar18 & 0xff | 0xffffff00) << 8 | (uint)uVar19 & 0xff;
                    uVar18 = FUN_100f8696();
                    uVar11 = (uint)uVar18;
                  }
                  uVar14 = uVar14 << 8 | uVar11 & 0xff;
                  param_2._0_1_ = (char)uVar17;
                  param_1._0_1_ = (char)uVar16;
                  uVar11 = (((uint)(byte)((char)local_40 - (char)param_2) | (-1 - local_20) * 0x100)
                            << 8 | (uint)(byte)((char)local_3c - (char)param_1)) << 8 |
                           (uint)(byte)((char)local_38 - (char)local_18);
                  if (bVar1) {
                    *(uint *)(iVar15 + (iVar7 * local_28 + local_14) * 4) = uVar11;
                    *(uint *)(iVar15 + ((iVar7 + 1) * local_28 + local_14) * 4) = uVar14;
                  }
                  else {
                    puVar13 = (uint *)(iVar15 + (iVar7 + local_1c) * 4);
                    *puVar13 = uVar11;
                    puVar13[1] = uVar14;
                  }
                  dVar20 = local_30 + local_70;
                  FUN_100fcbf0(dVar20);
                  uVar16 = FUN_100f8660((int)((ulonglong)dVar20 >> 0x20),extraout_EDX_10);
                  iVar10 = (int)uVar16;
                  uVar16 = FUN_100f8660(extraout_ECX_18,(int)(uVar16 >> 0x20));
                  local_18 = (uint)uVar16;
                  uVar16 = FUN_100f8660(extraout_ECX_19,(int)(uVar16 >> 0x20));
                  uVar17 = FUN_100f8660(extraout_ECX_20,(int)(uVar16 >> 0x20));
                  uVar18 = FUN_100f8660(extraout_ECX_21,(int)(uVar17 >> 0x20));
                  local_20 = (int)uVar18;
                  if (local_34 == 0) {
                    uVar14 = (local_20 << 8 | (uint)uVar17 & 0xff) << 8 | (uint)uVar16 & 0xff;
                    uVar11 = local_18;
                  }
                  else {
                    uVar18 = FUN_100f8696();
                    uVar19 = FUN_100f8696();
                    uVar14 = ((uint)uVar18 & 0xff | 0xffffff00) << 8 | (uint)uVar19 & 0xff;
                    uVar18 = FUN_100f8696();
                    uVar11 = (uint)uVar18;
                  }
                  uVar14 = uVar14 << 8 | uVar11 & 0xff;
                  param_2._0_1_ = (char)uVar17;
                  param_1._0_1_ = (char)uVar16;
                  uVar11 = (((uint)(byte)((char)local_40 - (char)param_2) | (-1 - local_20) * 0x100)
                            << 8 | (uint)(byte)((char)local_3c - (char)param_1)) << 8 |
                           (uint)(byte)((char)local_38 - (char)local_18);
                  iVar7 = local_28;
                  if (bVar1) {
                    puVar13 = (uint *)(iVar10 * local_28 + local_14);
                    *(uint *)(iVar15 + (int)puVar13 * 4) = uVar11;
                    *(uint *)(iVar15 + ((iVar10 + -1) * local_28 + local_14) * 4) = uVar14;
                  }
                  else {
                    puVar13 = (uint *)(iVar15 + (iVar10 + local_1c) * 4);
                    *puVar13 = uVar11;
                    puVar13[-1] = uVar14;
                  }
                }
                local_14 = local_14 + 1;
                local_1c = local_1c + iVar7;
              } while (local_14 <= local_48._4_4_);
            }
            local_a8 = 0;
            local_a4 = 0;
            local_a0 = (double)CONCAT44(local_24,iVar7);
            CDrawingManager::DrawAlpha
                      (local_78,*(CDC **)(local_78 + 4),(CRect *)&local_d0,local_b8,
                       (CRect *)&local_a8);
            pvVar12 = (void *)0x0;
            if (local_c0 != (CGdiObject *)0x0) {
              pvVar12 = *(void **)(local_c0 + 4);
            }
            CDC::SelectGdiObject(local_b4,pvVar12);
            DeleteObject(local_bc);
          }
        }
        local_68 = CBitmap::vftable;
        local_8 = local_8 & 0xffffff00;
        CImageList::~CImageList((CImageList *)&local_68);
      }
      local_8 = 0xffffffff;
      CDC::~CDC(local_b8);
    }
  }
  return;
}

