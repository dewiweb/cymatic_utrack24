// rea decompile_all
// name: CFrameImpl::OnLoadFrame
// address: 0x100603a6
// body: available
// range: 0x100603a6-0x10060428 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::OnLoadFrame(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameImpl::OnLoadFrame(CFrameImpl *this)

{
  int *piVar1;
  AFX_MODULE_STATE *pAVar2;
  CObject *pCVar3;
  ulong uVar4;
  
  pAVar2 = AfxGetModuleState();
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_1012f19c,*(CObject **)(pAVar2 + 4));
  if (pCVar3 != (CObject *)0x0) {
    (**(code **)(*(int *)pCVar3 + 0x110))(0,this);
  }
  if ((*(int *)(this + 0x100) == 0) || (*(int *)(*(int *)(this + 0x100) + 0x20) == 0)) {
    piVar1 = *(int **)(this + 0xfc);
    if ((piVar1 != (int *)0x0) && (piVar1[8] != 0)) {
      (**(code **)(*piVar1 + 0x20c))();
    }
  }
  else {
    CWnd::SetWindowPos(*(CWnd **)(this + 0xb0),(CWnd *)0x0,-1,-1,-1,-1,0x37);
  }
  uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0));
  DAT_10166c38 = uVar4 & 0x400000;
  return;
}

