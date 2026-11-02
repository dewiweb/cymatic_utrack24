// rea decompile_all
// name: CWnd::GetWindowTextW
// address: 0x10012c1b
// body: available
// range: 0x10012c1b-0x10012c64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CWnd::GetWindowTextW(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &)const 
   
   Library: Visual Studio 2010 Release */

void __thiscall
CWnd::GetWindowTextW
          (CWnd *this,CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1)

{
  int iVar1;
  wchar_t *lpString;
  int nMaxCount;
  
  if (*(int *)(this + 0x6c) == 0) {
    iVar1 = GetWindowTextLengthW(*(HWND *)(this + 0x20));
    nMaxCount = iVar1 + 1;
    lpString = ATL::CSimpleStringT<wchar_t,0>::GetBufferSetLength
                         ((CSimpleStringT<wchar_t,0> *)param_1,iVar1);
    ::GetWindowTextW(*(HWND *)(this + 0x20),lpString,nMaxCount);
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)param_1,-1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10012c5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x6c) + 0x8c))();
  return;
}

