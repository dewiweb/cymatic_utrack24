// rea decompile_all
// name: CMDIClientAreaWnd::UpdateTabs
// address: 0x10065b9b
// body: available
// range: 0x10065b9b-0x10065ff4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMDIClientAreaWnd::UpdateTabs(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMDIClientAreaWnd::UpdateTabs(CMDIClientAreaWnd *this,int param_1)

{
  CMDIClientAreaWnd *pCVar1;
  int iVar2;
  HWND pHVar3;
  CObject *pCVar4;
  int *piVar5;
  AFX_MODULE_STATE *pAVar6;
  HICON__ *pHVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  ulong uVar10;
  int iVar11;
  CFrameWnd *pCVar12;
  undefined4 uVar13;
  uint uVar14;
  _IMAGELIST *p_Var15;
  int local_38;
  uint local_34;
  int local_30;
  CObject *local_2c;
  int local_28;
  int local_24;
  ushort *local_20;
  int local_1c;
  HICON__ *local_18;
  CObject *local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x10065ba7;
  if (*(int *)(this + 0x2910) == 0) {
    if (*(int *)(this + 0x2908) == 0) {
      pCVar1 = this + 0x74;
      if (((pCVar1 != (CMDIClientAreaWnd *)0x0) && (*(int *)(this + 0x94) != 0)) &&
         (*(int *)(this + 0x2878) != 0)) {
        local_24 = 0;
        iVar2 = (**(code **)(*(int *)pCVar1 + 0x1a8))();
        local_34 = (uint)(iVar2 == 0);
        pHVar3 = GetWindow(*(HWND *)(this + 0x20),5);
        local_14 = (CObject *)CWnd::FromHandle(pHVar3);
        uVar14 = (uint)(iVar2 == 0);
        if (local_14 != (CObject *)0x0) {
          do {
            pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,local_14);
            local_30 = 1;
            local_2c = pCVar4;
            if (pCVar4 == (CObject *)0x0) {
              iVar2 = CObject::IsKindOf(local_14,(CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4);
              if (iVar2 == 0) goto LAB_10065c49;
              pHVar3 = GetWindow(*(HWND *)(local_14 + 0x20),2);
              local_14 = (CObject *)CWnd::FromHandle(pHVar3);
            }
            else {
              local_30 = (**(code **)(*(int *)pCVar4 + 0x1d8))();
LAB_10065c49:
              local_1c = -1;
              if (*(int *)(this + 0x28ac) == 0) {
                (**(code **)(*(int *)pCVar1 + 0x170))();
                CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x2888));
                while( true ) {
                  p_Var15 = *(_IMAGELIST **)(this + 0x2884);
                  pAVar6 = AfxGetModuleState();
                  iVar2 = CComCtlWrapper::_ImageList_GetImageCount
                                    ((CComCtlWrapper *)**(undefined4 **)(pAVar6 + 0x78),p_Var15);
                  if (iVar2 < 1) break;
                  p_Var15 = *(_IMAGELIST **)(this + 0x2884);
                  iVar2 = 0;
                  pAVar6 = AfxGetModuleState();
                  CComCtlWrapper::_ImageList_Remove
                            ((CComCtlWrapper *)**(undefined4 **)(pAVar6 + 0x78),p_Var15,iVar2);
                }
                if ((((pCVar4 != (CObject *)0x0) &&
                     (iVar2 = CMDIChildWndEx::IsTaskbarTabsSupportEnabled((CMDIChildWndEx *)pCVar4),
                     iVar2 != 0)) &&
                    (iVar2 = CMDIChildWndEx::IsRegisteredWithTaskbarTabs((CMDIChildWndEx *)pCVar4),
                    iVar2 != 0)) &&
                   ((pHVar7 = (HICON__ *)(**(code **)(*(int *)pCVar4 + 0x1d4))(),
                    pHVar7 != (HICON__ *)0x0 ||
                    ((pCVar12 = CWnd::GetTopLevelFrame((CWnd *)this), pCVar12 != (CFrameWnd *)0x0 &&
                     (pHVar7 = CGlobalUtils::GetWndIcon
                                         ((CGlobalUtils *)&PTR_vftable_10160f68,(CWnd *)pCVar12),
                     pHVar7 != (HICON__ *)0x0)))))) {
                  (**(code **)(*(int *)pCVar4 + 0x1e4))(pHVar7);
                }
              }
              else {
                if (pCVar4 == (CObject *)0x0) {
                  local_18 = (HICON__ *)SendMessageW(*(HWND *)(local_14 + 0x20),0x7f,0,0);
                  if (local_18 == (HICON__ *)0x0) {
                    local_18 = (HICON__ *)GetClassLongW(*(HWND *)(local_14 + 0x20),-0x22);
                    goto LAB_10065cbf;
                  }
                }
                else {
                  local_18 = (HICON__ *)(**(code **)(*(int *)pCVar4 + 0x1d4))();
LAB_10065cbf:
                  if (local_18 == (HICON__ *)0x0) goto LAB_10065ddc;
                }
                iVar2 = CMap<unsigned_int,unsigned_int,int,int>::Lookup
                                  ((CMap<unsigned_int,unsigned_int,int,int> *)(this + 0x2888),
                                   (uint)local_18,&local_1c);
                if (iVar2 == 0) {
                  local_1c = CImageList::Add((CImageList *)(this + 0x2880),local_18);
                  piVar5 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                                     ((CMap<unsigned_int,unsigned_int,int,int> *)(this + 0x2888),
                                      (uint)local_18);
                  *piVar5 = local_1c;
                  p_Var15 = *(_IMAGELIST **)(this + 0x2884);
                  pAVar6 = AfxGetModuleState();
                  iVar2 = CComCtlWrapper::_ImageList_GetImageCount
                                    ((CComCtlWrapper *)**(undefined4 **)(pAVar6 + 0x78),p_Var15);
                  pCVar4 = local_2c;
                  if (iVar2 == 1) {
                    uVar13 = 0;
                    if ((CImageList *)(this + 0x2880) != (CImageList *)0x0) {
                      uVar13 = *(undefined4 *)(this + 0x2884);
                    }
                    (**(code **)(*(int *)pCVar1 + 0x168))(uVar13);
                    pCVar4 = local_2c;
                  }
                }
                (**(code **)(*(int *)pCVar4 + 0x1e4))(local_18);
              }
LAB_10065ddc:
              ppuVar8 = FUN_1000ad47();
              FUN_10005e00(&local_20,(int *)ppuVar8);
              local_8 = 0;
              if (pCVar4 == (CObject *)0x0) {
                CWnd::GetWindowTextW
                          ((CWnd *)local_14,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_20);
              }
              else {
                puVar9 = (undefined4 *)(**(code **)(*(int *)pCVar4 + 0x1d0))(&local_38);
                local_8._0_1_ = 1;
                FUN_10007c90(&local_20,puVar9);
                local_8 = (uint)local_8._1_3_ << 8;
                FUN_10001030((undefined4 *)(local_38 + -0x10));
              }
              uVar13 = 0;
              if (local_14 != (CObject *)0x0) {
                uVar13 = *(undefined4 *)(local_14 + 0x20);
              }
              local_2c = (CObject *)(**(code **)(*(int *)pCVar1 + 0x218))(uVar13);
              if ((int)local_2c < 0) {
                if (((pCVar4 == (CObject *)0x0) || (*(int *)(pCVar4 + 0x11c) == 0)) &&
                   (local_30 != 0)) {
                  (**(code **)(*(int *)pCVar1 + 0x188))(local_14,local_20,local_1c,1);
                  iVar2 = *(int *)pCVar1;
                  iVar11 = (**(code **)(iVar2 + 0x1a8))();
                  (**(code **)(iVar2 + 0x210))(iVar11 + -1);
                  local_24 = 1;
                }
              }
              else {
                uVar10 = CWnd::GetExStyle((CWnd *)local_14);
                if ((uVar10 & 0x10000000) == 0) {
                  (**(code **)(*(int *)pCVar1 + 0x194))(local_2c,1);
                  local_24 = 1;
                }
                else {
                  ppuVar8 = FUN_1000ad47();
                  FUN_10005e00(&local_28,(int *)ppuVar8);
                  pCVar4 = local_2c;
                  local_8 = CONCAT31(local_8._1_3_,2);
                  (**(code **)(*(int *)pCVar1 + 0x1b8))(local_2c,&local_28);
                  iVar2 = FUN_10005720(&local_28,local_20);
                  if (iVar2 != 0) {
                    (**(code **)(*(int *)pCVar1 + 0x1bc))(pCVar4,&local_20);
                    local_24 = 1;
                  }
                  iVar2 = (**(code **)(*(int *)pCVar1 + 0x1c0))(pCVar4);
                  if (iVar2 != local_1c) {
                    (**(code **)(*(int *)pCVar1 + 0x1c4))(pCVar4,local_1c);
                    local_24 = 1;
                  }
                  local_8 = local_8 & 0xffffff00;
                  FUN_10001030((undefined4 *)(local_28 + -0x10));
                }
              }
              pHVar3 = GetWindow(*(HWND *)(local_14 + 0x20),2);
              local_14 = (CObject *)CWnd::FromHandle(pHVar3);
              local_8 = 0xffffffff;
              FUN_10001030((undefined4 *)(local_20 + -8));
            }
          } while (local_14 != (CObject *)0x0);
          uVar14 = local_34;
          if ((local_24 != 0) &&
             (pCVar12 = CWnd::GetParentFrame((CWnd *)this), uVar14 = local_34,
             pCVar12 != (CFrameWnd *)0x0)) {
            pCVar12 = CWnd::GetParentFrame((CWnd *)this);
            (**(code **)(*(int *)pCVar12 + 0x174))(1);
            uVar14 = local_34;
          }
        }
        if (param_1 != 0) {
          iVar2 = *(int *)pCVar1;
          uVar13 = (**(code **)(iVar2 + 0x208))();
          (**(code **)(iVar2 + 0x220))(uVar13);
        }
        if (((uVar14 != 0) && (iVar2 = (**(code **)(*(int *)pCVar1 + 0x1a8))(), 0 < iVar2)) ||
           (iVar2 = (**(code **)(*(int *)pCVar1 + 0x1a8))(), iVar2 == 0)) {
          pCVar12 = CWnd::GetParentFrame((CWnd *)this);
          (**(code **)(*(int *)pCVar12 + 0x174))(1);
          RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x507);
        }
      }
    }
    else {
      UpdateMDITabbedGroups(this,param_1);
    }
  }
  return;
}

