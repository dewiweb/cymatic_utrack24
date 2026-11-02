// rea decompile_all
// name: FUN_100ada14
// address: 0x100ada14
// body: available
// range: 0x100ada14-0x100adc93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100ada14(CMFCRibbonBaseElement *param_1)

{
  CWnd *pCVar1;
  double dVar2;
  BOOL BVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  CMFCRibbonBar *this;
  CFont *pCVar7;
  WPARAM wParam;
  ulonglong uVar8;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  BVar3 = IsRectEmpty((RECT *)(param_1 + 0x18));
  if (BVar3 == 0) {
    local_28.left = *(LONG *)(param_1 + 0xd4);
    local_28.top = *(LONG *)(param_1 + 0xd8);
    local_28.right = *(LONG *)(param_1 + 0xdc);
    local_28.bottom = *(LONG *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x3c) = 1;
    if (*(int *)(param_1 + 400) == 0) {
      uVar6 = *(uint *)(param_1 + 0x174);
      uVar4 = (**(code **)(*(int *)param_1 + 0x90))();
      iVar5 = (**(code **)(*(int *)param_1 + 0x1f0))(uVar4,uVar6 | 0x40011080);
      *(int *)(param_1 + 400) = iVar5;
      if (iVar5 == 0) goto LAB_100adc86;
      SendMessageW(*(HWND *)(iVar5 + 0x20),0x459,1,0);
      uVar6 = SendMessageW(*(HWND *)(*(int *)(param_1 + 400) + 0x20),0x43b,0,0);
      SendMessageW(*(HWND *)(*(int *)(param_1 + 400) + 0x20),0x445,0,uVar6 | 1);
      this = CMFCRibbonBaseElement::GetTopLevelRibbonBar(param_1);
      pCVar7 = CWnd::GetFont((CWnd *)this);
      if (pCVar7 == (CFont *)0x0) {
        wParam = 0;
      }
      else {
        wParam = *(WPARAM *)(pCVar7 + 4);
      }
      SendMessageW(*(HWND *)(*(int *)(param_1 + 400) + 0x20),0x30,wParam,1);
      CWnd::SetWindowTextW(*(CWnd **)(param_1 + 400),*(wchar_t **)(param_1 + 0x18c));
    }
    BVar3 = EqualRect(&local_28,(RECT *)(param_1 + 0xd4));
    if ((BVar3 == 0) ||
       (BVar3 = IsWindowVisible(*(HWND *)(*(int *)(param_1 + 400) + 0x20)), BVar3 == 0)) {
      local_18.left = *(LONG *)(param_1 + 0xd4);
      local_18.top = *(LONG *)(param_1 + 0xd8);
      local_18.right = *(LONG *)(param_1 + 0xdc);
      local_18.bottom = *(LONG *)(param_1 + 0xe0);
      if (*(int *)(param_1 + 100) == 0) {
        iVar5 = *(int *)(param_1 + 0x164);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x168);
      }
      dVar2 = 1.0;
      if (DAT_10166c84 != 0) {
        dVar2 = _DAT_10166c7c;
      }
      if (1.0 < dVar2) {
        uVar8 = FUN_100f8660(iVar5,DAT_10166c84);
        iVar5 = (int)uVar8;
      }
      local_18.left = local_18.right - iVar5;
      if (*(int *)(param_1 + 0x180) == 0) {
        InflateRect(&local_18,-*(int *)(param_1 + 0xbc),-*(int *)(param_1 + 0xc0));
      }
      else {
        local_18.left = local_18.left + *(int *)(param_1 + 0xbc);
        local_18.top = local_18.top + *(int *)(param_1 + 0xc0);
        local_18.right = local_18.right + -2;
        local_18.bottom = local_18.bottom - *(int *)(param_1 + 0xc0);
      }
      CWnd::SetWindowPos(*(CWnd **)(param_1 + 400),(CWnd *)0x0,local_18.left,local_18.top,
                         local_18.right - local_18.left,local_18.bottom - local_18.top,0x14);
      CWnd::ShowWindow(*(CWnd **)(param_1 + 400),4);
      iVar5 = *(int *)(param_1 + 0x194);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) {
        *(undefined4 *)(iVar5 + 0x88) = *(undefined4 *)(param_1 + 0x68);
        CSpinButtonCtrl::SetBuddy(*(CSpinButtonCtrl **)(param_1 + 0x194),*(CWnd **)(param_1 + 400));
        CWnd::ShowWindow(*(CWnd **)(param_1 + 0x194),4);
      }
    }
  }
  else {
    pCVar1 = *(CWnd **)(param_1 + 400);
    if ((pCVar1 != (CWnd *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
      CWnd::ShowWindow(pCVar1,0);
    }
    pCVar1 = *(CWnd **)(param_1 + 0x194);
    if ((pCVar1 != (CWnd *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
      CWnd::ShowWindow(pCVar1,0);
    }
  }
LAB_100adc86:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

