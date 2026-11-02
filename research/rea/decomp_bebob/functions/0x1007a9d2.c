// rea decompile_all
// name: CDockablePane::ShowPane
// address: 0x1007a9d2
// body: available
// range: 0x1007a9d2-0x1007ac1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockablePane::ShowPane(int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockablePane::ShowPane(CDockablePane *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  CPaneDivider *pCVar3;
  int *piVar4;
  CBaseTabbedPane *pCVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  CObject *pCVar8;
  undefined4 uVar9;
  
  iVar1 = (**(code **)(*(int *)this + 0x1d8))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)this + 0x16c))();
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*(int *)this + 0x168))();
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*(int *)this + 0x170))();
        if (iVar1 == 0) {
          pCVar3 = GetDefaultPaneDivider(this);
          CWnd::ShowWindow((CWnd *)this,-(uint)(param_1 != 0) & 5);
          if ((param_1 != 0) && (pCVar3 != (CPaneDivider *)0x0)) {
            (**(code **)(*(int *)this + 0x388))(pCVar3);
          }
          piVar4 = (int *)(**(code **)(*(int *)this + 0x224))(0);
          if (piVar4 == (int *)0x0) {
            if (pCVar3 != (CPaneDivider *)0x0) {
              if (param_1 != 0) {
                if (*(int *)(this + 700) < 0x32) {
                  *(int *)(this + 700) = *(int *)(this + 700) + 1;
                }
                else {
                  *(undefined4 *)(this + 700) = 0x32;
                }
              }
              (**(code **)(*(int *)pCVar3 + 0x290))(this,param_1);
              if (param_2 == 0) {
                (**(code **)(*(int *)this + 0x264))(0);
              }
            }
          }
          else {
            (**(code **)(*piVar4 + 0x1e4))(this,param_1);
          }
        }
        else {
          pHVar6 = GetParent(*(HWND *)(this + 0x20));
          pCVar7 = CWnd::FromHandle(pHVar6);
          if (param_1 == 0) {
            SendMessageW(*(HWND *)(pCVar7 + 0x20),0x10,0,0);
          }
          else {
            (**(code **)(*(int *)this + 0x2e0))(1);
            CWnd::ShowWindow((CWnd *)this,5);
          }
        }
        goto LAB_1007abc7;
      }
    }
    CBasePane::ShowPane((CBasePane *)this,param_1,param_2,param_3);
    piVar4 = (int *)(**(code **)(*(int *)this + 0x224))(0);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x1e4))(this,param_1);
    }
    iVar1 = (**(code **)(*(int *)this + 0x168))();
    if ((iVar1 != 0) && (param_2 != 0)) {
      pCVar5 = CBasePane::GetParentTabbedPane((CBasePane *)this);
      (**(code **)(*(int *)pCVar5 + 0x20c))();
    }
  }
  else {
    iVar1 = (**(code **)(*(int *)this + 0x36c))();
    if (iVar1 == 0) {
      CMFCAutoHideButton::ShowAttachedWindow(*(CMFCAutoHideButton **)(this + 0x318),1);
      if ((param_1 != 0) && (param_3 != 0)) {
        CWnd::SetFocus((CWnd *)this);
        *(undefined4 *)(this + 0x2c8) = 1;
      }
    }
    else {
      uVar2 = CWnd::GetExStyle((CWnd *)this);
      if (((uVar2 & 0x10000000) != 0) && (param_1 == 0)) {
        CMFCAutoHideButton::ShowAttachedWindow(*(CMFCAutoHideButton **)(this + 0x318),0);
      }
      CMFCAutoHideBar::ShowAutoHideWindow(*(CMFCAutoHideBar **)(this + 0x31c),this,param_1,param_2);
    }
  }
LAB_1007abc7:
  iVar1 = (**(code **)(*(int *)this + 0x168))();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_3 != 0)) {
    pHVar6 = GetParent(*(HWND *)(this + 0x20));
    pCVar7 = CWnd::FromHandle(pHVar6);
    pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseTabCtrl_1012e24c,(CObject *)pCVar7);
    if (pCVar8 != (CObject *)0x0) {
      iVar1 = *(int *)pCVar8;
      uVar9 = (**(code **)(iVar1 + 0x218))(*(undefined4 *)(this + 0x20));
      (**(code **)(iVar1 + 0x210))(uVar9);
    }
  }
  return;
}

