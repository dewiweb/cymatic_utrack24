// rea decompile_all
// name: CMFCRibbonPanelMenuBar::CommonInit
// address: 0x100a2573
// body: available
// range: 0x100a2573-0x100a263a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanelMenuBar::CommonInit(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonPanelMenuBar::CommonInit(CMFCRibbonPanelMenuBar *this)

{
  if (*(int *)(this + 0xe20) != 0) {
    *(CMFCRibbonPanelMenuBar **)(*(int *)(this + 0xe20) + 0xac) = this;
  }
  *(undefined4 *)(this + 0xd88) = 0;
  *(undefined4 *)(this + 0xe30) = 0;
  *(undefined4 *)(this + 0xd8c) = 0;
  *(undefined4 *)(this + 0xe28) = 0;
  *(undefined4 *)(this + 0xe2c) = 0;
  *(undefined4 *)(this + 0xe34) = 0;
  SetRectEmpty((LPRECT)(this + 0xd90));
  *(undefined4 *)(this + 0xd80) = 0;
  *(undefined4 *)(this + 0xcc8) = 1;
  *(undefined4 *)(this + 0xd6c) = 1;
  *(undefined4 *)(this + 0xd5c) = 0;
  *(undefined4 *)(this + 0xd60) = 0;
  *(undefined4 *)(this + 0xd64) = 0;
  *(undefined4 *)(this + 0xe24) = 0;
  *(undefined4 *)(this + 0xe1c) = 0;
  *(undefined4 *)(this + 0xd58) = 0;
  *(undefined4 *)(this + 0xc94) = 0;
  *(undefined4 *)(this + 0xd68) = 0;
  *(undefined4 *)(this + 0xd70) = 0;
  *(undefined4 *)(this + 0xd78) = 0;
  *(undefined4 *)(this + 0xd74) = 0;
  *(undefined4 *)(this + 0xd7c) = 0;
  *(undefined4 *)(this + 0xd84) = 0;
  *(undefined4 *)(this + 0xda0) = 0xffffffff;
  *(undefined4 *)(this + 0xda4) = 0xffffffff;
  return;
}

