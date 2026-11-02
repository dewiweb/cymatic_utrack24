// rea decompile_all
// name: CScrollView::CalcWindowRect
// address: 0x100d7f39
// body: available
// range: 0x100d7f39-0x100d7fd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CScrollView::CalcWindowRect(struct tagRECT *,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CScrollView::CalcWindowRect(CScrollView *this,tagRECT *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  uint dwExStyle;
  int iVar5;
  BOOL bMenu;
  int local_10;
  int local_c;
  CScrollView *local_8;
  
  local_8 = this;
  uVar3 = CWnd::GetExStyle((CWnd *)this);
  if (param_2 == 1) {
    AdjustWindowRectEx(param_1,0,0,uVar3);
    if (*(int *)(this + 0x80) != -1) {
      iVar4 = param_1->right - param_1->left;
      iVar5 = param_1->bottom - param_1->top;
      local_10 = 0;
      local_c = 0;
      iVar1 = *(int *)(this + 0x8c);
      iVar2 = *(int *)(this + 0x90);
      GetScrollBarSizes(local_8,(CSize *)&local_10);
      if (iVar2 != iVar5 && -1 < iVar2 - iVar5) {
        param_1->right = param_1->right + local_10;
      }
      if (iVar1 != iVar4 && -1 < iVar1 - iVar4) {
        param_1->bottom = param_1->bottom + local_c;
      }
    }
  }
  else {
    dwExStyle = uVar3 & 0xfffffdff;
    bMenu = 0;
    uVar3 = CWnd::GetExStyle((CWnd *)this);
    AdjustWindowRectEx(param_1,uVar3,bMenu,dwExStyle);
  }
  return;
}

