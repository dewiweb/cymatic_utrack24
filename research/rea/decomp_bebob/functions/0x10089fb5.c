// rea decompile_all
// name: CPane::OnShowControlBarMenu
// address: 0x10089fb5
// body: available
// range: 0x10089fb5-0x1008a4d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008a047 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CPane::OnShowControlBarMenu(class CPoint)
   
   Library: Visual Studio 2010 Release */

int __thiscall CPane::OnShowControlBarMenu(CPane *this,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  HMENU pHVar3;
  undefined **ppuVar4;
  HMODULE pHVar5;
  CObject *pCVar6;
  BOOL BVar7;
  int iVar8;
  CBaseTabbedPane *pCVar9;
  int *piVar10;
  HWND pHVar11;
  CWnd *pCVar12;
  CObject *pCVar13;
  UINT uIDCheckItem;
  undefined **local_20;
  HMENU local_1c;
  int local_18;
  CObject *local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x10089fc1;
  if ((DAT_101688d8 == (int *)0x0) ||
     ((uVar1 = (**(code **)(*(int *)this + 0x194))(), (uVar1 & 0xf000) == 0 &&
      (iVar2 = (**(code **)(*(int *)this + 0x1c8))(), iVar2 == 0)))) {
    return 0;
  }
  local_20 = CMenu::vftable;
  local_1c = (HMENU)0x0;
  local_8 = 0;
  pHVar3 = CreatePopupMenu();
  CMenu::Attach((CMenu *)&local_20,pHVar3);
  ppuVar4 = FUN_1000ad47();
  FUN_10005e00(local_14,(int *)ppuVar4);
  local_8 = CONCAT31(local_8._1_3_,1);
  pHVar5 = (HMODULE)FUN_1000ac62();
  if (pHVar5 == (HMODULE)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_10006200(local_14,pHVar5,0x428f);
  }
  if (iVar2 == 0) {
LAB_1008a047:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  AppendMenuW(local_1c,0,0xffffff9a,(LPCWSTR)local_14[0]);
  pHVar5 = (HMODULE)FUN_1000ac62();
  iVar2 = 0;
  if (pHVar5 != (HMODULE)0x0) {
    iVar2 = FUN_10006200(local_14,pHVar5,0x4290);
  }
  if (iVar2 == 0) goto LAB_1008a047;
  AppendMenuW(local_1c,0,0xffffff99,(LPCWSTR)local_14[0]);
  pHVar5 = (HMODULE)FUN_1000ac62();
  iVar2 = 0;
  if (pHVar5 != (HMODULE)0x0) {
    iVar2 = FUN_10006200(local_14,pHVar5,0x42c0);
  }
  if (iVar2 == 0) goto LAB_1008a047;
  AppendMenuW(local_1c,0,0xffffff96,(LPCWSTR)local_14[0]);
  pHVar5 = (HMODULE)FUN_1000ac62();
  iVar2 = 0;
  if (pHVar5 != (HMODULE)0x0) {
    iVar2 = FUN_10006200(local_14,pHVar5,0x4291);
  }
  if (iVar2 == 0) goto LAB_1008a047;
  AppendMenuW(local_1c,0,0xffffff98,(LPCWSTR)local_14[0]);
  pHVar5 = (HMODULE)FUN_1000ac62();
  iVar2 = 0;
  if (pHVar5 != (HMODULE)0x0) {
    iVar2 = FUN_10006200(local_14,pHVar5,0x4292);
  }
  if (iVar2 == 0) goto LAB_1008a047;
  AppendMenuW(local_1c,0,0xffffff97,(LPCWSTR)local_14[0]);
  local_8 = local_8 & 0xffffff00;
  FUN_10001030((undefined4 *)(local_14[0] + -0x10));
  iVar2 = (**(code **)(*(int *)this + 0x1c8))();
  if (iVar2 == 0) {
    EnableMenuItem(local_1c,0xffffff9a,1);
  }
  iVar2 = (**(code **)(*(int *)this + 0x1d0))();
  if ((iVar2 == 0) || (iVar2 = (**(code **)(*(int *)this + 0x224))(0), iVar2 != 0)) {
    EnableMenuItem(local_1c,0xffffff98,1);
  }
  iVar2 = (**(code **)(*(int *)this + 0x1d8))();
  if (iVar2 != 0) {
    EnableMenuItem(local_1c,0xffffff9a,1);
    EnableMenuItem(local_1c,0xffffff99,1);
    CheckMenuItem(local_1c,0xffffff98,8);
    EnableMenuItem(local_1c,0xffffff97,1);
  }
  pCVar6 = (CObject *)(**(code **)(*(int *)this + 0x198))();
  local_14[0] = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,pCVar6);
  iVar2 = (**(code **)(*(int *)this + 0x18c))();
  if ((iVar2 == 0) || ((local_14[0] != (CObject *)0x0 && (*(int *)(local_14[0] + 0x40c) != 0)))) {
    EnableMenuItem(local_1c,0xffffff96,1);
  }
  iVar2 = (**(code **)(*(int *)this + 0x170))();
  if (iVar2 != 0) {
    EnableMenuItem(local_1c,0xffffff9a,1);
    EnableMenuItem(local_1c,0xffffff99,1);
    CheckMenuItem(local_1c,0xffffff96,8);
  }
  iVar2 = (**(code **)(*(int *)this + 0x16c))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*(int *)this + 0x1d8))();
    if ((iVar2 == 0) && (iVar2 = (**(code **)(*(int *)this + 0x170))(), iVar2 == 0)) {
      uIDCheckItem = 0xffffff99;
      goto LAB_1008a254;
    }
  }
  else {
    uIDCheckItem = 0xffffff9a;
LAB_1008a254:
    CheckMenuItem(local_1c,uIDCheckItem,8);
  }
  uVar1 = (**(code **)(*(int *)this + 0x194))();
  if ((uVar1 & 0xf000) == 0) {
    EnableMenuItem(local_1c,0xffffff99,1);
  }
  iVar2 = (**(code **)(*(int *)this + 0x1c4))();
  if (iVar2 == 0) {
    EnableMenuItem(local_1c,0xffffff97,1);
  }
  iVar2 = (**(code **)(*(int *)this + 0x2e8))(&local_20);
  if (iVar2 == 0) goto LAB_1008a29c;
  pHVar11 = *(HWND *)(this + 0x20);
  iVar2 = (**(code **)(*DAT_101688d8 + 0x14))(local_1c,param_2,param_3,this,0);
  BVar7 = IsWindow(pHVar11);
  if ((BVar7 == 0) || (iVar8 = (**(code **)(*(int *)this + 0x2ec))(iVar2), iVar8 == 0)) {
    iVar2 = 1;
LAB_1008a29e:
    local_8 = 0xffffffff;
    local_20 = CMenu::vftable;
    CMenu::DestroyMenu((CMenu *)&local_20);
  }
  else {
    if (iVar2 == -0x6a) {
      iVar2 = (**(code **)(*(int *)this + 0x170))();
      if (iVar2 != 0) {
        pHVar11 = GetParent(*(HWND *)(this + 0x20));
        pCVar12 = CWnd::FromHandle(pHVar11);
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,
                                    (CObject *)pCVar12);
        if (pCVar6 != (CObject *)0x0) {
          pCVar13 = (CObject *)(**(code **)(*(int *)this + 0x198))();
          pCVar13 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,pCVar13);
          if (pCVar13 != (CObject *)0x0) {
            (**(code **)(*(int *)pCVar13 + 0x1d0))(pCVar6);
            goto LAB_1008a4b4;
          }
        }
LAB_1008a29c:
        iVar2 = 0;
        goto LAB_1008a29e;
      }
      (**(code **)(*(int *)this + 0x2e0))(1);
    }
    else if (iVar2 == -0x69) {
      (**(code **)(*(int *)this + 0x2dc))();
    }
    else if (iVar2 == -0x68) {
      (**(code **)(*(int *)this + 0x2d8))();
    }
    else if (iVar2 == -0x67) {
      iVar2 = (**(code **)(*(int *)this + 0x16c))();
      if ((iVar2 != 0) &&
         (piVar10 = (int *)(**(code **)(*(int *)this + 0x224))(0), piVar10 != (int *)0x0)) {
        (**(code **)(*piVar10 + 0x194))();
      }
    }
    else if (iVar2 == -0x66) {
      iVar2 = (**(code **)(*(int *)this + 0x168))();
      pCVar9 = (CBaseTabbedPane *)this;
      if (iVar2 != 0) {
        pCVar9 = CBasePane::GetParentTabbedPane((CBasePane *)this);
      }
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,(CObject *)pCVar9
                                 );
      if ((pCVar6 != (CObject *)0x0) &&
         (piVar10 = (int *)(**(code **)(*(int *)pCVar6 + 0x3a4))(), piVar10 != (int *)0x0)) {
        local_14[0] = (CObject *)(**(code **)(*piVar10 + 0x208))();
        local_18 = (**(code **)(*piVar10 + 0x1ac))(local_14[0]);
        if ((local_18 != 0) &&
           ((iVar2 = (**(code **)(*piVar10 + 0x1ec))(local_14[0]), iVar2 != 0 &&
            (iVar2 = (**(code **)(*(int *)pCVar6 + 0x3c0))(local_18,0), iVar2 != 0)))) {
          iVar2 = (**(code **)(*piVar10 + 0x1a8))();
          if ((0 < iVar2) && (iVar2 = (**(code **)(*piVar10 + 0x1a0))(), iVar2 == 0)) {
            (**(code **)(*(int *)pCVar6 + 0x220))(0,0,0);
          }
          goto LAB_1008a4b4;
        }
      }
      (**(code **)(*(int *)this + 0x1f8))
                (*(undefined4 *)(this + 0x1d8),*(undefined4 *)(this + 0x1dc),
                 *(undefined4 *)(this + 0x1e0),*(undefined4 *)(this + 0x1e4),0,1);
    }
LAB_1008a4b4:
    local_8 = 0xffffffff;
    local_20 = CMenu::vftable;
    CMenu::DestroyMenu((CMenu *)&local_20);
    iVar2 = 1;
  }
  return iVar2;
}

