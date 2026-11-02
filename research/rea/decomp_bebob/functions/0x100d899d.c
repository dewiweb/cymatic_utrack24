// rea decompile_all
// name: _AFX_MOUSEANCHORWND::OnTimer
// address: 0x100d899d
// body: available
// range: 0x100d899d-0x100d8bdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall _AFX_MOUSEANCHORWND::OnTimer(unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall _AFX_MOUSEANCHORWND::OnTimer(_AFX_MOUSEANCHORWND *this,uint param_1)

{
  int iVar1;
  CWnd *pCVar2;
  AFX_MODULE_STATE *pAVar3;
  HCURSOR hCursor;
  undefined4 uVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CObject *pCVar7;
  undefined4 uVar8;
  undefined4 local_30;
  undefined4 local_2c;
  tagPOINT local_28;
  int local_20;
  uint local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_28.x = 0;
  local_28.y = 0;
  GetCursorPos(&local_28);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  iVar1 = *(int *)(this + 0x90);
  local_1c = 0;
  if ((iVar1 == 0x7923) || (iVar1 == 0x7922)) {
    if (local_28.y < local_18.top) {
      local_1c = 30999;
    }
    else if (local_18.bottom < local_28.y) {
      local_1c = 0x791d;
    }
  }
  if ((iVar1 == 0x7923) || (iVar1 == 0x7921)) {
    if (local_28.x < local_18.left) {
      if (local_1c == 0) {
        local_1c = 0x7919;
      }
      else if (iVar1 == 0x7923) {
        local_1c = local_1c - 1;
      }
    }
    else if (local_18.right < local_28.x) {
      if (local_1c == 0) {
        local_1c = 0x791b;
      }
      else if (iVar1 == 0x7923) {
        local_1c = local_1c + 1;
      }
    }
  }
  if (*(int *)(this + 0x8c) == 0) {
    if (local_1c == 0) {
      SetCursor(*(HCURSOR *)(this + 0x94));
    }
    else {
      pAVar3 = AfxGetModuleState();
      hCursor = LoadCursorW(*(HINSTANCE *)(pAVar3 + 0xc),(LPCWSTR)(local_1c & 0xffff));
      SetCursor(hCursor);
      local_20 = local_18.right;
      if ((local_18.right < local_28.x) || (local_20 = local_18.left, local_28.x < local_18.left)) {
        local_20 = local_28.x - local_20;
      }
      else {
        local_20 = 0;
      }
      iVar1 = local_18.bottom;
      if ((local_18.bottom < local_28.y) || (iVar1 = local_18.top, local_28.y < local_18.top)) {
        local_1c = local_28.y - iVar1;
      }
      else {
        local_1c = 0;
      }
      pCVar2 = CWnd::GetOwner((CWnd *)this);
      iVar1 = *(int *)(this + 0x90);
      if ((iVar1 == 0x7923) || (iVar1 == 0x7922)) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      if ((iVar1 == 0x7923) || (iVar1 == 0x7921)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      (**(code **)(*(int *)pCVar2 + 0x1b0))(&local_30,local_20,local_1c,uVar4,uVar8);
      CWnd::ShowWindow((CWnd *)this,0);
      pHVar5 = GetParent(*(HWND *)(pCVar2 + 0x20));
      pCVar6 = CWnd::FromHandle(pHVar5);
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CSplitterWnd_10128e34,(CObject *)pCVar6);
      if (pCVar7 == (CObject *)0x0) {
        (**(code **)(*(int *)pCVar2 + 0x168))();
      }
      else {
        (**(code **)(*(int *)pCVar7 + 0x1ac))(pCVar2,local_30,local_2c,1);
      }
      UpdateWindow(*(HWND *)(this + 0x20));
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)&DAT_101665c0,*(int *)(this + 0x84) + -0x10,
                         *(int *)(this + 0x88) + -0x10,0,0,0x51);
    }
  }
  else {
    KillTimer(*(HWND *)(this + 0x20),0xe000);
    ReleaseCapture();
    SetCursor((HCURSOR)0x0);
    pCVar2 = CWnd::GetOwner((CWnd *)this);
    (**(code **)(*(int *)this + 0x60))();
    if (*(int **)(pCVar2 + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(pCVar2 + 0x7c) + 4))(1);
    }
    *(undefined4 *)(pCVar2 + 0x7c) = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

