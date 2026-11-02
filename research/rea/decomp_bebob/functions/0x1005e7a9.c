// rea decompile_all
// name: CMFCPopupMenu::InitMenuBar
// address: 0x1005e7a9
// body: available
// range: 0x1005e7a9-0x1005ecf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005e7e5 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCPopupMenu::InitMenuBar(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCPopupMenu::InitMenuBar(CMFCPopupMenu *this)

{
  int *piVar1;
  __POSITION *p_Var2;
  int *piVar3;
  __POSITION *p_Var4;
  __POSITION *p_Var5;
  CMFCToolBar *pCVar6;
  BOOL BVar7;
  int iVar8;
  AFX_MODULE_STATE *pAVar9;
  undefined **ppuVar10;
  int iVar11;
  CCommandManager *this_00;
  uint uVar12;
  undefined4 uVar13;
  CFrameWnd *pCVar14;
  undefined4 *puVar15;
  int iVar16;
  wchar_t *local_320;
  __POSITION *local_31c;
  CMFCPopupMenu *local_318;
  uint local_314;
  __POSITION *local_310;
  int local_30c;
  int local_308;
  CMFCToolBarMenuButton local_304 [232];
  WCHAR local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x314;
  local_8 = 0x1005e7b8;
  local_318 = this;
  pCVar6 = (CMFCToolBar *)(**(code **)(*(int *)this + 0x1c0))();
  if (*(HMENU *)(this + 0xea8) != (HMENU)0x0) {
    BVar7 = IsMenu(*(HMENU *)(this + 0xea8));
    if (BVar7 == 0) goto LAB_1005e7e5;
    if ((*(int *)(this + 0x148) != 0) ||
       (iVar8 = CMenuHash::LoadMenuBar
                          ((CMenuHash *)&DAT_10168048,*(HMENU__ **)(this + 0xea8),pCVar6),
       iVar8 == 0)) {
      iVar8 = CMFCMenuBar::IsShowAllCommands();
      if (iVar8 == 0) {
        iVar8 = (**(code **)(*(int *)pCVar6 + 0x434))
                          (*(undefined4 *)(this + 0xea8),*(int *)(this + 0x148) == 0);
      }
      else {
        iVar8 = (**(code **)(*(int *)pCVar6 + 0x434))(*(undefined4 *)(this + 0xea8),1);
      }
      if (iVar8 == 0) goto LAB_1005ecb5;
    }
  }
  pAVar9 = AfxGetModuleState();
  piVar1 = *(int **)(*(int *)(pAVar9 + 4) + 0x8c);
  p_Var4 = local_31c;
  if ((piVar1 != (int *)0x0) && (DAT_10166e54 == 0)) {
    p_Var2 = *(__POSITION **)(pCVar6 + 0xbcc);
    local_30c = 0;
    local_314 = 0;
    p_Var5 = p_Var2;
    while( true ) {
      local_31c = p_Var5;
      if (p_Var2 == (__POSITION *)0x0) goto LAB_1005ea9d;
      if (local_31c == (__POSITION *)0x0) goto LAB_1005e7e5;
      p_Var2 = *(__POSITION **)local_31c;
      piVar3 = *(int **)(local_31c + 8);
      local_310 = p_Var2;
      if (piVar3 == (int *)0x0) goto LAB_1005e7e5;
      if ((piVar3[8] == 0xe110) &&
         (iVar8 = FUN_10005720(piVar3 + 0xb,(ushort *)L"Recent File"), iVar8 == 0)) break;
      local_314 = piVar3[9] & 1;
      local_30c = local_30c + 1;
      p_Var5 = local_310;
      this = local_318;
      p_Var4 = local_31c;
    }
    CObList::RemoveAt((CObList *)(pCVar6 + 0xbc8),local_31c);
    (**(code **)(*piVar3 + 4))(1);
    GetCurrentDirectoryW(0x104,local_21c);
    iVar8 = lstrlenW(local_21c);
    local_21c[iVar8] = L'\\';
    local_21c[iVar8 + 1] = L'\0';
    iVar16 = 0;
    local_308 = 0;
    if (piVar1[1] < 1) goto LAB_1005ea57;
    do {
      ppuVar10 = FUN_1000ad47();
      FUN_10005e00(&local_31c,(int *)ppuVar10);
      local_8 = 0;
      iVar11 = (**(code **)(*piVar1 + 0xc))(&local_31c,iVar16,local_21c,iVar8 + 1,1);
      if (iVar11 != 0) {
        ppuVar10 = FUN_1000ad47();
        FUN_10005e00(&local_320,(int *)ppuVar10);
        local_308 = local_308 + 1;
        local_8._0_1_ = 1;
        FUN_100022f0(&local_320,L"&%d %s");
        uVar13 = CMFCToolBarMenuButton::CMFCToolBarMenuButton
                           (local_304,iVar16 + 0xe110,(HMENU__ *)0x0,-1,local_320,0);
        local_8._0_1_ = 2;
        (**(code **)(*(int *)pCVar6 + 0x344))(uVar13,local_30c);
        local_30c = local_30c + 1;
        local_8 = CONCAT31(local_8._1_3_,1);
        CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_304);
        FUN_10001030((undefined4 *)(local_320 + -8));
      }
      local_8 = 0xffffffff;
      FUN_10001030((undefined4 *)(local_31c + -0x10));
      iVar16 = iVar16 + 1;
    } while (iVar16 < piVar1[1]);
    this = local_318;
    p_Var4 = local_31c;
    if (local_308 == 0) {
LAB_1005ea57:
      this = local_318;
      p_Var4 = local_31c;
      if ((local_314 != 0) && (local_310 != (__POSITION *)0x0)) {
        piVar1 = *(int **)(local_310 + 8);
        if (piVar1 == (int *)0x0) {
LAB_1005e7e5:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        if ((*(byte *)(piVar1 + 9) & 1) != 0) {
          CObList::RemoveAt((CObList *)(pCVar6 + 0xbc8),local_310);
          (**(code **)(*piVar1 + 4))(1);
          this = local_318;
          p_Var4 = local_31c;
        }
      }
    }
  }
LAB_1005ea9d:
  local_31c = p_Var4;
  if ((DAT_101685b0 != 0) && (DAT_10166e54 == 0)) {
    local_314 = 0;
    local_308 = 0;
    local_30c = 0;
    p_Var4 = *(__POSITION **)(pCVar6 + 0xbcc);
    iVar8 = DAT_101685b0;
    while (DAT_101685b0 = iVar8, p_Var4 != (__POSITION *)0x0) {
      if (p_Var4 == (__POSITION *)0x0) goto LAB_1005e7e5;
      local_310 = *(__POSITION **)p_Var4;
      piVar1 = *(int **)(p_Var4 + 8);
      if (piVar1 == (int *)0x0) goto LAB_1005e7e5;
      if (*(int *)(iVar8 + 0x20) == piVar1[8]) {
        if ((DAT_10168440 == 0) || (*(int *)(iVar8 + 0x10) != 0)) {
          CObList::RemoveAt((CObList *)(pCVar6 + 0xbc8),p_Var4);
          (**(code **)(*piVar1 + 4))(1);
        }
        this = local_318;
        if (local_314 == 0) {
          if (((local_30c == 0) && (*(int *)(iVar8 + 0x10) != 0)) && (*(int *)(pCVar6 + 0xbd4) != 0)
             ) {
            (**(code **)(*(int *)pCVar6 + 0x348))(local_308);
            local_308 = local_308 + 1;
          }
          puVar15 = *(undefined4 **)(iVar8 + 8);
          while (puVar15 != (undefined4 *)0x0) {
            if (puVar15 == (undefined4 *)0x0) goto LAB_1005e7e5;
            iVar8 = puVar15[2];
            uVar12 = *(uint *)(iVar8 + 0x10);
            puVar15 = (undefined4 *)*puVar15;
            iVar16 = 1;
            this_00 = (CCommandManager *)FUN_10037712();
            uVar12 = CCommandManager::GetCmdImage(this_00,uVar12,iVar16);
            uVar13 = CMFCToolBarMenuButton::CMFCToolBarMenuButton
                               (local_304,*(uint *)(iVar8 + 0x10),(HMENU__ *)0x0,
                                -(uint)(uVar12 != 0xffffffff) & uVar12,*(wchar_t **)(iVar8 + 4),
                                (uint)(uVar12 != 0xffffffff));
            local_8 = 3;
            (**(code **)(*(int *)pCVar6 + 0x344))(uVar13,local_308);
            local_308 = local_308 + 1;
            local_8 = 0xffffffff;
            CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_304);
          }
          if (local_310 != (__POSITION *)0x0) {
            iVar8 = (**(code **)(*(int *)pCVar6 + 0x348))(local_308);
            local_308 = local_308 + 1;
            if (iVar8 < 0) {
              local_30c = 0;
            }
            else {
              local_30c = 1;
            }
          }
          local_314 = 1;
          this = local_318;
        }
      }
      else if ((*(byte *)(piVar1 + 9) & 1) == 0) {
        local_30c = 0;
      }
      else {
        if (local_30c != 0) {
          CObList::RemoveAt((CObList *)(pCVar6 + 0xbc8),p_Var4);
          (**(code **)(*piVar1 + 4))(1);
        }
        local_30c = 1;
      }
      local_308 = local_308 + 1;
      p_Var4 = local_310;
      iVar8 = DAT_101685b0;
    }
  }
  pCVar14 = (CFrameWnd *)(**(code **)(*(int *)pCVar6 + 0x3c4))();
  if ((pCVar14 == (CFrameWnd *)0x0) ||
     (iVar8 = (**(code **)(*(int *)pCVar14 + 0x14c))(), iVar8 == 0)) {
    pCVar14 = AFXGetParentFrame((CWnd *)this);
  }
  if (pCVar14 != (CFrameWnd *)0x0) {
    (**(code **)(*(int *)pCVar6 + 0x240))(pCVar14,0);
  }
  pCVar14 = DAT_10168578;
  if (DAT_10168578 == (CFrameWnd *)0x0) {
    pCVar14 = CWnd::GetTopLevelFrame((CWnd *)this);
  }
  iVar8 = ActivatePopupMenu(pCVar14,this);
  if (iVar8 != 0) {
    (**(code **)(*(int *)this + 0x174))(1);
  }
LAB_1005ecb5:
  iVar8 = FUN_100f90cf();
  return iVar8;
}

