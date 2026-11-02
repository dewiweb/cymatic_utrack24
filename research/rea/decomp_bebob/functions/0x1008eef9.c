// rea decompile_all
// name: CDockingPanesRow::ShiftPanesRect
// address: 0x1008eef9
// body: available
// range: 0x1008eef9-0x1008f076 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008ef4a to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockingPanesRow::ShiftPanesRect(class CPane *,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDockingPanesRow::ShiftPanesRect(CDockingPanesRow *this,CPane *param_1,int param_2,int param_3)

{
  CPane *pCVar1;
  __POSITION *p_Var2;
  int iVar3;
  BOOL BVar4;
  __POSITION *p_Var5;
  int dy;
  CPane *local_38;
  int local_30;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_38 = param_1;
  if (param_2 != 0) {
    if (param_1 == (CPane *)0x0) {
      if (param_3 == 0) {
        p_Var2 = *(__POSITION **)(this + 0x2c);
      }
      else {
        p_Var2 = *(__POSITION **)(this + 0x28);
      }
      if (p_Var2 == (__POSITION *)0x0) {
LAB_1008ef4a:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      local_38 = *(CPane **)(p_Var2 + 8);
    }
    else {
      p_Var2 = CObList::Find((CObList *)(this + 0x24),(CObject *)param_1,(__POSITION *)0x0);
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    SetRectEmpty(&local_18);
    local_30 = param_2;
    while (p_Var2 != (__POSITION *)0x0) {
      if (param_3 == 0) {
        if (p_Var2 == (__POSITION *)0x0) goto LAB_1008ef4a;
        p_Var5 = *(__POSITION **)(p_Var2 + 4);
      }
      else {
        if (p_Var2 == (__POSITION *)0x0) goto LAB_1008ef4a;
        p_Var5 = *(__POSITION **)p_Var2;
      }
      pCVar1 = *(CPane **)(p_Var2 + 8);
      iVar3 = (**(code **)(*(int *)pCVar1 + 0x178))();
      p_Var2 = p_Var5;
      if ((iVar3 != 0) || (*(int *)(this + 4) != 0)) {
        local_28.left = *(LONG *)(pCVar1 + 0x9c);
        local_28.top = *(LONG *)(pCVar1 + 0xa0);
        local_28.right = *(LONG *)(pCVar1 + 0xa4);
        local_28.bottom = *(LONG *)(pCVar1 + 0xa8);
        if ((pCVar1 != local_38) && (BVar4 = IsRectEmpty(&local_18), BVar4 == 0)) {
          if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
            if (param_3 == 0) {
              iVar3 = local_28.bottom - local_18.top;
            }
            else {
              iVar3 = local_28.top - local_18.bottom;
            }
          }
          else if (param_3 == 0) {
            iVar3 = local_28.right - local_18.left;
          }
          else {
            iVar3 = local_28.left - local_18.right;
          }
          local_30 = local_30 - iVar3;
        }
        if (local_30 < 1) {
          if (param_3 != 0) break;
          if (-1 < local_30) goto LAB_1008f024;
        }
        else {
LAB_1008f024:
          if (param_3 == 0) break;
        }
        local_18.left = local_28.left;
        local_18.top = local_28.top;
        local_18.right = local_28.right;
        local_18.bottom = local_28.bottom;
        if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
          iVar3 = 0;
          dy = local_30;
        }
        else {
          iVar3 = local_30;
          dy = 0;
        }
        OffsetRect(&local_28,iVar3,dy);
        *(LONG *)(pCVar1 + 0x9c) = local_28.left;
        *(LONG *)(pCVar1 + 0xa0) = local_28.top;
        *(LONG *)(pCVar1 + 0xa4) = local_28.right;
        *(LONG *)(pCVar1 + 0xa8) = local_28.bottom;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

