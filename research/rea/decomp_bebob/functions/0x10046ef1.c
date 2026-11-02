// rea decompile_all
// name: CMFCShellTreeCtrl::GetChildItems
// address: 0x10046ef1
// body: available
// range: 0x10046ef1-0x10047023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10046f73 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall CMFCShellTreeCtrl::GetChildItems(struct _TREEITEM *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCShellTreeCtrl::GetChildItems(CMFCShellTreeCtrl *this,_TREEITEM *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  LRESULT LVar2;
  int iVar3;
  undefined4 local_50;
  _TREEITEM *local_4c;
  int *local_2c;
  _TREEITEM *local_28;
  code *local_24;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  IShellFolder *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x10046efd;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  local_8 = 0;
  _memset(&local_50,0,0x28);
  local_4c = param_1;
  local_50 = 4;
  LVar2 = SendMessageW(*(HWND *)(this + 0x20),0x113e,0,(LPARAM)&local_50);
  if (LVar2 != 0) {
    SendMessageW(*(HWND *)(this + 0x20),0xb,0,0);
    local_1c = local_2c;
    if (local_2c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    local_14[0] = (IShellFolder *)0x0;
    local_18 = (int *)*local_2c;
    if (local_18 == (int *)0x0) {
      iVar3 = SHGetDesktopFolder(local_14);
    }
    else {
      iVar3 = (**(code **)(*local_18 + 0x14))(local_18,local_2c[2],0,&DAT_10144df4,local_14);
    }
    if (-1 < iVar3) {
      (**(code **)(*(int *)this + 0x168))(param_1,local_14[0],local_1c[1]);
      local_28 = param_1;
      local_24 = CompareProc;
      local_20 = 0;
      SendMessageW(*(HWND *)(this + 0x20),0x1115,0,(LPARAM)&local_28);
      SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
      (*local_14[0]->lpVtbl->Release)(local_14[0]);
      local_8 = 0xffffffff;
      CWaitCursor::~CWaitCursor((CWaitCursor *)((int)&param_1 + 3));
      return 1;
    }
    SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
  }
  local_8 = 0xffffffff;
  CWaitCursor::~CWaitCursor((CWaitCursor *)((int)&param_1 + 3));
  return 0;
}

