// rea decompile_all
// name: CDockSite::DockPaneLeftOf
// address: 0x10090e06
// body: available
// range: 0x10090e06-0x10090f55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10090f18 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockSite::DockPaneLeftOf(class CPane *,class CPane *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CDockSite::DockPaneLeftOf(CDockSite *this,CPane *param_1,CPane *param_2)

{
  CDockingPanesRow *pCVar1;
  int iVar2;
  LONG yTop;
  __POSITION *p_Var3;
  int xLeft;
  int xRight;
  int local_34;
  int local_30;
  CPane *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_2c = param_2;
  pCVar1 = RowFromPane(this,(CBasePane *)param_2);
  if (pCVar1 != (CDockingPanesRow *)0x0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(local_2c + 0x20),&local_18);
    CWnd::ScreenToClient((CWnd *)this,&local_18);
    iVar2 = (**(code **)(*(int *)this + 0x160))();
    (**(code **)(*(int *)param_1 + 0x25c))(&local_34,0,iVar2 != 0);
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    iVar2 = (**(code **)(*(int *)this + 0x160))();
    if (iVar2 == 0) {
      iVar2 = local_18.top + -10;
      yTop = (local_18.top - local_30) + -10;
      xLeft = local_18.left;
      xRight = local_18.right;
    }
    else {
      xLeft = (local_18.left - local_34) + -10;
      yTop = local_18.top;
      xRight = local_18.left + -10;
      iVar2 = local_18.bottom;
    }
    SetRect(&local_28,xLeft,yTop,xRight,iVar2);
    (**(code **)(*(int *)param_1 + 0x29c))(this,4);
    CWnd::ClientToScreen((CWnd *)this,&local_28);
    *(undefined4 *)(pCVar1 + 4) = 1;
    (**(code **)(*(int *)pCVar1 + 0x1c))(param_1,4,&local_28,0);
    p_Var3 = CObList::Find((CObList *)(this + 0x100),(CObject *)local_2c,(__POSITION *)0x0);
    if (p_Var3 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    CObList::InsertBefore((CObList *)(this + 0x100),p_Var3,(CObject *)param_1);
    (**(code **)(*(int *)this + 0x2a4))();
    (**(code **)(*(int *)this + 0x298))();
    *(undefined4 *)(pCVar1 + 4) = 0;
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

