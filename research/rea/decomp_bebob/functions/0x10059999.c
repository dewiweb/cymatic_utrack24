// rea decompile_all
// name: CMDIChildWnd::UpdateClientEdge
// address: 0x10059999
// body: available
// range: 0x10059999-0x10059aa5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMDIChildWnd::UpdateClientEdge(struct tagRECT *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMDIChildWnd::UpdateClientEdge(CMDIChildWnd *this,tagRECT *param_1)

{
  bool bVar1;
  CMDIFrameWnd *this_00;
  CMDIChildWnd *pCVar2;
  CObject *pCVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint dwNewLong;
  
  this_00 = GetMDIFrame(this);
  pCVar2 = CMDIFrameWnd::MDIGetActive(this_00,(int *)0x0);
  if ((((pCVar2 == (CMDIChildWnd *)0x0) ||
       (pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,
                                    (CObject *)pCVar2), pCVar3 == (CObject *)0x0)) ||
      (*(CMDIFrameWndEx **)(pCVar3 + 0x438) == (CMDIFrameWndEx *)0x0)) ||
     (iVar4 = CMDIFrameWndEx::AreMDITabs(*(CMDIFrameWndEx **)(pCVar3 + 0x438),(int *)0x0),
     iVar4 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((pCVar2 == (CMDIChildWnd *)0x0) || (pCVar2 == this)) && (!bVar1)) {
    uVar5 = GetWindowLongW(*(HWND *)(this_00 + 0x110),-0x14);
    if (((pCVar2 == (CMDIChildWnd *)0x0) ||
        (uVar6 = CWnd::GetExStyle((CWnd *)this), (uVar6 & 0x200) != 0)) ||
       (uVar6 = CWnd::GetExStyle((CWnd *)this), (uVar6 & 0x1000000) == 0)) {
      dwNewLong = uVar5 | 0x200;
    }
    else {
      dwNewLong = uVar5 & 0xfffffdff;
    }
    if (uVar5 != dwNewLong) {
      RedrawWindow(*(HWND *)(this_00 + 0x110),(RECT *)0x0,(HRGN)0x0,0x81);
      SetWindowLongW(*(HWND *)(this_00 + 0x110),-0x14,dwNewLong);
      SetWindowPos(*(HWND *)(this_00 + 0x110),(HWND)0x0,0,0,0,0,0x137);
      if (param_1 != (tagRECT *)0x0) {
        GetClientRect(*(HWND *)(this_00 + 0x110),param_1);
      }
      return 1;
    }
  }
  return 0;
}

