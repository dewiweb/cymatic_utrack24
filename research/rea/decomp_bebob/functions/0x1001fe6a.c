// rea decompile_all
// name: CMDIChildWndEx::OnNcActivate
// address: 0x1001fe6a
// body: available
// range: 0x1001fe6a-0x1001fefc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMDIChildWndEx::OnNcActivate(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMDIChildWndEx::OnNcActivate(CMDIChildWndEx *this,int param_1)

{
  int iVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  int *piVar4;
  
  iVar1 = CFrameImpl::OnNcActivate((CFrameImpl *)(this + 0x140),param_1);
  if (iVar1 != 0) {
    SendMessageW(*(HWND *)(this + 0x20),0xb,0,0);
  }
  iVar2 = FUN_10059b52((CWnd *)this);
  if (iVar1 != 0) {
    SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
  }
  pAVar3 = AfxGetModuleState();
  if (*(int **)(pAVar3 + 4) != (int *)0x0) {
    piVar4 = (int *)(**(code **)(**(int **)(pAVar3 + 4) + 0xfc))();
    if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 0x30))(), iVar1 != 0)) {
      return iVar2;
    }
    InvalidateIconicBitmaps(this);
  }
  return iVar2;
}

