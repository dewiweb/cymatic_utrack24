// rea decompile_all
// name: CDockablePane::AttachToTabWnd
// address: 0x1007bb71
// body: available
// range: 0x1007bb71-0x1007be31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CDockablePane * __thiscall CDockablePane::AttachToTabWnd(class
   CDockablePane *,enum AFX_DOCK_METHOD,int,class CDockablePane * *)
   
   Library: Visual Studio 2010 Release */

CDockablePane * __thiscall
CDockablePane::AttachToTabWnd
          (CDockablePane *this,CDockablePane *param_1,AFX_DOCK_METHOD param_2,int param_3,
          CDockablePane **param_4)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  CWnd *this_00;
  int iVar5;
  CDockablePane *pCVar6;
  undefined4 uVar7;
  BOOL BVar8;
  tagRECT *ptVar9;
  CObject *local_20;
  CObject *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (param_4 != (CDockablePane **)0x0) {
    *param_4 = (CDockablePane *)0x0;
  }
  iVar1 = (**(code **)(*(int *)param_1 + 0x188))();
  if ((iVar1 != 0) && (iVar1 = (**(code **)(*(int *)this + 0x188))(), iVar1 != 0)) {
    local_1c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,
                                  (CObject *)param_1);
    iVar1 = (**(code **)(*(int *)param_1 + 0x224))(0);
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    SetRectEmpty(&local_18);
    if (local_1c == (CObject *)0x0) {
      pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
      local_20 = (CObject *)CWnd::FromHandle(pHVar2);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseTabCtrl_1012e24c,local_20);
      if (pCVar4 != (CObject *)0x0) {
        pHVar2 = GetParent(*(HWND *)(local_20 + 0x20));
        local_20 = (CObject *)CWnd::FromHandle(pHVar2);
      }
      local_1c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,local_20);
      if (local_1c == (CObject *)0x0) {
        (**(code **)(*(int *)param_1 + 0x31c))();
        GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
        ptVar9 = &local_18;
        pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
        this_00 = CWnd::FromHandle(pHVar2);
        CWnd::ScreenToClient(this_00,ptVar9);
        local_1c = (CObject *)(**(code **)(*(int *)param_1 + 0x350))();
        CBasePane::InsertPane((CBasePane *)param_1,(CBasePane *)local_1c,(CBasePane *)param_1,1);
        iVar5 = ReplacePane(param_1,(CDockablePane *)local_1c,param_2,0);
        if (iVar5 == 0) {
          if (iVar1 == 0) {
            CBasePane::RemovePaneFromDockManager
                      ((CBasePane *)this,(CBasePane *)local_1c,1,0,0,(CBasePane *)0x0);
          }
          if (local_1c != (CObject *)0x0) {
            (**(code **)(*(int *)local_1c + 4))(1);
          }
          goto LAB_1007bce5;
        }
        iVar1 = *(int *)local_1c;
        uVar7 = (**(code **)(*(int *)param_1 + 0x194))();
        (**(code **)(iVar1 + 0x1e8))(uVar7);
        iVar1 = *(int *)local_1c;
        uVar7 = (**(code **)(*(int *)param_1 + 400))();
        (**(code **)(iVar1 + 0x1dc))(uVar7);
        (**(code **)(*(int *)param_1 + 0x23c))(1);
        (**(code **)(*(int *)local_1c + 0x3b8))(param_1,1,param_3,1);
        (**(code **)(*(int *)param_1 + 0x1ec))(0);
      }
    }
    if (param_4 != (CDockablePane **)0x0) {
      *param_4 = (CDockablePane *)local_1c;
    }
    (**(code **)(*(int *)this + 0x1ec))(0);
    (**(code **)(*(int *)this + 0x2f8))(&local_1c,0,param_2);
    (**(code **)(*(int *)this + 0x218))(local_1c,1);
    (**(code **)(*(int *)this + 0x308))(local_1c,param_2);
    iVar1 = (**(code **)(*(int *)local_1c + 0x3b8))(this,1,param_3,1);
    if (iVar1 != 0) {
      (**(code **)(*(int *)this + 0x21c))(pCVar3);
      (**(code **)(*(int *)this + 0x2fc))(local_1c,0,param_2);
    }
    BVar8 = IsRectEmpty(&local_18);
    if ((BVar8 == 0) &&
       ((**(code **)(*(int *)local_1c + 0x234))
                  (0,local_18.left,local_18.top,local_18.right - local_18.left,
                   local_18.bottom - local_18.top,0x14,0), iVar1 != 0)) {
      (**(code **)(*(int *)this + 0x264))(0);
    }
    (**(code **)(*(int *)local_1c + 0x20c))();
  }
LAB_1007bce5:
  pCVar6 = (CDockablePane *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar6;
}

