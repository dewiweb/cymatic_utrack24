// rea decompile_all
// name: CMFCToolBarComboBoxButton::OnCalculateSize
// address: 0x100d040d
// body: available
// range: 0x100d040d-0x100d0645 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual struct tagSIZE __thiscall CMFCToolBarComboBoxButton::OnCalculateSize(class CDC
   *,class CSize const &,int)
   
   Library: Visual Studio 2010 Release */

tagSIZE __thiscall
CMFCToolBarComboBoxButton::OnCalculateSize
          (CMFCToolBarComboBoxButton *this,CDC *param_1,CSize *param_2,int param_3)

{
  CWnd *pCVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  tagSIZE tVar5;
  int in_stack_00000010;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  *(int *)(this + 0x7c) = in_stack_00000010;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  if (*(int *)(this + 0x50) == 0) {
    if (((DAT_101624d4 != 0) && (pCVar1 = *(CWnd **)(this + 0xb0), pCVar1 != (CWnd *)0x0)) &&
       (*(int *)(pCVar1 + 0x20) != 0)) {
      uVar3 = CWnd::GetExStyle(pCVar1);
      if ((uVar3 & 0x10000000) != 0) {
        CWnd::ShowWindow(*(CWnd **)(this + 0xb0),0);
      }
    }
    pCVar1 = *(CWnd **)(this + 0xb4);
    if ((pCVar1 != (CWnd *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
      uVar3 = CWnd::GetExStyle(pCVar1);
      if ((uVar3 & 0x10000000) != 0) {
        CWnd::ShowWindow(*(CWnd **)(this + 0xb4),0);
      }
    }
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    if (((DAT_101624d4 != 0) && (pCVar1 = *(CWnd **)(this + 0xb4), pCVar1 != (CWnd *)0x0)) &&
       (*(int *)(pCVar1 + 0x20) != 0)) {
      uVar3 = CWnd::GetExStyle(pCVar1);
      if ((uVar3 & 0x10000000) != 0) {
        CWnd::ShowWindow(*(CWnd **)(this + 0xb4),0);
      }
    }
    if (in_stack_00000010 == 0) {
      pCVar1 = *(CWnd **)(this + 0xb4);
      if ((pCVar1 != (CWnd *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
        uVar3 = CWnd::GetExStyle(pCVar1);
        if ((uVar3 & 0x10000000) != 0) {
          CWnd::ShowWindow(*(CWnd **)(this + 0xb4),0);
        }
      }
      pCVar1 = *(CWnd **)(this + 0xb0);
      if ((pCVar1 != (CWnd *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
        uVar3 = CWnd::GetExStyle(pCVar1);
        if ((uVar3 & 0x10000000) != 0) {
          CWnd::ShowWindow(*(CWnd **)(this + 0xb0),0);
        }
      }
      CMFCToolBarButton::OnCalculateSize((CMFCToolBarButton *)this,param_1,param_2,param_3);
    }
    else {
      if ((((DAT_101624d4 == 0) && (pCVar1 = *(CWnd **)(this + 0xb4), pCVar1 != (CWnd *)0x0)) &&
          (*(int *)(pCVar1 + 0x20) != 0)) && (*(int *)(this + 0x40) == 0)) {
        CWnd::ShowWindow(pCVar1,4);
      }
      if ((*(int *)(this + 0x18) != 0) && (*(int *)(*(int *)(this + 0x2c) + -0xc) != 0)) {
        local_18.right = *(LONG *)(this + 0x70);
        local_18.bottom = *(int *)(param_3 + 4);
        local_18.left = 0;
        local_18.top = 0;
        (**(code **)(*(int *)param_2 + 0x68))
                  (*(int *)(this + 0x2c),*(undefined4 *)(*(int *)(this + 0x2c) + -0xc),&local_18,
                   0x411);
        *(LONG *)(this + 100) = local_18.right - local_18.left;
        *(LONG *)(this + 0x68) = local_18.bottom - local_18.top;
      }
      iVar4 = *(int *)(param_3 + 4);
      iVar2 = *(int *)(this + 0xb4);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(*(HWND *)(iVar2 + 0x20),&local_18);
        iVar4 = local_18.bottom - local_18.top;
      }
      if (((*(int *)(this + 0x40) == 0) && (*(int *)(this + 0xb0) != 0)) &&
         (*(int *)(*(int *)(this + 0xb0) + 0x20) != 0)) {
        uVar3 = CWnd::GetExStyle(*(CWnd **)(this + 0xb4));
        if ((uVar3 & 0x10000000) == 0) {
          CWnd::ShowWindow(*(CWnd **)(this + 0xb0),4);
        }
      }
      iVar2 = *(int *)(this + 0x68);
      *(undefined4 *)param_1 = *(undefined4 *)(this + 0x70);
      *(int *)(param_1 + 4) = iVar2 + iVar4;
    }
  }
  tVar5 = (tagSIZE)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return tVar5;
}

