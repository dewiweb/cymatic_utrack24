// rea decompile_all
// name: CMFCRibbonBar::ShowSysMenu
// address: 0x1006d6fe
// body: available
// range: 0x1006d6fe-0x1006d8a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonBar::ShowSysMenu(class CPoint const &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonBar::ShowSysMenu(CMFCRibbonBar *this,CPoint *param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  HMENU pHVar3;
  CMenu *pCVar4;
  BOOL BVar5;
  ulong uVar6;
  UINT uIDEnableItem;
  
  pHVar1 = GetParent(*(HWND *)(this + 0x20));
  pCVar2 = CWnd::FromHandle(pHVar1);
  if ((pCVar2 != (CWnd *)0x0) && (*(HWND *)(pCVar2 + 0x20) != (HWND)0x0)) {
    pHVar3 = GetSystemMenu(*(HWND *)(pCVar2 + 0x20),0);
    pCVar4 = CMenu::FromHandle(pHVar3);
    if ((pCVar4 != (CMenu *)0x0) && (*(HMENU *)(pCVar4 + 4) != (HMENU)0x0)) {
      SetMenuDefaultItem(*(HMENU *)(pCVar4 + 4),0xf060,0);
      pHVar1 = GetParent(*(HWND *)(this + 0x20));
      pCVar2 = CWnd::FromHandle(pHVar1);
      BVar5 = IsZoomed(*(HWND *)(pCVar2 + 0x20));
      if (BVar5 == 0) {
        EnableMenuItem(*(HMENU *)(pCVar4 + 4),0xf120,3);
        EnableMenuItem(*(HMENU *)(pCVar4 + 4),0xf000,0);
        EnableMenuItem(*(HMENU *)(pCVar4 + 4),0xf010,0);
        uIDEnableItem = 0xf030;
      }
      else {
        EnableMenuItem(*(HMENU *)(pCVar4 + 4),0xf000,3);
        EnableMenuItem(*(HMENU *)(pCVar4 + 4),0xf010,3);
        EnableMenuItem(*(HMENU *)(pCVar4 + 4),0xf030,3);
        uIDEnableItem = 0xf120;
      }
      EnableMenuItem(*(HMENU *)(pCVar4 + 4),uIDEnableItem,0);
      pHVar1 = GetParent(*(HWND *)(this + 0x20));
      pCVar2 = CWnd::FromHandle(pHVar1);
      uVar6 = CWnd::GetExStyle(pCVar2);
      if ((uVar6 & 0x10000) == 0) {
        DeleteMenu(*(HMENU *)(pCVar4 + 4),0xf120,0);
        DeleteMenu(*(HMENU *)(pCVar4 + 4),0xf030,0);
      }
      pHVar1 = GetParent(*(HWND *)(this + 0x20));
      pCVar2 = CWnd::FromHandle(pHVar1);
      uVar6 = CWnd::GetExStyle(pCVar2);
      if ((uVar6 & 0x20000) == 0) {
        DeleteMenu(*(HMENU *)(pCVar4 + 4),0xf020,0);
      }
      if (DAT_101688d8 == (int *)0x0) {
        pCVar2 = CWnd::GetOwner((CWnd *)this);
        if (pCVar2 == (CWnd *)0x0) {
          pHVar1 = (HWND)0x0;
        }
        else {
          pHVar1 = *(HWND *)(pCVar2 + 0x20);
        }
        TrackPopupMenu(*(HMENU *)(pCVar4 + 4),4,*(int *)param_1,*(int *)(param_1 + 4),0,pHVar1,
                       (RECT *)0x0);
      }
      else {
        pHVar1 = GetParent(*(HWND *)(this + 0x20));
        pCVar2 = CWnd::FromHandle(pHVar1);
        (**(code **)(*DAT_101688d8 + 0xc))
                  (*(undefined4 *)(pCVar4 + 4),*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),
                   pCVar2,1,1,0);
      }
    }
  }
  return;
}

