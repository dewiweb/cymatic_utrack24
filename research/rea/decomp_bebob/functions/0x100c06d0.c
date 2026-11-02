// rea decompile_all
// name: CMFCOutlookBarPane::PreTranslateMessage
// address: 0x100c06d0
// body: available
// range: 0x100c06d0-0x100c085d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCOutlookBarPane::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCOutlookBarPane::PreTranslateMessage(CMFCOutlookBarPane *this,tagMSG *param_1)

{
  uint uVar1;
  POINT pt;
  POINT pt_00;
  BOOL BVar2;
  int iVar3;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  uVar1 = param_1->message;
  if (0x1ff < uVar1) {
    if (0x201 < uVar1) {
      if (uVar1 != 0x202) goto LAB_100c0846;
      KillTimer(*(HWND *)(this + 0x20),1);
      KillTimer(*(HWND *)(this + 0x20),2);
    }
    local_20.x = 0;
    local_20.y = 0;
    GetCursorPos(&local_20);
    ScreenToClient(*(HWND *)(this + 0x20),&local_20);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x1550),&local_18);
    MapWindowPoints(*(HWND *)(this + 0x1550),*(HWND *)(this + 0x20),(LPPOINT)&local_18,2);
    pt.y = local_20.y;
    pt.x = local_20.x;
    BVar2 = PtInRect(&local_18,pt);
    if ((BVar2 != 0) &&
       (SendMessageW(*(HWND *)(this + 0x1550),param_1->message,param_1->wParam,param_1->wParam),
       param_1->message == 0x201)) {
      SetTimer(*(HWND *)(this + 0x20),2,200,(TIMERPROC)0x0);
      if (*(int *)(this + 0x1ca4) == 0) {
        ScrollDown(this);
      }
      else {
        ScrollPageDown(this);
      }
    }
    GetClientRect(*(HWND *)(this + 0xe00),&local_18);
    MapWindowPoints(*(HWND *)(this + 0xe00),*(HWND *)(this + 0x20),(LPPOINT)&local_18,2);
    pt_00.y = local_20.y;
    pt_00.x = local_20.x;
    BVar2 = PtInRect(&local_18,pt_00);
    if ((BVar2 != 0) &&
       (SendMessageW(*(HWND *)(this + 0xe00),param_1->message,param_1->wParam,param_1->wParam),
       param_1->message == 0x201)) {
      SetTimer(*(HWND *)(this + 0x20),1,200,(TIMERPROC)0x0);
      if (*(int *)(this + 0x1ca4) == 0) {
        ScrollUp(this);
      }
      else {
        ScrollPageUp(this);
      }
    }
  }
LAB_100c0846:
  CMFCToolBar::PreTranslateMessage((CMFCToolBar *)this,param_1);
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

