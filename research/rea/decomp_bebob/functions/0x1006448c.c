// rea decompile_all
// name: CMDIClientAreaWnd::OnTabGroupMouseMove
// address: 0x1006448c
// body: available
// range: 0x1006448c-0x10064779 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMDIClientAreaWnd::OnTabGroupMouseMove(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall
CMDIClientAreaWnd::OnTabGroupMouseMove(CMDIClientAreaWnd *this,uint param_1,long param_2)

{
  POINT pt;
  POINT pt_00;
  HWND pHVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  int iVar4;
  HCURSOR hCursor;
  AFX_MODULE_STATE *pAVar5;
  BOOL BVar6;
  long lVar7;
  bool bVar8;
  tagPOINT local_64;
  LONG local_5c;
  CObject *local_58;
  tagPOINT local_54;
  CObject *local_4c;
  RECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pHVar1 = GetCapture();
  pCVar2 = CWnd::FromHandle(pHVar1);
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,(CObject *)pCVar2);
  local_64.y = (LONG)pCVar3;
  if ((pCVar3 == (CObject *)0x0) ||
     ((*(int *)(this + 0x28dc) == 1 && (iVar4 = (**(code **)(*(int *)pCVar3 + 0x1a8))(), iVar4 == 1)
      ))) goto LAB_10064769;
  local_5c = (LONG)(short)param_2;
  local_58 = (CObject *)(int)(short)((uint)param_2 >> 0x10);
  iVar4 = (**(code **)(*(int *)pCVar3 + 0x160))(local_5c,local_58);
  if (iVar4 == 0) {
    local_54.x = local_5c;
    local_54.y = (LONG)local_58;
    ClientToScreen(*(HWND *)(pCVar3 + 0x20),&local_54);
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_38);
    CWnd::ClientToScreen((CWnd *)this,&local_38);
    if (DAT_10166b98 == (HCURSOR)0x0) {
      AfxGetModuleState();
      pAVar5 = AfxGetModuleState();
      DAT_10166b98 = LoadCursorW(*(HINSTANCE *)(pAVar5 + 0xc),(LPCWSTR)0x4297);
      AfxGetModuleState();
      pAVar5 = AfxGetModuleState();
      DAT_10166b9c = LoadCursorW(*(HINSTANCE *)(pAVar5 + 0xc),(LPCWSTR)0x4298);
    }
    pt.y = local_54.y;
    pt.x = local_54.x;
    BVar6 = PtInRect(&local_38,pt);
    if (BVar6 != 0) {
      SetCursor(DAT_10166b98);
      local_4c = (CObject *)TabWndFromPoint(this,local_54.x,local_54.y);
      if (local_4c == (CObject *)0x0) goto LAB_1006451e;
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(local_4c + 0x20),&local_18);
      iVar4 = *(int *)(this + 0x2968);
      local_48.left = local_18.left;
      local_48.top = local_18.top;
      local_48.right = local_18.right;
      local_48.bottom = local_18.bottom;
      if (iVar4 == 0) {
        bVar8 = local_18.right - local_54.x < local_18.bottom - local_54.y;
        iVar4 = *(int *)(this + 0x2968);
      }
      else {
        bVar8 = iVar4 == 1;
      }
      if ((iVar4 == 1) || (bVar8)) {
        local_48.left = local_18.right - *(int *)(this + 0x2934);
        local_58 = (CObject *)0x1;
      }
      else {
        local_48.top = local_18.bottom - *(int *)(this + 0x2934);
        local_58 = (CObject *)0x0;
      }
      local_28.left = local_18.left;
      local_28.top = local_18.top;
      local_28.right = local_18.right;
      local_28.bottom = local_18.bottom;
      if (local_58 == (CObject *)0x0) {
        local_28.top = local_18.bottom - (local_18.bottom - local_18.top) / 2;
      }
      else {
        local_28.left = local_18.right - (local_18.right - local_18.left) / 2;
      }
      pt_00.y = local_54.y;
      pt_00.x = local_54.x;
      BVar6 = PtInRect(&local_48,pt_00);
      pCVar3 = local_4c;
      if (BVar6 == 0) {
        if (local_4c != (CObject *)local_64.y) {
          local_64.x = local_54.x;
          local_64.y = local_54.y;
          ScreenToClient(*(HWND *)(local_4c + 0x20),&local_64);
          iVar4 = (**(code **)(*(int *)pCVar3 + 0x160))(local_64.x,local_64.y);
          if (iVar4 != 0) {
            local_28.left = *(LONG *)(pCVar3 + 0x2a0);
            local_28.top = *(LONG *)(pCVar3 + 0x2a4);
            local_28.right = *(LONG *)(pCVar3 + 0x2a8);
            local_28.bottom = *(LONG *)(pCVar3 + 0x2ac);
            CWnd::ClientToScreen((CWnd *)local_4c,&local_28);
            goto LAB_10064744;
          }
        }
LAB_1006473e:
        SetRectEmpty(&local_28);
      }
      else if ((local_4c == (CObject *)local_64.y) &&
              (iVar4 = (**(code **)(*(int *)local_64.y + 0x1a8))(), iVar4 == 1)) goto LAB_1006473e;
LAB_10064744:
      DrawNewGroupRect(this,&local_28,(tagRECT *)(this + 0x293c));
      ((tagRECT *)(this + 0x293c))->left = local_28.left;
      *(LONG *)(this + 0x2940) = local_28.top;
      *(LONG *)(this + 0x2944) = local_28.right;
      *(CObject **)(this + 0x290c) = local_58;
      *(LONG *)(this + 0x2948) = local_28.bottom;
      goto LAB_10064769;
    }
    SetCursor(DAT_10166b9c);
    local_4c = (CObject *)0x1;
  }
  else {
    AfxGetModuleState();
    hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    SetCursor(hCursor);
LAB_1006451e:
    local_4c = (CObject *)0x0;
  }
  DrawNewGroupRect(this,(tagRECT *)0x0,(LPRECT)(this + 0x293c));
  SetRectEmpty((LPRECT)(this + 0x293c));
LAB_10064769:
  lVar7 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar7;
}

