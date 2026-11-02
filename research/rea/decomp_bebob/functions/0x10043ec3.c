// rea decompile_all
// name: CMFCShellListCtrl::DisplayFolder
// address: 0x10043ec3
// body: available
// range: 0x10043ec3-0x10043ff4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall CMFCShellListCtrl::DisplayFolder(struct _AFX_SHELLITEMINFO *)
   
   Library: Visual Studio 2010 Release */

long __thiscall
CMFCShellListCtrl::DisplayFolder(CMFCShellListCtrl *this,_AFX_SHELLITEMINFO *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  ulong uVar2;
  CMFCShellTreeCtrl *this_00;
  HWND pHVar3;
  CWnd *pCVar4;
  long lVar5;
  long local_14;
  
  local_14 = -0x7fffbffb;
  lVar5 = -0x7fffbffb;
  if (DAT_10169594 != 0) {
    if (param_1 != (_AFX_SHELLITEMINFO *)0x0) {
      ReleaseCurrFolder(this);
      local_14 = LockCurrentFolder(this,param_1);
      if (local_14 < 0) {
        return local_14;
      }
    }
    SendMessageW(*(HWND *)(this + 0x20),0x1009,0,0);
    if (*(int *)(this + 0x138) != 0) {
      pAVar1 = AfxGetModuleState();
      CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
      SendMessageW(*(HWND *)(this + 0x20),0xb,0,0);
      local_14 = (**(code **)(*(int *)this + 0x1a4))
                           (*(undefined4 *)(this + 0x138),*(undefined4 *)(this + 0x13c));
      uVar2 = CWnd::GetExStyle((CWnd *)this);
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(int *)this + 0x168))(0,1,0);
      }
      SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
      CWaitCursor::~CWaitCursor((CWaitCursor *)((int)&param_1 + 3));
    }
    lVar5 = local_14;
    if ((-1 < local_14) && (param_1 != (_AFX_SHELLITEMINFO *)0x0)) {
      this_00 = GetRelatedTree(this);
      if ((this_00 != (CMFCShellTreeCtrl *)0x0) && (*(int *)(this + 0x150) == 0)) {
        CMFCShellTreeCtrl::SelectPath(this_00,*(_ITEMIDLIST **)(this + 0x13c));
      }
      pHVar3 = GetParent(*(HWND *)(this + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      if (pCVar4 != (CWnd *)0x0) {
        pHVar3 = GetParent(*(HWND *)(this + 0x20));
        pCVar4 = CWnd::FromHandle(pHVar3);
        SendMessageW(*(HWND *)(pCVar4 + 0x20),DAT_10168170,0,0);
      }
    }
  }
  return lVar5;
}

