// rea decompile_all
// name: DoDataExchange
// address: 0x100e459d
// body: available
// range: 0x100e459d-0x100e4674 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual void __thiscall CMFCRibbonKeyboardCustomizeDialog::DoDataExchange(class
   CDataExchange *)
    protected: virtual void __thiscall CMFCToolBarsKeyboardPropertyPage::DoDataExchange(class
   CDataExchange *)
   
   Library: Visual Studio 2010 Release */

void __thiscall DoDataExchange(void *this,CDataExchange *param_1)

{
  DDX_Control(param_1,0x4090,(CWnd *)((int)this + 0xa8));
  DDX_Control(param_1,0x4104,(CWnd *)((int)this + 0x11c));
  DDX_Control(param_1,0x4102,(CWnd *)((int)this + 0x1a8));
  DDX_Control(param_1,0x408e,(CWnd *)((int)this + 0x21c));
  DDX_Control(param_1,0x4106,(CWnd *)((int)this + 0x290));
  DDX_Control(param_1,0x4103,(CWnd *)((int)this + 0x304));
  DDX_Control(param_1,0x4101,(CWnd *)((int)this + 0x378));
  DDX_Control(param_1,0x40d9,(CWnd *)((int)this + 0x3ec));
  DDX_Control(param_1,0x4105,(CWnd *)((int)this + 0x460));
  DDX_Text(param_1,0x4082,
           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)((int)this + 0x4d4)
          );
  DDX_Text(param_1,0x408f,
           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)((int)this + 0x4d8)
          );
  return;
}

