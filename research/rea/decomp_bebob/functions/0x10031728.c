// rea decompile_all
// name: CMFCBaseVisualManager::CleanUpThemes
// address: 0x10031728
// body: available
// range: 0x10031728-0x100317fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCBaseVisualManager::CleanUpThemes(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCBaseVisualManager::CleanUpThemes(CMFCBaseVisualManager *this)

{
  if (*(code **)(this + 0x54) != (code *)0x0) {
    if (*(int *)(this + 4) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 4));
    }
    if (*(int *)(this + 8) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 8));
    }
    if (*(int *)(this + 0xc) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 0xc));
    }
    if (*(int *)(this + 0x14) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 0x14));
    }
    if (*(int *)(this + 0x10) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 0x10));
    }
    if (*(int *)(this + 0x18) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 0x18));
    }
    if (*(int *)(this + 0x1c) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 0x1c));
    }
    if (*(int *)(this + 0x20) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 0x20));
    }
    if (*(int *)(this + 0x24) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 0x24));
    }
    if (*(int *)(this + 0x28) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 0x28));
    }
    if (*(int *)(this + 0x2c) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 0x2c));
    }
    if (*(int *)(this + 0x30) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 0x30));
    }
    if (*(int *)(this + 0x34) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 0x34));
    }
    if (*(int *)(this + 0x38) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 0x38));
    }
    if (*(int *)(this + 0x3c) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 0x3c));
    }
    if (*(int *)(this + 0x40) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 0x40));
    }
    if (*(int *)(this + 0x44) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 0x44));
    }
    if (*(int *)(this + 0x48) != 0) {
      (**(code **)(this + 0x54))(*(int *)(this + 0x48));
    }
  }
  return;
}

