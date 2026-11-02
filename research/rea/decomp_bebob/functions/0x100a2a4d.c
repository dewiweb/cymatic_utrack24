// rea decompile_all
// name: CMFCRibbonPanelMenuBar::~CMFCRibbonPanelMenuBar
// address: 0x100a2a4d
// body: available
// range: 0x100a2a4d-0x100a2b9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual __thiscall CMFCRibbonPanelMenuBar::~CMFCRibbonPanelMenuBar(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonPanelMenuBar::~CMFCRibbonPanelMenuBar(CMFCRibbonPanelMenuBar *this)

{
  CMFCRibbonBar *pCVar1;
  int iVar2;
  CWnd *pCVar3;
  BOOL BVar4;
  tagRECT local_24;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  *(undefined ***)this = vftable;
  local_8 = 1;
  if (*(int *)(this + 0xe20) != 0) {
    pCVar1 = *(CMFCRibbonBar **)(this + 0xe1c);
    if ((pCVar1 != (CMFCRibbonBar *)0x0) && (*(int *)(pCVar1 + 0x7b0) == *(int *)(this + 0xe20))) {
      CMFCRibbonBar::DeactivateKeyboardFocus(pCVar1,0);
    }
    if (*(int **)(this + 0xe20) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xe20) + 4))(1);
    }
  }
  if (*(int *)(this + 0xe30) != 0) {
    pCVar1 = *(CMFCRibbonBar **)(this + 0xe1c);
    if ((pCVar1 != (CMFCRibbonBar *)0x0) && (*(int *)(pCVar1 + 0x7b0) == *(int *)(this + 0xe30))) {
      CMFCRibbonBar::DeactivateKeyboardFocus(pCVar1,0);
    }
    if (*(int **)(this + 0xe30) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xe30) + 4))(1);
    }
    pCVar1 = *(CMFCRibbonBar **)(this + 0xe1c);
    if ((pCVar1 != (CMFCRibbonBar *)0x0) && (*(int *)(pCVar1 + 0x710) != 0)) {
      iVar2 = CMFCRibbonBar::IsQuickAccessToolbarOnTop(pCVar1);
      if (iVar2 == 0) {
        iVar2 = *(int *)(pCVar1 + 0x710);
        *(undefined4 *)(iVar2 + 0xb8) = 0;
        *(undefined4 *)(iVar2 + 0xa0) = 0;
        local_24.left = *(LONG *)(iVar2 + 0x4c);
        local_24.top = *(LONG *)(iVar2 + 0x50);
        local_24.right = *(LONG *)(iVar2 + 0x54);
        local_24.bottom = *(LONG *)(*(int *)(this + 0xe1c) + 0xc10);
        InflateRect(&local_24,1,1);
        RedrawWindow(*(HWND *)(*(int *)(this + 0xe1c) + 0x20),&local_24,(HRGN)0x0,0x105);
      }
    }
  }
  iVar2 = DAT_1016843c;
  if ((*(int *)(this + 0xd74) != 0) && (DAT_1016843c != 0)) {
    pCVar3 = CWnd::FromHandlePermanent(*(HWND__ **)(DAT_1016843c + 0x20));
    if (pCVar3 != (CWnd *)0x0) {
      BVar4 = IsWindowVisible(*(HWND *)(iVar2 + 0x20));
      if (BVar4 != 0) {
        CMFCPopupMenu::UpdateAllShadows((tagRECT *)0x0);
      }
    }
  }
  local_8 = local_8 & 0xffffff00;
  CScrollBar::~CScrollBar((CScrollBar *)(this + 0xda8));
  local_8 = 0xffffffff;
  CMFCPopupMenuBar::~CMFCPopupMenuBar((CMFCPopupMenuBar *)this);
  FUN_100f90cf();
  return;
}

