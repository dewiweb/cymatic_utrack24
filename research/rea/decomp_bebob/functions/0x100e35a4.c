// rea decompile_all
// name: CMFCToolBarsListPropertyPage::DoDataExchange
// address: 0x100e35a4
// body: available
// range: 0x100e35a4-0x100e3632 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCToolBarsListPropertyPage::DoDataExchange(class
   CDataExchange *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarsListPropertyPage::DoDataExchange
          (CMFCToolBarsListPropertyPage *this,CDataExchange *param_1)

{
  DDX_Control(param_1,0x40e4,(CWnd *)(this + 0xa8));
  DDX_Control(param_1,0x40e8,(CWnd *)(this + 0x11c));
  DDX_Control(param_1,0x40e7,(CWnd *)(this + 400));
  DDX_Control(param_1,0x40e9,(CWnd *)(this + 0x204));
  DDX_Control(param_1,0x40e5,(CWnd *)(this + 0x278));
  DDX_Control(param_1,0x40e3,(CWnd *)(this + 0x2ec));
  DDX_Check(param_1,0x40e4,(int *)(this + 0x37c));
  return;
}

