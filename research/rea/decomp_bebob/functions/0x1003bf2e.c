// rea decompile_all
// name: CPaneFrameWnd::OnSetFocus
// address: 0x1003bf2e
// body: available
// range: 0x1003bf2e-0x1003bfe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::OnSetFocus(class CWnd *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneFrameWnd::OnSetFocus(CPaneFrameWnd *this,CWnd *param_1)

{
  BOOL BVar1;
  CWnd *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CObject *pCVar5;
  CFrameWnd *pCVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  CWnd::OnSetFocus((CWnd *)this,param_1);
  *(undefined4 *)(this + 0xc4) = 0;
  if (*(HWND *)(this + 200) != (HWND)0x0) {
    BVar1 = IsWindow(*(HWND *)(this + 200));
    if (BVar1 != 0) {
      pCVar2 = CWnd::FromHandle(*(HWND__ **)(this + 200));
      iVar3 = CObject::IsKindOf((CObject *)pCVar2,(CRuntimeClass *)&PTR_s_CMFCToolBar_10160470);
      if (iVar3 != 0) {
        if (param_1 == (CWnd *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(param_1 + 0x20);
        }
        *(undefined4 *)(this + 0xc4) = uVar4;
      }
    }
  }
  pCVar5 = (CObject *)(**(code **)(*(int *)this + 0x1a8))();
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,pCVar5);
  if (pCVar5 != (CObject *)0x0) {
    iVar3 = (**(code **)(*(int *)pCVar5 + 0x1d4))();
    if (iVar3 != 0) {
      CWnd::SetFocus((CWnd *)pCVar5);
    }
  }
  pCVar6 = CWnd::GetParentFrame((CWnd *)this);
  if (pCVar6 != (CFrameWnd *)0x0) {
    uVar10 = 0x13;
    iVar9 = 0;
    iVar8 = 0;
    iVar7 = 0;
    iVar3 = 0;
    pCVar2 = (CWnd *)&DAT_101665c0;
    pCVar6 = CWnd::GetParentFrame((CWnd *)this);
    CWnd::SetWindowPos((CWnd *)pCVar6,pCVar2,iVar3,iVar7,iVar8,iVar9,uVar10);
  }
  return;
}

