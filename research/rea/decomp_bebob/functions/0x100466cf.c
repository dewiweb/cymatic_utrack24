// rea decompile_all
// name: CMFCShellTreeCtrl::OnChildNotify
// address: 0x100466cf
// body: available
// range: 0x100466cf-0x1004676b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100466ec to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCShellTreeCtrl::OnChildNotify(unsigned int,unsigned
   int,long,long *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCShellTreeCtrl::OnChildNotify
          (CMFCShellTreeCtrl *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  CMFCShellListCtrl *pCVar1;
  LRESULT LVar2;
  _TREEITEM *p_Var3;
  ulong uVar4;
  int iVar5;
  
  if ((param_1 == 0x4e) && (*(int *)(this + 0x78) == 0)) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    if (((*(int *)(param_3 + 8) == -0x1c3) &&
        (pCVar1 = GetRelatedList(this), pCVar1 != (CMFCShellListCtrl *)0x0)) &&
       (LVar2 = SendMessageW(*(HWND *)(this + 0x20),0x110a,9,0), LVar2 != 0)) {
      p_Var3 = (_TREEITEM *)SendMessageW(*(HWND *)(this + 0x20),0x110a,9,0);
      uVar4 = CTreeCtrl::GetItemData((CTreeCtrl *)this,p_Var3);
      *(undefined4 *)(pCVar1 + 0x150) = 1;
      (**(code **)(*(int *)pCVar1 + 0x184))(uVar4);
      *(undefined4 *)(pCVar1 + 0x150) = 0;
      return 1;
    }
  }
  iVar5 = CWnd::OnChildNotify((CWnd *)this,param_1,param_2,param_3,param_4);
  return iVar5;
}

