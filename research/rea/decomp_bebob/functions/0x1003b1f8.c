// rea decompile_all
// name: CPaneFrameWnd::OnCancelMode
// address: 0x1003b1f8
// body: available
// range: 0x1003b1f8-0x1003b339 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003b335 to 0x10010f40 CWnd::Default (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::OnCancelMode(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneFrameWnd::OnCancelMode(CPaneFrameWnd *this)

{
  char cVar1;
  uint uVar2;
  BOOL BVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  HWND pHVar6;
  int iVar7;
  CDockingManager *pCVar8;
  
  (**(code **)(*(int *)this + 0x234))();
  if (this[0x99] == (CPaneFrameWnd)0x0) goto LAB_1003b331;
  uVar2 = (**(code **)(*(int *)this + 0x1ac))();
  if ((uVar2 & 2) == 0) {
    cVar1 = (**(code **)(*(int *)this + 0x1ac))();
    if (cVar1 < '\0') {
      pCVar8 = *(CDockingManager **)(this + 0x178);
      if (pCVar8 == (CDockingManager *)0x0) {
        pCVar4 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xbc));
        pCVar8 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar4);
        if (pCVar8 == (CDockingManager *)0x0) goto LAB_1003b318;
      }
      iVar7 = *(int *)(pCVar8 + 0x1b8);
      if (((iVar7 != 0) && (*(int *)(iVar7 + 8) != 0)) && (*(int *)(iVar7 + 4) != 0)) {
        CMFCDragFrameImpl::RemoveTabPreDocking
                  ((CMFCDragFrameImpl *)(this + 0x120),(CDockablePane *)0x0);
        if (*(CSmartDockingManager **)(pCVar8 + 0x1b8) != (CSmartDockingManager *)0x0) {
          CSmartDockingManager::Stop(*(CSmartDockingManager **)(pCVar8 + 0x1b8));
        }
      }
    }
    else {
      (**(code **)(*(int *)this + 0x1ac))();
    }
  }
  else {
    CMFCDragFrameImpl::EndDrawDragFrame((CMFCDragFrameImpl *)(this + 0x120),1);
    BVar3 = IsWindowVisible(*(HWND *)(this + 0x20));
    if (BVar3 == 0) {
      pCVar4 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200));
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,(CObject *)pCVar4);
      if (pCVar5 != (CObject *)0x0) {
        pHVar6 = GetParent(*(HWND *)(pCVar5 + 0x20));
        pCVar4 = CWnd::FromHandle(pHVar6);
        if (pCVar4 == (CWnd *)this) {
          iVar7 = (**(code **)(*(int *)pCVar5 + 500))(pCVar5,0,2);
          (**(code **)(*(int *)pCVar5 + 0x220))(1,0,1);
          if (iVar7 == 0) {
            return;
          }
        }
      }
    }
  }
LAB_1003b318:
  ReleaseCapture();
  this[0x99] = (CPaneFrameWnd)0x0;
  (**(code **)(*(int *)this + 0x208))(0);
LAB_1003b331:
  CWnd::Default((CWnd *)this);
  return;
}

