// rea decompile_all
// name: CPaneFrameWnd::StartTearOff
// address: 0x1003bb3e
// body: available
// range: 0x1003bb3e-0x1003be16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003bc41 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CPaneFrameWnd::StartTearOff(class CMFCPopupMenu *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CPaneFrameWnd::StartTearOff(CPaneFrameWnd *this,CMFCPopupMenu *param_1)

{
  CObject *pCVar1;
  BOOL BVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CFrameWnd *pCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  tagMSG local_64;
  CMFCPopupMenu *local_48;
  HWND local_44;
  CPaneFrameWnd *local_40;
  int local_3c;
  CObject *local_38;
  undefined1 local_34 [16];
  DWORD DStack_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_48 = param_1;
  if (param_1 == (CMFCPopupMenu *)0x0) {
    local_44 = (HWND)0x0;
  }
  else {
    local_44 = *(HWND *)(param_1 + 0x20);
  }
  local_40 = this;
  CWnd::ShowWindow((CWnd *)param_1,0);
  iVar6 = *(int *)(param_1 + 0x148);
  if ((iVar6 != 0) && (local_3c = *(int *)(iVar6 + 0x6c), local_3c != 0)) {
    local_34._12_4_ = *(LPARAM *)(iVar6 + 0x54);
    DStack_24 = *(DWORD *)(iVar6 + 0x58);
    local_20 = *(int *)(iVar6 + 0x5c);
    local_1c = *(int *)(iVar6 + 0x60);
    InflateRect((LPRECT)(local_34 + 0xc),4,4);
    iVar6 = local_3c;
    InvalidateRect(*(HWND *)(local_3c + 0x20),(RECT *)(local_34 + 0xc),1);
    UpdateWindow(*(HWND *)(iVar6 + 0x20));
  }
  pCVar1 = (CObject *)(**(code **)(*(int *)local_40 + 0x1a4))();
  local_38 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,pCVar1);
  if (local_38 == (CObject *)0x0) goto LAB_1003be06;
  while (BVar2 = PeekMessageW(&local_64,(HWND)0x0,0xf,0xf,0), BVar2 != 0) {
    BVar2 = GetMessageW(&local_64,(HWND)0x0,0xf,0xf);
    if (BVar2 == 0) goto LAB_1003be06;
    DispatchMessageW(&local_64);
  }
  pHVar3 = GetCapture();
  pCVar1 = local_38;
  if (pHVar3 != (HWND)0x0) goto LAB_1003be06;
  pHVar3 = SetCapture(*(HWND *)(local_38 + 0x20));
  CWnd::FromHandle(pHVar3);
  pHVar3 = GetCapture();
  pCVar4 = CWnd::FromHandle(pHVar3);
  if (pCVar1 != (CObject *)pCVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  local_3c = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(local_40 + 0x20),&local_18);
  iVar6 = (local_18.right + local_18.left) / 2;
  iVar7 = iVar6 - local_18.left;
  iVar8 = (local_18.top + 5) - local_18.top;
  SetCursorPos(iVar6,local_18.top + 5);
  do {
    while( true ) {
      pHVar3 = GetCapture();
      pCVar4 = CWnd::FromHandle(pHVar3);
      if (pCVar4 != (CWnd *)local_38) goto LAB_1003bd04;
      BVar2 = GetMessageW((LPMSG)local_34,(HWND)0x0,0,0);
      if (BVar2 == 0) {
        AfxPostQuitMessage(local_34._8_4_);
        goto LAB_1003bd04;
      }
      if (local_34._4_4_ == 0x100) break;
      if (local_34._4_4_ == 0x200) {
        CWnd::SetWindowPos((CWnd *)local_40,(CWnd *)0x0,local_20 - iVar7,local_1c - iVar8,-1,-1,0x15
                          );
      }
      else {
        if (local_34._4_4_ == 0x202) {
          local_3c = 1;
          goto LAB_1003bd04;
        }
        if (local_34._4_4_ == 0x204) goto LAB_1003bd04;
        DispatchMessageW((MSG *)local_34);
      }
    }
  } while (local_34._8_4_ != 0x1b);
LAB_1003bd04:
  ReleaseCapture();
  BVar2 = IsWindow(local_44);
  if (BVar2 != 0) {
    if (local_3c == 0) {
      CWnd::ShowWindow((CWnd *)local_48,4);
    }
    else {
      SendMessageW(*(HWND *)(local_48 + 0x20),0x10,0,0);
      if ((DAT_10168578 != (CWnd *)0x0) ||
         (pCVar5 = CWnd::GetTopLevelFrame((CWnd *)local_40), pCVar5 != (CFrameWnd *)0x0)) {
        pCVar4 = DAT_10168578;
        if (DAT_10168578 == (CWnd *)0x0) {
          pCVar4 = (CWnd *)CWnd::GetTopLevelFrame((CWnd *)local_40);
        }
        CWnd::SetFocus(pCVar4);
      }
    }
  }
  if (local_3c != 0) goto LAB_1003be06;
  pCVar4 = DAT_10168578;
  if ((DAT_10168578 != (CWnd *)0x0) ||
     (pCVar4 = (CWnd *)CWnd::GetTopLevelFrame((CWnd *)local_40), pCVar4 != (CWnd *)0x0)) {
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar4);
    if (pCVar1 == (CObject *)0x0) {
      pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c,(CObject *)pCVar4);
      if (pCVar1 == (CObject *)0x0) {
        pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_1012089c,
                                    (CObject *)pCVar4);
        if (pCVar1 == (CObject *)0x0) {
          pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_101204e8,
                                      (CObject *)pCVar4);
          if (pCVar1 == (CObject *)0x0) goto LAB_1003bdf0;
          pCVar1 = pCVar1 + 0x194;
        }
        else {
          pCVar1 = pCVar1 + 0x198;
        }
      }
      else {
        pCVar1 = pCVar1 + 0x124;
      }
    }
    else {
      pCVar1 = pCVar1 + 0x33c;
    }
    CFrameImpl::RemoveTearOffToolbar((CFrameImpl *)pCVar1,(CBasePane *)local_38);
  }
LAB_1003bdf0:
  pCVar1 = local_38;
  (**(code **)(*(int *)local_38 + 0x60))();
  (**(code **)(*(int *)pCVar1 + 4))(1);
LAB_1003be06:
  iVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

