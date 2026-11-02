// rea decompile_all
// name: CView::GetParentSplitter
// address: 0x10068394
// body: available
// range: 0x10068394-0x100683fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100683a3 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static class CSplitterWnd * __stdcall CView::GetParentSplitter(class CWnd const *,int)
   
   Library: Visual Studio 2010 Release */

CSplitterWnd * CView::GetParentSplitter(CWnd *param_1,int param_2)

{
  HWND pHVar1;
  CWnd *this;
  int iVar2;
  BOOL BVar3;
  
  if (param_1 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  pHVar1 = GetParent(*(HWND *)(param_1 + 0x20));
  this = CWnd::FromHandle(pHVar1);
  iVar2 = CObject::IsKindOf((CObject *)this,(CRuntimeClass *)&PTR_s_CSplitterWnd_10128e34);
  if (iVar2 != 0) {
    if (param_2 != 0) {
      return (CSplitterWnd *)this;
    }
    do {
      pHVar1 = GetParent(*(HWND *)(param_1 + 0x20));
      param_1 = CWnd::FromHandle(pHVar1);
      if (param_1 == (CWnd *)0x0) {
        return (CSplitterWnd *)this;
      }
      BVar3 = IsIconic(*(HWND *)(param_1 + 0x20));
    } while (BVar3 == 0);
  }
  return (CSplitterWnd *)0x0;
}

