// rea decompile_all
// name: CMFCToolBar::InsertButton
// address: 0x1002a735
// body: available
// range: 0x1002a735-0x1002a7d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a745 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::InsertButton(class CMFCToolBarButton *,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBar::InsertButton(CMFCToolBar *this,CMFCToolBarButton *param_1,int param_2)

{
  int iVar1;
  __POSITION *p_Var2;
  
  if (param_1 == (CMFCToolBarButton *)0x0) goto LAB_1002a745;
  iVar1 = IsCommandPermitted(*(uint *)(param_1 + 0x20));
  if (iVar1 == 0) {
    return -1;
  }
  if (param_2 == -1) {
LAB_1002a779:
    if (*(int *)(this + 0xca0) == 0) {
      CObList::AddTail((CObList *)(this + 0xbc8),(CObject *)param_1);
      (**(code **)(*(int *)param_1 + 0x28))(this);
      return *(int *)(this + 0xbd4) + -1;
    }
    param_2 = *(int *)(this + 0xbd4) + -1;
  }
  else {
    if ((param_2 < 0) || (*(int *)(this + 0xbd4) < param_2)) {
      return -1;
    }
    if (param_2 == *(int *)(this + 0xbd4)) goto LAB_1002a779;
  }
  p_Var2 = CObList::FindIndex((CObList *)(this + 0xbc8),param_2);
  if (p_Var2 != (__POSITION *)0x0) {
    CObList::InsertBefore((CObList *)(this + 0xbc8),p_Var2,(CObject *)param_1);
    (**(code **)(*(int *)param_1 + 0x28))(this);
    return param_2;
  }
LAB_1002a745:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

