// rea decompile_all
// name: OnCreate
// address: 0x1003c5a9
// body: available
// range: 0x1003c5a9-0x1003c5e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CPaneFrameWnd::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CPaneFrameWnd::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2010 Release */

undefined4 __fastcall OnCreate(CWnd *param_1)

{
  long lVar1;
  HWND__ *pHVar2;
  undefined4 uVar3;
  
  lVar1 = CWnd::Default(param_1);
  if (lVar1 == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    if (param_1 == (CWnd *)0x0) {
      pHVar2 = (HWND__ *)0x0;
    }
    else {
      pHVar2 = *(HWND__ **)(param_1 + 0x20);
    }
    CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)&PTR_vftable_10160684,pHVar2);
    CTooltipManager::CreateToolTip((CToolTipCtrl **)(param_1 + 0x118),param_1,8);
    uVar3 = 0;
  }
  return uVar3;
}

