// rea decompile_all
// name: CMDITabProxyWnd::OnSysCommand
// address: 0x1002035a
// body: available
// range: 0x1002035a-0x100203bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDITabProxyWnd::OnSysCommand(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMDITabProxyWnd::OnSysCommand(CMDITabProxyWnd *this,uint param_1,long param_2)

{
  CFrameWnd *pCVar1;
  CObject *pCVar2;
  
  if (*(CWnd **)(this + 0x74) != (CWnd *)0x0) {
    pCVar1 = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0x74));
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar1);
    if (param_1 == 0xf060) {
      CWnd::Default((CWnd *)this);
    }
    else {
      if (param_1 != 0xf020) {
        (**(code **)(**(int **)(this + 0x74) + 0x214))();
      }
      SendMessageW(*(HWND *)(pCVar2 + 0x20),0x112,param_1,param_2);
    }
  }
  return;
}

