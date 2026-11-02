// rea decompile_all
// name: CMDIChildWndEx::OnStyleChanged
// address: 0x1001fa4c
// body: available
// range: 0x1001fa4c-0x1001fda9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIChildWndEx::OnStyleChanged(int,struct tagSTYLESTRUCT *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMDIChildWndEx::OnStyleChanged(CMDIChildWndEx *this,int param_1,tagSTYLESTRUCT *param_2)

{
  bool bVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  ulong uVar5;
  BOOL BVar6;
  CMFCVisualManager *pCVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  tagRECT *ptVar14;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  CWnd::Default((CWnd *)this);
  iVar2 = IsTaskbarTabsSupportEnabled(this);
  if (iVar2 == 0) {
    UnregisterTaskbarTab(this,1);
  }
  else {
    (**(code **)(*(int *)this + 0x1cc))(0);
  }
  uVar11 = *(uint *)(param_2 + 4) & 0x80000;
  uVar10 = *(uint *)param_2 & 0x80000;
  if (uVar10 == uVar11) goto LAB_1001fd85;
  iVar2 = *(int *)(this + 0x438);
  if ((iVar2 == 0) || (bVar1 = true, *(int *)(iVar2 + 0x2d48) == 0)) {
    bVar1 = false;
  }
  if (uVar10 == 0) {
    if (bVar1) goto LAB_1001fd85;
    if ((iVar2 != 0) && (uVar5 = CWnd::GetExStyle((CWnd *)(iVar2 + 0x440)), (uVar5 & 0x200) == 0)) {
      CWnd::ModifyStyleEx((CWnd *)(*(int *)(this + 0x438) + 0x440),0,0x200,0x20);
    }
    BVar6 = IsZoomed(*(HWND *)(this + 0x20));
    if ((BVar6 == 0) && (uVar11 != 0)) {
      pCVar7 = CMFCVisualManager::GetInstance();
      iVar2 = (**(code **)(*(int *)pCVar7 + 0x1f0))();
      if (iVar2 == 0) {
        *(undefined4 *)(this + 0x160) = 0;
        SetWindowRgn(*(HWND *)(this + 0x20),(HRGN)0x0,1);
      }
      else {
        local_18.left = *(LONG *)(this + 0x128);
        local_18.top = *(LONG *)(this + 300);
        local_18.right = *(LONG *)(this + 0x130);
        local_18.bottom = *(LONG *)(this + 0x134);
        iVar2 = CRect::IsRectNull((CRect *)&local_18);
        if (iVar2 != 0) {
          GetWindowRect(*(HWND *)(this + 0x20),&local_18);
          ptVar14 = &local_18;
          pHVar3 = GetParent(*(HWND *)(this + 0x20));
          pCVar4 = CWnd::FromHandle(pHVar3);
          CWnd::ScreenToClient(pCVar4,ptVar14);
        }
        iVar2 = CRect::IsRectNull((CRect *)&local_18);
        if (iVar2 == 0) {
          pCVar7 = CMFCVisualManager::GetInstance();
          uVar8 = (**(code **)(*(int *)pCVar7 + 500))
                            (this,local_18.right - local_18.left,local_18.bottom - local_18.top);
          *(undefined4 *)(this + 0x160) = uVar8;
        }
      }
    }
    iVar2 = CRect::IsRectNull((CRect *)(this + 0x128));
    if (iVar2 != 0) goto LAB_1001fd85;
    iVar9 = *(int *)(this + 0x134) - *(int *)(this + 300);
    iVar12 = *(int *)(this + 0x130) - *(int *)(this + 0x128);
    iVar2 = *(int *)(this + 300);
    iVar13 = *(int *)(this + 0x128);
  }
  else {
    if ((*(uint *)param_2 & 0x21000000) == 0) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x20),&local_18);
      ptVar14 = &local_18;
      pHVar3 = GetParent(*(HWND *)(this + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      CWnd::ScreenToClient(pCVar4,ptVar14);
      *(LONG *)(this + 0x128) = local_18.left;
      *(LONG *)(this + 300) = local_18.top;
      *(LONG *)(this + 0x130) = local_18.right;
      *(LONG *)(this + 0x134) = local_18.bottom;
    }
    if ((*(int *)(this + 0x438) != 0) &&
       (uVar5 = CWnd::GetExStyle((CWnd *)(*(int *)(this + 0x438) + 0x440)), (uVar5 & 0x200) != 0)) {
      CWnd::ModifyStyleEx((CWnd *)(*(int *)(this + 0x438) + 0x440),0x200,0,0x20);
    }
    if (bVar1) goto LAB_1001fd85;
    BVar6 = IsZoomed(*(HWND *)(this + 0x20));
    if ((BVar6 == 0) && (uVar11 != 0)) {
      pCVar7 = CMFCVisualManager::GetInstance();
      iVar2 = (**(code **)(*(int *)pCVar7 + 0x1f0))();
      if (iVar2 == 0) {
        *(undefined4 *)(this + 0x160) = 0;
        SetWindowRgn(*(HWND *)(this + 0x20),(HRGN)0x0,1);
      }
      else {
        pCVar7 = CMFCVisualManager::GetInstance();
        uVar8 = (**(code **)(*(int *)pCVar7 + 500))
                          (this,*(int *)(this + 0x130) - *(int *)(this + 0x128),
                           *(int *)(this + 0x134) - *(int *)(this + 300));
        *(undefined4 *)(this + 0x160) = uVar8;
      }
    }
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetClientRect(*(HWND *)(*(int *)(this + 0x438) + 0x460),&local_28);
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_38);
    CWnd::ClientToScreen((CWnd *)this,&local_38);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    local_28.left = local_28.left + (local_18.left - local_38.left);
    local_28.top = local_28.top + (local_18.top - local_38.top);
    iVar12 = local_28.right + (local_18.right - local_38.right);
    local_28.bottom = local_28.bottom + (local_18.bottom - local_38.bottom);
    local_28.right = iVar12;
    iVar2 = CRect::IsRectNull((CRect *)&local_28);
    if (iVar2 != 0) goto LAB_1001fd85;
    iVar9 = local_28.bottom - local_28.top;
    iVar12 = iVar12 - local_28.left;
    iVar13 = local_28.left;
    iVar2 = local_28.top;
  }
  CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,iVar13,iVar2,iVar12,iVar9,0x14);
LAB_1001fd85:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

