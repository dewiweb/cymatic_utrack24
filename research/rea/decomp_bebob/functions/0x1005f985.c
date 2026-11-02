// rea decompile_all
// name: CMFCPopupMenu::Create
// address: 0x1005f985
// body: available
// range: 0x1005f985-0x1005fccc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005f9b1 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCPopupMenu::Create(class CWnd *,int,int,struct HMENU__
   *,int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCPopupMenu::Create
          (CMFCPopupMenu *this,CWnd *param_1,int param_2,int param_3,HMENU__ *param_4,int param_5,
          int param_6)

{
  bool bVar1;
  HCURSOR pHVar2;
  _AFX_THREAD_STATE *p_Var3;
  int iVar4;
  ulong uVar5;
  ANIMATION_TYPE AVar6;
  CMFCPopupMenu *pCVar7;
  CWnd *pCVar8;
  CWnd *pCVar9;
  undefined4 uVar10;
  BOOL BVar11;
  int iVar12;
  wchar_t *pwVar13;
  int *piVar14;
  HBRUSH pHVar15;
  HICON pHVar16;
  HMENU__ *pHVar17;
  ulong local_44;
  _AFX_THREAD_STATE *local_38;
  tagRECT local_34;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x1005f991;
  AFXPlaySystemSound(2);
  if (param_1 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  pHVar16 = (HICON)0x0;
  pHVar15 = (HBRUSH)0x10;
  pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  p_Var3 = AfxRegisterWndClass(0x800,pHVar2,pHVar15,pHVar16);
  FUN_10006ce0(&local_38,(short *)p_Var3);
  *(HMENU__ **)(this + 0xea8) = param_4;
  local_8 = 0;
  if ((param_2 == -1) && (param_3 == -1)) {
    if (param_1 == (CWnd *)0x0) {
      iVar4 = 0;
      iVar12 = 0;
    }
    else {
      local_34.left = 0;
      local_34.top = 0;
      local_34.right = 0;
      local_34.bottom = 0;
      GetClientRect(*(HWND *)(param_1 + 0x20),&local_34);
      CWnd::ClientToScreen(param_1,&local_34);
      iVar4 = local_34.left + 5;
      iVar12 = local_34.top + 5;
    }
    *(int *)(this + 0x128) = iVar4;
    *(int *)(this + 300) = iVar12;
  }
  else {
    *(int *)(this + 0x128) = param_2;
    *(int *)(this + 300) = param_3;
  }
  *(undefined4 *)(this + 0x130) = *(undefined4 *)(this + 0x128);
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(this + 300);
  local_44 = 0x80000000;
  if (*(int *)(this + 0x144) != 0) {
    local_44 = 0x80c80000;
  }
  if (((param_1 != (CWnd *)0x0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (uVar5 = CWnd::GetExStyle(param_1), (uVar5 & 0x400000) != 0)) {
    *(undefined4 *)(this + 0xeec) = 1;
  }
  if (*(int *)(this + 0xeec) != 0) {
    *(undefined4 *)(this + 0xee8) = 1;
  }
  AVar6 = GetAnimationType(0);
  if (((AVar6 == 0) || (DAT_10166e54 != 0)) || (bVar1 = true, *(int *)(this + 0xeec) != 0)) {
    bVar1 = false;
  }
  pCVar7 = GetParentPopupMenu(this);
  if (pCVar7 != (CMFCPopupMenu *)0x0) {
    *(undefined4 *)(this + 0xeb0) = *(undefined4 *)(pCVar7 + 0xeb0);
  }
  if (param_6 == 0) {
    if (pCVar7 != (CMFCPopupMenu *)0x0) {
      *(undefined4 *)(this + 0x124) = *(undefined4 *)(pCVar7 + 0x124);
    }
  }
  else {
    *(CWnd **)(this + 0x124) = param_1;
  }
  local_24 = param_2;
  local_1c = param_2;
  local_20 = param_3;
  local_18 = param_3;
  pCVar8 = CWnd::GetOwner(param_1);
  pCVar9 = param_1;
  if (pCVar8 != (CWnd *)0x0) {
    pCVar9 = CWnd::GetOwner(param_1);
  }
  pwVar13 = *(wchar_t **)(this + 0x140);
  pHVar17 = (HMENU__ *)0x0;
  piVar14 = &local_24;
  p_Var3 = local_38;
  uVar5 = CWnd::GetExStyle(param_1);
  iVar4 = CreateEx(this,uVar5 & 0x400000,p_Var3,pwVar13,local_44,piVar14,(int)pCVar9,pHVar17);
  if (iVar4 == 0) {
    FUN_10001030((undefined4 *)(local_38 + -0x10));
    goto LAB_1005fcc5;
  }
  if (*(int *)(this + 0xeb8) != 0) {
    *(int *)(this + 0x128) = *(int *)(this + 0x128) + (1 - *(int *)(this + 0x138));
    *(undefined4 *)(this + 0x130) = *(undefined4 *)(this + 0x128);
    *(undefined4 *)(this + 0x134) = *(undefined4 *)(this + 300);
    (**(code **)(*(int *)this + 0x174))(1);
  }
  pCVar9 = (CWnd *)(**(code **)(*(int *)this + 0x1c0))();
  *(int *)(pCVar9 + 0xb04) = param_5;
  *(undefined4 *)(pCVar9 + 0xd08) = *(undefined4 *)(this + 0xef4);
  if (bVar1) {
    *(int *)(this + 0xed8) = *(int *)(this + 0x138) + *(int *)(this + 0xfc0);
    *(int *)(this + 0xedc) = *(int *)(this + 0x13c) + *(int *)(this + 0xfc0);
    AVar6 = GetAnimationType(0);
    if (AVar6 == 1) {
      uVar10 = (**(code **)(*(int *)pCVar9 + 0x358))();
      *(undefined4 *)(this + 0xed8) = uVar10;
LAB_1005fc0c:
      uVar10 = (**(code **)(*(int *)pCVar9 + 0x354))();
      *(undefined4 *)(this + 0xedc) = uVar10;
    }
    else if (AVar6 == 2) goto LAB_1005fc0c;
    BVar11 = IsWindowVisible(*(HWND *)(pCVar9 + 0x20));
    if (BVar11 != 0) {
      CWnd::ShowWindow(pCVar9,0);
    }
    SetTimer(*(HWND *)(this + 0x20),1,DAT_10160de8,(TIMERPROC)0x0);
    _DAT_1016844c = _clock();
  }
  UpdateBottomWindows(this,0);
  if (((*(int *)(this + 0xfc0) == 0) && (AVar6 = GetAnimationType(0), AVar6 == 3)) && (bVar1)) {
    *(undefined4 *)(this + 0xed8) = *(undefined4 *)(this + 0x138);
    *(undefined4 *)(this + 0xedc) = *(undefined4 *)(this + 0x13c);
  }
  CWnd::SetWindowPos((CWnd *)this,(CWnd *)&DAT_101665c0,-1,-1,-1,-1,0x53);
  if (DAT_10166e54 != 0) {
    InvalidateRect(*(HWND *)(pCVar9 + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(pCVar9 + 0x20));
  }
  FUN_10001030((undefined4 *)(local_38 + -0x10));
LAB_1005fcc5:
  iVar4 = FUN_100f90cf();
  return iVar4;
}

