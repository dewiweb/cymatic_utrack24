// rea decompile_all
// name: CDockingPanesRow::OnInsertPane
// address: 0x1008d992
// body: available
// range: 0x1008d992-0x1008da88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008da36 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CDockingPanesRow::OnInsertPane(class CPane *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockingPanesRow::OnInsertPane(CDockingPanesRow *this,CPane *param_1)

{
  __POSITION *p_Var1;
  __POSITION *p_Var2;
  bool bVar3;
  int iVar4;
  CObject *pCVar5;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  ::GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
  p_Var1 = *(__POSITION **)(this + 0x28);
  do {
    p_Var2 = p_Var1;
    if (p_Var2 == (__POSITION *)0x0) {
      CObList::AddTail((CObList *)(this + 0x24),(CObject *)param_1);
      goto LAB_1008d9da;
    }
    if (p_Var2 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    p_Var1 = *(__POSITION **)p_Var2;
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,*(CObject **)(p_Var2 + 8));
    bVar3 = CPane::IsLeftOf((CPane *)pCVar5,local_18.left,local_18.top,local_18.right,
                            local_18.bottom,1);
  } while (!bVar3);
  CObList::InsertBefore((CObList *)(this + 0x24),p_Var2,(CObject *)param_1);
LAB_1008d9da:
  (**(code **)(*(int *)this + 0x44))(1);
  if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
    iVar4 = local_18.right - local_18.left;
  }
  else {
    iVar4 = local_18.bottom - local_18.top;
  }
  if (*(int *)(this + 0xc) < iVar4) {
    CDockSite::ResizeRow(*(CDockSite **)(this + 0x44),this,*(int *)(this + 0x1c) + iVar4,1);
  }
  *(CDockingPanesRow **)(param_1 + 0xb0) = this;
  (**(code **)(*(int *)this + 0x28))(param_1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

