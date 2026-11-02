// rea decompile_all
// name: CMFCToolBar::OnUpdateCmdUI
// address: 0x100282a1
// body: available
// range: 0x100282a1-0x1002835e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBar::OnUpdateCmdUI(class CFrameWnd *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::OnUpdateCmdUI(CMFCToolBar *this,CFrameWnd *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined **local_2c;
  undefined4 local_28;
  uint local_24;
  CMFCToolBar *local_18;
  uint local_c;
  
  CCmdUI::CCmdUI((CCmdUI *)&local_2c);
  local_c = *(uint *)(this + 0xbd4);
  local_24 = 0;
  local_2c = CMFCToolBarCmdUI::vftable;
  local_18 = this;
  if (local_c != 0) {
    do {
      iVar2 = FUN_100261ef(this,local_24);
      if (iVar2 == 0) {
        return;
      }
      if (((DAT_101685b0 != 0) && (*(uint *)(DAT_101685b0 + 0x24) <= *(uint *)(iVar2 + 0x20))) &&
         (*(uint *)(iVar2 + 0x20) <= *(uint *)(DAT_101685b0 + 0x28))) {
        param_2 = 0;
      }
      local_28 = *(undefined4 *)(iVar2 + 0x20);
      if ((((*(byte *)(iVar2 + 0x24) & 1) == 0) && (uVar1 = *(uint *)(iVar2 + 0x20), uVar1 != 0)) &&
         ((0x1ef < uVar1 - 0xf000 && (uVar1 < 0xff00)))) {
        CCmdUI::DoUpdate((CCmdUI *)&local_2c,(CCmdTarget *)param_1,param_2);
      }
      local_24 = local_24 + 1;
    } while (local_24 < local_c);
  }
  if ((param_2 == 0) || (*(int *)(this + 0xb3c) == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  CWnd::UpdateDialogControls((CWnd *)this,(CCmdTarget *)param_1,iVar2);
  return;
}

