// rea decompile_all
// name: CMFCTasksPane::OnSetAccData
// address: 0x100ef5da
// body: available
// range: 0x100ef5da-0x100ef6d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ef647 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCTasksPane::OnSetAccData(long)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCTasksPane::OnSetAccData(CMFCTasksPane *this,long param_1)

{
  CAccessibilityData *this_00;
  CMFCTasksPaneTask *pCVar1;
  int *piVar2;
  int iVar3;
  __POSITION *p_Var4;
  tagPOINT local_10;
  CMFCTasksPaneTask *local_8;
  
  local_10.x = param_1 & 0xffff;
  local_10.y = (uint)param_1 >> 0x10;
  ScreenToClient(*(HWND *)(this + 0x20),&local_10);
  piVar2 = (int *)(**(code **)(*(int *)this + 1000))(local_10.x,local_10.y);
  local_8 = TaskHitTest(this,local_10.x,local_10.y);
  if ((piVar2 == (int *)0x0) && (local_8 == (CMFCTasksPaneTask *)0x0)) {
    iVar3 = GetActivePage(this);
    p_Var4 = CObList::FindIndex((CObList *)(this + 0x44c),iVar3);
    if (p_Var4 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    if (*(int **)(p_Var4 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(p_Var4 + 8) + 0xc))(this,this + 0xc4);
      ((tagRECT *)(this + 0xe8))->left = *(LONG *)(this + 0x42c);
      *(undefined4 *)(this + 0xec) = *(undefined4 *)(this + 0x430);
      *(undefined4 *)(this + 0xf0) = *(undefined4 *)(this + 0x434);
      *(undefined4 *)(this + 0xf4) = *(undefined4 *)(this + 0x438);
      CWnd::ClientToScreen((CWnd *)this,(tagRECT *)(this + 0xe8));
    }
  }
  this_00 = (CAccessibilityData *)(this + 0xc4);
  CAccessibilityData::Clear(this_00);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(this,this_00);
    if (piVar2 == *(int **)(this + 0x51c)) {
      *(uint *)(this + 0xe0) = *(uint *)(this + 0xe0) | 0x200004;
    }
  }
  pCVar1 = local_8;
  if (local_8 != (CMFCTasksPaneTask *)0x0) {
    (**(code **)(*(int *)local_8 + 0xc))(this,this_00);
    if (pCVar1 == *(CMFCTasksPaneTask **)(this + 0x448)) {
      *(uint *)(this + 0xe0) = *(uint *)(this + 0xe0) | 4;
    }
  }
  return 1;
}

