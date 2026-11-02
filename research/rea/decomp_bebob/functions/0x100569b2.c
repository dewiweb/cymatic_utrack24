// rea decompile_all
// name: GetMessageString
// address: 0x100569b2
// body: available
// range: 0x100569b2-0x100569fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CFrameWnd::GetMessageString(unsigned int,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &)const 
    public: virtual void __thiscall COleControl::GetMessageString(unsigned int,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &)const 
   
   Library: Visual Studio 2010 Release */

void GetMessageString(uint param_1,CSimpleStringT<wchar_t,0> *param_2)

{
  wchar_t *pwVar1;
  uint uVar2;
  
  pwVar1 = (wchar_t *)FUN_10002140(param_2,0xff);
  uVar2 = FUN_1000abfa(param_1,pwVar1,0x100);
  if (uVar2 != 0) {
    pwVar1 = _wcschr(pwVar1,L'\n');
    if (pwVar1 != (wchar_t *)0x0) {
      *pwVar1 = L'\0';
    }
  }
  ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer(param_2,-1);
  return;
}

