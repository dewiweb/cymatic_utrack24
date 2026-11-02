// rea decompile_all
// name: CPaneContainer::CalculateRecentSize
// address: 0x100ca93a
// body: available
// range: 0x100ca93a-0x100cad2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100cab29 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CPaneContainer::CalculateRecentSize(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneContainer::CalculateRecentSize(CPaneContainer *this)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  ulonglong uVar6;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  double local_48;
  int local_40;
  int local_3c;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  SetRectEmpty(&local_28);
  local_3c = CPaneContainerManager::IsAutoHideMode(*(CPaneContainerManager **)(this + 0x1c));
  (**(code **)(*(int *)this + 0xc))(&local_28,0);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  SetRectEmpty(&local_38);
  local_50 = 0;
  local_4c = 0;
  local_58 = 0;
  local_54 = 0;
  if ((*(CWnd **)(this + 4) != (CWnd *)0x0) &&
     ((uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 4)), (uVar2 & 0x10000000) != 0 || (local_3c != 0))
     )) {
    ::GetWindowRect(*(HWND *)(*(int *)(this + 4) + 0x20),&local_18);
    (**(code **)(**(int **)(this + 4) + 0x26c))(&local_50);
  }
  if ((*(CPaneContainer **)(this + 0x10) != (CPaneContainer *)0x0) &&
     ((iVar3 = IsVisible(*(CPaneContainer **)(this + 0x10)), iVar3 != 0 || (local_3c != 0)))) {
    (**(code **)(**(int **)(this + 0x10) + 0xc))(&local_18,0);
    (**(code **)(**(int **)(this + 0x10) + 0x10))(&local_50);
  }
  if ((*(CWnd **)(this + 8) != (CWnd *)0x0) &&
     ((uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 8)), (uVar2 & 0x10000000) != 0 || (local_3c != 0))
     )) {
    ::GetWindowRect(*(HWND *)(*(int *)(this + 8) + 0x20),&local_38);
    (**(code **)(**(int **)(this + 8) + 0x26c))(&local_58);
  }
  if ((*(CPaneContainer **)(this + 0x14) != (CPaneContainer *)0x0) &&
     ((iVar3 = IsVisible(*(CPaneContainer **)(this + 0x14)), iVar3 != 0 || (local_3c != 0)))) {
    (**(code **)(**(int **)(this + 0x14) + 0xc))(&local_38,0);
    (**(code **)(**(int **)(this + 0x14) + 0x10))(&local_58);
  }
  uVar4 = (uint)(local_3c == 0);
  iVar3 = FID_conflict_IsLeftPartEmpty(this,uVar4);
  if ((iVar3 == 0) && (iVar3 = FID_conflict_IsLeftPartEmpty(this,uVar4), iVar3 != 0)) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(*(int *)(this + 4) + 700) = 100;
    }
    if (*(CPaneContainer **)(this + 0x10) == (CPaneContainer *)0x0) goto LAB_100cad1e;
    CalculateRecentSize(*(CPaneContainer **)(this + 0x10));
    iVar3 = *(int *)(this + 0x10);
  }
  else {
    iVar3 = FID_conflict_IsLeftPartEmpty(this,uVar4);
    if ((iVar3 == 0) || (iVar3 = FID_conflict_IsLeftPartEmpty(this,uVar4), iVar3 != 0)) {
      iVar3 = FID_conflict_IsLeftPartEmpty(this,uVar4);
      if ((iVar3 != 0) || (iVar3 = FID_conflict_IsLeftPartEmpty(this,uVar4), iVar3 != 0))
      goto LAB_100cad1e;
      if (*(int *)(this + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      iVar3 = IsPaneDividerHorz(this);
      if (iVar3 == 0) {
        iVar3 = local_38.right - local_38.left;
        local_40 = local_28.right - local_28.left;
        local_3c = -1;
        if (local_40 < (iVar3 - local_18.left) + local_18.right) {
          if (local_18.right - local_18.left == local_40) {
            local_3c = 0x32;
            if (*(int *)(this + 8) == 0) {
              if (*(int *)(this + 0x14) != 0) {
                local_3c = *(int *)(*(int *)(this + 0x14) + 0x20);
              }
            }
            else {
              local_3c = *(int *)(*(int *)(this + 8) + 700);
            }
            iVar3 = local_40 * local_3c;
            local_18.right = (local_28.right - iVar3 / 100) - local_28.left;
            local_3c = 100 - local_3c;
          }
          else {
            if (iVar3 != local_40) goto LAB_100cac96;
            local_3c = 0x32;
            if (*(int *)(this + 4) == 0) {
              if (*(int *)(this + 0x10) != 0) {
                local_3c = *(int *)(*(int *)(this + 0x10) + 0x20);
              }
            }
            else {
              local_3c = *(int *)(*(int *)(this + 4) + 700);
            }
            iVar3 = local_40 * local_3c;
            local_18.right = iVar3 / 100;
          }
          iVar3 = iVar3 % 100;
          local_18.right = local_18.right + local_18.left;
        }
LAB_100cac96:
        iVar5 = local_18.right - local_18.left;
        local_48 = (double)iVar5 / (double)local_40;
      }
      else {
        iVar3 = local_38.bottom - local_38.top;
        local_3c = -1;
        local_40 = local_28.bottom - local_28.top;
        if (local_40 < (local_18.bottom - local_18.top) + iVar3) {
          local_3c = 0x32;
          if (local_18.bottom - local_18.top == local_40) {
            if (*(int *)(this + 8) == 0) {
              if (*(int *)(this + 0x14) == 0) {
                local_3c = 0x32;
              }
              else {
                local_3c = *(int *)(*(int *)(this + 0x14) + 0x20);
              }
            }
            else {
              local_3c = *(int *)(*(int *)(this + 8) + 700);
            }
            iVar3 = local_40 * local_3c;
            local_18.bottom = (local_28.bottom - iVar3 / 100) - local_28.top;
            local_3c = 100 - local_3c;
          }
          else {
            if (iVar3 != local_40) goto LAB_100cabe5;
            if (*(int *)(this + 4) == 0) {
              if (*(int *)(this + 0x10) != 0) {
                local_3c = *(int *)(*(int *)(this + 0x10) + 0x20);
              }
            }
            else {
              local_3c = *(int *)(*(int *)(this + 4) + 700);
            }
            iVar3 = local_40 * local_3c;
            local_18.bottom = iVar3 / 100;
          }
          iVar3 = iVar3 % 100;
          local_18.bottom = local_18.bottom + local_18.top;
        }
LAB_100cabe5:
        iVar5 = local_18.bottom - local_18.top;
        local_48 = (double)iVar5 / (double)local_40;
      }
      local_48 = local_48 * 100.0;
      if (local_3c != -1) {
        local_48 = (double)local_3c;
      }
      iVar1 = *(int *)(this + 4);
      if (iVar1 != 0) {
        uVar6 = FUN_100f8660(iVar5,iVar3);
        iVar3 = (int)(uVar6 >> 0x20);
        *(int *)(iVar1 + 700) = (int)uVar6;
      }
      iVar5 = 0;
      if (*(CPaneContainer **)(this + 0x10) != (CPaneContainer *)0x0) {
        CalculateRecentSize(*(CPaneContainer **)(this + 0x10));
        uVar6 = FUN_100f8660(extraout_ECX,extraout_EDX);
        iVar3 = (int)(uVar6 >> 0x20);
        iVar5 = *(int *)(this + 0x10);
        *(int *)(iVar5 + 0x20) = (int)uVar6;
      }
      iVar1 = *(int *)(this + 8);
      if (iVar1 != 0) {
        uVar6 = FUN_100f8660(iVar5,iVar3);
        *(int *)(iVar1 + 700) = 100 - (int)uVar6;
      }
      if (*(CPaneContainer **)(this + 0x14) != (CPaneContainer *)0x0) {
        CalculateRecentSize(*(CPaneContainer **)(this + 0x14));
        uVar6 = FUN_100f8660(extraout_ECX_00,extraout_EDX_00);
        *(int *)(*(int *)(this + 0x14) + 0x20) = 100 - (int)uVar6;
      }
      goto LAB_100cad1e;
    }
    if (*(int *)(this + 8) != 0) {
      *(undefined4 *)(*(int *)(this + 8) + 700) = 100;
    }
    if (*(CPaneContainer **)(this + 0x14) == (CPaneContainer *)0x0) goto LAB_100cad1e;
    CalculateRecentSize(*(CPaneContainer **)(this + 0x14));
    iVar3 = *(int *)(this + 0x14);
  }
  *(undefined4 *)(iVar3 + 0x20) = 100;
LAB_100cad1e:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

