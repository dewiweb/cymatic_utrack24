// rea decompile_all
// name: CFrameImpl::ProcessKeyboard
// address: 0x10060541
// body: available
// range: 0x10060541-0x100607d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100607a1 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CFrameImpl::ProcessKeyboard(int,int *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CFrameImpl::ProcessKeyboard(CFrameImpl *this,int param_1,int *param_2)

{
  void *this_00;
  bool bVar1;
  ushort uVar2;
  BOOL BVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  int iVar6;
  CObject *this_01;
  int iVar7;
  int *piVar8;
  CFrameWnd *pCVar9;
  undefined4 *puVar10;
  byte local_5;
  
  if (param_2 != (int *)0x0) {
    *param_2 = 1;
  }
  if ((DAT_1016843c != (CObject *)0x0) &&
     (BVar3 = IsWindow(*(HWND *)(DAT_1016843c + 0x20)), BVar3 != 0)) {
    pHVar4 = GetFocus();
    pCVar5 = CWnd::FromHandle(pHVar4);
    iVar6 = (**(code **)(*(int *)DAT_1016843c + 0x200))();
    if (iVar6 != 0) {
      if ((pCVar5 != (CWnd *)0x0) && (*(HWND *)(pCVar5 + 0x20) != (HWND)0x0)) {
        BVar3 = IsChild(*(HWND *)(DAT_1016843c + 0x20),*(HWND *)(pCVar5 + 0x20));
        if (BVar3 != 0) {
          return 0;
        }
        if (DAT_1016843c == (CObject *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(DAT_1016843c + 0x20);
        }
        if (*(int *)(pCVar5 + 0x20) == iVar6) {
          return 0;
        }
      }
      SendMessageW(*(HWND *)(DAT_1016843c + 0x20),0x10,0,0);
      return 0;
    }
    if (((pCVar5 != (CWnd *)0x0) && (*(HWND *)(pCVar5 + 0x20) != (HWND)0x0)) &&
       (BVar3 = IsChild(*(HWND *)(DAT_1016843c + 0x20),*(HWND *)(pCVar5 + 0x20)), BVar3 != 0)) {
      return 0;
    }
    iVar6 = (**(code **)(*(int *)DAT_1016843c + 0x1c0))();
    iVar6 = *(int *)(iVar6 + 0xd08);
    SendMessageW(*(HWND *)(DAT_1016843c + 0x20),0x100,param_1,0);
    if (iVar6 == 0) {
      return 1;
    }
    this_01 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCDropDownListBox_10138a40,DAT_1016843c);
    if (this_01 != (CObject *)0x0) {
      iVar6 = CMFCDropDownListBox::IsEditFocused((CMFCDropDownListBox *)this_01);
      if (iVar6 != 0) {
        return 0;
      }
      return 1;
    }
    return 1;
  }
  BVar3 = IsIconic(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
  if (BVar3 != 0) {
    return 1;
  }
  if (DAT_10166e54 != 0) {
    return 0;
  }
  bVar1 = false;
  puVar10 = DAT_10166ec0;
  do {
    iVar6 = 0;
    if (puVar10 == (undefined4 *)0x0) break;
    this_00 = (void *)puVar10[2];
    puVar10 = (undefined4 *)*puVar10;
    if (this_00 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    pCVar5 = CWnd::FromHandlePermanent(*(HWND__ **)((int)this_00 + 0x20));
    if ((pCVar5 != (CWnd *)0x0) && (iVar7 = FUN_100268b9((int)this_00), 0 < iVar7)) {
      do {
        piVar8 = (int *)FUN_100261ef(this_00,iVar6);
        iVar7 = (**(code **)(*piVar8 + 0xa4))();
        if (iVar7 != 0) {
          bVar1 = true;
          break;
        }
        iVar6 = iVar6 + 1;
        iVar7 = FUN_100268b9((int)this_00);
      } while (iVar6 < iVar7);
    }
  } while (!bVar1);
  local_5 = 0;
  uVar2 = GetAsyncKeyState(0x11);
  if ((uVar2 & 0x8000) != 0) {
    local_5 = 8;
  }
  uVar2 = GetAsyncKeyState(0x12);
  if ((uVar2 & 0x8000) != 0) {
    local_5 = local_5 | 0x10;
  }
  uVar2 = GetAsyncKeyState(0x10);
  if ((uVar2 & 0x8000) != 0) {
    local_5 = local_5 | 4;
  }
  if (!bVar1) {
    iVar6 = CKeyboardManager::IsKeyHandled
                      ((ushort)param_1,local_5 | 1,*(CFrameWnd **)(this + 0xb0),1);
    if (iVar6 != 0) {
      return 0;
    }
    pCVar9 = (CFrameWnd *)(**(code **)(**(int **)(this + 0xb0) + 0x16c))();
    iVar6 = CKeyboardManager::IsKeyHandled((ushort)param_1,local_5 | 1,pCVar9,iVar6);
    if (iVar6 != 0) {
      return 0;
    }
  }
  if (((*(int *)(this + 0xfc) == 0) ||
      (BVar3 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xfc) + 0x20)), BVar3 == 0)) ||
     (local_5 != 8)) {
    if ((local_5 == 0x10) && (iVar6 = OnMenuChar(this,param_1), iVar6 != 0)) {
      return 1;
    }
  }
  else if ((param_1 == 0x70) && (*(int *)(*(CMFCRibbonBar **)(this + 0xfc) + 0x710) != 0)) {
    CMFCRibbonBar::ToggleMimimizeState(*(CMFCRibbonBar **)(this + 0xfc));
    return 1;
  }
  if ((bVar1) && (param_2 != (int *)0x0)) {
    *param_2 = 0;
  }
  return 0;
}

