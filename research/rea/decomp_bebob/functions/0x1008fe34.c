// rea decompile_all
// name: FUN_1008fe34
// address: 0x1008fe34
// body: available
// range: 0x1008fe34-0x1008ffc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008ffbf to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_1008fe34(void *this,CObject *param_1)

{
  CPane *pCVar1;
  BOOL BVar2;
  CPane *pCVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 local_28;
  CPane *local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)((int)this + 0x30) != 0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    CDockingPanesRow::GetClientRect(this,(CRect *)&local_18);
    BVar2 = IsRectEmpty(&local_18);
    if (BVar2 == 0) {
      local_28 = 0;
      local_20 = CDockingPanesRow::GetAvailableLengthRect(this);
      if (*(int *)((int)this + 0x30) == 1) {
        if (param_1 == (CObject *)0x0) {
          param_1 = *(CObject **)(*(int *)((int)this + 0x28) + 8);
        }
        if (local_20 < 0) {
          CDockingPanesRow::StretchPaneRect(this,(CPane *)param_1,local_20);
          goto LAB_1008fea2;
        }
      }
      if (param_1 == (CObject *)0x0) {
        param_1 = *(CObject **)(*(int *)((int)this + 0x28) + 8);
      }
      else {
        FUN_1008f8bb(this,param_1,false);
      }
      FUN_1008f8bb(this,param_1,true);
      pCVar3 = CDockingPanesRow::FindFirstVisiblePane(this,1);
      iVar4 = CDockingPanesRow::GetOutOfBoundsOffsetRect(this,pCVar3,1);
      if (0 < iVar4) {
        CDockingPanesRow::ShiftPanesRect(this,pCVar3,iVar4,1);
      }
      local_24 = CDockingPanesRow::FindFirstVisiblePane(this,0);
      iVar4 = CDockingPanesRow::GetOutOfBoundsOffsetRect(this,local_24,0);
      if (0 < iVar4) {
        iVar8 = 0;
        if (local_20 < 1) {
          local_1c = local_20;
          lVar5 = _labs(local_20);
          CDockingPanesRow::ShiftPanesRect(this,local_24,lVar5 - iVar4,iVar8);
          if (local_20 < 0) {
            pCVar3 = *(CPane **)((int)this + 0x2c);
            while (pCVar3 != (CPane *)0x0) {
              if (pCVar3 == (CPane *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_10009068();
              }
              pCVar1 = *(CPane **)(pCVar3 + 8);
              pCVar3 = *(CPane **)(pCVar3 + 4);
              local_24 = pCVar3;
              iVar4 = (**(code **)(*(int *)pCVar1 + 0x178))();
              if ((iVar4 != 0) || (*(int *)((int)this + 4) != 0)) {
                local_20 = (**(code **)(*(int *)pCVar1 + 0x2ac))(local_1c,&local_28);
                uVar7 = 0;
                lVar5 = _labs(local_20);
                lVar6 = _labs(local_1c);
                CDockingPanesRow::MovePaneRect(this,pCVar1,lVar6 - lVar5,(bool)uVar7);
                if (local_20 == local_1c) break;
                local_1c = local_1c - local_20;
                pCVar3 = local_24;
              }
            }
          }
        }
        else {
          CDockingPanesRow::ShiftPanesRect(this,local_24,-iVar4,0);
        }
      }
    }
  }
LAB_1008fea2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

