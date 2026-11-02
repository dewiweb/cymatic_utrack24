// rea decompile_all
// name: CMFCTasksPane::UpdateCaption
// address: 0x100f107f
// body: available
// range: 0x100f107f-0x100f111d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f1099 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTasksPane::UpdateCaption(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTasksPane::UpdateCaption(CMFCTasksPane *this)

{
  int iVar1;
  int iVar2;
  __POSITION *p_Var3;
  int iVar4;
  CWnd *this_00;
  wchar_t *pwVar5;
  
  iVar2 = GetActivePage(this);
  p_Var3 = CObList::FindIndex((CObList *)(this + 0x44c),iVar2);
  if (p_Var3 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  iVar2 = *(int *)(this + 0x458);
  iVar1 = *(int *)(p_Var3 + 8);
  if (*(int *)(this + 0x354) == 0) {
    iVar4 = ForceShowNavToolbar(this);
    if ((iVar4 == 0) && (iVar2 < 2)) {
      pwVar5 = *(wchar_t **)(iVar1 + 4);
      goto LAB_100f10cd;
    }
  }
  pwVar5 = *(wchar_t **)(this + 0x484);
LAB_100f10cd:
  CWnd::SetWindowTextW((CWnd *)this,pwVar5);
  FUN_100f087e(this + 0x524,(undefined4 *)(iVar1 + 4));
  this_00 = (CWnd *)(**(code **)(*(int *)this + 0x224))(1);
  if (this_00 != (CWnd *)0x0) {
    CWnd::SetWindowPos(this_00,(CWnd *)0x0,-1,-1,-1,-1,0x37);
    return;
  }
  (**(code **)(*(int *)this + 0x234))(0,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x37,0);
  return;
}

