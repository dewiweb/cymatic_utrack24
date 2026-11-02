// rea decompile_all
// name: FUN_100823f8
// address: 0x100823f8
// body: available
// range: 0x100823f8-0x10082a1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool __fastcall
FUN_100823f8(CMFCToolBarImages *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  byte *pbVar9;
  double *pdVar10;
  undefined4 extraout_ECX;
  ulonglong uVar11;
  undefined4 local_10c;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  int local_ec;
  undefined4 local_e4;
  undefined1 local_e0 [8];
  long local_d8;
  undefined **local_d4;
  undefined4 local_d0;
  uint *local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  byte local_a4;
  undefined4 local_a0;
  int *local_9c;
  uint *local_98;
  uint local_94;
  int local_90;
  undefined **local_8c;
  undefined4 local_88;
  int local_84;
  uint local_80;
  size_t local_7c;
  int local_78;
  int local_74;
  uint local_70;
  uint local_68;
  HBITMAP__ *local_64;
  uint local_60;
  uint local_5c;
  undefined1 *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  undefined1 *local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  double *local_30;
  void *local_2c;
  uint local_28;
  HBITMAP__ *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x104;
  local_8 = 0x10082407;
  if (((*(int *)(param_1 + 0x88) == 0) || (*(int *)(param_1 + 8) < 0x18)) ||
     ((double)CONCAT44(param_4,param_3) == 0.0)) {
LAB_10082413:
    bVar5 = false;
  }
  else {
    if ((double)CONCAT44(param_4,param_3) != 1.0) {
      local_24 = *(HBITMAP__ **)(param_1 + 0x54);
      uVar11 = FUN_100f8660(param_1,param_2);
      local_18 = (uint)uVar11;
      uVar8 = *(uint *)(param_1 + 0x50);
      local_28 = uVar8;
      uVar11 = FUN_100f8660(extraout_ECX,(int)(uVar11 >> 0x20));
      local_70 = (uint)uVar11;
      if (((((local_70 != uVar8) || (local_18 != *(uint *)(param_1 + 0x54))) &&
           ((0 < (int)uVar8 && ((0 < (int)local_24 && (0 < (int)local_70)))))) &&
          (0 < (int)local_18)) && (uVar8 = *(uint *)(param_1 + 4), uVar8 != 0)) {
        local_14 = uVar8;
        iVar6 = GetObjectW(*(HANDLE *)(param_1 + 0x88),0x18,local_e0);
        if (iVar6 != 0) {
          lVar7 = _labs(local_d8);
          *(double *)(param_1 + 0xb0) =
               *(double *)(param_1 + 0xb0) * (double)CONCAT44(param_4,param_3);
          local_74 = 0;
          local_28 = (uint)(local_d8 < 0);
          local_60 = 0;
          local_5c = 0;
          local_78 = *(int *)(param_1 + 0x50);
          if ((uVar8 == 1) && (iVar6 = *(int *)(param_1 + 0x54), iVar6 < lVar7)) {
            uVar8 = lVar7 / iVar6;
            local_78 = 0;
            local_74 = iVar6;
            local_14 = uVar8;
          }
          local_64 = CDrawingManager::CreateBitmap_32
                               (*(HBITMAP__ **)(param_1 + 0x88),*(ulong *)(param_1 + 0xa4));
          if (local_64 != (HBITMAP__ *)0x0) {
            local_3c = local_70;
            local_38 = local_18;
            if (local_78 < 1) {
              local_38 = local_18 * uVar8;
              local_5c = local_18;
            }
            else {
              local_3c = uVar8 * local_70;
              local_60 = local_70;
            }
            if (local_28 != 0) {
              local_38 = -local_38;
            }
            local_24 = CDrawingManager::CreateBitmap_32((CSize *)&local_3c,(void **)0x0);
            local_38 = _labs(local_38);
            if (local_24 != (HBITMAP__ *)0x0) {
              dVar2 = (double)CONCAT44(param_4,param_3);
              param_4 = 5;
              if (1.0 <= dVar2) {
                param_4 = 6;
              }
              local_c8 = 0;
              local_bc = 0;
              local_b8 = 0;
              local_b4 = 0;
              local_b0 = 0;
              local_ac = 0;
              local_a8 = 0;
              local_a0 = 0;
              local_c4 = 0;
              local_c0 = 0;
              local_8 = 0;
              local_20 = 0;
              local_1c = 0;
              CMFCScanlinerBitmap::attach
                        ((CMFCScanlinerBitmap *)&local_c8,local_64,(CPoint *)&local_20);
              local_10c = 0;
              local_100 = 0;
              local_fc = 0;
              local_f8 = 0;
              local_f4 = 0;
              local_f0 = 0;
              local_ec = 0;
              local_e4 = 0;
              local_108 = 0;
              local_104 = 0;
              local_20 = 0;
              local_1c = 0;
              CMFCScanlinerBitmap::attach
                        ((CMFCScanlinerBitmap *)&local_10c,local_24,(CPoint *)&local_20);
              uVar8 = (uint)local_a4;
              local_d4 = CMFCZoomKernel::vftable;
              local_d0 = 0;
              local_cc = (uint *)0x0;
              local_8._0_1_ = 2;
              FUN_100806c9(&local_d4,*(int *)(param_1 + 0x50),local_70,0,*(int *)(param_1 + 0x50),
                           param_4);
              local_8c = CMFCZoomKernel::vftable;
              local_88 = 0;
              local_84 = 0;
              local_8 = CONCAT31(local_8._1_3_,3);
              FUN_100806c9(&local_8c,*(int *)(param_1 + 0x54),local_18,0,*(int *)(param_1 + 0x54),
                           param_4);
              local_30 = FUN_1000858a(uVar8 * 8);
              local_2c = FUN_1000858a(uVar8 * 8);
              local_20 = 0;
              local_1c = 0;
              if (0 < (int)local_14) {
                local_7c = uVar8 << 3;
                iVar6 = local_ec * local_5c;
                uVar8 = uVar8 * local_60;
                local_4c = 0;
                local_50 = local_108;
                local_28 = local_14;
                local_90 = iVar6;
                local_5c = uVar8;
                do {
                  local_14 = 0;
                  if (local_18 != 0) {
                    local_40 = (undefined1 *)(local_50 + local_4c);
                    do {
                      local_58 = local_40;
                      if (local_70 != 0) {
                        local_34 = local_cc;
                        local_80 = local_70;
                        do {
                          pdVar10 = local_30;
                          _memset(local_30,0,local_7c);
                          local_98 = (uint *)(local_84 + local_14 * 8);
                          local_68 = 0;
                          if (*local_98 != 0) {
                            local_9c = (int *)(local_84 + 4 + local_14 * 8);
                            local_54 = 0;
                            do {
                              dVar2 = *(double *)((int *)(*local_9c + local_54) + 1);
                              iVar6 = (*(int *)(*local_9c + local_54) + local_1c) * local_a8 +
                                      local_c4;
                              _memset(local_2c,0,local_7c);
                              local_44 = 0;
                              if (*local_34 != 0) {
                                local_48 = 0;
                                do {
                                  dVar3 = *(double *)((int *)(local_34[1] + local_48) + 1);
                                  param_4 = 0;
                                  pbVar9 = (byte *)((*(int *)(local_34[1] + local_48) + local_20) *
                                                    (uint)local_a4 + iVar6);
                                  if (local_a4 != 0) {
                                    do {
                                      pdVar10 = (double *)((int)local_2c + param_4 * 8);
                                      local_94 = (uint)*pbVar9;
                                      pbVar9 = pbVar9 + 1;
                                      param_4 = param_4 + 1;
                                      *pdVar10 = (double)local_94 * dVar3 + *pdVar10;
                                    } while (param_4 < local_a4);
                                  }
                                  local_44 = local_44 + 1;
                                  local_48 = local_48 + 0xc;
                                } while (local_44 < *local_34);
                              }
                              uVar8 = (uint)local_a4;
                              if (uVar8 != 0) {
                                pdVar10 = local_30;
                                do {
                                  *pdVar10 = *(double *)
                                              (((int)local_2c - (int)local_30) + (int)pdVar10) *
                                             dVar2 + *pdVar10;
                                  pdVar10 = pdVar10 + 1;
                                  uVar8 = uVar8 - 1;
                                } while (uVar8 != 0);
                              }
                              local_68 = local_68 + 1;
                              local_54 = local_54 + 0xc;
                              pdVar10 = local_30;
                            } while (local_68 < *local_98);
                          }
                          if (local_a4 == 4) {
                            if (pdVar10[3] <= *pdVar10) {
                              dVar2 = pdVar10[3];
                            }
                            else {
                              dVar2 = *pdVar10;
                            }
                            *pdVar10 = dVar2;
                            if (pdVar10[3] <= pdVar10[1]) {
                              dVar2 = pdVar10[3];
                            }
                            else {
                              dVar2 = pdVar10[1];
                            }
                            pdVar10[1] = dVar2;
                            if (pdVar10[3] <= pdVar10[2]) {
                              dVar2 = pdVar10[3];
                            }
                            else {
                              dVar2 = pdVar10[2];
                            }
                            pdVar10[2] = dVar2;
                          }
                          param_4 = 0;
                          if (local_a4 != 0) {
                            do {
                              uVar11 = FUN_100f8696();
                              puVar1 = local_58 + 1;
                              param_4 = param_4 + 1;
                              *local_58 = (char)uVar11;
                              local_58 = puVar1;
                            } while (param_4 < local_a4);
                          }
                          local_34 = local_34 + 2;
                          local_80 = local_80 - 1;
                        } while (local_80 != 0);
                        local_80 = 0;
                        iVar6 = local_90;
                        uVar8 = local_5c;
                      }
                      local_14 = local_14 + 1;
                      local_40 = local_40 + local_ec;
                    } while (local_14 < local_18);
                  }
                  local_20 = local_20 + local_78;
                  local_1c = local_1c + local_74;
                  local_4c = local_4c + uVar8;
                  local_50 = local_50 + iVar6;
                  local_28 = local_28 - 1;
                } while (local_28 != 0);
              }
              FUN_100085b9(local_30);
              FUN_100085b9(local_2c);
              DeleteObject(local_64);
              iVar6 = CSize::operator==((CSize *)(param_1 + 0x58),(tagSIZE)0x0);
              if (iVar6 != 0) {
                *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x50);
                *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
              }
              *(uint *)(param_1 + 0x50) = local_70;
              *(uint *)(param_1 + 0x54) = local_18;
              uVar4 = *(undefined4 *)(param_1 + 0xa4);
              *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
              *(undefined4 *)(param_1 + 0xa8) = uVar4;
              *(HBITMAP__ **)(param_1 + 0x88) = local_24;
              *(undefined4 *)(param_1 + 8) = 0x20;
              CMFCToolBarImages::UpdateInternalImage(param_1,0);
              CMFCToolBarImages::UpdateInternalImage(param_1,1);
              iVar6 = *(int *)(param_1 + 0x88);
              local_8._0_1_ = 2;
              local_8c = CMFCZoomKernel::vftable;
              CMFCZoomKernel::Empty((CMFCZoomKernel *)&local_8c);
              local_8 = CONCAT31(local_8._1_3_,1);
              local_d4 = CMFCZoomKernel::vftable;
              CMFCZoomKernel::Empty((CMFCZoomKernel *)&local_d4);
              return iVar6 != 0;
            }
            DeleteObject(local_64);
          }
        }
        goto LAB_10082413;
      }
    }
    bVar5 = true;
  }
  return bVar5;
}

