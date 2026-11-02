// rea decompile_all
// name: CDockablePane::DockToFrameWindow
// address: 0x1007a54d
// body: available
// range: 0x1007a54d-0x1007a779 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockablePane::DockToFrameWindow(unsigned long,struct tagRECT
   const *,unsigned long,class CBasePane *,int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CDockablePane::DockToFrameWindow
          (CDockablePane *this,ulong param_1,tagRECT *param_2,ulong param_3,CBasePane *param_4,
          int param_5,int param_6)

{
  bool bVar1;
  CFrameWnd *pCVar2;
  BOOL BVar3;
  CWnd *pCVar4;
  CPaneDivider *pCVar5;
  int iVar6;
  CRuntimeClass *pCVar7;
  undefined4 uVar8;
  int local_40;
  int local_3c;
  tagRECT *local_38;
  CDockingManager *local_34;
  uint local_30;
  ulong local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_2c = param_1;
  local_38 = param_2;
  LockWindowUpdate(*(HWND *)(this + 0x20));
  iVar6 = *(int *)this;
  uVar8 = 0;
  pCVar2 = AFXGetParentFrame((CWnd *)this);
  (**(code **)(iVar6 + 0x308))(pCVar2,uVar8);
  if (*(HWND *)(this + 0x33c) != (HWND)0x0) {
    BVar3 = IsWindow(*(HWND *)(this + 0x33c));
    if (BVar3 != 0) {
      (**(code **)(*(int *)this + 0x23c))(0);
    }
  }
  pCVar7 = (CRuntimeClass *)0x0;
  pCVar4 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
  pCVar5 = CreateDefaultPaneDivider(local_2c,pCVar4,pCVar7);
  if (pCVar5 == (CPaneDivider *)0x0) {
    CWnd::ShowWindow((CWnd *)this,5);
  }
  else {
    *(undefined4 *)(this + 0x33c) = *(undefined4 *)(pCVar5 + 0x20);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    pCVar4 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
    local_34 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar4);
    local_40 = 0;
    local_3c = 0;
    (**(code **)(*(int *)this + 0x26c))(&local_40);
    bVar1 = local_18.right - local_18.left < local_40;
    if (bVar1) {
      local_18.right = local_18.left + local_40;
    }
    local_30 = (uint)bVar1;
    if (local_18.bottom - local_18.top < local_3c) {
      local_18.bottom = local_18.top + local_3c;
      local_30 = 1;
    }
    iVar6 = (**(code **)(*(int *)local_34 + 0x5c))(&local_18,local_2c);
    if ((iVar6 != 0) || (local_30 != 0)) {
      (**(code **)(*(int *)this + 0x234))
                (0,0,0,local_18.right - local_18.left,local_18.bottom - local_18.top,0x16,0);
    }
    (**(code **)(*(int *)pCVar5 + 0x26c))(this);
    if (param_6 == 0) {
      CBasePane::AddPane((CBasePane *)this,(CBasePane *)this);
      CBasePane::AddPane((CBasePane *)this,(CBasePane *)pCVar5);
    }
    else {
      CDockingManager::AddPane(local_34,(CBasePane *)pCVar5,0,0,param_6);
      CDockingManager::AddPane(local_34,(CBasePane *)this,0,0,param_6);
    }
    (**(code **)(*(int *)this + 0x1dc))(local_2c);
    local_2c = *(ulong *)pCVar5;
    uVar8 = (**(code **)(*(int *)this + 400))();
    (**(code **)(local_2c + 0x1dc))(uVar8);
    uVar8 = (**(code **)(*(int *)this + 400))();
    *(undefined4 *)(this + 0x1e8) = uVar8;
    (**(code **)(*(int *)this + 0x1ec))(1);
    if (local_38 != (RECT *)0x0) {
      CopyRect(&local_28,local_38);
      (**(code **)(*(int *)this + 0x234))
                (0,0,0,local_28.right - local_28.left,local_28.bottom - local_28.top,0x36,0);
    }
    LockWindowUpdate((HWND)0x0);
    (**(code **)(*(int *)this + 0x264))(0);
    (**(code **)(*(int *)this + 0x2fc))(this,0,0);
  }
  iVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

