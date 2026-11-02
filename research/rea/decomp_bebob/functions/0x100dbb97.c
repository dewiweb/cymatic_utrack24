// rea decompile_all
// name: CMFCToolTipCtrl::GetHotButton
// address: 0x100dbb97
// body: available
// range: 0x100dbb97-0x100dbc5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolTipCtrl::GetHotButton(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolTipCtrl::GetHotButton(CMFCToolTipCtrl *this)

{
  int iVar1;
  CMFCToolBarImages *pCVar2;
  tagPOINT local_c;
  
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  if ((*(int *)(this + 0x9c) == 0) && (*(int *)(this + 0x90) != 0)) {
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    ScreenToClient(*(HWND *)(*(int *)(this + 0x90) + 0x20),&local_c);
    iVar1 = (**(code **)(**(int **)(this + 0x90) + 0x390))(local_c.x,local_c.y);
    iVar1 = FUN_100261ef(*(void **)(this + 0x90),iVar1);
    *(int *)(this + 0x98) = iVar1;
    if (iVar1 != 0) {
      if (*(int *)(*(CMFCToolBar **)(this + 0x90) + 0xb04) == 0) {
        pCVar2 = DAT_10166e6c;
        if (*(int *)(iVar1 + 4) == 0) {
          *(undefined **)(this + 0x94) = &DAT_10167170;
          if (0 < DAT_10167174) {
            return;
          }
          *(undefined **)(this + 0x94) = &DAT_10166f30;
          return;
        }
      }
      else {
        pCVar2 = CMFCToolBar::GetLockedMenuImages(*(CMFCToolBar **)(this + 0x90));
      }
      *(CMFCToolBarImages **)(this + 0x94) = pCVar2;
    }
  }
  return;
}

