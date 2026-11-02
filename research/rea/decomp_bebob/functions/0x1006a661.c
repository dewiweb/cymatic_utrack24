// rea decompile_all
// name: CFrameWnd::ProcessHelpMsg
// address: 0x1006a661
// body: available
// range: 0x1006a661-0x1006a860 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CFrameWnd::ProcessHelpMsg(struct tagMSG &,unsigned long *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CFrameWnd::ProcessHelpMsg(CFrameWnd *this,tagMSG *param_1,ulong *param_2)

{
  uint uVar1;
  tagPOINT tVar2;
  tagPOINT tVar3;
  tagPOINT tVar4;
  tagMSG *lpMsg;
  HWND__ *hWnd;
  LRESULT LVar5;
  ulong uVar6;
  BOOL BVar7;
  HWND pHVar8;
  int iVar9;
  UINT wMsgFilterMin;
  tagMSG local_2c;
  tagPOINT local_10;
  CFrameWnd *local_8;
  
  lpMsg = param_1;
  wMsgFilterMin = param_1->message;
  local_8 = this;
  if ((wMsgFilterMin == 0x367) || ((wMsgFilterMin == 0x100 && (param_1->wParam == 0x1b)))) {
LAB_1006a851:
    PeekMessageW(lpMsg,(HWND)0x0,wMsgFilterMin,wMsgFilterMin,1);
    return 0;
  }
  local_10.x = 0;
  local_10.y = 0;
  if (((wMsgFilterMin < 0x200) || (0x209 < wMsgFilterMin)) &&
     ((wMsgFilterMin < 0xa0 || (0xa9 < wMsgFilterMin)))) {
    if ((wMsgFilterMin != 0x112) && ((wMsgFilterMin < 0x100 || (0x109 < wMsgFilterMin)))) {
      BVar7 = PeekMessageW(param_1,(HWND)0x0,wMsgFilterMin,wMsgFilterMin,1);
      if (BVar7 == 0) {
        return 1;
      }
LAB_1006a77b:
      DispatchMessageW(lpMsg);
      return 1;
    }
    pHVar8 = GetCapture();
    if (pHVar8 != (HWND)0x0) {
      ReleaseCapture();
      do {
        BVar7 = PeekMessageW(&local_2c,(HWND)0x0,0x200,0x209,3);
      } while (BVar7 != 0);
    }
    BVar7 = PeekMessageW(lpMsg,(HWND)0x0,lpMsg->message,lpMsg->message,0);
    if (BVar7 == 0) goto LAB_1006a82d;
    GetMessageW(lpMsg,(HWND)0x0,lpMsg->message,lpMsg->message);
    iVar9 = (**(code **)(*(int *)local_8 + 0x10c))(lpMsg);
    if (iVar9 != 0) goto LAB_1006a82d;
    TranslateMessage(lpMsg);
    uVar1 = lpMsg->message;
    if ((uVar1 != 0x112) && ((uVar1 < 0x104 || (0x107 < uVar1)))) goto LAB_1006a82d;
  }
  else {
    tVar3.x = (param_1->pt).x;
    tVar3.y = (param_1->pt).y;
    hWnd = SetHelpCapture(this,tVar3,(int *)&param_1);
    if (hWnd == (HWND__ *)0x0) {
      return 1;
    }
    if (param_1 == (tagMSG *)0x0) {
      PeekMessageW(lpMsg,(HWND)0x0,lpMsg->message,lpMsg->message,1);
      goto LAB_1006a77b;
    }
    if (lpMsg->message != 0x201) {
      PeekMessageW(lpMsg,(HWND)0x0,lpMsg->message,lpMsg->message,1);
      return 1;
    }
    LVar5 = SendMessageW(hWnd,0x84,0,CONCAT22((short)(lpMsg->pt).y,(short)(lpMsg->pt).x));
    if ((LVar5 != 5) && (LVar5 != 3)) {
      if (LVar5 == 1) {
        tVar4.x = (lpMsg->pt).x;
        tVar4.y = (lpMsg->pt).y;
        uVar6 = _AfxMapClientArea(hWnd,tVar4);
      }
      else {
        uVar6 = _AfxMapNonClientArea(LVar5);
      }
      *param_2 = uVar6;
      wMsgFilterMin = lpMsg->message;
      goto LAB_1006a851;
    }
    ReleaseCapture();
    GetMessageW(lpMsg,(HWND)0x0,0xa1,0xa1);
  }
  DispatchMessageW(lpMsg);
LAB_1006a82d:
  GetCursorPos(&local_10);
  tVar2.y = local_10.y;
  tVar2.x = local_10.x;
  SetHelpCapture(local_8,tVar2,(int *)0x0);
  return 1;
}

