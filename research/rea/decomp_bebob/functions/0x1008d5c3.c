// rea decompile_all
// name: CMFCDropDownToolbarButton::Serialize
// address: 0x1008d5c3
// body: available
// range: 0x1008d5c3-0x1008d697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008d650 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCDropDownToolbarButton::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCDropDownToolbarButton::Serialize(CMFCDropDownToolbarButton *this,CArchive *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  CArchive *this_00;
  CObject *pCVar3;
  CWnd *pCVar4;
  long lVar5;
  
  this_00 = param_1;
  CMFCToolBarButton::Serialize((CMFCToolBarButton *)this,param_1);
  lVar5 = 0;
  param_1 = (CArchive *)0x0;
  if (((byte)this_00[0x18] & 1) == 0) {
    if (*(int *)(this + 0x70) != 0) {
      lVar5 = *(long *)(*(int *)(this + 0x70) + 0xca4);
    }
    CArchive::operator<<(this_00,lVar5);
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x74));
    CArchive::operator<<(this_00,*(long *)(this + 0x80));
  }
  else {
    *(undefined4 *)(this + 0x70) = 0;
    CArchive::operator>>(this_00,(long *)&param_1);
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x74));
    CArchive::operator>>(this_00,(long *)(this + 0x80));
    puVar2 = DAT_10166ec0;
    do {
      if (puVar2 == (undefined4 *)0x0) goto LAB_1008d659;
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCDropDownToolBar_10161600,
                                  (CObject *)*puVar1);
    } while (((pCVar3 == (CObject *)0x0) ||
             (pCVar4 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar3 + 0x20)), pCVar4 == (CWnd *)0x0
             )) || (*(CArchive **)(pCVar3 + 0xca4) != param_1));
    *(CObject **)(this + 0x70) = pCVar3;
LAB_1008d659:
    SetDefaultCommand(this,*(uint *)(this + 0x20));
  }
  return;
}

