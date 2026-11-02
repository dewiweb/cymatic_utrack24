// rea decompile_all
// name: FUN_100cad2d
// address: 0x100cad2d
// body: available
// range: 0x100cad2d-0x100cb809 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100cb072 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_100cad2d(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
            undefined4 param_6)

{
  LONG LVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  BOOL BVar6;
  int iVar7;
  HWND pHVar8;
  CWnd *pCVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iVar10;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *piVar11;
  undefined4 *puVar12;
  float10 fVar13;
  float10 fVar14;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar15;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  undefined8 uVar16;
  ulonglong uVar17;
  tagRECT *ptVar18;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 *local_94;
  int local_90;
  int local_8c;
  tagRECT local_88;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  tagRECT local_68;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  tagRECT local_48;
  undefined1 local_38 [8];
  undefined8 local_30;
  tagRECT local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_94 = param_5;
  local_98 = param_6;
  local_48.left = 0;
  local_48.top = 0;
  local_48.right = 0;
  local_48.bottom = 0;
  SetRectEmpty(&local_48);
  local_88.left = 0;
  local_88.top = 0;
  local_88.right = 0;
  local_88.bottom = 0;
  SetRectEmpty(&local_88);
  local_8c = CPaneContainerManager::IsAutoHideMode(*(CPaneContainerManager **)((int)this + 0x1c));
  if ((*(CWnd **)((int)this + 0xc) != (CWnd *)0x0) &&
     ((uVar2 = CWnd::GetExStyle(*(CWnd **)((int)this + 0xc)), (uVar2 & 0x10000000) != 0 ||
      (local_8c != 0)))) {
    GetWindowRect(*(HWND *)(*(int *)((int)this + 0xc) + 0x20),&local_88);
  }
  (**(code **)(*(int *)this + 0xc))(&local_48,0);
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  SetRectEmpty(&local_28);
  local_68.left = 0;
  local_68.top = 0;
  local_68.right = 0;
  local_68.bottom = 0;
  SetRectEmpty(&local_68);
  local_a4 = 0;
  local_a0 = 0;
  local_ac = 0;
  local_a8 = 0;
  if ((*(CWnd **)((int)this + 4) != (CWnd *)0x0) &&
     ((uVar2 = CWnd::GetExStyle(*(CWnd **)((int)this + 4)), (uVar2 & 0x10000000) != 0 ||
      (local_8c != 0)))) {
    GetWindowRect(*(HWND *)(*(int *)((int)this + 4) + 0x20),&local_28);
    (**(code **)(**(int **)((int)this + 4) + 0x26c))(&local_a4);
  }
  if ((*(CPaneContainer **)((int)this + 0x10) != (CPaneContainer *)0x0) &&
     ((iVar3 = CPaneContainer::IsVisible(*(CPaneContainer **)((int)this + 0x10)), iVar3 != 0 ||
      (local_8c != 0)))) {
    (**(code **)(**(int **)((int)this + 0x10) + 0xc))(&local_28,0);
    (**(code **)(**(int **)((int)this + 0x10) + 0x10))(&local_a4);
  }
  if ((*(CWnd **)((int)this + 8) != (CWnd *)0x0) &&
     ((uVar2 = CWnd::GetExStyle(*(CWnd **)((int)this + 8)), (uVar2 & 0x10000000) != 0 ||
      (local_8c != 0)))) {
    GetWindowRect(*(HWND *)(*(int *)((int)this + 8) + 0x20),&local_68);
    (**(code **)(**(int **)((int)this + 8) + 0x26c))(&local_ac);
  }
  if ((*(CPaneContainer **)((int)this + 0x14) != (CPaneContainer *)0x0) &&
     ((iVar3 = CPaneContainer::IsVisible(*(CPaneContainer **)((int)this + 0x14)), iVar3 != 0 ||
      (local_8c != 0)))) {
    (**(code **)(**(int **)((int)this + 0x14) + 0xc))(&local_68,0);
    (**(code **)(**(int **)((int)this + 0x14) + 0x10))(&local_ac);
  }
  uVar4 = (uint)(local_8c == 0);
  iVar3 = FID_conflict_IsLeftPartEmpty(this,uVar4);
  if ((iVar3 == 0) &&
     (iVar3 = FID_conflict_IsLeftPartEmpty(this,uVar4), puVar12 = local_94, iVar3 != 0)) {
    if (*(int **)((int)this + 4) != (int *)0x0) {
      if ((param_3 - param_1 < local_a4) && (DAT_101689e0 != 0)) {
        param_3 = param_1 + local_a4;
      }
      if ((param_4 - param_2 < local_a0) && (DAT_101689e0 != 0)) {
        param_4 = param_2 + local_a0;
      }
      uVar5 = (**(code **)(**(int **)((int)this + 4) + 0x230))(&param_1,local_98,*local_94);
      *puVar12 = uVar5;
    }
    piVar11 = *(int **)((int)this + 0x10);
  }
  else {
    iVar3 = FID_conflict_IsLeftPartEmpty(this,uVar4);
    if ((iVar3 == 0) ||
       (iVar3 = FID_conflict_IsLeftPartEmpty(this,uVar4), puVar12 = local_94, iVar3 != 0)) {
      iVar3 = FID_conflict_IsLeftPartEmpty(this,uVar4);
      if ((iVar3 != 0) || (iVar3 = FID_conflict_IsLeftPartEmpty(this,uVar4), iVar3 != 0))
      goto LAB_100cb7f9;
      local_18 = param_1;
      local_14 = param_2;
      local_10 = param_3;
      local_c = param_4;
      local_58 = param_1;
      local_54 = param_2;
      local_50 = param_3;
      local_4c = param_4;
      local_78 = param_1;
      local_74 = param_2;
      local_70 = param_3;
      local_6c = param_4;
      if (*(int *)((int)this + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      iVar3 = CPaneContainer::IsPaneDividerHorz(this);
      if (iVar3 == 0) {
        local_8c = -1;
        if (((local_48.right - local_48.left <
              ((local_68.right - local_68.left) - local_28.left) + local_28.right) ||
            (BVar6 = IsRectEmpty(&local_28), BVar6 != 0)) ||
           (BVar6 = IsRectEmpty(&local_68), BVar6 != 0)) {
          iVar3 = local_48.right - local_48.left;
          if (local_28.right - local_28.left == iVar3) {
            local_8c = 0x32;
            if (*(int *)((int)this + 8) == 0) {
              if (*(int *)((int)this + 0x14) != 0) {
                local_8c = *(int *)(*(int *)((int)this + 0x14) + 0x20);
                goto LAB_100cb43f;
              }
            }
            else {
              local_8c = *(int *)(*(int *)((int)this + 8) + 700);
LAB_100cb43f:
              if ((local_8c == 100) || (local_8c == 0)) {
                local_8c = 0x32;
              }
            }
            local_28.right =
                 ((local_48.right - (iVar3 * local_8c) / 100) - local_48.left) + local_28.left;
            local_8c = 100 - local_8c;
          }
          else {
            if (local_68.right - local_68.left != iVar3) goto LAB_100cb4c9;
            local_8c = 0x32;
            if (*(int *)((int)this + 4) == 0) {
              if (*(int *)((int)this + 0x10) != 0) {
                local_8c = *(int *)(*(int *)((int)this + 0x10) + 0x20);
                goto LAB_100cb497;
              }
            }
            else {
              local_8c = *(int *)(*(int *)((int)this + 4) + 700);
LAB_100cb497:
              if ((local_8c == 100) || (local_8c == 0)) {
                local_8c = 0x32;
              }
            }
            local_28.right = (iVar3 * local_8c) / 100 + local_28.left;
          }
        }
LAB_100cb4c9:
        LVar1 = local_28.right;
        local_90 = local_48.right - local_48.left;
        iVar3 = local_28.right - local_28.left;
        fVar13 = (float10)local_90;
        local_9c = ((local_48.left - local_48.right) - param_1) + param_3;
        fVar14 = (float10)100.0;
        fVar15 = ((float10)iVar3 / fVar13) * fVar14;
        local_30 = (double)fVar15;
        if ((fVar14 == fVar15) || ((float10)0 == fVar15)) {
          local_30 = 50.0;
        }
        if (DAT_101694cc == 0) {
          if (DAT_101694d0 == 0) {
            if ((0 < local_9c) || (local_9c < 0)) goto LAB_100cb659;
            goto LAB_100cb53d;
          }
          local_10 = iVar3 + local_18;
          pHVar8 = GetCapture();
          pCVar9 = CWnd::FromHandle(pHVar8);
          if (pCVar9 != *(CWnd **)((int)this + 0xc)) {
            local_38._0_4_ = local_88.left;
            local_38._4_4_ = local_88.top;
            ptVar18 = (tagRECT *)local_38;
            local_30._4_4_ = local_88.bottom;
            local_30._0_4_ = local_88.right;
            pHVar8 = GetParent(*(HWND *)(*(CWnd **)((int)this + 0xc) + 0x20));
            pCVar9 = CWnd::FromHandle(pHVar8);
            CWnd::ScreenToClient(pCVar9,ptVar18);
            local_10 = local_38._0_4_;
          }
          fVar13 = (float10)(local_48.right - local_48.left);
          local_30 = (double)((float10)(local_10 - local_18) / fVar13);
          fVar14 = (float10)100.0;
        }
        else if (local_9c == 0) {
LAB_100cb53d:
          local_10 = iVar3 + local_18;
          if (local_8c != -1) {
            local_30 = (double)local_8c;
          }
        }
        else {
LAB_100cb659:
          uVar17 = FUN_100f8660(local_9c,iVar3);
          local_10 = local_18 + ((LVar1 - (int)uVar17) - local_28.left);
          fVar14 = extraout_ST0_00;
          fVar13 = extraout_ST1_00;
        }
        local_70 = *(int *)(*(int *)((int)this + 0xc) + 0x108) + local_10;
        local_78 = local_10;
        local_58 = local_70;
        if (DAT_101689e0 != 0) {
          iVar3 = (local_70 - local_50) + local_ac;
          local_70 = *(int *)(*(int *)((int)this + 0xc) + 0x108);
          iVar7 = (local_18 - local_10) + local_a4;
          if (iVar7 < 1) {
            if (0 < iVar3) {
              local_10 = local_10 - iVar3;
              if (local_10 - local_18 < local_a4) goto LAB_100cb6a5;
LAB_100cb6a8:
              local_58 = local_70 + local_10;
              goto LAB_100cb6ae;
            }
          }
          else {
            if (0 < iVar3) {
LAB_100cb6a5:
              local_10 = local_18 + local_a4;
              goto LAB_100cb6a8;
            }
            local_10 = local_10 + iVar7;
            local_58 = local_70 + local_10;
            if (local_ac <= local_50 - local_58) goto LAB_100cb6b7;
LAB_100cb6ae:
            local_50 = local_58 + local_ac;
          }
LAB_100cb6b7:
          local_70 = local_70 + local_10;
          local_30 = (double)(fVar14 * ((float10)(local_10 - local_18) / fVar13));
          local_78 = local_10;
          if (local_c - local_14 < local_a0) {
            local_c = local_14 + local_a0;
            local_4c = local_54 + local_a0;
          }
        }
      }
      else {
        iVar3 = -1;
        local_8c = -1;
        if (((local_48.bottom - local_48.top <
              ((local_68.bottom - local_68.top) - local_28.top) + local_28.bottom) ||
            (BVar6 = IsRectEmpty(&local_28), BVar6 != 0)) ||
           (BVar6 = IsRectEmpty(&local_68), BVar6 != 0)) {
          iVar7 = local_48.bottom - local_48.top;
          iVar3 = 0x32;
          local_8c = 0x32;
          if (local_28.bottom - local_28.top == iVar7) {
            if (*(int *)((int)this + 8) == 0) {
              if (*(int *)((int)this + 0x14) != 0) {
                iVar3 = *(int *)(*(int *)((int)this + 0x14) + 0x20);
                goto LAB_100cb0fe;
              }
            }
            else {
              iVar3 = *(int *)(*(int *)((int)this + 8) + 700);
LAB_100cb0fe:
              if ((iVar3 == 100) || (iVar3 == 0)) {
                iVar3 = 0x32;
              }
            }
            local_28.bottom =
                 ((local_48.bottom - (iVar7 * iVar3) / 100) - local_48.top) + local_28.top;
            local_8c = 100 - iVar3;
            iVar3 = local_8c;
          }
          else {
            if (local_68.bottom - local_68.top != iVar7) goto LAB_100cb17d;
            if (*(int *)((int)this + 4) == 0) {
              if (*(int *)((int)this + 0x10) != 0) {
                local_8c = *(int *)(*(int *)((int)this + 0x10) + 0x20);
                goto LAB_100cb14f;
              }
            }
            else {
              local_8c = *(int *)(*(int *)((int)this + 4) + 700);
LAB_100cb14f:
              if ((local_8c == 100) || (local_8c == 0)) {
                local_8c = 0x32;
              }
            }
            local_28.bottom = (iVar7 * local_8c) / 100 + local_28.top;
            iVar3 = local_8c;
          }
        }
LAB_100cb17d:
        LVar1 = local_28.bottom;
        fVar13 = (float10)(local_48.bottom - local_48.top);
        local_90 = local_28.bottom - local_28.top;
        local_9c = ((local_48.top - local_48.bottom) - param_2) + param_4;
        fVar14 = (float10)100.0;
        fVar15 = ((float10)local_90 / fVar13) * fVar14;
        local_30 = (double)fVar15;
        if ((fVar14 == fVar15) || ((float10)0 == fVar15)) {
          local_30 = 50.0;
        }
        if (DAT_101694cc == 0) {
          if (DAT_101694d0 == 0) {
            if ((0 < local_9c) || (local_9c < 0)) goto LAB_100cb32a;
            goto LAB_100cb1fc;
          }
          local_c = (local_14 - local_28.top) + local_28.bottom;
          pHVar8 = GetCapture();
          pCVar9 = CWnd::FromHandle(pHVar8);
          if (pCVar9 != *(CWnd **)((int)this + 0xc)) {
            local_38._0_4_ = local_88.left;
            local_38._4_4_ = local_88.top;
            ptVar18 = (tagRECT *)local_38;
            local_30._4_4_ = local_88.bottom;
            local_30._0_4_ = local_88.right;
            pHVar8 = GetParent(*(HWND *)(*(CWnd **)((int)this + 0xc) + 0x20));
            pCVar9 = CWnd::FromHandle(pHVar8);
            CWnd::ScreenToClient(pCVar9,ptVar18);
            local_c = local_38._4_4_;
          }
          fVar13 = (float10)(local_48.bottom - local_48.top);
          local_90 = local_c - local_14;
          local_30 = (double)((float10)local_90 / fVar13);
          fVar14 = (float10)100.0;
        }
        else if (local_9c == 0) {
LAB_100cb1fc:
          local_c = (local_14 - local_28.top) + local_28.bottom;
          if (iVar3 != -1) {
            local_30 = (double)local_8c;
          }
        }
        else {
LAB_100cb32a:
          uVar17 = FUN_100f8660(local_9c,local_28.top);
          local_c = ((local_14 - (int)uVar17) - local_28.top) + LVar1;
          fVar14 = extraout_ST0;
          fVar13 = extraout_ST1;
        }
        local_6c = *(int *)(*(int *)((int)this + 0xc) + 0x108) + local_c;
        local_74 = local_c;
        local_54 = local_6c;
        if (DAT_101689e0 != 0) {
          iVar3 = *(int *)(*(int *)((int)this + 0xc) + 0x108);
          iVar10 = (local_14 - local_c) + local_a0;
          iVar7 = (local_6c - local_4c) + local_a8;
          if (iVar10 < 1) {
            if (0 < iVar7) {
              local_c = local_c - iVar7;
              if (local_c - local_14 < local_a0) goto LAB_100cb377;
LAB_100cb37a:
              local_54 = iVar3 + local_c;
              local_4c = local_54 + local_a8;
            }
          }
          else {
            if (0 < iVar7) {
LAB_100cb377:
              local_c = local_14 + local_a0;
              goto LAB_100cb37a;
            }
            local_c = local_c + iVar10;
            local_54 = iVar3 + local_c;
            if (local_4c - local_54 < local_a8) {
              local_4c = local_54 + local_a8;
            }
          }
          local_6c = iVar3 + local_c;
          local_90 = local_c - local_14;
          local_30 = (double)(fVar14 * ((float10)local_90 / fVar13));
          local_74 = local_c;
          if (local_10 - local_18 < local_a4) {
            local_10 = local_18 + local_a4;
            local_50 = local_58 + local_a4;
          }
        }
      }
      puVar12 = local_94;
      if (*(int **)((int)this + 4) != (int *)0x0) {
        uVar16 = (**(code **)(**(int **)((int)this + 4) + 0x230))(&local_18,local_98,*local_94);
        *puVar12 = (int)uVar16;
        uVar17 = FUN_100f8660(extraout_ECX,(int)((ulonglong)uVar16 >> 0x20));
        *(int *)(*(int *)((int)this + 4) + 700) = (int)uVar17;
      }
      if (*(int **)((int)this + 0x10) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x10) + 0x48))
                  (local_18,local_14,local_10,local_c,local_94,local_98);
        uVar17 = FUN_100f8660(extraout_ECX_00,extraout_EDX);
        *(int *)(*(int *)((int)this + 0x10) + 0x20) = (int)uVar17;
        puVar12 = local_94;
      }
      if (*(int **)((int)this + 8) != (int *)0x0) {
        uVar16 = (**(code **)(**(int **)((int)this + 8) + 0x230))(&local_58,local_98,*puVar12);
        *puVar12 = (int)uVar16;
        uVar17 = FUN_100f8660(extraout_ECX_01,(int)((ulonglong)uVar16 >> 0x20));
        *(int *)(*(int *)((int)this + 8) + 700) = 100 - (int)uVar17;
      }
      if (*(int **)((int)this + 0x14) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x48))
                  (local_58,local_54,local_50,local_4c,local_94,local_98);
        uVar17 = FUN_100f8660(extraout_ECX_02,extraout_EDX_00);
        *(int *)(*(int *)((int)this + 0x14) + 0x20) = 100 - (int)uVar17;
        puVar12 = local_94;
      }
      uVar2 = CWnd::GetExStyle(*(CWnd **)((int)this + 0xc));
      if ((uVar2 & 0x10000000) != 0) {
        uVar5 = (**(code **)(**(int **)((int)this + 0xc) + 0x230))(&local_78,local_98,*puVar12);
        *puVar12 = uVar5;
      }
      goto LAB_100cb7f9;
    }
    if (*(int **)((int)this + 8) != (int *)0x0) {
      if ((param_3 - param_1 < local_ac) && (DAT_101689e0 != 0)) {
        param_3 = local_ac + param_1;
      }
      if ((param_4 - param_2 < local_a8) && (DAT_101689e0 != 0)) {
        param_4 = local_a8 + param_2;
      }
      uVar5 = (**(code **)(**(int **)((int)this + 8) + 0x230))(&param_1,local_98,*local_94);
      *puVar12 = uVar5;
    }
    piVar11 = *(int **)((int)this + 0x14);
  }
  if (piVar11 != (int *)0x0) {
    (**(code **)(*piVar11 + 0x48))(param_1,param_2,param_3,param_4,local_94,local_98);
  }
LAB_100cb7f9:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

