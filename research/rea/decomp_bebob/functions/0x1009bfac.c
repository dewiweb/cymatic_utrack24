// rea decompile_all
// name: OnNcCreate
// address: 0x1009bfac
// body: available
// range: 0x1009bfac-0x1009c055 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009bfe2 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CMiniFrameWnd::OnNcCreate(struct tagCREATESTRUCTA *)
    public: int __thiscall CMiniFrameWnd::OnNcCreate(struct tagCREATESTRUCTW *)
    protected: int __thiscall CPaneFrameWnd::OnNcCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CPaneFrameWnd::OnNcCreate(struct tagCREATESTRUCTW *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __fastcall OnNcCreate(CWnd *param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  CWnd *pCVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  LRESULT LVar7;
  
  lVar2 = CWnd::Default(param_1);
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = CWnd::GetExStyle(param_1);
  if ((uVar3 & 0x100) == 0) {
    return 1;
  }
  pCVar4 = CWnd::GetTopLevelParent(param_1);
  if (pCVar4 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  pHVar5 = GetForegroundWindow();
  pCVar6 = CWnd::FromHandle(pHVar5);
  if (pCVar4 != pCVar6) {
    pHVar5 = GetLastActivePopup(*(HWND *)(pCVar4 + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar5);
    if ((pCVar4 != pCVar6) ||
       (LVar7 = SendMessageW(*(HWND *)(pCVar6 + 0x20),0x36d,0x40,0), LVar7 == 0)) {
      bVar1 = false;
      goto LAB_1009c032;
    }
  }
  bVar1 = true;
LAB_1009c032:
  SendMessageW(*(HWND *)(param_1 + 0x20),0x36d,(uint)!bVar1 * 4 + 4,0);
  return 1;
}

