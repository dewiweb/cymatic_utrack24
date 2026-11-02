// rea decompile_all
// name: CMFCToolBarButton::Serialize
// address: 0x100878bd
// body: available
// range: 0x100878bd-0x100879ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarButton::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarButton::Serialize(CMFCToolBarButton *this,CArchive *param_1)

{
  CArchive *this_00;
  long lVar1;
  
  this_00 = param_1;
  if (((byte)param_1[0x18] & 1) == 0) {
    CArchive::operator<<(param_1,*(long *)(this + 0x20));
    CArchive::operator<<(this_00,*(long *)(this + 0x24));
    if (*(int *)(this + 4) == 0) {
      lVar1 = *(long *)(this + 0x34);
    }
    else {
      lVar1 = *(long *)(this + 0x38);
    }
    CArchive::operator<<(this_00,lVar1);
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x2c));
    CArchive::operator<<(this_00,*(long *)(this + 4));
    CArchive::operator<<(this_00,*(long *)(this + 0x1c));
    CArchive::operator<<(this_00,*(long *)(this + 8));
    CArchive::operator<<(this_00,*(long *)(this + 0xc));
    CArchive::operator<<(this_00,*(long *)(this + 0x50));
  }
  else {
    CArchive::operator>>(param_1,(long *)(this + 0x20));
    CArchive::operator>>(this_00,(long *)(this + 0x24));
    CArchive::operator>>(this_00,(long *)&param_1);
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x2c));
    CArchive::operator>>(this_00,(long *)(this + 4));
    CArchive::operator>>(this_00,(long *)(this + 0x1c));
    CArchive::operator>>(this_00,(long *)(this + 8));
    CArchive::operator>>(this_00,(long *)(this + 0xc));
    CArchive::operator>>(this_00,(long *)(this + 0x50));
    (**(code **)(*(int *)this + 0xbc))(param_1);
  }
  return;
}

