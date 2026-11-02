// rea decompile_all
// name: CMFCToolBarComboBoxButton::HasFocus
// address: 0x100cfb46
// body: available
// range: 0x100cfb46-0x100cfbd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarComboBoxButton::HasFocus(void)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBarComboBoxButton::HasFocus(CMFCToolBarComboBoxButton *this)

{
  CWnd *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  LRESULT LVar4;
  BOOL BVar5;
  
  if (*(int *)(this + 0xb4) == 0) {
    return 0;
  }
  pHVar2 = GetFocus();
  pCVar3 = CWnd::FromHandle(pHVar2);
  LVar4 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x157,0,0);
  if ((LVar4 == 0) && (pCVar3 != *(CWnd **)(this + 0xb4))) {
    if (pCVar3 == (CWnd *)0x0) {
      pHVar2 = (HWND)0x0;
    }
    else {
      pHVar2 = *(HWND *)(pCVar3 + 0x20);
    }
    BVar5 = IsChild(*(HWND *)(*(CWnd **)(this + 0xb4) + 0x20),pHVar2);
    if (BVar5 == 0) {
      pCVar1 = *(CWnd **)(this + 0xb0);
      if (pCVar1 == (CWnd *)0x0) {
        return 0;
      }
      if (pCVar3 != pCVar1) {
        pHVar2 = (HWND)0x0;
        if (pCVar3 != (CWnd *)0x0) {
          pHVar2 = *(HWND *)(pCVar3 + 0x20);
        }
        BVar5 = IsChild(*(HWND *)(pCVar1 + 0x20),pHVar2);
        if (BVar5 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

