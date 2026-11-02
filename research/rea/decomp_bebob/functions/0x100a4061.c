// rea decompile_all
// name: FUN_100a4061
// address: 0x100a4061
// body: available
// range: 0x100a4061-0x100a4184 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a4180 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

CMFCPopupMenuBar * __thiscall FUN_100a4061(void *this,undefined4 *param_1)

{
  CRuntimeClass *this_00;
  CObject *pCVar1;
  int iVar2;
  
  CMFCPopupMenuBar::CMFCPopupMenuBar(this);
  *(undefined ***)this = CMFCRibbonPanelMenuBar::vftable;
  *(undefined4 *)((int)this + 0xd80) = 0;
  *(undefined4 *)((int)this + 0xd84) = 0;
  *(undefined4 *)((int)this + 0xd88) = 0;
  *(undefined4 *)((int)this + 0xd8c) = 0;
  *(undefined4 *)((int)this + 0xd90) = 0;
  *(undefined4 *)((int)this + 0xd94) = 0;
  *(undefined4 *)((int)this + 0xd98) = 0;
  *(undefined4 *)((int)this + 0xd9c) = 0;
  *(undefined4 *)((int)this + 0xda0) = 0;
  *(undefined4 *)((int)this + 0xda4) = 0;
  CWnd::CWnd((CWnd *)((int)this + 0xda8));
  *(undefined ***)((int)this + 0xda8) = CScrollBar::vftable;
  this_00 = (CRuntimeClass *)(**(code **)*param_1)();
  pCVar1 = CRuntimeClass::CreateObject(this_00);
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanel_10132fa4,pCVar1);
  *(CObject **)((int)this + 0xe20) = pCVar1;
  (**(code **)(*(int *)pCVar1 + 0xc))(param_1);
  CMFCRibbonPanelMenuBar::CommonInit(this);
  *(undefined4 **)((int)this + 0xe24) = param_1;
  *(void **)(*(int *)((int)this + 0xe20) + 0xac) = this;
  iVar2 = 0;
  if (0 < *(int *)(*(int *)((int)this + 0xe20) + 0x25c)) {
    do {
      if ((iVar2 < 0) || (*(int *)(*(int *)((int)this + 0xe20) + 0x25c) <= iVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0xe20) + 600) + iVar2 * 4) + 0xcc))
                (this);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(int *)((int)this + 0xe20) + 0x25c));
  }
  *(undefined4 *)((int)this + 0xe1c) =
       *(undefined4 *)(*(int *)(*(int *)((int)this + 0xe20) + 0xa8) + 0x3c0);
  return this;
}

