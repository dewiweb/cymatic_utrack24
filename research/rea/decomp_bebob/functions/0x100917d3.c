// rea decompile_all
// name: CDockSite::MovePane
// address: 0x100917d3
// body: available
// range: 0x100917d3-0x10091a76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009194b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockSite::MovePane(class CPane *,unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CDockSite::MovePane(CDockSite *this,CPane *param_1,undefined4 param_2,int param_4,int param_5)

{
  CPane *this_00;
  int iVar1;
  long lVar2;
  CDockingPanesRow *pCVar3;
  CDockingPanesRow *pCVar4;
  CDockingPanesRow *pCVar5;
  tagPOINT local_48;
  undefined4 local_40;
  CDockingPanesRow *local_3c;
  int local_38;
  undefined1 local_31;
  CPane *local_30;
  __POSITION *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar3 = *(CDockingPanesRow **)(param_1 + 0xb0);
  local_30 = param_1;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  CPane::GetVirtualRect(param_1,(CRect *)&local_18);
  OffsetRect(&local_18,param_4,param_5);
  local_48.x = 0;
  local_48.y = 0;
  GetCursorPos(&local_48);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  CDockingPanesRow::GetWindowRect(pCVar3,(CRect *)&local_28);
  local_40 = 0;
  iVar1 = (**(code **)(*(int *)local_30 + 0x2b4))(0xf,&local_40);
  this_00 = local_30;
  if (iVar1 != 0) {
    CPane::UpdateVirtualRect(local_30,param_4,param_5);
    CPane::GetVirtualRect(this_00,(CRect *)&local_18);
    (**(code **)(*(int *)this_00 + 0x1f8))
              (local_18.left,local_18.top,local_18.right,local_18.bottom,1,1);
    goto LAB_10091a66;
  }
  local_31 = 0;
  local_3c = RowFromPoint(this,(local_18.right + local_18.left) / 2,
                          (local_18.bottom + local_18.top) / 2,&local_31);
  iVar1 = (**(code **)(*(int *)this + 0x160))();
  if (iVar1 == 0) {
    local_38 = local_20 - local_18.right;
    if (local_28 - local_18.left <= local_20 - local_18.right) {
      local_38 = local_28 - local_18.left;
    }
    iVar1 = local_18.right - local_18.left;
  }
  else {
    local_38 = local_1c - local_18.bottom;
    if (local_24 - local_18.top <= local_1c - local_18.bottom) {
      local_38 = local_24 - local_18.top;
    }
    iVar1 = local_18.bottom - local_18.top;
  }
  local_2c = (__POSITION *)((iVar1 * 2) / 3);
  lVar2 = _labs(local_38);
  if ((int)local_2c < lVar2) {
    if ((1 < *(int *)(pCVar3 + 0x30)) && (local_38 < *(int *)(pCVar3 + 0xc))) {
      local_2c = CObList::Find((CObList *)(this + 0x11c),(CObject *)pCVar3,(__POSITION *)0x0);
      if (local_2c == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      if (local_38 < 0) {
        FindNextVisibleRow(this,&local_2c,1);
      }
      (**(code **)(*(int *)pCVar3 + 0x24))(local_30);
      iVar1 = (**(code **)(*(int *)this + 0x160))();
      if (iVar1 == 0) {
        iVar1 = local_18.right - local_18.left;
      }
      else {
        iVar1 = local_18.bottom - local_18.top;
      }
      pCVar3 = AddRow(this,local_2c,iVar1);
      (**(code **)(*(int *)pCVar3 + 0x20))(local_30,1);
      goto LAB_10091a66;
    }
    if ((pCVar3 != local_3c) && (local_3c != (CDockingPanesRow *)0x0)) {
      SendMessageW(*(HWND *)(this + 0x20),0xb,0,0);
      iVar1 = (**(code **)(*(int *)pCVar3 + 0x60))();
      pCVar4 = local_3c;
      pCVar5 = pCVar3;
      if ((iVar1 == 0) &&
         (iVar1 = (**(code **)(*(int *)local_3c + 0x60))(), pCVar4 = pCVar3, pCVar5 = local_3c,
         iVar1 == 0)) {
        (**(code **)(*(int *)pCVar3 + 0x24))(local_30);
        (**(code **)(*(int *)local_3c + 0x20))(local_30,1);
      }
      else {
        SwapRows(this,pCVar4,pCVar5);
      }
      local_30[0x100] = (CPane)0x1;
      SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x185);
      goto LAB_10091a66;
    }
  }
  iVar1 = local_1c - local_24;
  lVar2 = _labs(local_38);
  if (lVar2 < iVar1) {
    local_2c = BeginDeferWindowPos(*(int *)(pCVar3 + 0x30));
    CDockingPanesRow::MovePane(pCVar3,local_30,param_4,param_5,1,&local_2c);
    EndDeferWindowPos(local_2c);
  }
LAB_10091a66:
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

