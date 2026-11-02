// rea decompile_all
// name: CMFCToolBarMenuButton::OnCalculateSize
// address: 0x1007e28d
// body: available
// range: 0x1007e28d-0x1007e530 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual struct tagSIZE __thiscall CMFCToolBarMenuButton::OnCalculateSize(class CDC
   *,class CSize const &,int)
   
   Library: Visual Studio 2010 Release */

tagSIZE __thiscall
CMFCToolBarMenuButton::OnCalculateSize
          (CMFCToolBarMenuButton *this,CDC *param_1,CSize *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  CFrameWnd *pCVar7;
  HWND pHVar8;
  LONG *pLVar9;
  CMFCVisualManager *pCVar10;
  LONG LVar11;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  tagSIZE tVar12;
  undefined8 uVar13;
  int in_stack_00000010;
  CDC local_28 [4];
  int local_24;
  undefined4 local_20;
  wchar_t *local_1c;
  undefined1 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x1007e299;
  *(int *)(this + 0xa0) = in_stack_00000010;
  if (*(int *)(this + 0x50) == 0) {
    LVar11 = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    goto LAB_1007e529;
  }
  local_14 = 0;
  if ((*(int *)(this + 0x90) != 0) || (*(int *)(this + 0x94) != 0)) {
    if (*(int *)(this + 0x94) == 0) {
      if (in_stack_00000010 == 0) {
        iVar2 = FUN_10037b18(&local_20);
        local_14 = *(int *)(iVar2 + 4);
      }
      else {
        piVar1 = (int *)FUN_10037b18((undefined4 *)local_28);
        local_14 = *piVar1;
      }
      if (DAT_10166e5c != 0) {
        local_14 = local_14 * 2;
      }
    }
    else {
      local_14 = DAT_10166c6c;
      if (in_stack_00000010 != 0) {
        local_14 = DAT_10166c74;
      }
    }
    local_14 = local_14 + -2;
  }
  if (((DAT_1016788c != 0) && (*(int *)(this + 0x94) != 0)) &&
     ((*(uint *)(this + 0x20) < 0xf000 || (0xf1ef < *(uint *)(this + 0x20))))) {
    iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x2c),L'\t',0);
    if (-1 < iVar2) {
      puVar3 = (undefined4 *)
               ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                         ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          (this + 0x2c),(int)&local_24);
      local_8 = 0;
      FUN_10007c90(this + 0x2c,puVar3);
      local_8 = 0xffffffff;
      FUN_10001030((undefined4 *)(local_24 + -0x10));
    }
    ppuVar4 = FUN_1000ad47();
    FUN_10005e00(&local_1c,(int *)ppuVar4);
    local_8 = 1;
    if (*(CWnd **)(this + 0x6c) == (CWnd *)0x0) {
      pCVar5 = AfxGetMainWnd();
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,(CObject *)pCVar5);
LAB_1007e3bf:
      if (pCVar6 != (CObject *)0x0) goto LAB_1007e3c5;
    }
    else {
      pCVar6 = (CObject *)DAT_10168578;
      if (DAT_10168578 == (CFrameWnd *)0x0) {
        pCVar6 = (CObject *)CWnd::GetTopLevelFrame(*(CWnd **)(this + 0x6c));
        goto LAB_1007e3bf;
      }
LAB_1007e3c5:
      iVar2 = CKeyboardManager::FindDefaultAccelerator
                        (*(uint *)(this + 0x20),
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_1c,(CFrameWnd *)pCVar6,1);
      if (iVar2 == 0) {
        pCVar7 = (CFrameWnd *)(**(code **)(*(int *)pCVar6 + 0x16c))();
        iVar2 = CKeyboardManager::FindDefaultAccelerator
                          (*(uint *)(this + 0x20),
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_1c,pCVar7,iVar2);
        if (iVar2 == 0) goto LAB_1007e40d;
      }
      ATL::CSimpleStringT<wchar_t,0>::AppendChar((CSimpleStringT<wchar_t,0> *)(this + 0x2c),L'\t');
      ATL::CSimpleStringT<wchar_t,0>::Append
                ((CSimpleStringT<wchar_t,0> *)(this + 0x2c),local_1c,*(int *)(local_1c + -6));
    }
LAB_1007e40d:
    local_8 = 0xffffffff;
    FUN_10001030((undefined4 *)(local_1c + -8));
  }
  local_1c = (wchar_t *)0x0;
  if (*(int *)(this + 0x20) == -2) {
    local_1c = (wchar_t *)(**(code **)(*(int *)param_2 + 0x28))(&DAT_10166bc4);
  }
  tVar12 = CMFCToolBarButton::OnCalculateSize((CMFCToolBarButton *)this,local_28,param_2,param_3);
  iVar2 = *(int *)tVar12.cx;
  local_24 = ((int *)tVar12.cx)[1];
  if (local_1c != (wchar_t *)0x0) {
    (**(code **)(*(int *)param_2 + 0x28))(local_1c);
  }
  pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_1012f74f_1_10161b40,
                              *(CObject **)(this + 0x6c));
  uVar13 = CONCAT44(extraout_EDX,local_24);
  if (pCVar6 != (CObject *)0x0) {
    uVar13 = (**(code **)(*(int *)pCVar6 + 0x354))();
    local_24 = (int)uVar13;
    if (*(int *)(pCVar6 + 0xd08) != 0) {
      pHVar8 = GetParent(*(HWND *)(pCVar6 + 0x20));
      pCVar5 = CWnd::FromHandle(pHVar8);
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCDropDownListBox_10138a40,
                                  (CObject *)pCVar5);
      uVar13 = CONCAT44(extraout_EDX_00,local_24);
      if (pCVar6 != (CObject *)0x0) {
        pLVar9 = (LONG *)(**(code **)(*(int *)pCVar6 + 0x210))(local_18,param_2,this,iVar2,local_24)
        ;
        LVar11 = *pLVar9;
        *(LONG *)(param_1 + 4) = pLVar9[1];
        *(LONG *)param_1 = LVar11;
        goto LAB_1007e529;
      }
    }
  }
  LVar11 = (LONG)((ulonglong)uVar13 >> 0x20);
  local_24 = (int)uVar13;
  if (in_stack_00000010 == 0) {
    local_24 = local_24 + local_14;
  }
  else {
    iVar2 = iVar2 + local_14;
  }
  if (*(int *)(this + 0x94) == 0) {
    pCVar10 = CMFCVisualManager::GetInstance();
    uVar13 = (**(code **)(*(int *)pCVar10 + 0x2d0))();
    LVar11 = (LONG)((ulonglong)uVar13 >> 0x20);
    if (in_stack_00000010 == 0) {
      local_24 = local_24 + (int)uVar13 * 2;
    }
    else {
      iVar2 = iVar2 + (int)uVar13 * 2;
    }
  }
  else {
    iVar2 = iVar2 + 6 + *(int *)param_3;
  }
  *(int *)param_1 = iVar2;
  *(int *)(param_1 + 4) = local_24;
LAB_1007e529:
  tVar12.cy = LVar11;
  tVar12.cx = (LONG)param_1;
  return tVar12;
}

