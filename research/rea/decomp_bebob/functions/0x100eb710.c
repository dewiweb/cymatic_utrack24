// rea decompile_all
// name: CMFCColorMenuButton::CreatePopupMenu
// address: 0x100eb710
// body: available
// range: 0x100eb710-0x100eb803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual class CMFCPopupMenu * __thiscall CMFCColorMenuButton::CreatePopupMenu(void)
   
   Library: Visual Studio 2010 Release */

CMFCPopupMenu * __thiscall CMFCColorMenuButton::CreatePopupMenu(CMFCColorMenuButton *this)

{
  CFrameWnd *pCVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  CMFCPopupMenu *pCVar4;
  undefined **local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  pCVar4 = (CMFCPopupMenu *)0x0;
  local_30 = CList<unsigned_long,unsigned_long>::vftable;
  local_24 = 0;
  local_20 = 0;
  local_28 = 0;
  local_2c = 0;
  local_1c = 0;
  local_18 = 10;
  local_8 = 0;
  if ((*(int *)(this + 0x120) != 0) && (*(CWnd **)(this + 0x6c) != (CWnd *)0x0)) {
    pCVar1 = DAT_10168578;
    if (DAT_10168578 == (CFrameWnd *)0x0) {
      pCVar1 = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0x6c));
    }
    SendMessageW(*(HWND *)(pCVar1 + 0x20),DAT_10169e6c,*(WPARAM *)(this + 0x20),(LPARAM)&local_30);
  }
  local_14 = FUN_1000858a(0x1eb8);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_14 != (void *)0x0) {
    if (*(int *)(this + 0x120) == 0) {
      ppuVar3 = (undefined **)0x0;
    }
    else {
      ppuVar3 = *(undefined ***)(this + 300);
    }
    if (*(int *)(this + 0x11c) == 0) {
      ppuVar2 = (undefined **)0x0;
    }
    else {
      ppuVar2 = *(undefined ***)(this + 0x128);
    }
    if (*(int *)(this + 0x118) != 0) {
      pCVar4 = *(CMFCPopupMenu **)(this + 0x124);
    }
    pCVar4 = CMFCColorPopupMenu(local_14,(int)(this + 0xf0),*(undefined4 *)(this + 0xe8),
                                (undefined **)pCVar4,ppuVar2,ppuVar3,
                                (CList<struct_HWND__*,struct_HWND__*> *)&local_30,
                                *(int *)(this + 0x10c),*(undefined4 *)(this + 0x114),
                                *(undefined4 *)(this + 0x110),*(undefined4 *)(this + 0xec),
                                *(undefined4 *)(this + 0x20),*(undefined4 *)(this + 0x130));
  }
  local_8 = 0xffffffff;
  local_30 = CList<unsigned_long,unsigned_long>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_30);
  return pCVar4;
}

