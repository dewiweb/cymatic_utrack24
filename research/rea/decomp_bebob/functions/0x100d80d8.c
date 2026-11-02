// rea decompile_all
// name: CScrollView::OnScrollBy
// address: 0x100d80d8
// body: available
// range: 0x100d80d8-0x100d81d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CScrollView::OnScrollBy(class CSize,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CScrollView::OnScrollBy(CScrollView *this,int param_2,int param_3,int param_4)

{
  ulong uVar1;
  CWnd *pCVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x78))(1);
  if (pCVar2 == (CWnd *)0x0) {
    uVar3 = uVar1 & 0x200000;
  }
  else {
    uVar3 = CWnd::IsWindowEnabled(pCVar2);
  }
  if (uVar3 == 0) {
    param_3 = 0;
  }
  pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x78))(0);
  if (pCVar2 == (CWnd *)0x0) {
    uVar3 = uVar1 & 0x100000;
  }
  else {
    uVar3 = CWnd::IsWindowEnabled(pCVar2);
  }
  if (uVar3 == 0) {
    param_2 = 0;
  }
  iVar4 = CWnd::GetScrollPos((CWnd *)this,0);
  iVar5 = CWnd::GetScrollLimit((CWnd *)this,0);
  param_2 = iVar4 + param_2;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (iVar5 < param_2) {
    param_2 = iVar5;
  }
  iVar5 = CWnd::GetScrollPos((CWnd *)this,1);
  iVar6 = CWnd::GetScrollLimit((CWnd *)this,1);
  param_3 = iVar5 + param_3;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (iVar6 < param_3) {
    param_3 = iVar6;
  }
  if ((param_2 == iVar4) && (param_3 == iVar5)) {
    iVar4 = 0;
  }
  else {
    if (param_4 != 0) {
      CWnd::ScrollWindow((CWnd *)this,iVar4 - param_2,iVar5 - param_3,(tagRECT *)0x0,(tagRECT *)0x0)
      ;
      if (param_2 != iVar4) {
        CWnd::SetScrollPos((CWnd *)this,0,param_2,1);
      }
      if (param_3 != iVar5) {
        CWnd::SetScrollPos((CWnd *)this,1,param_3,1);
      }
    }
    iVar4 = 1;
  }
  return iVar4;
}

