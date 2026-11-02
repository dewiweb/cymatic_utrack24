// rea decompile_all
// name: CMFCShellTreeCtrl::OnItemexpanding
// address: 0x100472dc
// body: available
// range: 0x100472dc-0x100473a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100472f0 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCShellTreeCtrl::OnItemexpanding(struct tagNMHDR *,long *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCShellTreeCtrl::OnItemexpanding(CMFCShellTreeCtrl *this,tagNMHDR *param_1,long *param_2)

{
  _TREEITEM *lParam;
  LRESULT LVar1;
  _TREEITEM *p_Var2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_2c;
  _TREEITEM *local_28;
  
  pcVar3 = SendMessageW_exref;
  if ((param_1 == (tagNMHDR *)0x0) ||
     (lParam = *(_TREEITEM **)(param_1 + 0x3c), lParam == (_TREEITEM *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if (*(int *)(param_1 + 0xc) == 1) {
    p_Var2 = (_TREEITEM *)SendMessageW(*(HWND *)(this + 0x20),0x110a,9,0);
    do {
      if (p_Var2 == (_TREEITEM *)0x0) goto LAB_10047389;
      p_Var2 = (_TREEITEM *)SendMessageW(*(HWND *)(this + 0x20),0x110a,3,(LPARAM)p_Var2);
    } while (p_Var2 != lParam);
    SendMessageW(*(HWND *)(this + 0x20),0x110b,9,(LPARAM)lParam);
LAB_10047389:
    uVar5 = 0x8001;
    uVar4 = 0x1102;
    p_Var2 = lParam;
  }
  else {
    if (*(int *)(param_1 + 0xc) != 2) goto LAB_1004739b;
    GetChildItems(this,lParam);
    pcVar3 = SendMessageW_exref;
    LVar1 = SendMessageW(*(HWND *)(this + 0x20),0x110a,4,(LPARAM)lParam);
    if (LVar1 != 0) goto LAB_1004739b;
    _memset(&local_2c,0,0x28);
    uVar5 = 0;
    local_2c = 0x40;
    uVar4 = 0x113f;
    p_Var2 = (_TREEITEM *)&local_2c;
    local_28 = lParam;
  }
  (*pcVar3)(*(undefined4 *)(this + 0x20),uVar4,uVar5,p_Var2);
LAB_1004739b:
  *param_2 = 0;
  return;
}

