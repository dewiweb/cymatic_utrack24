// rea decompile_all
// name: CDockablePane::Dock
// address: 0x1007be32
// body: available
// range: 0x1007be32-0x1007c0b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CDockablePane::Dock(class CBasePane *,struct tagRECT const
   *,enum AFX_DOCK_METHOD)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CDockablePane::Dock(CDockablePane *this,CBasePane *param_1,tagRECT *param_2,AFX_DOCK_METHOD param_3)

{
  CBasePane *pCVar1;
  CFrameWnd *pCVar2;
  int iVar3;
  CPaneDivider *pCVar4;
  CDockablePane *pCVar5;
  tagRECT *ptVar6;
  uint uVar7;
  AFX_DOCK_METHOD AVar8;
  tagPOINT local_18;
  tagPOINT local_10;
  undefined4 local_8;
  
  pCVar2 = AFXGetParentFrame((CWnd *)this);
  AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,(CObject *)pCVar2);
  pCVar1 = param_1;
  if ((((param_1 == (CBasePane *)0x0) ||
       (iVar3 = (**(code **)(*(int *)param_1 + 0x180))(this), iVar3 != 0)) ||
      (pCVar1 == (CBasePane *)this)) && ((param_3 != 4 || (param_2 != (tagRECT *)0x0)))) {
    this[0x2b4] = (CDockablePane)0x0;
    if ((param_3 != 2) && (param_3 != 3)) {
      local_18.x = 0;
      local_18.y = 0;
      if ((param_3 == 1) || (param_3 == 5)) {
        GetCursorPos(&local_18);
      }
      local_8 = 0;
      if (param_1 == (CBasePane *)0x0) {
        param_1 = (CBasePane *)0x0;
        if ((param_3 != 1) && (param_3 != 5)) {
          return 0;
        }
        local_10.x = 0;
        local_10.y = 0;
        GetCursorPos(&local_10);
        iVar3 = CBasePane::IsPointNearDockSite
                          ((CBasePane *)this,local_10.x,local_10.y,&local_8,&param_1);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = (**(code **)(*(int *)this + 0x1fc))(local_8,0,1,0,0xffffffff,param_1);
        return iVar3;
      }
      if ((param_3 == 1) || (param_3 == 5)) {
        iVar3 = CGlobalUtils::CheckAlignment
                          ((CGlobalUtils *)&PTR_vftable_10160f68,local_18.x,local_18.y,param_1,
                           DAT_10160710,0,0,&local_8,0xf000,0);
        if (iVar3 == 0) {
          return 0;
        }
        ptVar6 = (tagRECT *)0x0;
      }
      else {
        ptVar6 = param_2;
        if (param_2 == (tagRECT *)0x0) {
          return 0;
        }
      }
      iVar3 = (**(code **)(*(int *)this + 0x354))(param_1,local_8,ptVar6);
      return iVar3;
    }
    param_1 = (CBasePane *)
              CRecentDockSiteInfo::GetRecentTabContainer((CRecentDockSiteInfo *)(this + 0x1d4),1);
    CWnd::ShowWindow((CWnd *)this,0);
    iVar3 = *(int *)this;
    AVar8 = param_3;
    pCVar2 = AFXGetParentFrame((CWnd *)this);
    (**(code **)(iVar3 + 0x308))(pCVar2,AVar8);
    (**(code **)(*(int *)this + 0x1dc))(*(undefined4 *)(this + 0x1e8));
    pCVar4 = CRecentDockSiteInfo::GetRecentDefaultPaneDivider((CRecentDockSiteInfo *)(this + 0x1d4))
    ;
    if (pCVar4 != (CPaneDivider *)0x0) {
      SetDefaultPaneDivider(this,*(HWND__ **)(pCVar4 + 0x20));
    }
    if (param_1 != (CBasePane *)0x0) {
      iVar3 = CRecentDockSiteInfo::IsRecentLeftPane((CRecentDockSiteInfo *)(this + 0x1d4),1);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 8);
      }
      else {
        iVar3 = *(int *)(param_1 + 4);
      }
      if (iVar3 != 0) {
        iVar3 = (**(code **)(*(int *)this + 0x34c))(iVar3,2,1,0);
        uVar7 = (uint)(iVar3 != 0);
        if (uVar7 != 0) {
          (**(code **)(*(int *)this + 0x220))(1,0,1);
        }
        goto LAB_1007c015;
      }
    }
    if (pCVar4 == (CPaneDivider *)0x0) {
      CWnd::ShowWindow((CWnd *)this,5);
      ptVar6 = param_2;
      if (param_2 == (tagRECT *)0x0) {
        ptVar6 = (tagRECT *)(this + 0x208);
      }
      iVar3 = (**(code **)(*(int *)this + 0x1fc))
                        (*(undefined4 *)(this + 0x1e8),ptVar6,1,0,0xffffffff,0);
      return iVar3;
    }
    (**(code **)(*(int *)this + 0x1ec))(1);
    (**(code **)(*(int *)this + 0x388))(pCVar4);
    CBasePane::InsertPane((CBasePane *)this,(CBasePane *)this,(CBasePane *)pCVar4,0);
    CWnd::ShowWindow((CWnd *)this,5);
    pCVar5 = (CDockablePane *)(**(code **)(*(int *)pCVar4 + 0x270))(this);
    if (pCVar5 == this) {
      uVar7 = 1;
LAB_1007c015:
      (**(code **)(*(int *)this + 0x264))(0);
      return uVar7;
    }
    if (pCVar5 != (CDockablePane *)0x0) {
      (**(code **)(*(int *)pCVar5 + 0x264))(0);
    }
  }
  return 0;
}

