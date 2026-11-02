// rea decompile_all
// name: CMFCVisualManager::OnDrawTab
// address: 0x100348c1
// body: available
// range: 0x100348c1-0x10035ac5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100353a7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawTab(class CDC *,class
   CRect,int,int,class CMFCBaseTabCtrl const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawTab
          (undefined4 param_1_00,CDC *param_1,int *param_3,undefined **param_4,int *param_5,
          undefined **param_6,int param_7,int param_8,int *param_9)

{
  tagPOINT tVar1;
  tagPOINT tVar2;
  tagPOINT tVar3;
  tagPOINT tVar4;
  tagPOINT tVar5;
  tagPOINT tVar6;
  tagPOINT tVar7;
  tagPOINT tVar8;
  tagPOINT tVar9;
  tagPOINT tVar10;
  tagPOINT tVar11;
  tagPOINT tVar12;
  tagPOINT tVar13;
  tagPOINT tVar14;
  tagPOINT tVar15;
  tagPOINT tVar16;
  tagPOINT tVar17;
  tagPOINT tVar18;
  int iVar19;
  __POSITION *p_Var20;
  int *piVar21;
  uint uVar22;
  int *piVar23;
  HRGN pHVar24;
  LONG *pLVar25;
  CImageList *pCVar26;
  CPen *pCVar27;
  int iVar28;
  undefined **ppuVar29;
  bool bVar30;
  undefined **local_118;
  undefined4 local_114;
  undefined **local_110;
  CPen *local_10c;
  undefined **local_108;
  int *local_104;
  undefined **local_100;
  int *local_fc;
  undefined **local_f8;
  HBRUSH local_f4;
  undefined **local_f0;
  undefined4 local_ec;
  undefined **local_e8 [2];
  int *local_e0;
  __POSITION *local_dc;
  int *local_d8;
  POINT *local_d4;
  undefined **local_d0;
  undefined **local_cc;
  __POSITION *local_c8;
  RECT local_c4;
  tagRECT local_b4;
  int local_a4;
  undefined **local_a0;
  int *local_9c;
  undefined **local_98;
  tagRECT local_94;
  tagRECT local_84;
  POINT local_74;
  int *local_6c;
  undefined **local_68;
  int local_64;
  undefined **local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined **local_50;
  int local_4c;
  undefined **local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  undefined **local_38;
  undefined8 local_34;
  int *local_2c;
  undefined **local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar21 = param_9;
  uStack_4 = 0x108;
  local_8 = 0x100348d0;
  local_e0 = param_9;
  local_cc = (undefined **)(**(code **)(*param_9 + 0x1d8))();
  local_c4.left = 0;
  local_c4.top = 0;
  local_c4.right = 0;
  local_c4.bottom = 0;
  (**(code **)(*(int *)param_1 + 0x50))();
  iVar19 = (**(code **)(*piVar21 + 0x27c))();
  if (iVar19 == 0) {
    iVar19 = (**(code **)(*piVar21 + 0x28c))();
    if (iVar19 == 0) {
      local_fc = (int *)0x0;
      local_100 = CRgn::vftable;
      local_8 = 5;
      local_a4 = 0;
      local_a0 = (undefined **)0x0;
      local_9c = (int *)0x0;
      local_98 = (undefined **)0x0;
      (**(code **)(*piVar21 + 0x17c))();
      local_d0 = (undefined **)0x0;
      iVar19 = (**(code **)(*piVar21 + 0x284))();
      if ((iVar19 == 0) && (iVar19 = (**(code **)(*piVar21 + 0x288))(), iVar19 == 0)) {
        local_c8 = (__POSITION *)0x0;
LAB_10034f91:
        iVar19 = 0;
      }
      else {
        local_c8 = (__POSITION *)0x1;
        if ((param_7 == 0) ||
           ((param_8 != 0 || (iVar19 = (**(code **)(*piVar21 + 0x288))(), iVar19 != 0))))
        goto LAB_10034f91;
        iVar19 = (int)param_6 - (int)param_4;
      }
      if (((int)local_9c < iVar19 + 10 + (int)param_3) || ((int)param_5 + -10 <= local_a4)) {
        local_100 = CRgn::vftable;
        pCVar26 = (CImageList *)&local_100;
        goto LAB_10035ab5;
      }
      local_dc = (__POSITION *)(**(code **)(*piVar21 + 0x288))();
      if ((param_8 == 0) || (local_c8 != (__POSITION *)0x0)) {
LAB_10034ff2:
        if (((local_cc != (undefined **)0xffffffff) || (local_c8 != (__POSITION *)0x0)) ||
           (local_d8[0x24] != 0)) {
LAB_10035017:
          local_ec = 0;
          local_f0 = CRgn::vftable;
          local_8._0_1_ = 6;
          ppuVar29 = local_cc;
          if (local_cc == (undefined **)0xffffffff) {
            ppuVar29 = DAT_10166ab4;
          }
          CBrush::CBrush((CBrush *)&local_f8,(ulong)ppuVar29);
          local_84.left = (LONG)param_3;
          local_84.top = (LONG)param_4;
          local_84.right = (LONG)param_5;
          local_8 = CONCAT31(local_8._1_3_,7);
          local_84.bottom = (LONG)param_6;
          if (local_c8 == (__POSITION *)0x0) {
            InflateRect(&local_84,-1,0);
            if (local_e0[0x21] == 0) {
              local_84.bottom = local_84.bottom - 1;
            }
            else {
              local_84.top = local_84.top + 1;
            }
            if ((int)local_9c <= local_84.right) {
              local_84.right = (LONG)local_9c;
            }
          }
          else {
            local_74.x = (LONG)param_3;
            local_6c = param_3;
            local_5c = (int)param_3 + ((int)param_6 - (int)param_4);
            local_cc = (undefined **)0x0;
            local_54 = local_5c + 4;
            local_64 = (int)param_3 + 2;
            local_44 = param_5;
            local_3c = param_5;
            local_58 = (int)param_4 + 2U;
            local_40 = (int)param_4 + 2U;
            iVar19 = local_e0[0x21];
            local_74.y = (LONG)param_6;
            local_68 = param_6;
            local_60 = param_6;
            local_50 = param_4;
            local_4c = (int)param_5 + -2;
            local_48 = param_4;
            local_38 = param_6;
            do {
              if ((int)local_9c < (&local_74)[(int)local_cc].x) {
                (&local_74)[(int)local_cc].x = (LONG)local_9c;
                local_d0 = (undefined **)0x1;
              }
              if (iVar19 == 0) {
                (&local_74)[(int)local_cc].y =
                     (int)param_4 + (-1 - (&local_74)[(int)local_cc].y) + (int)param_6;
              }
              local_cc = (undefined **)((int)local_cc + 1);
            } while ((int)local_cc < 8);
            pHVar24 = CreatePolygonRgn(&local_74,8,2);
            CMenu::Attach((CMenu *)&local_f0,(HMENU__ *)pHVar24);
            CDC::SelectClipRgn(param_1,(CRgn *)&local_f0);
          }
          (**(code **)(*local_d8 + 0xf8))
                    (param_1,local_84.left,local_84.top,local_84.right,local_84.bottom);
          CDC::SelectClipRgn(param_1,(CRgn *)0x0);
          piVar21 = local_e0;
          if (local_c8 != (__POSITION *)0x0) {
            local_b4.left = 0;
            local_b4.top = 0;
            local_b4.right = 0;
            local_b4.bottom = 0;
            GetClientRect((HWND)local_e0[8],&local_b4);
            local_b4.right = local_a4 + -1;
            CDC::ExcludeClipRect(param_1,&local_b4);
            if (((0 < param_7) && (param_8 == 0)) &&
               (iVar19 = (**(code **)(*piVar21 + 0x298))(), param_7 != iVar19)) {
              local_94.left = local_a4;
              local_94.top = (LONG)local_a0;
              local_94.right = local_84.left + local_84.bottom + (-10 - local_84.top);
              local_94.bottom = (LONG)local_98;
              iVar19 = (local_dc != (__POSITION *)0x0) + 1;
              if (local_e0[0x21] == 0) {
                local_94.top = (int)local_a0 - iVar19;
              }
              else {
                local_94.bottom = (int)local_98 + iVar19;
              }
              CDC::ExcludeClipRect(param_1,&local_94);
            }
            Polyline(*(HDC *)(param_1 + 4),&local_74,8);
            if (local_d0 != (undefined **)0x0) {
              CDC::MoveTo(param_1,(int)&local_94.right,(int)local_9c);
              CDC::LineTo(param_1,(int)local_9c,(int)param_6);
            }
            local_24.top = (LONG)local_a0;
            local_24.right = (LONG)local_9c;
            local_24.bottom = (LONG)local_98;
            local_24.left = local_84.right;
            CDC::ExcludeClipRect(param_1,&local_24);
          }
          local_8._0_1_ = 6;
          local_f8 = CBrush::vftable;
          CImageList::~CImageList((CImageList *)&local_f8);
          local_8 = CONCAT31(local_8._1_3_,5);
          local_f0 = CRgn::vftable;
          CImageList::~CImageList((CImageList *)&local_f0);
          piVar21 = local_e0;
        }
      }
      else {
        if (local_cc != (undefined **)0xffffffff) goto LAB_10035017;
        if (local_d8[0x24] != 0) goto LAB_10034ff2;
      }
      CPen::CPen((CPen *)&local_110,0,1,DAT_10166af4);
      local_8._0_1_ = 8;
      CPen::CPen((CPen *)&local_108,0,1,DAT_10166af0);
      local_8._0_1_ = 9;
      CPen::CPen((CPen *)local_e8,0,1,DAT_10166af8);
      local_8 = CONCAT31(local_8._1_3_,10);
      if (local_c8 == (__POSITION *)0x0) {
        if ((int)local_9c < (int)param_5) {
          local_24.left = (LONG)param_3;
          local_24.top = (LONG)param_4;
          local_24.bottom = (LONG)param_6;
          local_24.right = (LONG)local_9c;
          pHVar24 = CreateRectRgnIndirect(&local_24);
          CMenu::Attach((CMenu *)&local_100,(HMENU__ *)pHVar24);
          CDC::SelectClipRgn(param_1,(CRgn *)&local_100);
          piVar21 = local_e0;
        }
        if (piVar21[0x21] != 0) {
          pCVar27 = (CPen *)local_e8;
          if (local_d8[0x25] == 0) {
            pCVar27 = (CPen *)&local_108;
          }
          local_d4 = (POINT *)CDC::SelectObject(param_1,pCVar27);
          if (local_d4 == (POINT *)0x0) goto LAB_100353a7;
          CDC::MoveTo(param_1,(int)&local_94.right,(int)param_5);
          CDC::LineTo(param_1,(int)param_5,(int)param_4 + 2);
          CDC::LineTo(param_1,(int)param_5 + -2,(int)param_4);
          if (local_d8[0x25] != 0) {
            CDC::SelectObject(param_1,(CPen *)&local_110);
          }
          CDC::LineTo(param_1,(int)param_3 + 2,(int)param_4);
          CDC::LineTo(param_1,(int)param_3,(int)param_4 + 2);
          CDC::LineTo(param_1,(int)param_3,(int)param_6);
          if (local_d8[0x25] == 0) goto LAB_10035787;
          CDC::SelectObject(param_1,(CPen *)&local_108);
          CDC::MoveTo(param_1,(int)&local_94.right,(int)param_5 + -1);
          piVar23 = param_5;
          ppuVar29 = (undefined **)((int)param_4 + 1);
          goto LAB_1003577e;
        }
        local_d4 = (POINT *)CDC::SelectObject(param_1,(CPen *)&local_110);
        if (local_d4 == (POINT *)0x0) {
LAB_100353a7:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        if (local_d8[0x25] == 0) {
          CDC::SelectObject(param_1,(CPen *)&local_108);
        }
        CDC::MoveTo(param_1,(int)&local_94.right,(int)param_3);
        CDC::LineTo(param_1,(int)param_3,(int)param_6 - 2);
        if (local_d8[0x25] != 0) {
          CDC::SelectObject(param_1,(CPen *)local_e8);
        }
        CDC::LineTo(param_1,(int)param_3 + 2,(int)param_6);
        CDC::LineTo(param_1,(int)param_5 + -2,(int)param_6);
        CDC::LineTo(param_1,(int)param_5,(int)param_6 - 2);
        CDC::LineTo(param_1,(int)param_5,(int)param_4 - 1);
        CDC::SelectObject(param_1,(CPen *)&local_108);
        if (local_d8[0x25] != 0) {
          CDC::MoveTo(param_1,(int)&local_94.right,(int)param_3 + 3);
          CDC::LineTo(param_1,(int)param_5 + -2,(int)param_6 - 1);
          CDC::LineTo(param_1,(int)param_5 + -1,(int)param_6 - 2);
          piVar23 = param_5;
          ppuVar29 = (undefined **)((int)param_4 - 1);
          goto LAB_1003577e;
        }
      }
      else {
        local_d4 = (POINT *)CDC::SelectObject(param_1,(CPen *)&local_110);
        if (local_d4 == (POINT *)0x0) goto LAB_100353a7;
        if (piVar21[0x21] == 0) {
          if (local_d0 != (undefined **)0x0) goto LAB_10035787;
          local_cc = local_38;
          if (param_8 != 0) {
            local_cc = (undefined **)((int)local_38 - 1);
          }
          CDC::MoveTo(param_1,(int)&local_94.right,(int)local_44 + -1);
          piVar23 = local_3c;
          ppuVar29 = local_cc;
        }
        else {
          CDC::MoveTo(param_1,(int)&local_94.right,local_64 + 1);
          CDC::LineTo(param_1,local_5c + 1,local_58);
          CDC::MoveTo(param_1,(int)&local_94.right,local_5c + 1);
          CDC::LineTo(param_1,local_5c + 2,local_58);
          CDC::MoveTo(param_1,(int)&local_94.right,local_5c + 2);
          CDC::LineTo(param_1,local_5c + 3,local_58);
          CDC::MoveTo(param_1,(int)&local_94.right,local_54 + -1);
          CDC::LineTo(param_1,local_4c + 1,(int)local_48 + 1);
          if (((param_8 == 0) && (local_d0 == (undefined **)0x0)) && (local_d8[0x25] != 0)) {
            CDC::SelectObject(param_1,(CPen *)&local_108);
            CDC::MoveTo(param_1,(int)&local_94.right,(int)local_44 + -2);
            CDC::LineTo(param_1,(int)local_44 + -1,local_40 + -1);
          }
          CDC::MoveTo(param_1,(int)&local_94.right,(int)local_44 + -1);
          piVar23 = local_3c;
          ppuVar29 = local_38;
        }
LAB_1003577e:
        CDC::LineTo(param_1,(int)piVar23 + -1,(int)ppuVar29);
      }
LAB_10035787:
      if (param_8 != 0) {
        local_84.top = (LONG)param_6;
        if (piVar21[0x21] == 0) {
          local_84.top = (LONG)((int)param_4 - 2);
        }
        local_84.right = (LONG)param_5;
        local_84.bottom = local_84.top + 2;
        local_84.left = (LONG)param_3;
        local_cc = (undefined **)(**(code **)(*piVar21 + 0x1d8))();
        if (local_c8 == (__POSITION *)0x0) {
LAB_10035809:
          if (local_cc == (undefined **)0xffffffff) {
            FillRect(*(HDC *)(param_1 + 4),&local_84,DAT_10166b6c);
            goto LAB_10035860;
          }
        }
        else {
          if (local_dc == (__POSITION *)0x0) {
            OffsetRect(&local_84,1,0);
            local_84.left = local_84.left + 1;
          }
          else {
            local_84.left = local_84.left + 3;
          }
          if (local_cc == (undefined **)0xffffffff) {
            local_cc = DAT_10166b04;
            goto LAB_10035809;
          }
        }
        CBrush::CBrush((CBrush *)&local_f8,(ulong)local_cc);
        FillRect(*(HDC *)(param_1 + 4),&local_84,local_f4);
        local_f8 = CBrush::vftable;
        CImageList::~CImageList((CImageList *)&local_f8);
      }
LAB_10035860:
      CDC::SelectObject(param_1,(CPen *)local_d4);
      if (local_c8 != (__POSITION *)0x0) {
        iVar19 = (**(code **)(*piVar21 + 0x288))();
        if ((iVar19 == 0) || (param_8 == 0)) {
          local_cc = (undefined **)((int)param_6 - (int)param_4);
        }
        else {
          iVar19 = ((int)param_6 - (int)param_4) * 3;
          local_cc = (undefined **)((int)(iVar19 + (iVar19 >> 0x1f & 3U)) >> 2);
        }
        iVar28 = (**(code **)(*piVar21 + 0x288))();
        iVar19 = DAT_10161744;
        if ((iVar28 != 0) && (param_8 != 0)) {
          iVar19 = (int)(DAT_10161744 * 3 + (DAT_10161744 * 3 >> 0x1f & 3U)) >> 2;
        }
        param_3 = (int *)((int)param_3 + (int)local_cc);
        param_5 = (int *)((int)param_5 - iVar19);
        iVar19 = (**(code **)(*piVar21 + 0x288))();
        if (((iVar19 != 0) && (param_8 != 0)) &&
           (iVar19 = (**(code **)(*piVar21 + 0x23c))(), iVar19 != 0)) {
          OffsetRect((LPRECT)&param_3,DAT_10161744,0);
        }
      }
      CDC::SelectClipRgn(param_1,(CRgn *)0x0);
      local_8._0_1_ = 9;
      local_e8[0] = CPen::vftable;
      CImageList::~CImageList((CImageList *)local_e8);
      local_8._0_1_ = 8;
      local_108 = CPen::vftable;
      CImageList::~CImageList((CImageList *)&local_108);
      local_8 = CONCAT31(local_8._1_3_,5);
      local_110 = CPen::vftable;
      CImageList::~CImageList((CImageList *)&local_110);
      local_100 = CRgn::vftable;
      pCVar26 = (CImageList *)&local_100;
      goto LAB_10035974;
    }
    local_34._4_4_ = CList<tagPOINT,tagPOINT>::vftable;
    local_24.left = 0;
    local_24.top = 0;
    local_28 = (undefined **)0x0;
    local_2c = (int *)0x0;
    local_24.right = 0;
    local_24.bottom = 10;
    local_8 = 1;
    tVar1.y = (LONG)param_4;
    tVar1.x = (LONG)param_3;
    p_Var20 = CList<tagPOINT,tagPOINT>::AddHead
                        ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),tVar1);
    tVar2.y = (int)param_4 + 2;
    tVar2.x = (LONG)param_3;
    local_dc = CList<tagPOINT,tagPOINT>::InsertAfter
                         ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),p_Var20,tVar2);
    tVar3.y = (LONG)param_4;
    tVar3.x = (LONG)param_5;
    p_Var20 = CList<tagPOINT,tagPOINT>::AddTail
                        ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),tVar3);
    tVar4.y = (int)param_4 + 2;
    tVar4.x = (LONG)param_5;
    local_d4 = (POINT *)CList<tagPOINT,tagPOINT>::InsertBefore
                                  ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),p_Var20,tVar4);
    iVar28 = (int)param_3 + 1;
    local_c8 = (__POSITION *)((int)param_4 + 2);
    iVar19 = (int)param_5 + -1;
    if ((int)local_c8 < (int)(param_6 + -1)) {
      local_d0 = param_4 + 1;
      do {
        tVar5.y = (LONG)local_c8;
        tVar5.x = iVar28;
        p_Var20 = CList<tagPOINT,tagPOINT>::InsertAfter
                            ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),local_dc,tVar5);
        tVar6.y = (LONG)local_d0;
        tVar6.x = iVar28;
        local_dc = CList<tagPOINT,tagPOINT>::InsertAfter
                             ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),p_Var20,tVar6);
        tVar7.y = (LONG)local_c8;
        tVar7.x = iVar19;
        p_Var20 = CList<tagPOINT,tagPOINT>::InsertBefore
                            ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),(__POSITION *)local_d4
                             ,tVar7);
        tVar8.y = (LONG)local_d0;
        tVar8.x = iVar19;
        local_d4 = (POINT *)CList<tagPOINT,tagPOINT>::InsertBefore
                                      ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),p_Var20,
                                       tVar8);
        local_c8 = local_c8 + 2;
        local_d0 = (undefined **)((int)local_d0 + 2);
        iVar28 = iVar28 + 1;
        iVar19 = iVar19 + -1;
      } while ((int)local_c8 < (int)(param_6 + -1));
    }
    if (local_e0[0x21] == 1) {
      iVar28 = iVar28 + -1;
      iVar19 = iVar19 + 1;
    }
    local_fc = (int *)(iVar28 + -1);
    local_104 = (int *)(iVar19 + 1);
    if ((int)local_c8 < (int)((int)param_6 - 1U)) {
      local_d0 = (undefined **)(iVar28 + 1);
      local_c8 = local_c8 + 1;
      do {
        tVar9.y = (LONG)(local_c8 + -1);
        tVar9.x = iVar28;
        p_Var20 = CList<tagPOINT,tagPOINT>::InsertAfter
                            ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),local_dc,tVar9);
        tVar10.y = (LONG)local_c8;
        tVar10.x = (LONG)local_d0;
        local_dc = CList<tagPOINT,tagPOINT>::InsertAfter
                             ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),p_Var20,tVar10);
        tVar11.y = (LONG)(local_c8 + -1);
        tVar11.x = iVar19;
        p_Var20 = CList<tagPOINT,tagPOINT>::InsertBefore
                            ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),(__POSITION *)local_d4
                             ,tVar11);
        tVar12.y = (LONG)local_c8;
        tVar12.x = iVar19 + -1;
        local_d4 = (POINT *)CList<tagPOINT,tagPOINT>::InsertBefore
                                      ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),p_Var20,
                                       tVar12);
        if (local_c8 + -1 == (__POSITION *)((int)param_6 - 2U)) {
          tVar13.y = (LONG)local_c8;
          tVar13.x = (LONG)local_d0;
          p_Var20 = CList<tagPOINT,tagPOINT>::InsertAfter
                              ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),local_dc,tVar13);
          tVar14.y = (LONG)local_c8;
          tVar14.x = (int)local_d0 + 2;
          local_dc = CList<tagPOINT,tagPOINT>::InsertAfter
                               ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),p_Var20,tVar14);
          tVar15.y = (LONG)local_c8;
          tVar15.x = iVar19;
          p_Var20 = CList<tagPOINT,tagPOINT>::InsertBefore
                              ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),
                               (__POSITION *)local_d4,tVar15);
          tVar16.y = (LONG)local_c8;
          tVar16.x = iVar19 + -2;
          local_d4 = (POINT *)CList<tagPOINT,tagPOINT>::InsertBefore
                                        ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),p_Var20,
                                         tVar16);
        }
        iVar28 = iVar28 + 1;
        local_d0 = (undefined **)((int)local_d0 + 1);
        iVar19 = iVar19 + -1;
        p_Var20 = local_c8 + 1;
        bVar30 = (int)local_c8 < (int)((int)param_6 - 1U);
        local_c8 = p_Var20;
      } while (bVar30);
    }
    tVar17.y = (LONG)param_6;
    tVar17.x = iVar28 + 2;
    CList<tagPOINT,tagPOINT>::InsertAfter
              ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),local_dc,tVar17);
    tVar18.y = (LONG)param_6;
    tVar18.x = iVar19 + -2;
    CList<tagPOINT,tagPOINT>::InsertBefore
              ((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4),(__POSITION *)local_d4,tVar18);
    local_d4 = FUN_1000858a(-(uint)((int)((ulonglong)(uint)local_24.left * 8 >> 0x20) != 0) |
                            (uint)((ulonglong)(uint)local_24.left * 8));
    if (local_2c != (int *)0x0) {
      pLVar25 = &local_d4->y;
      piVar21 = local_2c;
      do {
        piVar23 = (int *)*piVar21;
        ((POINT *)(pLVar25 + -1))->x = piVar21[2];
        *pLVar25 = piVar21[3];
        if (local_e0[0x21] == 1) {
          *pLVar25 = ((int)param_4 - *pLVar25) + (int)param_6;
        }
        pLVar25 = pLVar25 + 2;
        piVar21 = piVar23;
      } while (piVar23 != (int *)0x0);
    }
    local_ec = 0;
    local_f0 = CRgn::vftable;
    local_8._0_1_ = 2;
    pHVar24 = CreatePolygonRgn(local_d4,local_24.left,2);
    CMenu::Attach((CMenu *)&local_f0,(HMENU__ *)pHVar24);
    CDC::SelectClipRgn(param_1,(CRgn *)&local_f0);
    ppuVar29 = local_cc;
    if (local_cc == (undefined **)0xffffffff) {
      ppuVar29 = DAT_10166ab4;
    }
    CBrush::CBrush((CBrush *)&local_f8,(ulong)ppuVar29);
    local_8._0_1_ = 3;
    (**(code **)(*local_d8 + 0xf8))(param_1,param_3,param_4,param_5,param_6);
    CDC::SelectClipRgn(param_1,(CRgn *)0x0);
    CPen::CPen((CPen *)local_e8,0,1,DAT_10166af0);
    local_8 = CONCAT31(local_8._1_3_,4);
    local_10c = CDC::SelectObject(param_1,(CPen *)local_e8);
    local_cc = (undefined **)0x0;
    if (0 < local_24.left) {
      pLVar25 = &local_d4[-1].y;
      do {
        uVar22 = (uint)local_cc & 0x80000001;
        bVar30 = uVar22 == 0;
        if ((int)uVar22 < 0) {
          bVar30 = (uVar22 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (!bVar30) {
          local_d0 = (undefined **)pLVar25[1];
          ppuVar29 = (undefined **)((POINT *)(pLVar25 + -1))->x;
          local_c8 = (__POSITION *)*pLVar25;
          local_dc = (__POSITION *)pLVar25[2];
          iVar19 = ((int)param_3 + (int)param_5) / 2;
          if ((iVar19 < (int)ppuVar29) && (iVar19 < (int)local_d0)) {
            ppuVar29 = (undefined **)((int)ppuVar29 + -1);
            local_d0 = (undefined **)((int)local_d0 + -1);
          }
          if ((int)local_dc < (int)local_c8) {
            CDC::MoveTo(param_1,(int)&local_94.right,(int)local_d0);
            p_Var20 = local_c8;
          }
          else {
            CDC::MoveTo(param_1,(int)&local_9c,(int)ppuVar29);
            ppuVar29 = local_d0;
            p_Var20 = local_dc;
          }
          CDC::LineTo(param_1,(int)ppuVar29,(int)p_Var20);
        }
        local_cc = (undefined **)((int)local_cc + 1);
        pLVar25 = pLVar25 + 2;
      } while ((int)local_cc < local_24.left);
    }
    FUN_100085b9(local_d4);
    CDC::SelectObject(param_1,local_10c);
    param_3 = local_fc;
    param_5 = local_104;
    local_8._0_1_ = 3;
    local_e8[0] = CPen::vftable;
    CImageList::~CImageList((CImageList *)local_e8);
    local_8._0_1_ = 2;
    local_f8 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_f8);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_f0 = CRgn::vftable;
    CImageList::~CImageList((CImageList *)&local_f0);
    local_8 = 0xffffffff;
    local_34._4_4_ = CList<tagPOINT,tagPOINT>::vftable;
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)((int)&local_34 + 4));
  }
  else {
    iVar19 = (**(code **)(*piVar21 + 0x178))();
    iVar19 = iVar19 / 2;
    if (piVar21[0x21] == 0) {
      local_34._0_4_ = param_3;
      local_2c = (int *)((int)param_3 + iVar19);
      param_6 = (undefined **)((int)param_6 - 1);
      local_24.left = (int)param_5 - iVar19;
      local_24.right = (LONG)param_5;
    }
    else {
      local_34._0_4_ = (int *)((int)param_3 + iVar19);
      local_2c = param_3;
      param_4 = (undefined **)((int)param_4 + 1);
      local_24.left = (LONG)param_5;
      local_24.right = (int)param_5 - iVar19;
      param_3 = (int *)((int)param_3 + 2);
    }
    pCVar27 = (CPen *)0x0;
    local_34._4_4_ = param_4;
    local_28 = param_6;
    local_24.top = (LONG)param_6;
    local_24.bottom = (LONG)param_4;
    CBrush::CBrush((CBrush *)local_e8,(ulong)local_cc);
    local_8 = 0;
    if ((param_8 == 0) && (local_cc != (undefined **)0xffffffff)) {
      pCVar27 = CDC::SelectObject(param_1,(CPen *)local_e8);
    }
    Polygon(*(HDC *)(param_1 + 4),(POINT *)&local_34,4);
    if (pCVar27 != (CPen *)0x0) {
      CDC::SelectObject(param_1,pCVar27);
    }
    local_e8[0] = CBrush::vftable;
    pCVar26 = (CImageList *)local_e8;
LAB_10035974:
    local_8 = 0xffffffff;
    CImageList::~CImageList(pCVar26);
  }
  piVar21 = local_e0;
  iVar19 = (**(code **)(*local_e0 + 0x1e0))();
  local_cc = (undefined **)0xffffffff;
  if ((param_8 == 0) && (iVar19 != -1)) {
    local_cc = (undefined **)(**(code **)(*(int *)param_1 + 0x30))();
  }
  iVar19 = (**(code **)(*piVar21 + 0x284))();
  if ((iVar19 != 0) || (iVar19 = (**(code **)(*piVar21 + 0x288))(), iVar19 != 0)) {
    local_b4.left = 0;
    local_b4.top = 0;
    local_b4.right = 0;
    local_b4.bottom = 0;
    (**(code **)(*piVar21 + 0x17c))();
    if ((int)(local_b4.right + -2) <= (int)param_5) {
      param_5 = (int *)(local_b4.right + -2);
    }
  }
  local_114 = 0;
  local_118 = CRgn::vftable;
  local_8 = 0xb;
  pHVar24 = CreateRectRgnIndirect(&local_c4);
  CMenu::Attach((CMenu *)&local_118,(HMENU__ *)pHVar24);
  CDC::SelectClipRgn(param_1,(CRgn *)&local_118);
  (**(code **)(*local_d8 + 0xfc))(param_1,param_3,param_4,param_5,param_6,param_7);
  if (local_cc != (undefined **)0xffffffff) {
    (**(code **)(*(int *)param_1 + 0x30))();
  }
  CDC::SelectClipRgn(param_1,(CRgn *)0x0);
  local_118 = CRgn::vftable;
  pCVar26 = (CImageList *)&local_118;
LAB_10035ab5:
  local_8 = 0xffffffff;
  CImageList::~CImageList(pCVar26);
  FUN_100f90cf();
  return;
}

