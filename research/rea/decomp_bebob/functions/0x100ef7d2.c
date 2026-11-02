// rea decompile_all
// name: CMFCTasksPane::ReposTasks
// address: 0x100ef7d2
// body: available
// range: 0x100ef7d2-0x100f0388 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ef92c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCTasksPane::ReposTasks(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCTasksPane::ReposTasks(CMFCTasksPane *this,int param_1)

{
  int *piVar1;
  CMFCVisualManager *pCVar2;
  __POSITION *p_Var3;
  int iVar4;
  CWnd *pCVar5;
  CPen *pCVar6;
  int iVar7;
  BOOL BVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_128 [4];
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  CWnd *local_110;
  int local_10c;
  CWnd *local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  CPen *local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8 [2];
  HDC local_c0;
  undefined4 *local_b4;
  int local_b0;
  undefined4 *local_ac;
  CPen *local_a8;
  CWnd *local_a4;
  int local_a0;
  undefined4 *local_9c;
  int local_98;
  int local_94;
  tagRECT local_90;
  tagTEXTMETRICW local_80;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x118;
  local_8 = 0x100ef7e1;
  if (DAT_10166c20 != 0) {
    *(undefined4 *)(this + 0x360) = 0;
  }
  if ((((this != (CMFCTasksPane *)0x0) && (*(int *)(this + 0x20) != 0)) &&
      (*(int *)(this + 0x474) != 0)) &&
     ((-1 < *(int *)(this + 0x430) && (*(int *)(this + 0x430) < *(int *)(this + 0x438))))) {
    iVar11 = *(int *)(this + 0x42c);
    if ((-1 < iVar11) && (iVar11 < *(int *)(this + 0x434))) {
      local_90.left = *(LONG *)(this + 0x42c);
      local_90.top = *(LONG *)(this + 0x430);
      local_90.right = *(LONG *)(this + 0x434);
      local_90.bottom = *(LONG *)(this + 0x438);
      iVar11 = *(int *)(this + 0x394);
      if (iVar11 == -1) {
        pCVar2 = CMFCVisualManager::GetInstance();
        iVar11 = *(int *)(pCVar2 + 0x9c);
      }
      iVar7 = *(int *)(this + 0x398);
      if (iVar7 == -1) {
        pCVar2 = CMFCVisualManager::GetInstance();
        iVar7 = *(int *)(pCVar2 + 0xa0);
      }
      InflateRect(&local_90,-iVar7,-iVar11);
      CClientDC::CClientDC((CClientDC *)local_c8,(CWnd *)this);
      local_8 = 0;
      local_d8 = CDC::SelectObject((CDC *)local_c8,(CPen *)(this + 0x3c4));
      GetTextMetricsW(local_c0,&local_80);
      iVar11 = *(int *)(this + 0x3e0);
      if (*(int *)(this + 0x3e0) < local_80.tmHeight) {
        iVar11 = local_80.tmHeight;
      }
      *(int *)(this + 0x38c) = iVar11;
      local_94 = local_90.top - *(int *)(this + 0x380) * iVar11;
      iVar11 = *(int *)(this + 0x374);
      *(undefined4 *)(this + 0x390) = 0;
      if (((iVar11 < 0) || (*(int *)(this + 0x50c) <= iVar11)) ||
         ((p_Var3 = CObList::FindIndex((CObList *)(this + 0x44c),
                                       *(int *)(*(int *)(this + 0x508) + iVar11 * 4)),
          p_Var3 == (__POSITION *)0x0 || (p_Var3 == (__POSITION *)0x0)))) {
LAB_100ef92c:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      local_cc = *(int *)(p_Var3 + 8);
      puVar9 = *(undefined4 **)(this + 0x46c);
      iVar11 = local_cc;
      while (puVar9 != (undefined4 *)0x0) {
        if (puVar9 == (undefined4 *)0x0) goto LAB_100ef92c;
        iVar7 = puVar9[2];
        local_b4 = (undefined4 *)*puVar9;
        puVar9 = local_b4;
        local_b0 = iVar7;
        if (*(int *)(iVar7 + 4) == iVar11) {
          CDC::SelectObject((CDC *)local_c8,(CPen *)(this + 0x3c4));
          if (*(int *)(*(int *)(iVar7 + 8) + -0xc) == 0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            local_a8 = CDC::SelectObject((CDC *)local_c8,(CPen *)&DAT_10166bc4);
            CDC::GetTextExtent((CDC *)local_c8,local_128);
            CDC::SelectObject((CDC *)local_c8,local_a8);
            iVar11 = *(int *)(this + 0x3a8);
            if (iVar11 == -1) {
              pCVar2 = CMFCVisualManager::GetInstance();
              iVar11 = *(int *)(pCVar2 + 0xb0);
            }
            puVar9 = *(undefined4 **)(this + 0x3a0);
            if (puVar9 == (undefined4 *)0xffffffff) {
              pCVar2 = CMFCVisualManager::GetInstance();
              puVar9 = *(undefined4 **)(pCVar2 + 0xa8);
            }
            local_9c = puVar9;
            iVar4 = (**(code **)(*(int *)this + 0x3c8))();
            if (iVar4 != 0) {
              if (iVar11 < 5) {
                iVar11 = 5;
              }
              if (*(int *)(this + 0x3a0) == -1) {
                local_9c = (undefined4 *)0x12;
              }
            }
            puVar9 = (undefined4 *)(local_124 + iVar11);
            if (local_124 + iVar11 <= (int)local_9c) {
              puVar9 = local_9c;
            }
          }
          if (((*(int *)(iVar7 + 0x5c) != 0) &&
              (*(int *)(iVar7 + 0x54) < (local_90.right - local_90.left) - (int)puVar9)) &&
             ((int)puVar9 < *(int *)(iVar7 + 0x58))) {
            local_94 = local_94 + (*(int *)(iVar7 + 0x58) - (int)puVar9);
          }
          if (param_1 == 0) {
            local_120 = local_90.left;
            local_11c = local_94;
            local_118 = local_90.right;
            local_114 = local_94 + (int)puVar9;
            *(LONG *)(local_b0 + 0x34) = local_90.left;
            *(int *)(local_b0 + 0x38) = local_94;
            *(LONG *)(local_b0 + 0x3c) = local_90.right;
            *(int *)(local_b0 + 0x40) = local_114;
            iVar7 = local_b0;
          }
          local_a8 = (CPen *)(local_94 + (int)puVar9);
          local_94 = (int)local_a8;
          SetFont(this,(CDC *)local_c8);
          if (((*(int *)(this + 0x350) == 0) || (*(int *)(iVar7 + 0x30) == 0)) ||
             ((*(int *)(*(int *)(iVar7 + 8) + -0xc) == 0 ||
              (((*(int *)(this + 0x360) != 0 && (iVar7 == *(int *)(this + 0x520))) &&
               ((0 < *(int *)(this + 0x3f8) && (param_1 == 0)))))))) {
            local_98 = 1;
            local_9c = (undefined4 *)0x1;
            (**(code **)(*(int *)this + 0x3dc))(&local_d4);
            puVar9 = *(undefined4 **)(iVar7 + 0x10);
            while (puVar9 != (undefined4 *)0x0) {
              if (puVar9 == (undefined4 *)0x0) goto LAB_100ef92c;
              local_ac = (undefined4 *)*puVar9;
              iVar11 = puVar9[2];
              local_a0 = iVar11;
              if (*(int *)(iVar11 + 0x2c) == 0) {
                if (*(int *)(iVar11 + 0x34) == 0) {
                  if (param_1 == 0) {
                    SetRectEmpty((LPRECT)(iVar11 + 0xc));
                  }
                  goto LAB_100effc7;
                }
                if (local_98 != 0) {
                  iVar7 = *(int *)(this + 0x3b4);
                  if (iVar7 == -1) {
                    pCVar2 = CMFCVisualManager::GetInstance();
                    iVar7 = *(int *)(pCVar2 + 0xbc);
                  }
                  local_94 = local_94 + iVar7;
                }
                pCVar5 = *(CWnd **)(this + 0x3ac);
                if (pCVar5 == (CWnd *)0xffffffff) {
                  pCVar2 = CMFCVisualManager::GetInstance();
                  pCVar5 = *(CWnd **)(pCVar2 + 0xb4);
                }
                iVar7 = *(int *)(this + 0x3b0);
                local_a4 = pCVar5;
                if (iVar7 == -1) {
                  pCVar2 = CMFCVisualManager::GetInstance();
                  iVar7 = *(int *)(pCVar2 + 0xb8);
                }
                if (*(int *)(iVar11 + 0x24) == 0) {
                  iVar4 = *(int *)(this + 0x370);
                }
                else {
                  iVar4 = *(int *)(this + 0x36c);
                }
                local_9c = (undefined4 *)iVar7;
                if (iVar4 == 0) {
                  pCVar6 = CDC::SelectObject((CDC *)local_c8,(CPen *)&DAT_10166bd4);
                  CDC::GetTextExtent((CDC *)local_c8,
                                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                      *)&local_e0);
                  CDC::SelectObject((CDC *)local_c8,pCVar6);
                  local_98 = local_dc;
                  if (local_dc <= *(int *)(this + 0x3e0)) {
                    local_98 = *(int *)(this + 0x3e0);
                  }
                  if ((*(int *)(iVar11 + 0x3c) != 0) && (local_98 < 0xb)) {
                    local_98 = 10;
                  }
                  if (param_1 == 0) {
                    local_108 = local_a4 +
                                local_90.left + *(int *)(this + 0x3dc) + local_e0 + (int)local_9c;
                    local_110 = local_a4 + local_90.left;
                    local_10c = local_94;
                    local_104 = local_98 + local_94;
                    *(CWnd **)(local_a0 + 0xc) = local_110;
                    *(int *)(local_a0 + 0x10) = local_94;
                    *(CWnd **)(local_a0 + 0x14) = local_108;
                    *(int *)(local_a0 + 0x18) = local_104;
                    iVar11 = *(int *)(local_a0 + 0xc);
                    if (*(int *)(local_a0 + 0xc) <= local_90.right - (int)local_a4) {
                      iVar11 = local_90.right - (int)local_a4;
                    }
                    *(int *)(local_a0 + 0x14) = iVar11;
                  }
                }
                else {
                  local_24.left = local_90.left;
                  local_24.top = local_90.top;
                  local_24.right = local_90.right;
                  local_24.bottom = local_90.bottom;
                  InflateRect(&local_24,-(int)local_a4,0);
                  local_24.top = local_94;
                  iStack_38 = *(int *)(this + 0x3e0) + local_94;
                  local_44 = *(int *)(this + 0x3dc) + local_24.left + (int)local_9c;
                  iStack_40 = local_94;
                  iStack_3c = local_24.right;
                  local_24.bottom = iStack_38;
                  pCVar6 = CDC::SelectObject((CDC *)local_c8,(CPen *)&DAT_10166bd4);
                  iVar11 = local_a0;
                  local_98 = (**(code **)(local_c8[0] + 0x68))
                                       (*(int *)(local_a0 + 8),
                                        *(undefined4 *)(*(int *)(local_a0 + 8) + -0xc),&local_44,
                                        0x410);
                  CDC::SelectObject((CDC *)local_c8,pCVar6);
                  if ((*(int *)(iVar11 + 0x3c) != 0) && (local_98 < 0xb)) {
                    local_98 = 10;
                  }
                  if (local_98 <= *(int *)(this + 0x3e0)) {
                    local_98 = *(int *)(this + 0x3e0);
                  }
                  local_24.bottom = local_98 + local_24.top;
                  if (param_1 == 0) {
                    *(LONG *)(local_a0 + 0xc) = local_24.left;
                    *(LONG *)(local_a0 + 0x10) = local_24.top;
                    *(LONG *)(local_a0 + 0x14) = local_24.right;
                    *(LONG *)(local_a0 + 0x18) = local_24.bottom;
                  }
                }
                iVar11 = *(int *)(this + 0x3b4);
                if (iVar11 == -1) {
                  pCVar2 = CMFCVisualManager::GetInstance();
                  iVar11 = *(int *)(pCVar2 + 0xbc);
                }
                iVar11 = iVar11 + local_98;
                local_98 = 0;
                local_94 = local_94 + iVar11;
                local_9c = (undefined4 *)0x0;
              }
              else {
                if ((local_98 != 0) && (*(int *)(iVar11 + 0x34) != 0)) {
                  iVar7 = local_d0;
                  if ((*(int *)(this + 0x364) != 0) &&
                     (iVar7 = *(int *)(this + 0x3b4), *(int *)(this + 0x3b4) == -1)) {
                    pCVar2 = CMFCVisualManager::GetInstance();
                    iVar7 = *(int *)(pCVar2 + 0xbc);
                  }
                  local_94 = local_94 + iVar7;
                }
                CWnd::FromHandle(*(HWND__ **)(iVar11 + 0x2c));
                iVar11 = local_a0;
                if (param_1 == 0) {
                  local_34.left = local_90.left;
                  local_34.right = local_90.right;
                  if (*(int *)(local_a0 + 0x34) == 0) {
                    local_34.bottom = 0;
                  }
                  else {
                    local_34.bottom = *(int *)(local_a0 + 0x20);
                  }
                  local_34.bottom = local_34.bottom + local_94;
                  local_34.top = *(int *)(this + 0x430) + 1;
                  if (local_34.top <= local_94) {
                    local_34.top = local_94;
                  }
                  local_a4 = (CWnd *)((*(int *)(local_a0 + 0x20) - local_34.bottom) + local_34.top);
                  if (*(int *)(this + 0x438) < local_34.bottom) {
                    local_34.bottom = *(int *)(this + 0x438);
                  }
                  iVar11 = local_d4;
                  if ((*(int *)(this + 0x364) != 0) &&
                     (iVar11 = *(int *)(this + 0x3ac), *(int *)(this + 0x3ac) == -1)) {
                    pCVar2 = CMFCVisualManager::GetInstance();
                    iVar11 = *(int *)(pCVar2 + 0xb4);
                  }
                  InflateRect(&local_34,-iVar11,0);
                  *(LONG *)(local_a0 + 0xc) = local_34.left;
                  *(LONG *)(local_a0 + 0x10) = local_34.top;
                  *(LONG *)(local_a0 + 0x14) = local_34.right;
                  *(LONG *)(local_a0 + 0x18) = local_34.bottom;
                  iVar7 = (**(code **)(*(int *)this + 0x3c8))();
                  iVar11 = local_a0;
                  if (iVar7 != 0) {
                    BVar8 = IsRectEmpty((RECT *)(local_a0 + 0xc));
                    pCVar5 = local_a4;
                    if (BVar8 != 0) {
                      pCVar5 = (CWnd *)0x0;
                    }
                    (**(code **)(*(int *)this + 0x3e0))(*(undefined4 *)(iVar11 + 0x2c),pCVar5);
                  }
                }
                if (*(int *)(iVar11 + 0x34) != 0) {
                  local_94 = local_94 + *(int *)(iVar11 + 0x20);
                  local_98 = 1;
                  local_9c = (undefined4 *)0x1;
                }
LAB_100effc7:
                if ((local_9c != (undefined4 *)0x0) && (*(int *)(local_a0 + 0x34) != 0)) {
                  iVar11 = local_d0;
                  if ((*(int *)(this + 0x364) != 0) &&
                     (iVar11 = *(int *)(this + 0x3b4), *(int *)(this + 0x3b4) == -1)) {
                    pCVar2 = CMFCVisualManager::GetInstance();
                    iVar11 = *(int *)(pCVar2 + 0xbc);
                  }
                  local_94 = local_94 + iVar11;
                }
              }
              puVar9 = local_ac;
              if ((((param_1 == 0) && (*(int *)(this + 0x360) != 0)) &&
                  (local_b0 == *(int *)(this + 0x520))) &&
                 (iVar11 = *(int *)(this + 0x3f8), iVar11 + (int)local_a8 < local_94)) {
                if (iVar11 < 0) {
                  iVar11 = 0;
                }
                iVar11 = iVar11 + (int)local_a8;
                iVar7 = iVar11 + -1;
                iVar4 = *(int *)(local_a0 + 0x18);
                if (iVar7 <= *(int *)(local_a0 + 0x18)) {
                  iVar4 = iVar7;
                }
                iVar10 = *(int *)(local_a0 + 0x10);
                if ((iVar10 <= iVar4) && (iVar10 = iVar7, *(int *)(local_a0 + 0x18) < iVar7)) {
                  iVar10 = *(int *)(local_a0 + 0x18);
                }
                *(int *)(local_a0 + 0x18) = iVar10;
                *(int *)(this + 0x390) = *(int *)(this + 0x390) + (local_94 - iVar11);
                local_94 = iVar11;
              }
            }
            if (param_1 == 0) {
              *(LONG *)(local_b0 + 0x44) = local_90.left;
              *(CPen **)(local_b0 + 0x48) = local_a8;
              *(LONG *)(local_b0 + 0x4c) = local_90.right;
              *(int *)(local_b0 + 0x50) = local_94;
              local_f0 = local_90.left;
              local_ec = (int)local_a8;
              local_e8 = local_90.right;
              local_e4 = local_94;
            }
          }
          else if (param_1 == 0) {
            local_100 = local_90.left;
            local_fc = local_94 + -1;
            local_f8 = local_90.right;
            *(LONG *)(local_b0 + 0x44) = local_90.left;
            *(int *)(local_b0 + 0x48) = local_fc;
            *(LONG *)(local_b0 + 0x4c) = local_90.right;
            *(int *)(local_b0 + 0x50) = local_fc;
            puVar9 = *(undefined4 **)(local_b0 + 0x10);
            local_f4 = local_fc;
            while (puVar9 != (undefined4 *)0x0) {
              if (puVar9 == (undefined4 *)0x0) goto LAB_100ef92c;
              piVar1 = puVar9 + 2;
              puVar9 = (undefined4 *)*puVar9;
              if (*(int *)(*piVar1 + 0x2c) == 0) {
                SetRectEmpty((LPRECT)(*piVar1 + 0xc));
              }
            }
          }
          iVar11 = *(int *)(this + 0x39c);
          if (iVar11 == -1) {
            pCVar2 = CMFCVisualManager::GetInstance();
            iVar11 = *(int *)(pCVar2 + 0xa4);
          }
          local_94 = local_94 + iVar11;
          puVar9 = local_b4;
          iVar11 = local_cc;
        }
      }
      if (param_1 == 0) {
        iVar7 = *(int *)(this + 0x470);
        do {
          if (iVar7 == 0) goto LAB_100f01e1;
          if (iVar7 == 0) goto LAB_100ef92c;
          iVar4 = *(int *)(iVar7 + 8);
          iVar7 = *(int *)(iVar7 + 4);
        } while (*(int *)(iVar4 + 4) != iVar11);
        if (((*(int *)(iVar4 + 0x28) != 0) && (*(int *)(iVar4 + 0x18) != 0)) &&
           (*(int *)(this + 900) == 0)) {
          iVar11 = *(int *)(iVar4 + 0x14);
          do {
            if (iVar11 == 0) goto LAB_100f01e1;
            if (iVar11 == 0) goto LAB_100ef92c;
            piVar1 = (int *)(iVar11 + 8);
            iVar11 = *(int *)(iVar11 + 4);
          } while (*(int *)(*piVar1 + 0x34) == 0);
          local_a4 = (CWnd *)(local_90.bottom - *(int *)(iVar4 + 0x50));
          if (0 < (int)local_a4) {
            puVar9 = *(undefined4 **)(iVar4 + 0x10);
            while (puVar9 != (undefined4 *)0x0) {
              if (puVar9 == (undefined4 *)0x0) goto LAB_100ef92c;
              piVar1 = puVar9 + 2;
              puVar9 = (undefined4 *)*puVar9;
              if (*(int *)(*piVar1 + 0x34) != 0) {
                OffsetRect((LPRECT)(*piVar1 + 0xc),0,(int)local_a4);
              }
            }
            OffsetRect((LPRECT)(iVar4 + 0x34),0,(int)local_a4);
            OffsetRect((LPRECT)(iVar4 + 0x44),0,(int)local_a4);
          }
        }
LAB_100f01e1:
        puVar9 = *(undefined4 **)(this + 0x46c);
        while (puVar9 != (undefined4 *)0x0) {
          if (puVar9 == (undefined4 *)0x0) goto LAB_100ef92c;
          iVar11 = puVar9[2];
          local_b4 = (undefined4 *)*puVar9;
          puVar9 = local_b4;
          if (*(int *)(iVar11 + 4) == local_cc) {
            if (((*(int *)(this + 0x350) == 0) || (*(int *)(iVar11 + 0x30) == 0)) ||
               (local_a8 = (CPen *)0x1, *(int *)(*(int *)(iVar11 + 8) + -0xc) == 0)) {
              local_a8 = (CPen *)0x0;
            }
            if (((*(int *)(this + 0x360) == 0) || (iVar11 != *(int *)(this + 0x520))) ||
               (local_ac = (undefined4 *)0x1, *(int *)(this + 0x3f8) < 1)) {
              local_ac = (undefined4 *)0x0;
            }
            local_9c = *(undefined4 **)(iVar11 + 0x10);
            while (puVar9 = local_b4, local_9c != (undefined4 *)0x0) {
              if (local_9c == (undefined4 *)0x0) goto LAB_100ef92c;
              iVar11 = local_9c[2];
              local_9c = (undefined4 *)*local_9c;
              if (*(HWND__ **)(iVar11 + 0x2c) != (HWND__ *)0x0) {
                local_a4 = CWnd::FromHandle(*(HWND__ **)(iVar11 + 0x2c));
                if (((local_a8 == (CPen *)0x0) || (local_ac != (undefined4 *)0x0)) &&
                   (*(int *)(iVar11 + 0x34) != 0)) {
                  BVar8 = IsRectEmpty((RECT *)(iVar11 + 0xc));
                  if (BVar8 != 0) goto LAB_100f02ec;
                  iVar7 = ((RECT *)(iVar11 + 0xc))->left;
                  CWnd::SetWindowPos(local_a4,(CWnd *)0x0,iVar7,*(int *)(iVar11 + 0x10),
                                     *(int *)(iVar11 + 0x14) - iVar7,
                                     *(int *)(iVar11 + 0x18) - *(int *)(iVar11 + 0x10),0x14);
                  iVar11 = 4;
                }
                else {
LAB_100f02ec:
                  iVar11 = 0;
                }
                CWnd::ShowWindow(local_a4,iVar11);
              }
            }
          }
        }
      }
      CDC::SelectObject((CDC *)local_c8,local_d8);
      if (*(int *)(this + 0x39c) == -1) {
        CMFCVisualManager::GetInstance();
      }
      if (*(int *)(this + 0x394) == -1) {
        CMFCVisualManager::GetInstance();
      }
      local_8 = 0xffffffff;
      CClientDC::~CClientDC((CClientDC *)local_c8);
    }
  }
  iVar11 = FUN_100f90cf();
  return iVar11;
}

