// rea decompile_all
// name: CreateNewWindow
// address: 0x100236fe
// body: available
// range: 0x100236fe-0x10023774 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual class CMDIChildWndEx * __thiscall CMDIFrameWndEx::CreateNewWindow(char const
   *,class CObject *)
    public: virtual class CMDIChildWndEx * __thiscall CMDIFrameWndEx::CreateNewWindow(wchar_t const
   *,class CObject *)
   
   Library: Visual Studio 2010 Release */

CObject * __thiscall CreateNewWindow(void *this,undefined4 param_1)

{
  int iVar1;
  CObject *pCVar2;
  AFX_MODULE_STATE *pAVar3;
  int *piVar4;
  CWnd *this_00;
  void *local_8;
  
  local_8 = this;
  iVar1 = CMDIFrameWndEx::AreMDITabs(this,(int *)0x0);
  if (iVar1 == 0) {
    pAVar3 = AfxGetModuleState();
    piVar4 = (int *)(**(code **)(**(int **)(pAVar3 + 4) + 0xa4))(param_1);
    if (piVar4 != (int *)0x0) {
      local_8 = (void *)(**(code **)(*piVar4 + 0x68))();
      if (local_8 != (void *)0x0) {
        this_00 = (CWnd *)(**(code **)(*piVar4 + 0x6c))(&local_8);
        pCVar2 = (CObject *)CWnd::GetParentFrame(this_00);
        goto LAB_10023763;
      }
    }
    pCVar2 = (CObject *)0x0;
  }
  else {
    CMDIFrameWndEx::OnWindowNew(this);
    pCVar2 = (CObject *)CMDIFrameWnd::MDIGetActive(this,(int *)0x0);
LAB_10023763:
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,pCVar2);
  }
  return pCVar2;
}

