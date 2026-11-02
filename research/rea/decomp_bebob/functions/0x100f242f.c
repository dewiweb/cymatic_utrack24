// rea decompile_all
// name: FUN_100f242f
// address: 0x100f242f
// body: available
// range: 0x100f242f-0x100f25b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f25b3 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_100f242f(CMFCRibbonBaseElement *param_1)

{
  int iVar1;
  CMFCRibbonBar *this;
  CFont *pCVar2;
  int iVar3;
  int *piVar4;
  CClientDC local_38 [20];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_24 [8];
  int local_1c;
  int local_18;
  CPen *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x100f243b;
  CMFCRibbonBaseElement::OnShowPopupMenu(param_1);
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  iVar1 = CSize::operator==((CSize *)(param_1 + 0x310),(tagSIZE)0x0);
  if (iVar1 != 0) {
    this = CMFCRibbonBaseElement::GetTopLevelRibbonBar(param_1);
    CClientDC::CClientDC(local_38,(CWnd *)this);
    local_8 = 0;
    pCVar2 = CWnd::GetFont((CWnd *)this);
    local_14 = CDC::SelectObject((CDC *)local_38,(CPen *)pCVar2);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x32c)) {
      do {
        if ((iVar1 < 0) || (*(int *)(param_1 + 0x32c) <= iVar1)) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        CDC::GetTextExtent((CDC *)local_38,
                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_1c);
        iVar3 = *(int *)(param_1 + 0x310);
        if (*(int *)(param_1 + 0x310) <= local_1c) {
          iVar3 = local_1c;
        }
        *(int *)(param_1 + 0x310) = iVar3;
        iVar3 = *(int *)(param_1 + 0x314);
        if (*(int *)(param_1 + 0x314) <= local_18) {
          iVar3 = local_18;
        }
        iVar1 = iVar1 + 1;
        *(int *)(param_1 + 0x314) = iVar3;
      } while (iVar1 < *(int *)(param_1 + 0x32c));
    }
    piVar4 = (int *)CDC::GetTextExtent((CDC *)local_38,
                                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                        *)&local_1c);
    iVar1 = *(int *)(param_1 + 0x310);
    if (iVar1 <= *piVar4) {
      piVar4 = (int *)CDC::GetTextExtent((CDC *)local_38,local_24);
      iVar1 = *piVar4;
    }
    *(int *)(param_1 + 0x310) = iVar1;
    piVar4 = (int *)CDC::GetTextExtent((CDC *)local_38,local_24);
    iVar1 = *(int *)(param_1 + 0x310);
    if (iVar1 <= *piVar4) {
      piVar4 = (int *)CDC::GetTextExtent((CDC *)local_38,
                                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                          *)&local_1c);
      iVar1 = *piVar4;
    }
    *(int *)(param_1 + 0x310) = iVar1;
    piVar4 = (int *)CDC::GetTextExtent((CDC *)local_38,local_24);
    iVar1 = *(int *)(param_1 + 0x310);
    if (iVar1 <= *piVar4) {
      piVar4 = (int *)CDC::GetTextExtent((CDC *)local_38,
                                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                          *)&local_1c);
      iVar1 = *piVar4;
    }
    *(int *)(param_1 + 0x310) = iVar1 + 10;
    CDC::SelectObject((CDC *)local_38,local_14);
    local_8 = 0xffffffff;
    CClientDC::~CClientDC(local_38);
  }
  *(undefined4 *)(param_1 + 0x30c) = 0xffffffff;
  FUN_100b09a3(param_1);
  return;
}

