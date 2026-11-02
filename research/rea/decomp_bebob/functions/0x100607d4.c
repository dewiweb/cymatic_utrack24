// rea decompile_all
// name: CFrameImpl::ProcessMouseMove
// address: 0x100607d4
// body: available
// range: 0x100607d4-0x100608c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CFrameImpl::ProcessMouseMove(struct tagPOINT)
   
   Library: Visual Studio 2010 Release */

int __thiscall CFrameImpl::ProcessMouseMove(CFrameImpl *this,tagPOINT param_1)

{
  CMFCPopupMenu *pCVar1;
  BOOL BVar2;
  CMFCPopupMenuBar *pCVar3;
  int iVar4;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((DAT_10166e54 == 0) && (DAT_1016843c != (int *)0x0)) {
    pCVar1 = CMFCPopupMenu::FindMenuWithConnectedFloaty();
    if ((pCVar1 != (CMFCPopupMenu *)0x0) &&
       (BVar2 = IsWindow(*(HWND *)(pCVar1 + 0x10c0)), BVar2 != 0)) {
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      GetWindowRect(*(HWND *)(pCVar1 + 0x10c0),&local_28);
      BVar2 = PtInRect(&local_28,param_1);
      if (BVar2 != 0) goto LAB_100608b9;
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect((HWND)DAT_1016843c[8],&local_18);
    BVar2 = PtInRect(&local_18,param_1);
    if (BVar2 == 0) {
      pCVar3 = (CMFCPopupMenuBar *)(**(code **)(*DAT_1016843c + 0x1c0))(param_1.x,param_1.y);
      CMFCPopupMenuBar::FindDestintationToolBar(pCVar3,param_1.x,param_1.y);
    }
  }
LAB_100608b9:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

