// rea decompile_all
// name: OnCreateControlBars
// address: 0x100217d6
// body: available
// range: 0x100217d6-0x1002185e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall COleDocIPFrameWndEx::OnCreateControlBars(class CFrameWnd
   *,class CFrameWnd *)
    protected: virtual int __thiscall COleIPFrameWndEx::OnCreateControlBars(class CFrameWnd *,class
   CFrameWnd *)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall OnCreateControlBars(void *this,CObject *param_1)

{
  CObject *pCVar1;
  COleCntrFrameWndEx *this_00;
  HWND__ *pHVar2;
  CWnd *this_01;
  
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleCntrFrameWndEx_10129fbc,param_1);
  this_01 = (CWnd *)0x0;
  if (pCVar1 == (CObject *)0x0) {
    this_00 = FUN_1000858a(0x304);
    if (this_00 != (COleCntrFrameWndEx *)0x0) {
      this_01 = (CWnd *)COleCntrFrameWndEx::COleCntrFrameWndEx(this_00,this);
    }
    pHVar2 = CWnd::Detach(*(CWnd **)((int)this + 0x130));
    if (*(int **)((int)this + 0x130) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x130) + 4))(1);
    }
    *(CWnd **)((int)this + 0x130) = this_01;
    CWnd::Attach(this_01,pHVar2);
    CDockingManager::Create((CDockingManager *)(this_01 + 0x114),(CFrameWnd *)this_01);
  }
  return 1;
}

