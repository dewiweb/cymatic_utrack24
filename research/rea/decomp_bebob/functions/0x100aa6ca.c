// rea decompile_all
// name: CMFCColorBar::Serialize
// address: 0x100aa6ca
// body: available
// range: 0x100aa6ca-0x100aa8b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100aa7e6 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorBar::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCColorBar::Serialize(CMFCColorBar *this,CArchive *param_1)

{
  CArchive *this_00;
  int iVar1;
  CMFCColorBar *local_c;
  CMFCColorBar *local_8;
  
  this_00 = param_1;
  local_c = this;
  local_8 = this;
  CMFCToolBar::Serialize((CMFCToolBar *)this,param_1);
  if (((byte)this_00[0x18] & 1) == 0) {
    CArchive::operator<<(this_00,*(long *)(this + 0xd58));
    CArchive::operator<<(this_00,*(long *)(this + 0xd5c));
    CArchive::operator<<(this_00,*(long *)(this + 0xd60));
    CArchive::operator<<(this_00,*(long *)(this + 0xdd4));
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xdd8));
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xddc));
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xde0));
    CArchive::operator<<(this_00,*(long *)(this + 0xd80));
    CArchive::operator<<(this_00,*(long *)(this + 0xd8c));
    CArchive::operator<<(this_00,*(long *)(this + 0xd78));
    CArchive::operator<<(this_00,*(long *)(this + 0xd98));
    iVar1 = 0;
    if (0 < *(int *)(this + 0xd98)) {
      do {
        if ((iVar1 < 0) || (*(int *)(this + 0xd98) <= iVar1)) goto LAB_100aa7e6;
        CArchive::operator<<(this_00,*(long *)(*(int *)(this + 0xd94) + iVar1 * 4));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0xd98));
    }
  }
  else {
    CArchive::operator>>(this_00,(long *)(this + 0xd58));
    CArchive::operator>>(this_00,(long *)(this + 0xd5c));
    CArchive::operator>>(this_00,(long *)(this + 0xd60));
    CArchive::operator>>(this_00,(long *)(this + 0xdd4));
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xdd8));
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xddc));
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xde0));
    CArchive::operator>>(this_00,(long *)(this + 0xd80));
    CArchive::operator>>(this_00,(long *)(this + 0xd8c));
    CArchive::operator>>(this_00,(long *)(this + 0xd78));
    param_1 = (CArchive *)0x0;
    CArchive::operator>>(this_00,(long *)&param_1);
    FUN_10005790(this + 0xd90,(int)param_1,-1);
    local_8 = (CMFCColorBar *)0x0;
    if (0 < (int)param_1) {
      do {
        CArchive::operator>>(this_00,(long *)&local_c);
        if (((int)local_8 < 0) || (*(int *)(this + 0xd98) <= (int)local_8)) {
LAB_100aa7e6:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        *(CMFCColorBar **)(*(int *)(this + 0xd94) + (int)local_8 * 4) = local_c;
        local_8 = local_8 + 1;
      } while ((int)local_8 < (int)param_1);
    }
    (**(code **)(*(int *)this + 0x458))();
    (**(code **)(*(int *)this + 0x3e0))();
  }
  return;
}

