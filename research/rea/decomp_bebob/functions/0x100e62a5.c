// rea decompile_all
// name: CMFCToolBarsToolsPropertyPage::DoDataExchange
// address: 0x100e62a5
// body: available
// range: 0x100e62a5-0x100e6369 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCToolBarsToolsPropertyPage::DoDataExchange(class
   CDataExchange *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarsToolsPropertyPage::DoDataExchange
          (CMFCToolBarsToolsPropertyPage *this,CDataExchange *param_1)

{
  DDX_Control(param_1,0x4265,(CWnd *)(this + 0xa8));
  DDX_Control(param_1,0x425d,(CWnd *)(this + 0x818));
  DDX_Control(param_1,0x421c,(CWnd *)(this + 0xf88));
  DDX_Control(param_1,0x421d,(CWnd *)(this + 0xffc));
  DDX_Control(param_1,0x421a,(CWnd *)(this + 0x1070));
  DDX_Control(param_1,0x421b,(CWnd *)(this + 0x10e4));
  DDX_Control(param_1,0x4219,(CWnd *)(this + 0x1158));
  DDX_Text(param_1,0x421a,
           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0x132c));
  DDX_Text(param_1,0x421c,
           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0x1330));
  DDX_Text(param_1,0x421d,
           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0x1334));
  return;
}

