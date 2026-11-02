// rea decompile_all
// name: CMDIFrameWndEx::OnShowMDITabContextMenu
// address: 0x10024217
// body: available
// range: 0x10024217-0x10024334 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10024292 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMDIFrameWndEx::OnShowMDITabContextMenu(class CPoint,unsigned
   long,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMDIFrameWndEx::OnShowMDITabContextMenu
          (CMDIFrameWndEx *this,undefined4 param_2,undefined4 param_3,LPCWSTR param_4)

{
  int iVar1;
  HMENU pHVar2;
  undefined **ppuVar3;
  HMODULE pHVar4;
  BOOL BVar5;
  CMDIChildWnd *pCVar6;
  CObject *pCVar7;
  HWND hWnd;
  undefined **local_1c;
  HMENU local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  if ((((uint)param_4 & 0x10) == 0) || (DAT_101688d8 == (int *)0x0)) {
    iVar1 = 0;
  }
  else {
    local_1c = CMenu::vftable;
    local_18 = (HMENU)0x0;
    local_8 = 0;
    pHVar2 = CreatePopupMenu();
    CMenu::Attach((CMenu *)&local_1c,pHVar2);
    ppuVar3 = FUN_1000ad47();
    FUN_10005e00(&param_4,(int *)ppuVar3);
    local_8 = CONCAT31(local_8._1_3_,1);
    pHVar4 = (HMODULE)FUN_1000ac62();
    if (pHVar4 == (HMODULE)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_10006200(&param_4,pHVar4,0x42c0);
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    AppendMenuW(local_18,0,0xffffff96,param_4);
    CheckMenuItem(local_18,0xffffff96,8);
    if (this == (CMDIFrameWndEx *)0x0) {
      hWnd = (HWND)0x0;
    }
    else {
      hWnd = *(HWND *)(this + 0x20);
    }
    local_14 = (**(code **)(*DAT_101688d8 + 0x14))(local_18,param_2,param_3,this,0);
    BVar5 = IsWindow(hWnd);
    if ((BVar5 != 0) && (local_14 == -0x6a)) {
      pCVar6 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this,(int *)0x0);
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,(CObject *)pCVar6)
      ;
      if (pCVar7 != (CObject *)0x0) {
        (**(code **)(*(int *)this + 0x1d0))(pCVar7);
      }
    }
    FUN_10001030((undefined4 *)(param_4 + -8));
    local_8 = 0xffffffff;
    local_1c = CMenu::vftable;
    CMenu::DestroyMenu((CMenu *)&local_1c);
    iVar1 = 1;
  }
  return iVar1;
}

