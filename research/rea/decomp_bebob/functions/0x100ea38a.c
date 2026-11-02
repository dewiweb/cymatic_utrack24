// rea decompile_all
// name: CCheckListBox::OnLButtonDown
// address: 0x100ea38a
// body: available
// range: 0x100ea38a-0x100ea488 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CCheckListBox::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CCheckListBox::OnLButtonDown
          (CCheckListBox *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  LPARAM lParam;
  WPARAM wParam;
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int iVar4;
  ulong uVar5;
  LRESULT LVar6;
  uint uVar7;
  CCheckListBox *local_8;
  
  local_8 = this;
  CWnd::SetFocus((CWnd *)this);
  wParam = CheckFromPoint(this,param_3,param_4,&local_8);
  iVar1 = IsEnabled(this,wParam);
  if (iVar1 == 0) {
    return;
  }
  if (((*(int *)(this + 0x78) != 2) && (*(int *)(this + 0x78) != 5)) &&
     (local_8 != (CCheckListBox *)0x0)) {
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    iVar1 = (*(int *)(this + 0x78) == 6) + 2;
    iVar4 = GetCheck(this,wParam);
    if (iVar4 == iVar1) {
      iVar4 = iVar4 + -1;
    }
    local_8 = (CCheckListBox *)((iVar4 + 1) % iVar1);
    SetCheck(this,wParam,(int)local_8);
    InvalidateCheck(this,wParam);
    uVar5 = CWnd::GetExStyle((CWnd *)this);
    if (((uVar5 & 0x808) == 0) ||
       (LVar6 = SendMessageW(*(HWND *)(this + 0x20),0x187,wParam,0), LVar6 == 0)) {
      CWnd::Default((CWnd *)this);
    }
    else {
      SetSelectionCheck(this,(int)local_8);
    }
    lParam = *(LPARAM *)(this + 0x20);
    uVar7 = CWnd::GetDlgCtrlID((CWnd *)this);
    SendMessageW(*(HWND *)(pCVar3 + 0x20),0x111,uVar7 & 0xffff | 0x280000,lParam);
    return;
  }
  CWnd::Default((CWnd *)this);
  return;
}

