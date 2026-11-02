// rea decompile_all
// name: CMFCToolBarsCustomizeDialog::AddMenuCommands
// address: 0x100972a7
// body: available
// range: 0x100972a7-0x10097798 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100972ec to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCToolBarsCustomizeDialog::AddMenuCommands(class CMenu const
   *,int,wchar_t const *,wchar_t const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarsCustomizeDialog::AddMenuCommands
          (CMFCToolBarsCustomizeDialog *this,CMenu *param_1,int param_2,wchar_t *param_3,
          wchar_t *param_4)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  UINT UVar3;
  undefined **ppuVar4;
  CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> *pCVar5;
  LPCWSTR lpString;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int **ppiVar9;
  HMENU pHVar10;
  CMenu *pCVar11;
  HMENU__ *pHVar12;
  CObject *pCVar13;
  CMFCToolBarButton *pCVar14;
  uint uVar15;
  int iVar16;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int *local_19c;
  CMenu *local_198;
  int local_194;
  wchar_t *local_190;
  wchar_t *local_18c;
  wchar_t *local_188;
  CMFCToolBarsCustomizeDialog *local_184;
  int local_180;
  uint local_17c;
  wchar_t *local_178;
  wchar_t *local_174;
  uint local_170;
  CMFCToolBarMenuButton local_16c [232];
  CMFCToolBarButton local_84 [48];
  undefined1 local_54 [76];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x19c;
  local_8 = 0x100972b6;
  local_174 = param_3;
  local_188 = param_4;
  local_198 = param_1;
  local_170 = 0;
  local_184 = this;
  if (param_1 == (CMenu *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  local_194 = 0;
  local_1a8 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
  local_17c = 0;
  if (0 < local_1a8) {
    do {
      UVar3 = GetMenuItemID(*(HMENU *)(param_1 + 4),local_17c);
      ppuVar4 = FUN_1000ad47();
      FUN_10005e00(&local_178,(int *)ppuVar4);
      local_8 = 0;
      CMenu::GetMenuStringW
                (param_1,local_17c,
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_178,
                 0x400);
      if (*(int *)(this + 0x14c) == 0) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_178,
                   L'&');
      }
      if (UVar3 != 0) {
        if (UVar3 == 0xffffffff) {
          pHVar10 = GetSubMenu(*(HMENU *)(param_1 + 4),local_17c);
          pCVar11 = CMenu::FromHandle(pHVar10);
          uVar15 = 0;
          if (DAT_101697f4 != (CMenuTearOffManager *)0x0) {
            uVar15 = CMenuTearOffManager::Parse
                               (DAT_101697f4,
                                (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                 *)&local_178);
          }
          piVar8 = FUN_10005e30((int *)(local_178 + -8));
          local_190 = (wchar_t *)(piVar8 + 4);
          local_8 = CONCAT31(local_8._1_3_,1);
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_190,L'&');
          if (local_174 != (wchar_t *)0x0) {
            FUN_100022b0(&local_190,local_174);
          }
          pwVar1 = local_190;
          if (*(int *)(this + 0x144) == 0) {
            AddMenuCommands(local_184,pCVar11,param_2,(wchar_t *)0x0,(wchar_t *)0x0);
          }
          else {
            if (param_2 != 0) {
              if (pCVar11 == (CMenu *)0x0) {
                pHVar12 = (HMENU__ *)0x0;
              }
              else {
                pHVar12 = *(HMENU__ **)(pCVar11 + 4);
              }
              CMFCToolBarMenuButton::CMFCToolBarMenuButton
                        (local_16c,0xffffffff,pHVar12,-1,local_178,0);
              local_8._0_1_ = 2;
              CMFCToolBarMenuButton::SetTearOff(local_16c,uVar15);
              AddButton(local_184,pwVar1,(CMFCToolBarButton *)local_16c,-1);
              local_8 = CONCAT31(local_8._1_3_,1);
              CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_16c);
            }
            ppuVar4 = FUN_1000ad47();
            FUN_10005e00(&local_18c,(int *)ppuVar4);
            local_8 = CONCAT31(local_8._1_3_,3);
            if (local_188 != (wchar_t *)0x0) {
              FUN_100022b0(&local_18c,local_188);
            }
            ATL::CSimpleStringT<wchar_t,0>::Append
                      ((CSimpleStringT<wchar_t,0> *)&local_18c,local_178,*(int *)(local_178 + -6));
            pwVar2 = local_18c;
            AddMenuCommands(local_184,pCVar11,param_2,pwVar1,local_18c);
            FUN_10001030((undefined4 *)(pwVar2 + -8));
          }
          FUN_10001030((undefined4 *)(pwVar1 + -8));
          param_1 = local_198;
          this = local_184;
        }
        else {
          if ((param_2 != 0) && (UVar3 - 0xe130 < 0x10)) {
            local_194 = 1;
          }
          if (((local_174 == (wchar_t *)0x0) || (DAT_101685b0 == 0)) ||
             (*(UINT *)(DAT_101685b0 + 0x20) != UVar3)) {
            CMFCToolBarButton::CMFCToolBarButton(local_84,UVar3,-1,local_178,0,0);
            local_8._0_1_ = 4;
            if (local_188 != (wchar_t *)0x0) {
              pCVar5 = (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                        *)FUN_10006ce0(&local_1a4,local_188);
              local_8._0_1_ = 5;
              ATL::operator+((CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                              *)&local_180,pCVar5);
              local_8 = CONCAT31(local_8._1_3_,7);
              FUN_10001030((undefined4 *)(local_1a4 + -0x10));
              lpString = (LPCWSTR)FUN_10002140(&local_180,*(int *)(local_180 + -0xc) + 1);
              iVar16 = 0;
              iVar6 = lstrlenW(lpString);
              if (iVar6 != 1 && -1 < iVar6 + -1) {
                do {
                  if (lpString[iVar16] == L' ') {
                    CharUpperBuffW(lpString + iVar16 + 1,1);
                  }
                  iVar16 = iVar16 + 1;
                  iVar6 = lstrlenW(lpString);
                } while (iVar16 < iVar6 + -1);
              }
              ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer
                        ((CSimpleStringT<wchar_t,0> *)&local_180,-1);
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_180,L' ');
              puVar7 = (undefined4 *)
                       ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                       SpanExcluding((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                      *)&local_180,(wchar_t *)&local_1a0);
              local_8._0_1_ = 8;
              FUN_10007c90(local_54,puVar7);
              FUN_10001030((undefined4 *)(local_1a0 + -0x10));
              local_8._0_1_ = 4;
              FUN_10001030((undefined4 *)(local_180 + -0x10));
              param_1 = local_198;
              this = local_184;
            }
            if (local_174 == (wchar_t *)0x0) {
              piVar8 = FUN_10005e30((int *)(*(int *)(this + 0x13c) + -0x10));
              local_19c = piVar8 + 4;
              local_170 = local_170 | 1;
              ppiVar9 = &local_19c;
              local_8 = CONCAT31(local_8._1_3_,9);
            }
            else {
              ppiVar9 = (int **)FUN_10006ce0(&local_1ac,local_174);
              local_170 = local_170 | 2;
              local_8 = 10;
            }
            AddButton(this,(wchar_t *)*ppiVar9,local_84,-1);
            if ((local_170 & 2) != 0) {
              local_170 = local_170 & 0xfffffffd;
              FUN_10001030((undefined4 *)(local_1ac + -0x10));
            }
            local_8 = 4;
            if ((local_170 & 1) != 0) {
              local_170 = local_170 & 0xfffffffe;
              FUN_10001030(local_19c + -4);
            }
            local_8 = local_8 & 0xffffff00;
            CMFCToolBarButton::~CMFCToolBarButton(local_84);
          }
          else {
            AddUserTools(this,local_174);
          }
        }
      }
      local_8 = 0xffffffff;
      FUN_10001030((undefined4 *)(local_178 + -8));
      local_17c = local_17c + 1;
    } while ((int)local_17c < local_1a8);
    if ((local_194 != 0) && (local_174 != (wchar_t *)0x0)) {
      pCVar13 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,
                                   *(CObject **)(this + 0x140));
      if ((pCVar13 != (CObject *)0x0) &&
         ((*(uint *)(pCVar13 + 0x11c) != 0 && (*(int *)(pCVar13 + 300) != 0)))) {
        pCVar14 = (CMFCToolBarButton *)
                  CMFCToolBarButton::CMFCToolBarButton
                            (local_84,*(uint *)(pCVar13 + 0x11c),-1,*(wchar_t **)(pCVar13 + 0x114),0
                             ,0);
        local_8 = 0xb;
        AddButton(this,local_174,pCVar14,-1);
        local_8 = 0xffffffff;
        CMFCToolBarButton::~CMFCToolBarButton(local_84);
      }
    }
  }
  FUN_100f90cf();
  return;
}

