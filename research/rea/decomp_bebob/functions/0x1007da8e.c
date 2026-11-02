// rea decompile_all
// name: CMFCToolBarMenuButton::OnCancelMode
// address: 0x1007da8e
// body: available
// range: 0x1007da8e-0x1007db9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarMenuButton::OnCancelMode(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarMenuButton::OnCancelMode(CMFCToolBarMenuButton *this)

{
  BOOL BVar1;
  int iVar2;
  CMFCToolBarMenuButton *pCVar3;
  CMFCVisualManager *pCVar4;
  int iVar5;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x8c) != 0) {
    BVar1 = IsWindow(*(HWND *)(*(int *)(this + 0x8c) + 0x20));
    if (BVar1 != 0) {
      iVar2 = (**(code **)(**(int **)(this + 0x8c) + 0x1c4))();
      if (iVar2 != 0) goto LAB_1007db91;
      iVar5 = 0;
      iVar2 = CMFCPopupMenu::GetMenuItemCount(*(CMFCPopupMenu **)(this + 0x8c));
      if (0 < iVar2) {
        do {
          pCVar3 = CMFCPopupMenu::GetMenuItem(*(CMFCPopupMenu **)(this + 0x8c),iVar5);
          if (pCVar3 != (CMFCToolBarMenuButton *)0x0) {
            (**(code **)(*(int *)pCVar3 + 0x58))();
          }
          iVar5 = iVar5 + 1;
          iVar2 = CMFCPopupMenu::GetMenuItemCount(*(CMFCPopupMenu **)(this + 0x8c));
        } while (iVar5 < iVar2);
      }
      (**(code **)(**(int **)(this + 0x8c) + 0x1d8))();
      *(undefined4 *)(*(int *)(this + 0x8c) + 0x120) = 0;
      CMFCPopupMenu::CloseMenu(*(CMFCPopupMenu **)(this + 0x8c),0);
    }
  }
  *(undefined4 *)(this + 0x8c) = 0;
  if (*(int *)(this + 0x6c) != 0) {
    BVar1 = IsWindow(*(HWND *)(*(int *)(this + 0x6c) + 0x20));
    if (BVar1 != 0) {
      local_18.left = *(LONG *)(this + 0x54);
      local_18.top = *(LONG *)(this + 0x58);
      local_18.right = *(LONG *)(this + 0x5c);
      local_18.bottom = *(LONG *)(this + 0x60);
      pCVar4 = CMFCVisualManager::GetInstance();
      InflateRect(&local_18,*(int *)(pCVar4 + 0x98),*(int *)(pCVar4 + 0x98));
      InvalidateRect(*(HWND *)(*(int *)(this + 0x6c) + 0x20),&local_18,1);
      UpdateWindow(*(HWND *)(*(int *)(this + 0x6c) + 0x20));
    }
  }
  *(undefined4 *)(this + 0xa4) = 0;
LAB_1007db91:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

