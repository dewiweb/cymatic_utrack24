// rea decompile_all
// name: CMDIClientAreaWnd::OnMoveTabComplete
// address: 0x10065ff7
// body: available
// range: 0x10065ff7-0x100661c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMDIClientAreaWnd::OnMoveTabComplete(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall
CMDIClientAreaWnd::OnMoveTabComplete(CMDIClientAreaWnd *this,uint param_1,long param_2)

{
  BOOL BVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  ulong uVar5;
  int iVar6;
  CMFCTabCtrl *pCVar7;
  long lVar8;
  uint uVar9;
  tagRECT *ptVar10;
  tagPOINT local_44;
  tagPOINT local_3c;
  int local_34;
  CMFCTabCtrl *local_30;
  CWnd *local_2c;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_2c = (CWnd *)param_1;
  local_28.left = ((tagRECT *)(this + 0x293c))->left;
  local_28.top = *(LONG *)(this + 0x2940);
  local_28.right = *(LONG *)(this + 0x2944);
  local_28.bottom = *(LONG *)(this + 0x2948);
  DrawNewGroupRect(this,(tagRECT *)0x0,(tagRECT *)(this + 0x293c));
  SetRectEmpty((LPRECT)(this + 0x293c));
  if (local_2c == (CWnd *)0x0) goto LAB_100661b6;
  local_3c.x = (LONG)(short)param_2;
  local_3c.y = (LONG)(short)((uint)param_2 >> 0x10);
  ClientToScreen(*(HWND *)(local_2c + 0x20),&local_3c);
  local_30 = TabWndFromPoint(this,local_3c.x,local_3c.y);
  if (local_30 == (CMFCTabCtrl *)0x0) goto LAB_100661b6;
  local_34 = 1;
  BVar1 = IsRectEmpty(&local_28);
  if (BVar1 != 0) {
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar3);
    local_44.x = 0;
    local_44.y = 0;
    GetCursorPos(&local_44);
    uVar5 = GetMDITabsContextMenuAllowedItems(this);
    if (uVar5 != 0) {
      local_34 = (**(code **)(*(int *)pCVar4 + 0x1c8))(local_44.x,local_44.y,uVar5,1);
    }
  }
  pCVar7 = local_30;
  local_18.left = *(LONG *)(local_30 + 0x2a0);
  local_18.top = *(LONG *)(local_30 + 0x2a4);
  local_18.right = *(LONG *)(local_30 + 0x2a8);
  local_18.bottom = *(LONG *)(local_30 + 0x2ac);
  CWnd::ClientToScreen((CWnd *)local_30,&local_18);
  if (local_34 == 0) {
    if (local_2c == (CWnd *)pCVar7) {
      iVar6 = (**(code **)(*(int *)local_2c + 0x1a8))();
      if (iVar6 < 2) goto LAB_100661b6;
      if (*(int *)(this + 0x2968) != 2) {
        local_18.left = local_18.right - (local_18.right - local_18.left) / 2;
      }
      else {
        local_18.top = local_18.bottom - (local_18.bottom - local_18.top) / 2;
      }
      uVar9 = (uint)(*(int *)(this + 0x2968) != 2);
      ptVar10 = &local_18;
LAB_10066196:
      pCVar7 = CreateNewTabGroup(this,local_30,ptVar10->left,ptVar10->top,ptVar10->right,
                                 ptVar10->bottom,uVar9);
    }
  }
  else {
    BVar1 = IsRectEmpty(&local_28);
    if (BVar1 != 0) goto LAB_100661b6;
    BVar1 = EqualRect(&local_28,&local_18);
    if (BVar1 == 0) {
      uVar9 = *(uint *)(this + 0x290c);
      ptVar10 = &local_28;
      goto LAB_10066196;
    }
  }
  MoveWindowToTabGroup(this,(CMFCTabCtrl *)local_2c,pCVar7,-1);
LAB_100661b6:
  lVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar8;
}

