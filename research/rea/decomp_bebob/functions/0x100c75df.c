// rea decompile_all
// name: CMultiPaneFrameWnd::OnSetFocus
// address: 0x100c75df
// body: available
// range: 0x100c75df-0x100c76b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMultiPaneFrameWnd::OnSetFocus(class CWnd *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMultiPaneFrameWnd::OnSetFocus(CMultiPaneFrameWnd *this,CWnd *param_1)

{
  CObject *pCVar1;
  BOOL BVar2;
  int iVar3;
  CMultiPaneFrameWnd *this_00;
  CFrameWnd *pCVar4;
  CWnd *pCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  CMultiPaneFrameWnd *local_c;
  CMultiPaneFrameWnd *local_8;
  
  local_c = this;
  local_8 = this;
  pCVar1 = (CObject *)(**(code **)(*(int *)this + 0x1a8))();
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,pCVar1);
  local_8 = (CMultiPaneFrameWnd *)pCVar1;
  if (*(HWND__ **)(this + 0x1d0) == (HWND__ *)0x0) {
    if (((pCVar1 != (CObject *)0x0) && (BVar2 = IsWindow(*(HWND *)(pCVar1 + 0x20)), BVar2 != 0)) &&
       (iVar3 = (**(code **)(*(int *)pCVar1 + 0x1d4))(), iVar3 != 0)) {
      CWnd::SetFocus((CWnd *)pCVar1);
    }
  }
  else {
    pCVar5 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0x1d0));
    this_00 = (CMultiPaneFrameWnd *)
              AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)pCVar5);
    if ((((this_00 != (CMultiPaneFrameWnd *)0x0) &&
         (iVar3 = (**(code **)(*(int *)(this + 0x180) + 0x8c))(this_00,&local_c), iVar3 != 0)) &&
        (BVar2 = IsWindow(*(HWND *)(this_00 + 0x20)), BVar2 != 0)) ||
       ((this_00 = local_8, local_8 != (CMultiPaneFrameWnd *)0x0 &&
        (BVar2 = IsWindow(*(HWND *)(local_8 + 0x20)), BVar2 != 0)))) {
      CWnd::SetFocus((CWnd *)this_00);
    }
  }
  pCVar4 = CWnd::GetParentFrame((CWnd *)this);
  if (pCVar4 != (CFrameWnd *)0x0) {
    uVar9 = 0x13;
    iVar8 = 0;
    iVar7 = 0;
    iVar6 = 0;
    iVar3 = 0;
    pCVar5 = (CWnd *)&DAT_101665c0;
    pCVar4 = CWnd::GetParentFrame((CWnd *)this);
    CWnd::SetWindowPos((CWnd *)pCVar4,pCVar5,iVar3,iVar6,iVar7,iVar8,uVar9);
  }
  return;
}

