// rea decompile_all
// name: CDockingManager::OnPaneContextMenu
// address: 0x100428f6
// body: available
// range: 0x100428f6-0x100429c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CDockingManager::OnPaneContextMenu(class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDockingManager::OnPaneContextMenu(CDockingManager *this,undefined4 param_2,undefined4 param_3)

{
  HMENU pHVar1;
  int *piVar2;
  undefined **local_20;
  undefined4 local_1c;
  CMFCPopupMenu *local_18;
  CFrameWnd *local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x10042902;
  if (*(int *)(this + 0x1dc) != 0) {
    local_14 = DAT_10168578;
    if (DAT_10168578 == (CFrameWnd *)0x0) {
      local_14 = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0xe4));
    }
    if (local_14 != (CFrameWnd *)0x0) {
      local_20 = CMenu::vftable;
      local_1c = 0;
      local_8 = 0;
      pHVar1 = CreatePopupMenu();
      CMenu::Attach((CMenu *)&local_20,pHVar1);
      BuildPanesMenu(this,(CMenu *)&local_20,*(int *)(this + 0x1e0));
      local_18 = FUN_1000858a(0x10c4);
      local_8._0_1_ = 1;
      if (local_18 == (CMFCPopupMenu *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)CMFCPopupMenu::CMFCPopupMenu(local_18);
      }
      piVar2[0x3ab] = 0;
      *(undefined4 *)(this + 0x1d8) = 1;
      local_8 = (uint)local_8._1_3_ << 8;
      (**(code **)(*piVar2 + 0x208))(local_14,param_2,param_3,local_1c,0,0);
      local_8 = 0xffffffff;
      local_20 = CMenu::vftable;
      CMenu::DestroyMenu((CMenu *)&local_20);
    }
  }
  return;
}

