// rea decompile_all
// name: CMFCVisualManager::CMFCVisualManager
// address: 0x10033afa
// body: available
// range: 0x10033afa-0x10033c19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCVisualManager::CMFCVisualManager(int)
   
   Library: Visual Studio 2010 Release */

CMFCVisualManager * __thiscall
CMFCVisualManager::CMFCVisualManager(CMFCVisualManager *this,int param_1)

{
  CMFCBaseVisualManager::CMFCBaseVisualManager((CMFCBaseVisualManager *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(int *)(this + 0x84) = param_1;
  if ((param_1 == 0) && (DAT_1016784c == (CMFCVisualManager *)0x0)) {
    DAT_1016784c = this;
  }
  *(undefined4 *)(this + 0xc4) = 0xffffffff;
  *(undefined4 *)(this + 0x9c) = 0xc;
  *(undefined4 *)(this + 0xa0) = 0xc;
  *(undefined4 *)(this + 0xb4) = 0xc;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x98) = 6;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 1;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 1;
  *(undefined4 *)(this + 0xa4) = 0xf;
  *(undefined4 *)(this + 0xa8) = 0x19;
  *(undefined4 *)(this + 0xac) = 0xd;
  *(undefined4 *)(this + 0xb0) = 7;
  *(undefined4 *)(this + 0xb8) = 5;
  *(undefined4 *)(this + 0xbc) = 4;
  *(undefined4 *)(this + 0x88) = 1;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0xc0) = 2;
  *(undefined4 *)(this + 0x94) = 1;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  if (param_1 == 0) {
    DAT_101680fc = 1;
    DAT_10168104 = 0;
    DAT_1016222c = 1;
    AFX_GLOBAL_DATA::UpdateSysColors((AFX_GLOBAL_DATA *)&DAT_10166aa0);
  }
  return this;
}

