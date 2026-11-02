// rea decompile_all
// name: CMFCToolBarEditBoxButton::Serialize
// address: 0x100e8a57
// body: available
// range: 0x100e8a57-0x100e8aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarEditBoxButton::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarEditBoxButton::Serialize(CMFCToolBarEditBoxButton *this,CArchive *param_1)

{
  CSimpleStringT<wchar_t,0> *this_00;
  
  CMFCToolBarButton::Serialize((CMFCToolBarButton *)this,param_1);
  if (((byte)param_1[0x18] & 1) == 0) {
    CArchive::operator<<(param_1,*(long *)(this + 0x70));
    CArchive::operator<<(param_1,*(long *)(this + 0x74));
    this_00 = (CSimpleStringT<wchar_t,0> *)(this + 0x7c);
    if (*(CWnd **)(this + 0x78) == (CWnd *)0x0) {
      ATL::CSimpleStringT<wchar_t,0>::Empty(this_00);
    }
    else {
      CWnd::GetWindowTextW
                (*(CWnd **)(this + 0x78),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)this_00);
    }
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)this_00
              );
    CArchive::operator<<(param_1,*(long *)(this + 0x8c));
  }
  else {
    CArchive::operator>>(param_1,(long *)(this + 0x70));
    *(int *)(this + 0x5c) = *(int *)(this + 0x54) + *(int *)(this + 0x70);
    CArchive::operator>>(param_1,(long *)(this + 0x74));
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x7c));
    CArchive::operator>>(param_1,(long *)(this + 0x8c));
  }
  return;
}

