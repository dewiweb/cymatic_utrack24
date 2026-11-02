// rea decompile_all
// name: CMDIFrameWndEx::TabbedDocumentToControlBar
// address: 0x10023a0e
// body: available
// range: 0x10023a0e-0x10023aac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMDIFrameWndEx::TabbedDocumentToControlBar(class CMDIChildWndEx
   *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMDIFrameWndEx::TabbedDocumentToControlBar(CMDIFrameWndEx *this,CMDIChildWndEx *param_1)

{
  int iVar1;
  CObject *this_00;
  
  if (*(CObject **)(param_1 + 0x434) == (CObject *)0x0) {
    iVar1 = 0;
  }
  else {
    this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                 *(CObject **)(param_1 + 0x434));
    if (this_00 != (CObject *)0x0) {
      if (*(int *)(this_00 + 0x2a0) == 0) {
        CWnd::ShowWindow((CWnd *)this_00,0);
        CWnd::SetParent((CWnd *)this_00,(CWnd *)this);
        *(undefined4 *)(this_00 + 0x84) = 0;
        (**(code **)(*(int *)this_00 + 0x364))();
      }
      else {
        CWnd::SetParent((CWnd *)this_00,(CWnd *)this);
        *(undefined4 *)(this_00 + 0x84) = 0;
        (**(code **)(*(int *)this_00 + 0x1f8))
                  (*(undefined4 *)(this_00 + 0x1d8),*(undefined4 *)(this_00 + 0x1dc),
                   *(undefined4 *)(this_00 + 0x1e0),*(undefined4 *)(this_00 + 0x1e4),2,1);
      }
    }
    SendMessageW(*(HWND *)(param_1 + 0x20),0x10,0,0);
    iVar1 = 1;
  }
  return iVar1;
}

