// rea decompile_all
// name: CMDIClientAreaWnd::CalcWindowRect
// address: 0x10064844
// body: available
// range: 0x10064844-0x10064c1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMDIClientAreaWnd::CalcWindowRect(struct tagRECT *,unsigned
   int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMDIClientAreaWnd::CalcWindowRect(CMDIClientAreaWnd *this,tagRECT *param_1,uint param_2)

{
  CWnd *this_00;
  int iVar1;
  CFrameWnd *pCVar2;
  CObject *pCVar3;
  uint uVar4;
  HWND hWnd;
  CWnd *this_01;
  ulong uVar5;
  BOOL BVar6;
  int iVar7;
  UINT uCmd;
  uint local_64;
  int local_5c;
  tagRECT local_58;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x2910) == 0) {
    if (*(int *)(this + 0x2908) == 0) {
      this_00 = (CWnd *)(this + 0x74);
      if ((this_00 != (CWnd *)0x0) && (*(int *)(this + 0x94) != 0)) {
        if (*(int *)(this + 0x2878) == 0) {
          CWnd::ShowWindow(this_00,0);
        }
        else {
          local_48.left = 0;
          local_48.top = 0;
          local_48.right = 0;
          local_48.bottom = 0;
          GetWindowRect(*(HWND *)(this + 0x94),&local_48);
          CWnd::SetWindowPos(this_00,(CWnd *)0x0,param_1->left,param_1->top,
                             param_1->right - param_1->left,param_1->bottom - param_1->top,0x14);
          local_28.left = 0;
          local_28.top = 0;
          local_28.right = 0;
          local_28.bottom = 0;
          GetClientRect(*(HWND *)(this + 0x94),&local_28);
          local_58.left = *(LONG *)(this + 0x314);
          local_58.top = *(LONG *)(this + 0x318);
          local_58.right = *(LONG *)(this + 0x31c);
          local_58.bottom = *(LONG *)(this + 800);
          param_1->top = param_1->top + (local_58.top - local_28.top);
          param_1->bottom = param_1->bottom + (local_58.bottom - local_28.bottom);
          param_1->left = param_1->left + (local_58.left - local_28.left);
          param_1->right = param_1->right + (local_58.right - local_28.right);
          CWnd::ShowWindow(this_00,8);
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          GetWindowRect(*(HWND *)(this + 0x94),&local_18);
          EqualRect(&local_48,&local_18);
        }
        local_38.left = 0;
        local_38.top = 0;
        local_38.right = 0;
        local_38.bottom = 0;
        GetWindowRect(*(HWND *)(this + 0x20),&local_38);
        iVar7 = param_1->bottom - param_1->top;
        iVar1 = (iVar7 - local_38.bottom) + local_38.top;
        CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,param_1->left,param_1->top,
                           param_1->right - param_1->left,iVar7,0x14);
        pCVar2 = CWnd::GetParentFrame((CWnd *)this);
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,
                                    (CObject *)pCVar2);
        if (pCVar3 != (CObject *)0x0) {
          CopyRect(&local_58,param_1);
          (**(code **)(*(int *)pCVar3 + 0x1f8))(&local_38,&local_58);
        }
        if (*(int *)(this + 0x2878) == 0) {
          local_48.left = 0;
          local_48.top = 0;
          local_48.right = 0;
          local_48.bottom = 0;
          GetClientRect(*(HWND *)(this + 0x20),&local_48);
          pCVar2 = CWnd::GetParentFrame((CWnd *)this);
          uCmd = 5;
          hWnd = *(HWND *)(pCVar2 + 0x110);
          while ((hWnd = GetWindow(hWnd,uCmd), hWnd != (HWND)0x0 &&
                 (uVar4 = GetWindowLongW(hWnd,-0x10), (uVar4 & 0x1000000) == 0))) {
            if ((uVar4 & 0x20000000) != 0) {
              local_18.left = 0;
              local_18.top = 0;
              local_18.right = 0;
              local_18.bottom = 0;
              GetWindowRect(hWnd,&local_18);
              CWnd::ScreenToClient((CWnd *)this,&local_18);
              OffsetRect(&local_18,0,iVar1);
              if (local_18.top < local_48.top) {
                local_18.top = local_48.top;
              }
              SetWindowPos(hWnd,(HWND)0x0,local_18.left,local_18.top,0,0,0x15);
            }
            uCmd = 2;
          }
        }
      }
      CWnd::CalcWindowRect((CWnd *)this,param_1,param_2);
      iVar1 = (**(code **)(*(int *)this_00 + 0x208))();
      local_5c = 0;
      iVar7 = (**(code **)(*(int *)this_00 + 0x1a8))();
      if (0 < iVar7) {
        do {
          this_01 = (CWnd *)(**(code **)(*(int *)this_00 + 0x1ac))(local_5c);
          if ((this_01 != (CWnd *)0x0) && (*(int *)(this_01 + 0x20) != 0)) {
            uVar5 = CWnd::GetExStyle(this_01);
            if (((uVar5 & 0x20000000) != 0) &&
               (uVar5 = CWnd::GetExStyle(this_01), (uVar5 & 0x80000) == 0)) {
              CWnd::ShowWindow(this_01,9);
            }
            local_64 = 0x10;
            if (local_5c != iVar1) {
              local_64 = 0x1c;
            }
            local_18.right = param_1->right - param_1->left;
            local_18.left = 0;
            local_18.bottom = param_1->bottom - param_1->top;
            local_18.top = 0;
            local_28.left = 0;
            local_28.top = 0;
            local_28.right = 0;
            local_28.bottom = 0;
            GetClientRect(*(HWND *)(this_01 + 0x20),&local_28);
            CWnd::ClientToScreen(this_01,&local_28);
            local_38.left = 0;
            local_38.top = 0;
            local_38.right = 0;
            local_38.bottom = 0;
            GetWindowRect(*(HWND *)(this_01 + 0x20),&local_38);
            local_18.left = local_18.left + (local_38.left - local_28.left);
            local_18.top = local_18.top + (local_38.top - local_28.top);
            local_18.right = local_18.right + (local_38.right - local_28.right);
            local_18.bottom = local_18.bottom + (local_38.bottom - local_28.bottom);
            BVar6 = EqualRect(&local_28,&local_18);
            if (BVar6 != 0) break;
            uVar5 = CWnd::GetExStyle(this_01);
            if ((uVar5 & 0x80000) == 0) {
              CWnd::SetWindowPos(this_01,(CWnd *)&DAT_101665c0,local_18.left,local_18.top,
                                 local_18.right - local_18.left,local_18.bottom - local_18.top,
                                 local_64);
            }
          }
          local_5c = local_5c + 1;
          iVar7 = (**(code **)(*(int *)this_00 + 0x1a8))();
        } while (local_5c < iVar7);
      }
    }
    else {
      CalcWindowRectForMDITabbedGroups(this,param_1,param_2);
      CWnd::CalcWindowRect((CWnd *)this,param_1,param_2);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

