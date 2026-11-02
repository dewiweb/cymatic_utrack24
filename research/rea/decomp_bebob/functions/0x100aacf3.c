// rea decompile_all
// name: CMFCRibbonQuickAccessToolBar::Add
// address: 0x100aacf3
// body: available
// range: 0x100aacf3-0x100aad65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonQuickAccessToolBar::Add(class CMFCRibbonBaseElement *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCRibbonQuickAccessToolBar::Add(CMFCRibbonQuickAccessToolBar *this,CMFCRibbonBaseElement *param_1)

{
  CRuntimeClass *this_00;
  CObject *pCVar1;
  
  this_00 = (CRuntimeClass *)(*(code *)**(undefined4 **)param_1)();
  pCVar1 = CRuntimeClass::CreateObject(this_00);
  (**(code **)(*(int *)pCVar1 + 200))(param_1);
  *(undefined4 *)(pCVar1 + 0x28) = *(undefined4 *)(this + 0x28);
  if (*(int *)(param_1 + 0x30) == 0) {
    (**(code **)(*(int *)pCVar1 + 0xd0))(param_1);
  }
  else {
    (**(code **)(*(int *)pCVar1 + 0xd0))(*(int *)(param_1 + 0x30));
  }
  *(undefined4 *)(pCVar1 + 0x68) = 1;
  FUN_1006cf3f(this + 0xac,*(int *)(this + 0xb4) + -1,pCVar1,1);
  FUN_100aac10((int)this);
  return;
}

