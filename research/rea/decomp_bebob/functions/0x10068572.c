// rea decompile_all
// name: CView::OnEndPrintPreview
// address: 0x10068572
// body: available
// range: 0x10068572-0x10068632 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CView::OnEndPrintPreview(class CDC *,struct CPrintInfo
   *,struct tagPOINT,class CPreviewView *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CView::OnEndPrintPreview
          (CView *this,CDC *param_1,CPrintInfo *param_2,tagPOINT param_3,CPreviewView *param_4)

{
  CFrameWnd *this_00;
  CObject *pCVar1;
  CFrameWnd *pCVar2;
  
  if (*(int **)(param_4 + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(param_4 + 0xb0) + 0x1a8))(param_1,param_2);
  }
  this_00 = CWnd::GetParentFrame((CWnd *)this);
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,(CObject *)this_00);
  if (pCVar1 == (CObject *)0x0) {
    this_00 = (CFrameWnd *)AfxGetMainWnd();
  }
  (**(code **)(*(int *)this_00 + 0x18c))(0,*(undefined4 *)(param_4 + 0xcc));
  CFrameWnd::SetActiveView(this_00,*(CView **)(*(int *)(param_4 + 0xcc) + 0xc),1);
  pCVar2 = CWnd::GetParentFrame((CWnd *)this);
  if (this_00 != pCVar2) {
    (**(code **)(*(int *)this + 0x18c))(1,this,this);
  }
  (**(code **)(*(int *)param_4 + 0x60))();
  (**(code **)(*(int *)this_00 + 0x174))(1);
  SendMessageW(*(HWND *)(this_00 + 0x20),0x362,0xe001,0);
  UpdateWindow(*(HWND *)(this_00 + 0x20));
  return;
}

