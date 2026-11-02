// rea decompile_all
// name: CMFCVisualManager::RibbonCategoryColorToRGB
// address: 0x100313c0
// body: available
// range: 0x100313c0-0x10031478 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::RibbonCategoryColorToRGB(enum
   AFX_RibbonCategoryColor)
   
   Library: Visual Studio 2010 Release */

ulong __thiscall
CMFCVisualManager::RibbonCategoryColorToRGB(CMFCVisualManager *this,AFX_RibbonCategoryColor param_1)

{
  if (((DAT_10166c4c < 9) || (DAT_10166c28 != 0)) || (DAT_10166c24 != 0)) {
    if (param_1 == 1) {
      return 0xff;
    }
    if (param_1 == 2) {
      return 0x80ff;
    }
    if (param_1 == 3) {
      return 0xffff;
    }
    if (param_1 == 4) {
      return 0xff00;
    }
    if (param_1 == 5) {
      return 0xff0000;
    }
    if (param_1 == 6) {
      return 0x800000;
    }
    if (param_1 == 7) {
      return 0xff00ff;
    }
  }
  else {
    if (param_1 == 1) {
      return 0xa0a0ff;
    }
    if (param_1 == 2) {
      return 0x37bdef;
    }
    if (param_1 == 3) {
      return 0x1be5fd;
    }
    if (param_1 == 4) {
      return 0x59be71;
    }
    if (param_1 == 5) {
      return 0xc4b580;
    }
    if (param_1 == 6) {
      return 0xe0a372;
    }
    if (param_1 == 7) {
      return 0xd1b2d6;
    }
  }
  return 0xffffffff;
}

