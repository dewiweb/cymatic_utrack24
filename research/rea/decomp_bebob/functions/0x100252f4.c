// rea decompile_all
// name: CFrameWndEx::OnSetPreviewMode
// address: 0x100252f4
// body: available
// range: 0x100252f4-0x10025393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CFrameWndEx::OnSetPreviewMode(int,struct CPrintPreviewState *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CFrameWndEx::OnSetPreviewMode(CFrameWndEx *this,int param_1,CPrintPreviewState *param_2)

{
  undefined4 uVar1;
  CObject *pCVar2;
  
  pCVar2 = DAT_10168578;
  if (DAT_10168578 == (CObject *)0x0) {
    pCVar2 = (CObject *)CWnd::GetTopLevelFrame((CWnd *)this);
  }
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c,pCVar2);
  if (pCVar2 != (CObject *)0x0) {
    *(uint *)(pCVar2 + 0x418) = -(uint)(param_1 != 0) & (uint)this;
  }
  CDockingManager::SetPrintPreviewMode((CDockingManager *)(this + 0x228),param_1,param_2);
  uVar1 = *(undefined4 *)(param_2 + 8);
  CFrameWnd::OnSetPreviewMode((CFrameWnd *)this,param_1,param_2);
  *(undefined4 *)(param_2 + 8) = uVar1;
  (**(code **)(*(int *)this + 0x1b8))(0);
  (**(code **)(*(int *)this + 0x174))(1);
  if ((*(int *)(this + 0x220) != 0) && (*(int *)(*(int *)(this + 0x220) + 0x314) != 0)) {
    PostMessageW(*(HWND *)(this + 0x20),DAT_10168494,param_1,0);
  }
  return;
}

