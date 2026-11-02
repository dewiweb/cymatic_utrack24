// rea decompile_all
// name: CMFCToolBarImages::CopyTemp
// address: 0x100823a0
// body: available
// range: 0x100823a0-0x100823f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarImages::CopyTemp(class CMFCToolBarImages &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarImages::CopyTemp(CMFCToolBarImages *this,CMFCToolBarImages *param_1)

{
  FUN_100822ef((int)param_1);
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(this + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(this + 0x54);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(this + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(this + 100);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(this + 0x88);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 8);
  return;
}

