// rea decompile_all
// name: CMDIClientAreaWnd::UpdateMDITabbedGroups
// address: 0x1006528c
// body: available
// range: 0x1006528c-0x10065718 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10065692 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMDIClientAreaWnd::UpdateMDITabbedGroups(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMDIClientAreaWnd::UpdateMDITabbedGroups(CMDIClientAreaWnd *this,int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  CImageList *this_00;
  HWND pHVar3;
  CObject *pCVar4;
  CObject *this_01;
  CMFCTabCtrl *this_02;
  BOOL BVar5;
  ulong uVar6;
  undefined **ppuVar7;
  int iVar8;
  int *piVar9;
  CImageList *pCVar10;
  AFX_MODULE_STATE *pAVar11;
  HICON__ *pHVar12;
  CFrameWnd *pCVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _IMAGELIST *p_Var16;
  CImageList *local_2c;
  int local_28;
  HWND__ *local_24;
  int local_20;
  ushort *local_1c;
  int local_18;
  CObject *local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x10065298;
  if (*(int *)(this + 0x2910) == 0) {
    local_20 = 0;
    pHVar3 = GetWindow(*(HWND *)(this + 0x20),5);
    pCVar4 = (CObject *)CWnd::FromHandle(pHVar3);
    local_24 = (HWND__ *)0x0;
    while (local_14 = pCVar4, pCVar4 != (CObject *)0x0) {
      this_01 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,pCVar4);
      if (this_01 == (CObject *)0x0) {
        pHVar3 = GetWindow(*(HWND *)(pCVar4 + 0x20),2);
        pCVar4 = (CObject *)CWnd::FromHandle(pHVar3);
      }
      else {
        CWnd::ModifyStyle((CWnd *)this_01,DAT_101601d8 | 0x1080000,0,4);
        local_2c = (CImageList *)(**(code **)(*(int *)this_01 + 0x1d8))();
        (**(code **)(*(int *)this_01 + 0x1d0))(&local_1c);
        this_02 = *(CMFCTabCtrl **)(this_01 + 0x118);
        local_8 = 0;
        bVar2 = false;
        if (this_02 == (CMFCTabCtrl *)0x0) {
          if ((*(int *)(this_01 + 0x11c) == 0) && (local_2c != (CImageList *)0x0)) {
            if (*(int *)(this + 0x28dc) == 0) {
              this_02 = (CMFCTabCtrl *)(**(code **)(*(int *)this + 0x160))(0);
              CObList::AddTail((CObList *)(this + 0x28d0),(CObject *)this_02);
            }
            else {
              this_02 = (CMFCTabCtrl *)FUN_10062d9c((int)this);
              if (this_02 == (CMFCTabCtrl *)0x0) {
                this_02 = (CMFCTabCtrl *)
                          AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,
                                             *(CObject **)(*(int *)(this + 0x28d4) + 8));
              }
            }
            if (this_02 == (CMFCTabCtrl *)0x0) goto LAB_10065692;
            *(CMFCTabCtrl **)(this_01 + 0x118) = this_02;
            (**(code **)(*(int *)this_02 + 0x188))(local_14,local_1c,0xffffffff,1);
            BVar5 = IsWindowVisible(*(HWND *)(this_02 + 0x20));
            if (BVar5 == 0) {
              CWnd::ShowWindow((CWnd *)this_02,8);
            }
            if (local_14 == (CObject *)0x0) {
              local_24 = (HWND__ *)0x0;
            }
            else {
              local_24 = *(HWND__ **)(local_14 + 0x20);
            }
          }
        }
        else {
          if (local_14 == (CObject *)0x0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(undefined4 *)(local_14 + 0x20);
          }
          local_18 = (**(code **)(*(int *)this_02 + 0x218))(uVar14);
          if (-1 < local_18) {
            uVar6 = CWnd::GetExStyle((CWnd *)local_14);
            if ((uVar6 & 0x10000000) == 0) {
              (**(code **)(*(int *)this_02 + 0x194))(local_18,1);
              iVar8 = (**(code **)(*(int *)this_02 + 0x1a8))();
              if (iVar8 == 0) {
                RemoveTabGroup(this,this_02,0);
              }
              local_20 = 1;
              bVar2 = true;
            }
            else {
              ppuVar7 = FUN_1000ad47();
              FUN_10005e00(&local_28,(int *)ppuVar7);
              local_8 = CONCAT31(local_8._1_3_,1);
              (**(code **)(*(int *)this_02 + 0x1b8))(local_18,&local_28);
              iVar8 = FUN_10005720(&local_28,local_1c);
              if (iVar8 != 0) {
                (**(code **)(*(int *)this_02 + 0x1bc))(local_18,&local_1c);
                local_20 = 1;
              }
              local_8 = local_8 & 0xffffff00;
              FUN_10001030((undefined4 *)(local_28 + -0x10));
            }
          }
        }
        local_2c = (CImageList *)0x0;
        CMap<unsigned_int,unsigned_int,int,int>::Lookup
                  ((CMap<unsigned_int,unsigned_int,int,int> *)(this + 0x28ec),(uint)this_02,
                   (int *)&local_2c);
        this_00 = local_2c;
        if (local_2c != (CImageList *)0x0) {
          local_18 = -1;
          if (*(int *)(this + 0x28ac) == 0) {
            if (this_02 == (CMFCTabCtrl *)0x0) goto LAB_10065692;
            CMFCBaseTabCtrl::ResetImageList((CMFCBaseTabCtrl *)this_02);
            CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x2888));
            while( true ) {
              p_Var16 = *(_IMAGELIST **)(this_00 + 4);
              pAVar11 = AfxGetModuleState();
              iVar8 = CComCtlWrapper::_ImageList_GetImageCount
                                ((CComCtlWrapper *)**(undefined4 **)(pAVar11 + 0x78),p_Var16);
              if (iVar8 < 1) break;
              p_Var16 = *(_IMAGELIST **)(this_00 + 4);
              iVar8 = 0;
              pAVar11 = AfxGetModuleState();
              CComCtlWrapper::_ImageList_Remove
                        ((CComCtlWrapper *)**(undefined4 **)(pAVar11 + 0x78),p_Var16,iVar8);
            }
            iVar8 = CMDIChildWndEx::IsTaskbarTabsSupportEnabled((CMDIChildWndEx *)this_01);
            if (((iVar8 != 0) &&
                (iVar8 = CMDIChildWndEx::IsRegisteredWithTaskbarTabs((CMDIChildWndEx *)this_01),
                iVar8 != 0)) &&
               ((pHVar12 = (HICON__ *)(**(code **)(*(int *)this_01 + 0x1d4))(),
                pHVar12 != (HICON__ *)0x0 ||
                ((pCVar13 = CWnd::GetTopLevelFrame((CWnd *)this), pCVar13 != (CFrameWnd *)0x0 &&
                 (pHVar12 = CGlobalUtils::GetWndIcon
                                      ((CGlobalUtils *)&PTR_vftable_10160f68,(CWnd *)pCVar13),
                 pHVar12 != (HICON__ *)0x0)))))) {
              (**(code **)(*(int *)this_01 + 0x1e4))(pHVar12);
            }
            local_20 = 1;
          }
          else {
            local_2c = (CImageList *)(**(code **)(*(int *)this_01 + 0x1d4))();
            if (local_2c != (CImageList *)0x0) {
              iVar8 = CMap<unsigned_int,unsigned_int,int,int>::Lookup
                                ((CMap<unsigned_int,unsigned_int,int,int> *)(this_02 + 0xbc),
                                 (uint)local_2c,&local_18);
              if (iVar8 == 0) {
                local_18 = CImageList::Add(this_00,(HICON__ *)local_2c);
                piVar9 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                                   ((CMap<unsigned_int,unsigned_int,int,int> *)(this_02 + 0xbc),
                                    (uint)local_2c);
                *piVar9 = local_18;
              }
              pCVar10 = (CImageList *)(**(code **)(*(int *)this_02 + 0x238))();
              if (pCVar10 != this_00) {
                (**(code **)(*(int *)this_02 + 0x168))(*(undefined4 *)(this_00 + 4));
              }
            }
            if (!bVar2) {
              uVar14 = (**(code **)(*(int *)this_02 + 0x218))(*(undefined4 *)(this_01 + 0x20));
              iVar8 = (**(code **)(*(int *)this_02 + 0x1c0))(uVar14);
              if (iVar8 != local_18) {
                (**(code **)(*(int *)this_02 + 0x1c4))(uVar14,local_18);
              }
              iVar8 = CMDIChildWndEx::IsTaskbarTabsSupportEnabled((CMDIChildWndEx *)this_01);
              if ((iVar8 != 0) &&
                 (iVar8 = CMDIChildWndEx::IsRegisteredWithTaskbarTabs((CMDIChildWndEx *)this_01),
                 iVar8 != 0)) {
                (**(code **)(*(int *)this_01 + 0x1e4))(local_2c);
              }
            }
          }
        }
        pHVar3 = GetWindow(*(HWND *)(local_14 + 0x20),2);
        local_14 = (CObject *)CWnd::FromHandle(pHVar3);
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_1c + -8));
        pCVar4 = local_14;
      }
    }
    puVar15 = *(undefined4 **)(this + 0x28d4);
    while (puVar15 != (undefined4 *)0x0) {
      if (puVar15 == (undefined4 *)0x0) {
LAB_10065692:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = puVar15 + 2;
      puVar15 = (undefined4 *)*puVar15;
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,(CObject *)*puVar1);
      AdjustMDIChildren(this,(CMFCTabCtrl *)pCVar4);
    }
    if ((local_20 != 0) &&
       (pCVar13 = CWnd::GetParentFrame((CWnd *)this), pCVar13 != (CFrameWnd *)0x0)) {
      pCVar13 = CWnd::GetParentFrame((CWnd *)this);
      (**(code **)(*(int *)pCVar13 + 0x174))(1);
    }
    if (local_24 != (HWND__ *)0x0) {
      SetActiveTab(this,local_24);
    }
    if ((param_1 != 0) && (pCVar4 = FUN_10062d9c((int)this), pCVar4 != (CObject *)0x0)) {
      iVar8 = *(int *)pCVar4;
      uVar14 = (**(code **)(iVar8 + 0x208))();
      (**(code **)(iVar8 + 0x220))(uVar14);
    }
  }
  return;
}

