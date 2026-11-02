// rea decompile_all
// name: CPreviewView::OnSetCursor
// address: 0x100da0dc
// body: available
// range: 0x100da0dc-0x100da173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CPreviewView::OnSetCursor(class CWnd *,unsigned int,unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CPreviewView::OnSetCursor(CPreviewView *this,CWnd *param_1,uint param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  HCURSOR pHVar4;
  tagPOINT local_c;
  
  if (param_2 == 1) {
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    ScreenToClient(*(HWND *)(this + 0x20),&local_c);
    if ((*(int *)(this + 0x130) == 2) ||
       (iVar2 = FindPageRect(this,(CPoint *)&local_c,&param_2), iVar2 == 0)) {
      pHVar4 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    }
    else {
      if (*(int *)(this + 0x144) == 0) {
        pAVar3 = AfxGetModuleState();
        pHVar4 = LoadCursorW(*(HINSTANCE *)(pAVar3 + 0xc),(LPCWSTR)0x7902);
        *(HCURSOR *)(this + 0x144) = pHVar4;
      }
      pHVar4 = *(HCURSOR *)(this + 0x144);
    }
    SetCursor(pHVar4);
    return 0;
  }
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  lVar1 = CWnd::Default((CWnd *)this);
  return lVar1;
}

