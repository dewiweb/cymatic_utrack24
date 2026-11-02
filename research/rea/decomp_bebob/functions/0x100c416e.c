// rea decompile_all
// name: CMFCAutoHideBar::RemoveAutoHideWindow
// address: 0x100c416e
// body: available
// range: 0x100c416e-0x100c4254 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c41d5 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCAutoHideBar::RemoveAutoHideWindow(class CDockablePane *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCAutoHideBar::RemoveAutoHideWindow(CMFCAutoHideBar *this,CDockablePane *param_1)

{
  int *piVar1;
  __POSITION *p_Var2;
  __POSITION *p_Var3;
  int iVar4;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(UINT_PTR *)(this + 0x2cc) != 0) {
    KillTimer(*(HWND *)(this + 0x20),*(UINT_PTR *)(this + 0x2cc));
    *(undefined4 *)(this + 0x2cc) = 0;
  }
  p_Var2 = *(__POSITION **)(this + 0x2a8);
  do {
    p_Var3 = p_Var2;
    if (p_Var3 == (__POSITION *)0x0) goto LAB_100c41c4;
    if (p_Var3 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    piVar1 = *(int **)(p_Var3 + 8);
    p_Var2 = *(__POSITION **)p_Var3;
  } while ((CDockablePane *)piVar1[0xb] != param_1);
  if (*(int **)(this + 0x2c0) == piVar1) {
    *(undefined4 *)(this + 0x2c0) = 0;
  }
  CObList::RemoveAt((CObList *)(this + 0x2a4),p_Var3);
  (**(code **)(*piVar1 + 4))(1);
  if (*(int *)(this + 0x2b0) == 0) {
    (**(code **)(**(int **)(this + 0xac) + 0x278))(this,0);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(*(int *)(this + 0xac) + 0x20),&local_18);
    (**(code **)(**(int **)(this + 0xac) + 0x294))(&local_18);
  }
  (**(code **)(*(int *)this + 0x60))();
LAB_100c41c4:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

