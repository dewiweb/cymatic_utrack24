// rea decompile_all
// name: CMDIChildWnd::ActivateFrame
// address: 0x10059b9c
// body: available
// range: 0x10059b9c-0x10059c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMDIChildWnd::ActivateFrame(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMDIChildWnd::ActivateFrame(CMDIChildWnd *this,int param_1)

{
  ulong uVar1;
  CMDIFrameWnd *this_00;
  ulong uVar2;
  CMDIFrameWnd *pCVar3;
  uint uVar4;
  LRESULT LVar5;
  WPARAM WVar6;
  int iVar7;
  
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  this_00 = GetMDIFrame(this);
  iVar7 = param_1;
  if (param_1 == -1) {
    CMDIFrameWnd::MDIGetActive(this_00,&param_1);
    uVar2 = CWnd::GetExStyle((CWnd *)this);
    if ((param_1 == 0) && ((uVar2 & 0x1000000) == 0)) {
      if ((uVar2 & 0x20000000) != 0) {
        iVar7 = 2;
      }
    }
    else {
      iVar7 = 3;
    }
  }
  CFrameWnd::ActivateFrame((CFrameWnd *)this,iVar7);
  pCVar3 = GetMDIFrame(this);
  SendMessageW(*(HWND *)(pCVar3 + 0x110),0x234,0,0);
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  uVar4 = uVar2 >> 0x1c & 1;
  if (uVar4 != (uVar1 >> 0x1c & 1)) {
    if (uVar4 == 0) {
      LVar5 = SendMessageW(*(HWND *)(this_00 + 0x110),0x229,0,0);
      if (LVar5 == *(int *)(this + 0x20)) {
        CMDIFrameWnd::MDINext(this_00);
        WVar6 = SendMessageW(*(HWND *)(this_00 + 0x110),0x229,0,0);
        if (WVar6 == *(WPARAM *)(this + 0x20)) {
          SendMessageW(*(HWND *)(this_00 + 0x110),0x222,*(WPARAM *)(this + 0x20),0);
          *(undefined4 *)(this + 0x114) = 1;
        }
      }
    }
    else if (*(int *)(this + 0x114) != 0) {
      SendMessageW(*(HWND *)(this_00 + 0x110),0x222,0,*(LPARAM *)(this + 0x20));
    }
  }
  return;
}

