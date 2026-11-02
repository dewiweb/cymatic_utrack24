// rea decompile_all
// name: CMFCVisualManager::OnFillHeaderCtrlBackground
// address: 0x1003240b
// body: available
// range: 0x1003240b-0x1003243c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnFillHeaderCtrlBackground(class
   CMFCHeaderCtrl *,class CDC *,class CRect)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnFillHeaderCtrlBackground(undefined4 param_1_00,int param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10166b30;
  if (*(int *)(param_1 + 0xa0) == 0) {
    puVar1 = &DAT_10166b68;
  }
  FillRect(*(HDC *)(param_2 + 4),(RECT *)&stack0x0000000c,*(HBRUSH *)(puVar1 + 4));
  return;
}

