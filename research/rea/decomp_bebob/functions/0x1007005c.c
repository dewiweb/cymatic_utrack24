// rea decompile_all
// name: CMFCMenuBar::CalcLayout
// address: 0x1007005c
// body: available
// range: 0x1007005c-0x1007024d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100700d7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCMenuBar::CalcLayout(unsigned long,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCMenuBar::CalcLayout(CMFCMenuBar *this,ulong param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  CWnd *pCVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined1 local_3c [8];
  int *local_34;
  undefined4 local_30;
  CObject *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_34 = (int *)param_1;
  (**(code **)(*(int *)this + 0x3b0))(0xffffffff);
  puVar4 = *(undefined4 **)(this + 0xbcc);
  *(undefined4 *)(this + 0xcfc) = 0;
  do {
    if (puVar4 == (undefined4 *)0x0) goto LAB_100700e6;
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    local_2c = (CObject *)puVar4[2];
    puVar4 = (undefined4 *)*puVar4;
    iVar1 = CObject::IsKindOf(local_2c,(CRuntimeClass *)&PTR_s_CMFCToolBarMenuButtonsButton_1012ec78
                             );
  } while ((((iVar1 != 0) ||
            (iVar1 = CObject::IsKindOf(local_2c,(CRuntimeClass *)
                                                &PTR_s_CMFCToolBarSystemMenuButton_101616f8),
            iVar1 != 0)) || (*(int *)(local_2c + 0xc) == 0)) ||
          (iVar1 = CMFCToolBarButton::IsDrawImage((CMFCToolBarButton *)local_2c), iVar1 == 0));
  *(undefined4 *)(this + 0xcfc) = 1;
LAB_100700e6:
  if (((param_2 & 0x10U) != 0) || (local_2c = (CObject *)0x0, (param_2 & 2U) == 0)) {
    local_2c = (CObject *)0x1;
  }
  iVar1 = (**(code **)(*(int *)this + 0x16c))();
  if ((iVar1 == 0) && (*(int *)(this + 0x168) != 0)) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    SetRectEmpty(&local_28);
    if (*(CDockingPanesRow **)(this + 0xb0) != (CDockingPanesRow *)0x0) {
      CDockingPanesRow::GetClientRect(*(CDockingPanesRow **)(this + 0xb0),(CRect *)&local_28);
    }
    BVar2 = IsRectEmpty(&local_28);
    if (BVar2 != 0) {
      pCVar3 = CWnd::GetOwner((CWnd *)this);
      GetClientRect(*(HWND *)(pCVar3 + 0x20),&local_28);
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    SetRectEmpty(&local_18);
    CPane::CalcInsideRect((CPane *)this,(CRect *)&local_18,param_2 & 2);
    if (local_2c == (CObject *)0x0) {
      CMFCToolBar::WrapToolBar
                ((CMFCToolBar *)this,
                 ((local_18.right - local_28.left) - local_18.left) + -1 + local_28.right,0x7fff,
                 (CDC *)0x0,-1,-1);
      puVar4 = (undefined4 *)(**(code **)(*(int *)this + 0x2a4))(local_3c,0);
      local_30 = *puVar4;
      iVar6 = (local_28.right - (local_18.right - local_18.left) / 2) - local_28.left;
      iVar1 = puVar4[1] + (local_18.top - local_18.bottom);
    }
    else {
      piVar5 = (int *)(**(code **)(*(int *)this + 0x2a4))(local_3c,1);
      local_2c = (CObject *)piVar5[1];
      iVar1 = (local_28.bottom - (local_18.bottom - local_18.top) / 2) - local_28.top;
      iVar6 = *piVar5 + (local_18.left - local_18.right);
    }
    FUN_1002de91((int)this);
    *local_34 = iVar6;
    local_34[1] = iVar1;
  }
  else {
    CMFCToolBar::CalcLayout((CMFCToolBar *)this,(ulong)local_34,param_2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

