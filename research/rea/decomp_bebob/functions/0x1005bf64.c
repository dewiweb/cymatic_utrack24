// rea decompile_all
// name: CMFCPopupMenu::UpdateBottomWindows
// address: 0x1005bf64
// body: available
// range: 0x1005bf64-0x1005c090 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenu::UpdateBottomWindows(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPopupMenu::UpdateBottomWindows(CMFCPopupMenu *this,int param_1)

{
  CWnd *pCVar1;
  ulong uVar2;
  BOOL BVar3;
  HWND hWnd;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar1 = CWnd::GetTopLevelParent((CWnd *)this);
  if (pCVar1 != (CWnd *)0x0) {
    if ((*(int *)(this + 0xfc0) == 0) || (DAT_10160dec != 0)) {
      hWnd = *(HWND *)(pCVar1 + 0x20);
    }
    else {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(pCVar1 + 0x20),&local_18);
      local_28.top = *(LONG *)(this + 300);
      local_28.left = *(LONG *)(this + 0x128);
      local_28.bottom = local_28.top + *(int *)(this + 0x13c) + *(int *)(this + 0xfc0);
      local_28.right = local_28.left + *(int *)(this + 0x138) + *(int *)(this + 0xfc0);
      uVar2 = CWnd::GetExStyle((CWnd *)this);
      if ((uVar2 & 0x400000) != 0) {
        OffsetRect(&local_28,-(*(int *)(this + 0xfc0) + *(int *)(this + 0x138)),0);
      }
      local_38.left = 0;
      local_38.top = 0;
      local_38.right = 0;
      local_38.bottom = 0;
      UnionRect(&local_38,&local_28,&local_18);
      BVar3 = EqualRect(&local_38,&local_18);
      if (BVar3 == 0) {
        *(undefined4 *)(this + 0xfc0) = 0;
        if (param_1 == 0) {
          CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,-1,-1,*(int *)(this + 0x138),
                             *(int *)(this + 0x13c),0x16);
        }
        goto LAB_1005c081;
      }
      hWnd = *(HWND *)(pCVar1 + 0x20);
    }
    UpdateWindow(hWnd);
  }
LAB_1005c081:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

