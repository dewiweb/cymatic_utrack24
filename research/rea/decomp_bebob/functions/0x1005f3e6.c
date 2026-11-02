// rea decompile_all
// name: CMFCPopupMenu::CreateTearOffBar
// address: 0x1005f3e6
// body: available
// range: 0x1005f3e6-0x1005f719 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005f40e to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual class CPane * __thiscall CMFCPopupMenu::CreateTearOffBar(class CFrameWnd
   *,unsigned int,wchar_t const *)
   
   Library: Visual Studio 2010 Release */

CPane * __thiscall
CMFCPopupMenu::CreateTearOffBar
          (CMFCPopupMenu *this,CFrameWnd *param_1,uint param_2,wchar_t *param_3)

{
  CMenu *this_00;
  wchar_t *pwVar1;
  int iVar2;
  UINT UVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  HMENU pHVar6;
  CMenu *pCVar7;
  HMENU__ *pHVar8;
  uint uVar9;
  int iVar10;
  CPane *pCVar11;
  CWnd *this_01;
  undefined1 local_188 [4];
  CMFCPopupMenu *local_184;
  CMFCToolBar *local_180;
  int local_17c;
  CMenu *local_178;
  uint local_174;
  wchar_t *local_170;
  CMFCToolBarMenuButton local_16c [4];
  int local_168;
  undefined4 local_164;
  undefined4 local_160;
  int local_138;
  int local_134;
  CMFCToolBarButton local_84 [4];
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_50;
  int local_4c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x178;
  local_8 = 0x1005f3f5;
  this_01 = (CWnd *)0x0;
  local_184 = this;
  if (param_3 != (wchar_t *)0x0) {
    if ((*(HMENU__ **)(this + 0xea8) != (HMENU__ *)0x0) &&
       (local_178 = CMenu::FromHandle(*(HMENU__ **)(this + 0xea8)), local_178 != (CMenu *)0x0)) {
      local_180 = FUN_1000858a(0xcc8);
      local_8 = 0;
      if (local_180 != (CMFCToolBar *)0x0) {
        this_01 = (CWnd *)CMFCToolBar::CMFCToolBar(local_180);
      }
      local_8 = 0xffffffff;
      iVar2 = (**(code **)(*(int *)this_01 + 800))(param_1,0x50402808,param_2);
      if (iVar2 == 0) {
        (**(code **)(*(int *)this_01 + 4))(1);
      }
      else {
        CWnd::SetWindowTextW(this_01,param_3);
        this_00 = local_178;
        local_17c = ::GetMenuItemCount(*(HMENU *)(local_178 + 4));
        local_174 = 0;
        if (0 < local_17c) {
          do {
            UVar3 = GetMenuItemID(*(HMENU *)(this_00 + 4),local_174);
            ppuVar4 = FUN_1000ad47();
            FUN_10005e00(&local_170,(int *)ppuVar4);
            local_8 = 1;
            CMenu::GetMenuStringW
                      (this_00,local_174,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_170,0x400);
            if (UVar3 == 0) {
              if (local_174 != local_17c - 1U) {
                (**(code **)(*(int *)this_01 + 0x348))(0xffffffff);
              }
            }
            else if (UVar3 == 0xffffffff) {
              local_178 = (CMenu *)0x0;
              if (DAT_101697f4 != (CMenuTearOffManager *)0x0) {
                local_178 = (CMenu *)CMenuTearOffManager::Parse
                                               (DAT_101697f4,
                                                (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                                 *)&local_170);
              }
              iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  *)&local_170,L'\t',0);
              if (-1 < iVar2) {
                puVar5 = (undefined4 *)
                         ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                         Left((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_170,(int)&local_180);
                local_8._0_1_ = 2;
                FUN_10007c90(&local_170,puVar5);
                local_8 = CONCAT31(local_8._1_3_,1);
                FUN_10001030((undefined4 *)(local_180 + -0x10));
              }
              pwVar1 = local_170;
              pHVar6 = GetSubMenu(*(HMENU *)(this_00 + 4),local_174);
              pCVar7 = CMenu::FromHandle(pHVar6);
              pHVar8 = (HMENU__ *)0x0;
              if (pCVar7 != (CMenu *)0x0) {
                pHVar8 = *(HMENU__ **)(pCVar7 + 4);
              }
              CMFCToolBarMenuButton::CMFCToolBarMenuButton(local_16c,0xffffffff,pHVar8,-1,pwVar1,0);
              local_8._0_1_ = 3;
              iVar2 = local_134;
              if (local_168 == 0) {
                iVar2 = local_138;
              }
              if (iVar2 == -1) {
                local_160 = 0;
                local_164 = 1;
              }
              CMFCToolBarMenuButton::SetTearOff(local_16c,(uint)local_178);
              (**(code **)(*(int *)this_01 + 0x344))(local_16c,0xffffffff);
              local_8 = CONCAT31(local_8._1_3_,1);
              CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_16c);
            }
            else {
              iVar2 = IsStandardCommand(UVar3);
              if (iVar2 == 0) {
                CMFCToolBarButton::CMFCToolBarButton(local_84,UVar3,-1,local_170,0,0);
                local_8._0_1_ = 4;
                iVar2 = local_4c;
                if (local_80 == 0) {
                  iVar2 = local_50;
                }
                if (iVar2 == -1) {
                  local_78 = 0;
                  local_7c = 1;
                }
                (**(code **)(*(int *)this_01 + 0x344))(local_84,0xffffffff);
                local_8 = CONCAT31(local_8._1_3_,1);
                CMFCToolBarButton::~CMFCToolBarButton(local_84);
              }
            }
            local_8 = 0xffffffff;
            FUN_10001030((undefined4 *)(local_170 + -8));
            local_174 = local_174 + 1;
          } while ((int)local_174 < local_17c);
        }
        iVar2 = *(int *)this_01;
        uVar9 = (**(code **)(iVar2 + 0x1bc))();
        (**(code **)(iVar2 + 0x1e0))(uVar9 | 0x34);
        (**(code **)(*(int *)this_01 + 0x1e8))(0xf000);
        iVar2 = *(int *)(local_184 + 0x148);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0xb0) != 0)) {
          iVar2 = *(int *)(iVar2 + 0xc0);
          iVar10 = (**(code **)(*(int *)this_01 + 0x358))();
          (**(code **)(*(int *)this_01 + 0x204))(local_188,iVar10 * (local_17c / iVar2 + 1),0);
        }
      }
    }
    pCVar11 = (CPane *)FUN_100f90cf();
    return pCVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

