// rea decompile_all
// name: CMDIClientAreaWnd::ApplyParams
// address: 0x1006339a
// body: available
// range: 0x1006339a-0x10063481 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __thiscall CMDIClientAreaWnd::ApplyParams(class CMFCTabCtrl *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMDIClientAreaWnd::ApplyParams(CMDIClientAreaWnd *this,CMFCTabCtrl *param_1)

{
  CMFCTabCtrl::ModifyTabStyle(param_1,*(Style *)(this + 0x28a8));
  (**(code **)(*(int *)param_1 + 0x274))(*(undefined4 *)(this + 0x28a4));
  *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(this + 0x28b0);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(this + 0x28c8);
  CMFCTabCtrl::EnableTabDocumentsMenu(param_1,*(int *)(this + 0x28bc));
  FUN_10093f29(param_1,*(int *)(this + 0x28b8));
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(this + 0x28c0);
  (**(code **)(*(int *)param_1 + 0x240))(*(undefined4 *)(this + 0x28cc),1);
  FUN_1009410d(param_1,*(int *)(this + 0x28b4));
  *(undefined4 *)(param_1 + 0x100) = 0;
  CMFCTabCtrl::HideNoTabs(param_1,1);
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  CMFCTabCtrl::SetFlatFrame(param_1,*(int *)(this + 0x28c4),1);
  *(undefined4 *)(param_1 + 0x22c) = 1;
  *(undefined4 *)(param_1 + 0x230) = 1;
  CMFCBaseTabCtrl::SetDrawNoPrefix((CMFCBaseTabCtrl *)param_1,1,0);
  CMFCTabCtrl::SetActiveTabBoldFont(param_1,1);
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x118) = 1;
  return;
}

