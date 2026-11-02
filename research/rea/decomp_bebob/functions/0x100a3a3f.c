// rea decompile_all
// name: CMFCRibbonPanelMenuBar::RestoreDelayedSubMenu
// address: 0x100a3a3f
// body: available
// range: 0x100a3a3f-0x100a3b23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonPanelMenuBar::RestoreDelayedSubMenu(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonPanelMenuBar::RestoreDelayedSubMenu(CMFCRibbonPanelMenuBar *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0xe28) != 0) && (*(int *)(this + 0xe20) != 0)) {
    *(undefined4 *)(*(int *)(this + 0xe28) + 0x128) = 0;
    iVar3 = FUN_100b2604(*(int *)(this + 0xe20));
    iVar1 = *(int *)(this + 0xe28);
    local_18.left = *(LONG *)(iVar1 + 0x18);
    local_18.top = *(LONG *)(iVar1 + 0x1c);
    local_18.right = *(LONG *)(iVar1 + 0x20);
    local_18.bottom = *(LONG *)(iVar1 + 0x24);
    (**(code **)(**(int **)(this + 0xe20) + 0x70))(1,local_18.left,local_18.top);
    iVar1 = *(int *)(this + 0xe28);
    bVar2 = false;
    if (iVar1 != iVar3) {
      if (iVar1 != 0) {
        local_18.left = *(LONG *)(iVar1 + 0x18);
        local_18.top = *(LONG *)(iVar1 + 0x1c);
        local_18.right = *(LONG *)(iVar1 + 0x20);
        local_18.bottom = *(LONG *)(iVar1 + 0x24);
        InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
      }
      if (iVar3 != 0) {
        local_18.left = *(LONG *)(iVar3 + 0x18);
        local_18.top = *(LONG *)(iVar3 + 0x1c);
        local_18.right = *(LONG *)(iVar3 + 0x20);
        local_18.bottom = *(LONG *)(iVar3 + 0x24);
        InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
      }
      bVar2 = true;
    }
    *(undefined4 *)(this + 0xe28) = 0;
    KillTimer(*(HWND *)(this + 0x20),2);
    if (bVar2) {
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

