// rea decompile_all
// name: CDockablePane::Slide
// address: 0x1007a10f
// body: available
// range: 0x1007a10f-0x1007a3d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockablePane::Slide(int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockablePane::Slide(CDockablePane *this,int param_1,int param_2)

{
  int iVar1;
  CWnd *pCVar2;
  CDockingManager *this_00;
  CPaneDivider *pCVar3;
  UINT_PTR UVar4;
  uint uVar5;
  tagRECT *ptVar6;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)this + 0x1d8))();
  if (iVar1 == 0) goto LAB_1007a3cb;
  if (*(UINT_PTR *)(this + 0x2ec) != 0) {
    KillTimer(*(HWND *)(this + 0x20),*(UINT_PTR *)(this + 0x2ec));
  }
  if (*(UINT_PTR *)(this + 0x2e8) != 0) {
    KillTimer(*(HWND *)(this + 0x20),*(UINT_PTR *)(this + 0x2e8));
    *(undefined4 *)(this + 0x2e8) = 0;
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  if (((param_2 == 0) || (DAT_1016880c != 0)) || (DAT_10166c20 != 0)) {
    iVar1 = (**(code **)(*(int *)this + 0x160))();
    if (iVar1 == 0) {
      iVar1 = local_18.right - local_18.left;
    }
    else {
      iVar1 = local_18.bottom - local_18.top;
    }
    *(int *)(this + 0x2f4) = iVar1;
  }
  if (param_2 == 0) {
    *(LONG *)(this + 0x2f8) = local_18.left;
    *(LONG *)(this + 0x2fc) = local_18.top;
    *(LONG *)(this + 0x300) = local_18.right;
    *(LONG *)(this + 0x304) = local_18.bottom;
    (**(code **)(*(int *)this + 0x3a0))(0);
    CWnd::ShowWindow((CWnd *)this,0);
    ShowWindow(*(HWND *)(this + 0x33c),0);
    goto LAB_1007a3cb;
  }
  pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
  this_00 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar2);
  if (param_1 != 0) {
    FUN_1003dbf9(this_00,(CBasePane *)this,0);
    iVar1 = 0;
    pCVar3 = GetDefaultPaneDivider(this);
    CDockingManager::AlignAutoHidePane(this_00,pCVar3,iVar1);
    CWnd::ShowWindow((CWnd *)this,5);
    ShowWindow(*(HWND *)(this + 0x33c),5);
  }
  BringWindowToTop(*(HWND *)(this + 0x20));
  BringWindowToTop(*(HWND *)(this + 0x33c));
  if (*(int *)(this + 0x314) == 1) {
    FUN_1003f061(this_00,0,1);
  }
  UVar4 = SetTimer(*(HWND *)(this + 0x20),(param_1 != 0) + 1,DAT_10161374,(TIMERPROC)0x0);
  *(UINT_PTR *)(this + 0x2ec) = UVar4;
  if ((DAT_1016880c == 0) && (DAT_10166c20 == 0)) {
    if (*(int *)(this + 0x314) == 1) {
      ptVar6 = &local_18;
      pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
      CWnd::ScreenToClient(pCVar2,ptVar6);
      uVar5 = (**(code **)(*(int *)this + 400))();
      if ((uVar5 & 0xa000) == 0) {
        iVar1 = local_18.right - local_18.left;
      }
      else {
        iVar1 = local_18.bottom - local_18.top;
      }
      if (iVar1 / DAT_10161378 < 1) {
LAB_1007a37e:
        iVar1 = 1;
      }
      else {
        uVar5 = (**(code **)(*(int *)this + 400))();
        if ((uVar5 & 0xa000) == 0) {
          iVar1 = local_18.right - local_18.left;
        }
        else {
          iVar1 = local_18.bottom - local_18.top;
        }
LAB_1007a3ab:
        iVar1 = iVar1 / DAT_10161378;
      }
      *(int *)(this + 0x2f4) = iVar1;
    }
    else if (*(int *)(this + 0x314) == 2) {
      if ((param_1 == 0) && (*(int *)(this + 0x308) == 0)) {
        ptVar6 = (tagRECT *)(this + 0x2f8);
        ptVar6->left = local_18.left;
        *(LONG *)(this + 0x2fc) = local_18.top;
        *(LONG *)(this + 0x300) = local_18.right;
        *(LONG *)(this + 0x304) = local_18.bottom;
        pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
        CWnd::ScreenToClient(pCVar2,ptVar6);
      }
      uVar5 = (**(code **)(*(int *)this + 400))();
      if ((uVar5 & 0xa000) == 0) {
        iVar1 = *(int *)(this + 0x300) - *(int *)(this + 0x2f8);
      }
      else {
        iVar1 = *(int *)(this + 0x304) - *(int *)(this + 0x2fc);
      }
      if (iVar1 / DAT_10161378 < 1) goto LAB_1007a37e;
      uVar5 = (**(code **)(*(int *)this + 400))();
      if ((uVar5 & 0xa000) == 0) {
        iVar1 = *(int *)(this + 0x300) - *(int *)(this + 0x2f8);
      }
      else {
        iVar1 = *(int *)(this + 0x304) - *(int *)(this + 0x2fc);
      }
      goto LAB_1007a3ab;
    }
  }
  *(undefined4 *)(this + 0x2f0) = 0;
  *(undefined4 *)(this + 0x308) = 1;
LAB_1007a3cb:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

