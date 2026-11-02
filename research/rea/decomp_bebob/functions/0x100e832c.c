// rea decompile_all
// name: CMFCToolBarEditCtrl::OnContextMenu
// address: 0x100e832c
// body: available
// range: 0x100e832c-0x100e83d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarEditCtrl::OnContextMenu(class CWnd *,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarEditCtrl::OnContextMenu(CMFCToolBarEditCtrl *this,int param_1,int param_3,int param_4)

{
  HWND pHVar1;
  CWnd *pCVar2;
  AFX_MODULE_STATE *pAVar3;
  HMENU pHVar4;
  
  if (*(int *)(*(int *)(this + 0xb8) + 0x8c) != 0) {
    pHVar1 = GetParent(*(HWND *)(param_1 + 0x20));
    pCVar2 = CWnd::FromHandle(pHVar1);
    pAVar3 = AfxGetModuleState();
    if (((*(HINSTANCE *)(pAVar3 + 0xc) != (HINSTANCE)0x0) &&
        (pHVar4 = LoadMenuW(*(HINSTANCE *)(pAVar3 + 0xc),
                            (LPCWSTR)(uint)*(ushort *)(*(int *)(this + 0xb8) + 0x8c)),
        pHVar4 != (HMENU)0x0)) && (pHVar4 = GetSubMenu(pHVar4,0), pHVar4 != (HMENU)0x0)) {
      if (DAT_101688d8 != (int *)0x0) {
        (**(code **)(*DAT_101688d8 + 0xc))(pHVar4,param_3,param_4,pCVar2,0,1,0);
        return;
      }
      if (pCVar2 == (CWnd *)0x0) {
        pHVar1 = (HWND)0x0;
      }
      else {
        pHVar1 = *(HWND *)(pCVar2 + 0x20);
      }
      TrackPopupMenu(pHVar4,4,param_3,param_4,0,pHVar1,(RECT *)0x0);
      return;
    }
  }
  CWnd::Default((CWnd *)this);
  return;
}

