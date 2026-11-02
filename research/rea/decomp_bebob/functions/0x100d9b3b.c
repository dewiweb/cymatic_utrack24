// rea decompile_all
// name: CPreviewView::OnPreviewClose
// address: 0x100d9b3b
// body: available
// range: 0x100d9b3b-0x100d9c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewView::OnPreviewClose(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPreviewView::OnPreviewClose(CPreviewView *this)

{
  CFrameWnd *pCVar1;
  CObject *pCVar2;
  CObject *pCVar3;
  
  pCVar1 = CWnd::GetParentFrame((CWnd *)this);
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,(CObject *)pCVar1);
  if (pCVar2 == (CObject *)0x0) {
    pCVar1 = (CFrameWnd *)AfxGetMainWnd();
  }
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,(CObject *)pCVar1);
  if ((*(int *)(this + 0xd0) != 0) && (*(int *)(*(int *)(this + 0xd0) + 0x74) != 0)) {
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWnd_10129a0c,pCVar2);
    if ((pCVar2 != (CObject *)0x0) && (*(CObject **)(this + 0x74) != (CObject *)0x0)) {
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleServerDoc_10139900,
                                  *(CObject **)(this + 0x74));
      if (pCVar3 != (CObject *)0x0) {
        (**(code **)(**(int **)(this + 0xd0) + 0x60))();
        *(undefined4 *)(this + 0xd0) = 0;
        *(undefined4 *)(pCVar2 + 0x17c) = 0;
        (**(code **)(*(int *)pCVar3 + 0x170))(1);
      }
    }
  }
  if (*(int **)(this + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd0) + 0x60))();
  }
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(*(int *)(this + 0x158) + 0x14) = *(undefined4 *)(this + 0x138);
  (**(code **)(**(int **)(this + 0xac) + 0x1ac))
            (*(undefined4 *)(this + 0xb4),*(undefined4 *)(this + 0x158),0,0,this);
  return;
}

