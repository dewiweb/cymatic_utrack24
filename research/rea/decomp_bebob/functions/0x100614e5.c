// rea decompile_all
// name: CFrameImpl::OnChangeVisualManager
// address: 0x100614e5
// body: available
// range: 0x100614e5-0x10061792 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CFrameImpl::OnChangeVisualManager(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameImpl::OnChangeVisualManager(CFrameImpl *this)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  CMFCVisualManager *pCVar6;
  undefined4 uVar7;
  uint uVar8;
  int local_4c;
  int local_48;
  int local_44;
  int local_40 [2];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  bVar1 = false;
  if ((*(int *)(this + 0xfc) != 0) &&
     (((BVar2 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xfc) + 0x20)), BVar2 != 0 ||
       (BVar2 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xb0) + 0x20)), BVar2 == 0)) &&
      ((*(int **)(this + 0xfc))[0xc5] != 0)))) {
    bVar1 = true;
    (**(code **)(**(int **)(this + 0xfc) + 0x20c))();
    iVar3 = AFX_GLOBAL_DATA::DwmIsCompositionEnabled((AFX_GLOBAL_DATA *)&DAT_10166aa0);
    if (iVar3 != 0) goto LAB_10061784;
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(*(int *)(this + 0xb0) + 0x20),&local_18);
  BVar2 = IsZoomed(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
  if ((bVar1) || (iVar3 = IsOwnerDrawCaption(this), iVar3 != 0)) {
    bVar1 = false;
    uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0));
    if (((uVar4 & 0x800000) != 0) && ((*(int *)(this + 0x24) != 0 && (*(int *)(this + 0x28) == 0))))
    {
      bVar1 = true;
      *(undefined4 *)(this + 0x3c) = 1;
      CWnd::ModifyStyle(*(CWnd **)(this + 0xb0),0x800000,0,0x20);
      *(undefined4 *)(this + 0x3c) = 0;
    }
    pCVar6 = CMFCVisualManager::GetInstance();
    uVar7 = (**(code **)(*(int *)pCVar6 + 500))
                      (*(undefined4 *)(this + 0xb0),local_18.right - local_18.left,
                       local_18.bottom - local_18.top);
    *(undefined4 *)(this + 0x20) = uVar7;
    if (((BVar2 != 0) && (bVar1)) && (*(int *)(this + 0x28) == 0)) {
      _memset(local_40,0,0x28);
      OnGetMinMaxInfo(this,(tagMINMAXINFO *)local_40);
      local_18.bottom = local_2c + local_34;
      iVar3 = local_18.bottom - local_2c;
      local_18.right = local_38 + local_30;
      local_18.left = local_30;
      uVar8 = 0x14;
      local_18.top = local_2c;
      iVar5 = local_18.right - local_30;
      goto LAB_10061772;
    }
  }
  else {
    bVar1 = false;
    uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0));
    if ((((uVar4 & 0x800000) == 0) && (*(int *)(this + 0x24) != 0)) && (*(int *)(this + 0x28) == 0))
    {
      bVar1 = true;
      *(undefined4 *)(this + 0x3c) = 1;
      CWnd::ModifyStyle(*(CWnd **)(this + 0xb0),0,0x800000,0x20);
      *(undefined4 *)(this + 0x3c) = 0;
    }
    if (*(int *)(this + 0x20) != 0) {
      *(undefined4 *)(this + 0x20) = 0;
      SetWindowRgn(*(HWND *)(*(int *)(this + 0xb0) + 0x20),(HRGN)0x0,1);
    }
    if (((BVar2 == 0) || (!bVar1)) || (*(int *)(this + 0x28) != 0)) {
      CWnd::SetWindowPos(*(CWnd **)(this + 0xb0),(CWnd *)0x0,-1,-1,
                         (local_18.right - local_18.left) + 1,(local_18.bottom - local_18.top) + 1,
                         0x16);
      iVar3 = local_18.bottom - local_18.top;
      uVar8 = 0x16;
      iVar5 = local_18.right - local_18.left;
      local_2c = -1;
      local_30 = -1;
    }
    else {
      _memset(&local_4c,0,0x34);
      local_4c = local_18.left;
      local_48 = local_18.top;
      local_44 = local_18.right;
      local_40[0] = local_18.bottom;
      (**(code **)(**(int **)(this + 0xb0) + 0x68))(&local_4c,0);
      uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0));
      if ((uVar4 & 0xc00000) == 0xc00000) {
        iVar3 = GetSystemMetrics(4);
        local_48 = local_48 + iVar3;
      }
      iVar3 = local_40[0] - local_48;
      uVar8 = 0x14;
      iVar5 = local_44 - local_4c;
      local_30 = local_4c;
      local_2c = local_48;
    }
LAB_10061772:
    CWnd::SetWindowPos(*(CWnd **)(this + 0xb0),(CWnd *)0x0,local_30,local_2c,iVar5,iVar3,uVar8);
  }
  FUN_100610f1(this);
LAB_10061784:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

