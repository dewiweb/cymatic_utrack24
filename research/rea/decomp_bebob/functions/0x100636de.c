// rea decompile_all
// name: CMDIClientAreaWnd::FindNextRegisteredWithTaskbarMDIChild
// address: 0x100636de
// body: available
// range: 0x100636de-0x10063754 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMDIChildWndEx * __thiscall
   CMDIClientAreaWnd::FindNextRegisteredWithTaskbarMDIChild(class CMFCTabCtrl *,int)
   
   Library: Visual Studio 2010 Release */

CMDIChildWndEx * __thiscall
CMDIClientAreaWnd::FindNextRegisteredWithTaskbarMDIChild
          (CMDIClientAreaWnd *this,CMFCTabCtrl *param_1,int param_2)

{
  int iVar1;
  CObject *pCVar2;
  
  if (param_1 != (CMFCTabCtrl *)0x0) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    iVar1 = (**(code **)(*(int *)param_1 + 0x1a8))();
    if (param_2 < iVar1) {
      do {
        pCVar2 = (CObject *)(**(code **)(*(int *)param_1 + 0x1ac))(param_2);
        pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,pCVar2);
        if (((pCVar2 != (CObject *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) &&
           (iVar1 = CMDIChildWndEx::IsRegisteredWithTaskbarTabs((CMDIChildWndEx *)pCVar2),
           iVar1 != 0)) {
          return (CMDIChildWndEx *)pCVar2;
        }
        param_2 = param_2 + 1;
        iVar1 = (**(code **)(*(int *)param_1 + 0x1a8))();
      } while (param_2 < iVar1);
    }
  }
  return (CMDIChildWndEx *)0x0;
}

