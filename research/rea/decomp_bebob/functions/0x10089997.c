// rea decompile_all
// name: FUN_10089997
// address: 0x10089997
// body: available
// range: 0x10089997-0x10089c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100899c0 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10089997(void *this,int param_1,int *param_2)

{
  POINT pt;
  POINT pt_00;
  int *piVar1;
  CBasePane *pCVar2;
  CObject *pCVar3;
  BOOL BVar4;
  int iVar5;
  LONG LVar6;
  LONG LVar7;
  tagPOINT local_58;
  int local_50;
  int *local_4c;
  tagRECT local_48;
  RECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_50 = param_1;
  local_4c = param_2;
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  local_58.x = 0;
  local_58.y = 0;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_48.left = 0;
  local_48.top = 0;
  local_48.right = 0;
  local_48.bottom = 0;
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  GetCursorPos(&local_58);
  GetWindowRect(*(HWND *)((int)this + 0x20),&local_28);
  CPane::GetVirtualRect(this,(CRect *)&local_38);
  pCVar2 = CBasePane::PaneFromPoint(this,local_58.x,local_58.y,local_50,0,&PTR_s_CDockSite_1012dd78)
  ;
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockSite_1012dd78,(CObject *)pCVar2);
  piVar1 = local_4c;
  *local_4c = (int)pCVar3;
  if (*(int *)((int)this + 0xac) == 0) {
    if ((pCVar3 != (CObject *)0x0) &&
       (iVar5 = (**(code **)(*(int *)this + 0x184))(pCVar3), iVar5 != 0)) {
      GetWindowRect(*(HWND *)(*piVar1 + 0x20),&local_18);
      pt_00.y = local_58.y;
      pt_00.x = local_58.x;
      BVar4 = PtInRect(&local_18,pt_00);
      if (BVar4 == 0) {
        local_50 = 0;
        if (local_58.x < local_18.left) {
          local_4c = (int *)(local_28.right - local_28.left);
          LVar6 = local_58.x;
          LVar7 = local_18.left;
        }
        else {
          if (local_18.right < local_58.x) {
            local_4c = (int *)(local_28.right - local_28.left);
            local_50 = local_58.x - local_18.right;
            goto LAB_10089c1f;
          }
          if (local_18.top <= local_58.y) {
            if (local_18.bottom < local_58.y) {
              local_4c = (int *)(local_28.bottom - local_28.top);
              local_50 = local_58.y - local_18.bottom;
            }
            goto LAB_10089c1f;
          }
          local_4c = (int *)(local_28.bottom - local_28.top);
          LVar6 = local_58.y;
          LVar7 = local_18.top;
        }
        local_50 = LVar7 - LVar6;
      }
    }
    goto LAB_10089c1f;
  }
  GetWindowRect(*(HWND *)(*(int *)((int)this + 0xac) + 0x20),&local_18);
  BVar4 = IntersectRect(&local_48,&local_18,&local_38);
  if (BVar4 == 0) goto LAB_10089c1f;
  iVar5 = (**(code **)(**(int **)((int)this + 0xac) + 0x160))();
  if (iVar5 == 0) {
    if ((local_18.top <= local_38.top) || (local_18.top - local_38.top <= local_50 * 2)) {
      if (local_38.bottom <= local_18.bottom) goto LAB_10089c1f;
      iVar5 = local_38.bottom - local_18.bottom;
      goto LAB_10089ad5;
    }
  }
  else if ((local_18.left <= local_38.left) || (local_18.left - local_38.left <= local_50 * 2)) {
    if (local_38.right <= local_18.right) goto LAB_10089c1f;
    iVar5 = local_38.right - local_18.right;
LAB_10089ad5:
    if (iVar5 <= local_50 * 2) goto LAB_10089c1f;
  }
  pt.y = local_58.y;
  pt.x = local_58.x;
  PtInRect(&local_18,pt);
LAB_10089c1f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

