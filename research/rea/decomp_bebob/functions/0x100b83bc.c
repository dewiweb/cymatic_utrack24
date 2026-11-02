// rea decompile_all
// name: CMFCRibbonBaseElement::NotifyCommand
// address: 0x100b83bc
// body: available
// range: 0x100b83bc-0x100b8507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCRibbonBaseElement::NotifyCommand(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCRibbonBaseElement::NotifyCommand(CMFCRibbonBaseElement *this,int param_1)

{
  HWND wParam;
  CMFCRibbonBar *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  BOOL BVar4;
  CFrameWnd *pCVar5;
  CObject *pCVar6;
  int iVar7;
  HWND hWnd;
  UINT Msg;
  WINDOWPLACEMENT local_34;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  for (; *(int *)(this + 0x30) != 0; this = *(CMFCRibbonBaseElement **)(this + 0x30)) {
    if ((*(int *)(this + 0x68) != 0) &&
       (((*(int *)(this + 0x6c) != 0 || (*(int *)(this + 0x74) != 0)) ||
        (*(int *)(this + 0x70) != 0)))) {
      *(undefined4 *)(this + 0x70) = 0;
      *(undefined4 *)(this + 0x74) = 0;
      *(undefined4 *)(this + 0x6c) = 0;
      (**(code **)(*(int *)this + 0x118))();
    }
  }
  wParam = (HWND)(**(code **)(*(int *)this + 0xa8))();
  if (((wParam == (HWND)0x0) || (wParam == (HWND)0xffffffff)) ||
     (pCVar1 = GetTopLevelRibbonBar(this), pCVar1 == (CMFCRibbonBar *)0x0)) goto LAB_100b84f7;
  pHVar2 = GetParent(*(HWND *)(pCVar1 + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  if (pCVar3 == (CWnd *)0x0) goto LAB_100b84f7;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  (**(code **)(*(int *)this + 0x118))();
  if (wParam == (HWND)0xff00) {
    pHVar2 = *(HWND *)(this + 0x44);
    BVar4 = IsWindow(pHVar2);
    if ((BVar4 == 0) || (pCVar1 = GetTopLevelRibbonBar(this), pCVar1 == (CMFCRibbonBar *)0x0))
    goto LAB_100b84e7;
    pCVar5 = CWnd::GetTopLevelFrame((CWnd *)pCVar1);
    pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar5);
    if (pCVar6 == (CObject *)0x0) goto LAB_100b84e7;
    local_34.length = 0x2c;
    GetWindowPlacement(pHVar2,&local_34);
    if (local_34.showCmd == 2) {
      ShowWindow(pHVar2,9);
    }
    Msg = 0x222;
    hWnd = *(HWND *)(pCVar6 + 0x110);
    wParam = pHVar2;
  }
  else {
LAB_100b84e7:
    Msg = 0x111;
    hWnd = *(HWND *)(pCVar3 + 0x20);
  }
  if (param_1 == 0) {
    SendMessageW(hWnd,Msg,(WPARAM)wParam,0);
  }
  else {
    PostMessageW(hWnd,Msg,(WPARAM)wParam,0);
  }
LAB_100b84f7:
  iVar7 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar7;
}

