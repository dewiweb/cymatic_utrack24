// rea decompile_all
// name: CFrameWndEx::OnUpdateFrameMenu
// address: 0x10024736
// body: available
// range: 0x10024736-0x100247c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CFrameWndEx::OnUpdateFrameMenu(struct HMENU__ *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameWndEx::OnUpdateFrameMenu(CFrameWndEx *this,HMENU__ *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  COleClientItem *this_00;
  CWnd *pCVar5;
  CMenu *pCVar6;
  
  CFrameWnd::OnUpdateFrameMenu((CFrameWnd *)this,param_1);
  bVar2 = false;
  if (*(CWnd **)(this + 0x1d0) != (CWnd *)0x0) {
    uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 0x1d0));
    bVar3 = true;
    if ((uVar4 & 0x10000000) != 0) goto LAB_1002476d;
  }
  bVar3 = false;
LAB_1002476d:
  if ((*(CWnd **)(this + 0x220) != (CWnd *)0x0) &&
     (uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 0x220)), (uVar4 & 0x10000000) != 0)) {
    bVar2 = true;
  }
  if ((bVar3) || (bVar2)) {
    this_00 = (COleClientItem *)(**(code **)(*(int *)this + 0x1c4))();
    if ((this_00 != (COleClientItem *)0x0) &&
       (pCVar5 = COleClientItem::GetInPlaceWindow(this_00), pCVar5 != (CWnd *)0x0)) {
      iVar1 = *(int *)this;
      pCVar6 = CMenu::FromHandle(param_1);
      (**(code **)(iVar1 + 0x70))(pCVar6);
      return;
    }
    (**(code **)(*(int *)this + 0x70))(0);
  }
  return;
}

