// rea decompile_all
// name: CDockingPanesRow::IsEnoughSpaceToMove
// address: 0x1008e38c
// body: available
// range: 0x1008e38c-0x1008e4fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008e4a4 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: int __thiscall CDockingPanesRow::IsEnoughSpaceToMove(class CPane *,bool,int &)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CDockingPanesRow::IsEnoughSpaceToMove
          (CDockingPanesRow *this,CPane *param_1,bool param_2,int *param_3)

{
  undefined4 *puVar1;
  CPane *pCVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_3c = 0;
  puVar3 = *(undefined4 **)(this + 0x28);
joined_r0x1008e3b9:
  do {
    do {
      if (puVar3 == (undefined4 *)0x0) {
        local_28.left = 0;
        local_28.top = 0;
        local_28.right = 0;
        local_28.bottom = 0;
        ::GetWindowRect(*(HWND *)(param_1 + 0x20),&local_28);
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        GetWindowRect(this,(CRect *)&local_38);
        *param_3 = 0;
        if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
          if (param_2) {
            iVar5 = local_2c - local_28.bottom;
          }
          else {
            iVar5 = local_34 - local_28.top;
          }
        }
        else if (param_2) {
          iVar5 = local_30 - local_28.right;
        }
        else {
          iVar5 = local_38 - local_28.left;
        }
        *param_3 = iVar5;
        if (param_2) {
          local_3c = -local_3c;
        }
        *param_3 = iVar5 + local_3c;
        iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return iVar5;
      }
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = (undefined4 *)*puVar3;
      pCVar2 = (CPane *)puVar3[2];
      iVar5 = (**(code **)(*(int *)pCVar2 + 0x178))();
      puVar3 = puVar1;
    } while (((iVar5 == 0) && (*(int *)(this + 4) == 0)) ||
            (::GetWindowRect(*(HWND *)(pCVar2 + 0x20),&local_18), pCVar2 == param_1));
    bVar4 = CPane::IsLeftOf(param_1,local_18.left,local_18.top,local_18.right,local_18.bottom,1);
    if (!param_2) goto LAB_1008e481;
  } while (bVar4);
  goto LAB_1008e485;
LAB_1008e481:
  if (bVar4) {
LAB_1008e485:
    if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
      iVar5 = local_18.bottom - local_18.top;
    }
    else {
      iVar5 = local_18.right - local_18.left;
    }
    local_3c = local_3c + iVar5;
  }
  goto joined_r0x1008e3b9;
}

