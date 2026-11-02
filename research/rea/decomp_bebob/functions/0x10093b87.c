// rea decompile_all
// name: CMFCBaseTabCtrl::PreTranslateMessage
// address: 0x10093b87
// body: available
// range: 0x10093b87-0x10093cdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseTabCtrl::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCBaseTabCtrl::PreTranslateMessage(CMFCBaseTabCtrl *this,tagMSG *param_1)

{
  uint uVar1;
  POINT pt;
  BOOL BVar2;
  int iVar3;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x140) == 0) {
    CWnd::PreTranslateMessage((CWnd *)this,param_1);
    goto LAB_10093ccf;
  }
  uVar1 = param_1->message;
  if ((uVar1 < 0x100) || (0x109 < uVar1)) {
    if ((uVar1 < 0x200) || (0x20e < uVar1)) goto LAB_10093ccf;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(*(int *)(this + 0x140) + 0x20),&local_18);
    MapWindowPoints(*(HWND *)(*(int *)(this + 0x140) + 0x20),*(HWND *)(this + 0x20),
                    (LPPOINT)&local_18,2);
    local_20.x = 0;
    local_20.y = 0;
    GetCursorPos(&local_20);
    ScreenToClient(*(HWND *)(this + 0x20),&local_20);
    pt.y = local_20.y;
    pt.x = local_20.x;
    BVar2 = PtInRect(&local_18,pt);
    if (BVar2 != 0) {
      SendMessageW(*(HWND *)(*(int *)(this + 0x140) + 0x20),param_1->message,param_1->wParam,
                   param_1->lParam);
      goto LAB_10093ccf;
    }
    if (param_1->message == 0x200) goto LAB_10093ccf;
  }
  else if (param_1->wParam == 0xd) {
    iVar3 = (**(code **)(*(int *)this + 0x1f8))();
    if (iVar3 == 0) {
      MessageBeep(0xffffffff);
      goto LAB_10093ccf;
    }
  }
  else if (param_1->wParam != 0x1b) goto LAB_10093ccf;
  (**(code **)(**(int **)(this + 0x140) + 0x60))();
  if (*(int **)(this + 0x140) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x140) + 4))(1);
  }
  *(undefined4 *)(this + 0x13c) = 0xffffffff;
  *(undefined4 *)(this + 0x140) = 0;
  ReleaseCapture();
LAB_10093ccf:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

