// rea decompile_all
// name: CMFCPopupMenu::OnVScroll
// address: 0x1005d6a4
// body: available
// range: 0x1005d6a4-0x1005d7b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenu::OnVScroll(unsigned int,unsigned int,class CScrollBar
   *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCPopupMenu::OnVScroll(CMFCPopupMenu *this,uint param_1,uint param_2,CScrollBar *param_3)

{
  uint uVar1;
  int iVar2;
  CMFCPopupMenuBar *this_00;
  int iVar3;
  uint uVar4;
  uint nPos;
  tagSCROLLINFO local_24;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (param_3 == (CScrollBar *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_3 + 0x20);
  }
  iVar2 = 0;
  if (this != (CMFCPopupMenu *)0xfffff0d8) {
    iVar2 = *(int *)(this + 0xf48);
  }
  if (iVar3 != iVar2) {
    CFrameWnd::OnVScroll((CFrameWnd *)this,param_1,param_2,param_3);
    goto switchD_1005d736_default;
  }
  this_00 = (CMFCPopupMenuBar *)(**(code **)(*(int *)this + 0x1c0))();
  _memset(&local_24,0,0x1c);
  local_24.fMask = 0x17;
  local_24.cbSize = 0x1c;
  CWnd::GetScrollInfo((CWnd *)(this + 0xf28),2,&local_24,0x17);
  uVar1 = *(uint *)(this_00 + 0xcd4);
  switch(param_1) {
  case 0:
    param_2 = uVar1 - 1;
    break;
  case 1:
    param_2 = uVar1 + 1;
    break;
  case 2:
    param_2 = uVar1 - local_24.nPage;
    break;
  case 3:
    param_2 = uVar1 + local_24.nPage;
    break;
  case 4:
  case 5:
    break;
  case 6:
    uVar4 = 0;
    param_2 = uVar4;
    goto LAB_1005d747;
  case 7:
    param_2 = local_24.nMax;
    break;
  default:
    goto switchD_1005d736_default;
  }
  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = 0;
  }
LAB_1005d747:
  nPos = local_24.nMax;
  if (((int)uVar4 < local_24.nMax) && (nPos = param_2, (int)param_2 < 0)) {
    nPos = 0;
  }
  if (nPos != uVar1) {
    CMFCPopupMenuBar::SetOffset(this_00,nPos);
    if ((this != (CMFCPopupMenu *)0xfffff0d8) && (*(int *)(this + 0xf48) != 0)) {
      SetScrollPos(*(HWND *)(this + 0xf48),2,nPos,1);
    }
    AdjustScroll(this,0);
  }
switchD_1005d736_default:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

