// rea decompile_all
// name: CMFCCustomizeMenuButton::OnCalculateSize
// address: 0x100d470b
// body: available
// range: 0x100d470b-0x100d49a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual struct tagSIZE __thiscall CMFCCustomizeMenuButton::OnCalculateSize(class CDC
   *,class CSize const &,int)
   
   Library: Visual Studio 2010 Release */

tagSIZE __thiscall
CMFCCustomizeMenuButton::OnCalculateSize
          (CMFCCustomizeMenuButton *this,CDC *param_1,CSize *param_2,int param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  HMODULE pHVar3;
  int iVar4;
  undefined4 *puVar5;
  CWnd *pCVar6;
  CObject *pCVar7;
  CFrameWnd *pCVar8;
  CMFCVisualManager *pCVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  tagSIZE tVar13;
  int local_78;
  CDC local_70 [4];
  int local_6c;
  undefined4 local_68;
  CDC *local_60;
  CSize *local_5c;
  int local_58;
  wchar_t *local_54;
  tagTEXTMETRICW local_50;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x100d4717;
  local_60 = param_1;
  local_5c = param_2;
  local_6c = param_3;
  if (*(int *)(this + 0xf0) != 0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 4;
    goto LAB_100d49a2;
  }
  if (*(int *)(this + 0x100) != 0) {
    CMFCToolBarMenuButton::OnCalculateSize((CMFCToolBarMenuButton *)this,param_1,param_2,param_3);
    goto LAB_100d49a2;
  }
  if (*(int *)(*(int *)(this + 0x2c) + -0xc) == 0) {
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(&local_54,(int *)ppuVar2);
    local_8 = 0;
    uVar1 = *(uint *)(this + 0x20);
    pHVar3 = (HMODULE)FUN_1000ac62();
    if (((pHVar3 != (HMODULE)0x0) && (iVar4 = FUN_10006200(&local_54,pHVar3,uVar1), iVar4 != 0)) &&
       (iVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                          ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_54,L'\n',0), iVar4 != -1)) {
      puVar5 = (undefined4 *)
               ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                         ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          &local_54,(int)&local_58);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_10007c90(this + 0x2c,puVar5);
      FUN_10001030((undefined4 *)(local_58 + -0x10));
    }
    local_8 = 0xffffffff;
    FUN_10001030((undefined4 *)(local_54 + -8));
  }
  else {
    iVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x2c),L'\t',0);
    if (iVar4 != -1) {
      puVar5 = (undefined4 *)
               ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                         ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          (this + 0x2c),(int)&local_58);
      local_8 = 2;
      FUN_10007c90(this + 0x2c,puVar5);
      local_8 = 0xffffffff;
      FUN_10001030((undefined4 *)(local_58 + -0x10));
    }
  }
  if (((DAT_1016788c != 0) && (*(int *)(this + 0x94) != 0)) &&
     ((*(uint *)(this + 0x20) < 0xf000 || (0xf1ef < *(uint *)(this + 0x20))))) {
    iVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x2c),L'\t',0);
    if (-1 < iVar4) {
      puVar5 = (undefined4 *)
               ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                         ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          (this + 0x2c),(int)&local_58);
      local_8 = 3;
      FUN_10007c90(this + 0x2c,puVar5);
      local_8 = 0xffffffff;
      FUN_10001030((undefined4 *)(local_58 + -0x10));
    }
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(&local_54,(int *)ppuVar2);
    local_8 = 4;
    if (*(CWnd **)(this + 0x6c) == (CWnd *)0x0) {
      pCVar6 = AfxGetMainWnd();
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,(CObject *)pCVar6);
    }
    else {
      pCVar7 = (CObject *)DAT_10168578;
      if (DAT_10168578 == (CFrameWnd *)0x0) {
        pCVar7 = (CObject *)CWnd::GetTopLevelFrame(*(CWnd **)(this + 0x6c));
      }
    }
    if (pCVar7 != (CObject *)0x0) {
      iVar4 = CKeyboardManager::FindDefaultAccelerator
                        (*(uint *)(this + 0x20),
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_54,(CFrameWnd *)pCVar7,1);
      if (iVar4 == 0) {
        pCVar8 = (CFrameWnd *)(**(code **)(*(int *)pCVar7 + 0x16c))();
        iVar4 = CKeyboardManager::FindDefaultAccelerator
                          (*(uint *)(this + 0x20),
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_54,pCVar8,iVar4);
        if (iVar4 == 0) goto LAB_100d4911;
      }
      ATL::CSimpleStringT<wchar_t,0>::AppendChar((CSimpleStringT<wchar_t,0> *)(this + 0x2c),L'\t');
      ATL::CSimpleStringT<wchar_t,0>::Append
                ((CSimpleStringT<wchar_t,0> *)(this + 0x2c),local_54,*(int *)(local_54 + -6));
    }
LAB_100d4911:
    local_8 = 0xffffffff;
    FUN_10001030((undefined4 *)(local_54 + -8));
  }
  iVar4 = *(int *)(*(int *)(this + 0x2c) + -0xc);
  GetTextMetricsW(*(HDC *)(local_5c + 8),&local_50);
  CMFCToolBar::GetMenuButtonSize();
  pCVar9 = CMFCVisualManager::GetInstance();
  iVar10 = (**(code **)(*(int *)pCVar9 + 0x2d0))();
  tVar13 = CMFCToolBarMenuButton::OnCalculateSize
                     ((CMFCToolBarMenuButton *)this,local_70,local_5c,local_6c);
  local_68 = *(undefined4 *)tVar13.cx;
  iVar12 = ((undefined4 *)tVar13.cx)[1] + 2;
  if (*(int *)(this + 0x94) == 0) {
    pCVar9 = CMFCVisualManager::GetInstance();
    iVar11 = (**(code **)(*(int *)pCVar9 + 0x2d0))();
    iVar12 = iVar12 + iVar11;
  }
  *(LONG *)local_60 = local_50.tmAveCharWidth * iVar4 + local_78 * 2 + 0x32 + iVar10 * 3;
  *(int *)(local_60 + 4) = iVar12;
LAB_100d49a2:
  tVar13 = (tagSIZE)FUN_100f90cf();
  return tVar13;
}

