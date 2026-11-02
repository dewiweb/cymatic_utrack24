// rea decompile_all
// name: FUN_1008f687
// address: 0x1008f687
// body: available
// range: 0x1008f687-0x1008f8b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008f8b5 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_1008f687(void *this,CObject *param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  CPane *pCVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  int iVar8;
  void **ppvVar9;
  void *local_30;
  int local_2c;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)((int)this + 0x30) != 0) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    CDockingPanesRow::GetClientRect(this,(CRect *)&local_28);
    BVar1 = IsRectEmpty(&local_28);
    if (BVar1 == 0) {
      local_30 = (void *)0x0;
      local_2c = (**(code **)(*(int *)this + 0x5c))(0);
      if (*(int *)((int)this + 0x30) == 1) {
        if (param_1 == (CObject *)0x0) {
          param_1 = *(CObject **)(*(int *)((int)this + 0x28) + 8);
        }
        if (local_2c < 0) {
          (**(code **)(*(int *)param_1 + 0x2ac))(local_2c,&local_30);
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
          CWnd::ScreenToClient(*(CWnd **)((int)this + 0x44),&local_18);
          if ((*(uint *)((int)this + 0x40) & 0xa000) == 0) {
            iVar2 = -local_18.top;
            iVar3 = *(int *)((int)this + 0x18) - local_18.left;
          }
          else {
            iVar2 = *(int *)((int)this + 0x18) - local_18.top;
            iVar3 = -local_18.left;
          }
          OffsetRect(&local_18,iVar3,iVar2);
          (**(code **)(*(int *)param_1 + 0x234))
                    (0,local_18.left,local_18.top,local_18.right - local_18.left,
                     local_18.bottom - local_18.top,0x14,0);
          goto LAB_1008f781;
        }
      }
      if (param_1 == (CObject *)0x0) {
        param_1 = *(CObject **)(*(int *)((int)this + 0x28) + 8);
      }
      else {
        FUN_1008e1b4(this,param_1,false,&local_30);
      }
      FUN_1008e1b4(this,param_1,true,&local_30);
      pCVar4 = CDockingPanesRow::FindFirstVisiblePane(this,1);
      iVar2 = CDockingPanesRow::GetOutOfBoundsOffset(this,pCVar4,1);
      if (0 < iVar2) {
        CDockingPanesRow::ShiftPanes(this,pCVar4,iVar2,1);
      }
      pCVar4 = CDockingPanesRow::FindFirstVisiblePane(this,0);
      iVar3 = CDockingPanesRow::GetOutOfBoundsOffset(this,pCVar4,0);
      iVar2 = local_2c;
      if (0 < iVar3) {
        iVar8 = 0;
        if (local_2c < 1) {
          lVar5 = _labs(local_2c);
          CDockingPanesRow::ShiftPanes(this,pCVar4,lVar5 - iVar3,iVar8);
          if (local_2c < 0) {
            iVar3 = *(int *)((int)this + 0x2c);
            while (iVar3 != 0) {
              if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_10009068();
              }
              local_2c = *(int *)(iVar3 + 4);
              pCVar4 = *(CPane **)(iVar3 + 8);
              iVar3 = (**(code **)(*(int *)pCVar4 + 0x178))();
              if ((iVar3 != 0) || (iVar3 = local_2c, *(int *)((int)this + 4) != 0)) {
                iVar3 = (**(code **)(*(int *)pCVar4 + 0x2ac))(iVar2,&local_30);
                ppvVar9 = &local_30;
                uVar7 = 0;
                lVar5 = _labs(iVar3);
                lVar6 = _labs(iVar2);
                CDockingPanesRow::MovePane(this,pCVar4,lVar6 - lVar5,(bool)uVar7,ppvVar9);
                if (iVar3 == iVar2) break;
                iVar2 = iVar2 - iVar3;
                iVar3 = local_2c;
              }
            }
          }
        }
        else {
          CDockingPanesRow::ShiftPanes(this,pCVar4,-iVar3,0);
        }
      }
    }
  }
LAB_1008f781:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

