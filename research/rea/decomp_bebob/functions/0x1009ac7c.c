// rea decompile_all
// name: GetRegSectionPath
// address: 0x1009ac7c
// body: available
// range: 0x1009ac7c-0x1009acdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >
   __thiscall CWinAppEx::GetRegSectionPath(char const *)
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   > __thiscall CWinAppEx::GetRegSectionPath(wchar_t const *)
   
   Library: Visual Studio 2010 Release */

CSimpleStringT<wchar_t,0> * __thiscall
GetRegSectionPath(void *this,CSimpleStringT<wchar_t,0> *param_1,wchar_t *param_2)

{
  size_t sVar1;
  
  FUN_1009b642((undefined4 *)param_1,*(wchar_t **)((int)this + 0xbc),(short *)0x0);
  if (param_2 != (wchar_t *)0x0) {
    sVar1 = _wcslen(param_2);
    if (sVar1 != 0) {
      ATL::CSimpleStringT<wchar_t,0>::Append(param_1,param_2);
      ATL::CSimpleStringT<wchar_t,0>::Append(param_1,L"\\");
    }
  }
  return param_1;
}

