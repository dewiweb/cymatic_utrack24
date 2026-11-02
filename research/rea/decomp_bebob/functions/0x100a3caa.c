// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnVScroll
// address: 0x100a3caa
// body: available
// range: 0x100a3caa-0x100a3e0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanelMenuBar::OnVScroll(unsigned int,unsigned int,class
   CScrollBar *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCRibbonPanelMenuBar::OnVScroll
          (CMFCRibbonPanelMenuBar *this,uint param_1,uint param_2,CScrollBar *param_3)

{
  uint nPos;
  int iVar1;
  int iVar2;
  uint uVar3;
  tagSCROLLINFO local_24;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xe20) == 0) {
LAB_100a3dd6:
    if (DAT_10168dec == 0) {
      DAT_10168dec = 1;
      CWnd::OnVScroll((CWnd *)this,param_1,param_2,param_3);
      DAT_10168dec = 0;
    }
    goto switchD_100a3d60_default;
  }
  if (param_3 == (CScrollBar *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_3 + 0x20);
  }
  if ((CWnd *)(this + 0xda8) == (CWnd *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0xdc8);
  }
  if ((iVar2 != iVar1) || (*(int *)(*(int *)(this + 0xe20) + 0xb0) == 0)) goto LAB_100a3dd6;
  _memset(&local_24,0,0x1c);
  local_24.fMask = 0x17;
  local_24.cbSize = 0x1c;
  CWnd::GetScrollInfo((CWnd *)(this + 0xda8),2,&local_24,0x17);
  iVar2 = *(int *)(*(int *)(this + 0xe20) + 0x58);
  if ((int)(local_24.nMax - local_24.nPage) < 2) goto switchD_100a3d60_default;
  iVar1 = CMFCRibbonGallery::GetMenuRowHeight
                    (*(CMFCRibbonGallery **)(*(int *)(this + 0xe20) + 0xb0));
  switch(param_1) {
  case 0:
    param_2 = iVar2 - iVar1;
    break;
  case 1:
    param_2 = iVar2 + iVar1;
    break;
  case 2:
    param_2 = iVar2 - local_24.nPage;
    break;
  case 3:
    param_2 = iVar2 + local_24.nPage;
    break;
  case 4:
  case 5:
    break;
  case 6:
    uVar3 = 0;
    param_2 = uVar3;
    goto LAB_100a3d73;
  case 7:
    param_2 = local_24.nMax;
    break;
  default:
    goto switchD_100a3d60_default;
  }
  uVar3 = param_2;
  if ((int)param_2 < 0) {
    uVar3 = 0;
  }
LAB_100a3d73:
  nPos = local_24.nMax - local_24.nPage;
  if (((int)uVar3 < (int)nPos) && (nPos = param_2, (int)param_2 < 0)) {
    nPos = 0;
  }
  if (nPos != *(uint *)((int)*(void **)(this + 0xe20) + 0x58)) {
    FUN_100b3f04(*(void **)(this + 0xe20),nPos,0);
    SetScrollPos(*(HWND *)(this + 0xdc8),2,nPos,1);
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
switchD_100a3d60_default:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

