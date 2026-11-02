// rea decompile_all
// name: CMFCColorMenuButton::Serialize
// address: 0x100ebddc
// body: available
// range: 0x100ebddc-0x100ec035 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ebf18 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorMenuButton::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCColorMenuButton::Serialize(CMFCColorMenuButton *this,CArchive *param_1)

{
  undefined4 *puVar1;
  CArchive *this_00;
  int iVar2;
  CObject *pCVar3;
  CObList local_34 [4];
  undefined4 *local_30;
  long local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  this_00 = param_1;
  uStack_4 = 0x24;
  local_8 = 0x100ebde8;
  CMFCToolBarMenuButton::Serialize((CMFCToolBarMenuButton *)this,param_1);
  if (((byte)this_00[0x18] & 1) == 0) {
    CArchive::operator<<(this_00,*(long *)(this + 0xf8));
    iVar2 = 0;
    if (0 < *(int *)(this + 0xf8)) {
      do {
        if ((iVar2 < 0) || (*(int *)(this + 0xf8) <= iVar2)) goto LAB_100ebf18;
        CArchive::operator<<(this_00,*(long *)(*(int *)(this + 0xf4) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 0xf8));
    }
    CArchive::operator<<(this_00,*(long *)(this + 0x10c));
    CArchive::operator<<(this_00,*(long *)(this + 0x110));
    CArchive::operator<<(this_00,*(long *)(this + 0x114));
    CArchive::operator<<(this_00,*(long *)(this + 0x118));
    CArchive::operator<<(this_00,*(long *)(this + 0x11c));
    CArchive::operator<<(this_00,*(long *)(this + 0x120));
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x124));
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x128));
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 300));
    CArchive::operator<<(this_00,*(long *)(this + 0xec));
    CArchive::operator<<(this_00,*(long *)(this + 0x130));
  }
  else {
    CArchive::operator>>(this_00,(long *)&param_1);
    FUN_10005790(this + 0xf0,(int)param_1,-1);
    local_14 = 0;
    if (0 < (int)param_1) {
      do {
        CArchive::operator>>(this_00,&local_18);
        if ((local_14 < 0) || (*(int *)(this + 0xf8) <= local_14)) goto LAB_100ebf18;
        iVar2 = local_14 * 4;
        local_14 = local_14 + 1;
        *(long *)(*(int *)(this + 0xf4) + iVar2) = local_18;
      } while (local_14 < (int)param_1);
    }
    CArchive::operator>>(this_00,(long *)(this + 0x10c));
    CArchive::operator>>(this_00,(long *)(this + 0x110));
    CArchive::operator>>(this_00,(long *)(this + 0x114));
    CArchive::operator>>(this_00,(long *)(this + 0x118));
    CArchive::operator>>(this_00,(long *)(this + 0x11c));
    CArchive::operator>>(this_00,(long *)(this + 0x120));
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x124));
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x128));
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 300));
    CArchive::operator>>(this_00,(long *)(this + 0xec));
    CArchive::operator>>(this_00,(long *)(this + 0x130));
    CObList::CObList(local_34,10);
    local_8 = 0;
    iVar2 = FUN_1002643c(*(int *)(this + 0x20),local_34);
    if (0 < iVar2) {
      while (local_30 != (undefined4 *)0x0) {
        if (local_30 == (undefined4 *)0x0) {
LAB_100ebf18:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        puVar1 = (undefined4 *)*local_30;
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorMenuButton_101630d8,
                                    (CObject *)local_30[2]);
        local_30 = puVar1;
        if (((pCVar3 != (CObject *)0x0) && (pCVar3 != (CObject *)this)) &&
           (*(int *)(pCVar3 + 0xe8) != -1)) {
          *(int *)(this + 0xe8) = *(int *)(pCVar3 + 0xe8);
        }
      }
    }
    local_8 = 0xffffffff;
    FUN_1001e259(local_34);
  }
  return;
}

