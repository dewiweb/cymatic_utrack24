// rea decompile_all
// name: FUN_10027791
// address: 0x10027791
// body: available
// range: 0x10027791-0x10027fb0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027fac to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10027791(void *this,CDC *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulong uVar4;
  CMFCVisualManager *pCVar5;
  CMFCToolBarImages *pCVar6;
  ulonglong *puVar7;
  int iVar8;
  BOOL BVar9;
  int *piVar10;
  undefined4 extraout_ECX;
  int extraout_EDX;
  CFont *pCVar11;
  undefined4 extraout_EDX_00;
  CMFCToolBarImages *this_00;
  CDC *this_01;
  float10 extraout_ST0;
  float10 fVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  tagAFXDrawState local_100 [12];
  CMFCToolBarImages *local_f4;
  CMFCToolBarImages *local_f0;
  int local_ec;
  CMFCToolBarImages *local_e8;
  CMFCToolBarImages *local_e4;
  CMFCToolBarImages *local_e0;
  int local_dc;
  undefined4 *local_d8;
  CFont *local_d0;
  undefined4 local_cc;
  CMFCToolBarImages *local_c8;
  uint local_c4;
  uint local_c0;
  double local_bc;
  int local_b4;
  CFont *local_b0;
  int *local_ac;
  uint local_a8;
  CDC *local_a4;
  CMemDC local_a0 [4];
  CDC *local_9c;
  int local_98;
  CDC local_90 [44];
  tagRECT local_64;
  tagRECT local_54;
  RECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xf0;
  local_8 = 0x100277a0;
  local_44.left = 0;
  local_44.top = 0;
  local_44.right = 0;
  local_44.bottom = 0;
  (**(code **)(*(int *)param_1 + 0x50))(&local_44);
  uVar3 = (**(code **)(*(int *)this + 400))();
  local_c4 = (uint)((uVar3 & 0xa000) != 0);
  local_54.left = 0;
  local_54.top = 0;
  local_54.right = 0;
  local_54.bottom = 0;
  GetClientRect(*(HWND *)((int)this + 0x20),&local_54);
  CMemDC::CMemDC(local_a0,param_1,this);
  local_8 = 0;
  this_01 = local_9c;
  if (local_98 != 0) {
    this_01 = local_90;
  }
  local_a4 = this_01;
  uVar4 = CWnd::GetExStyle(this);
  if ((uVar4 & 0x8000) == 0) {
    pCVar5 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar5 + 0x34))
              (local_a4,this,local_54.left,local_54.top,local_54.right,local_54.bottom,local_44.left
               ,local_44.top,local_44.right,local_44.bottom,0);
    this_01 = local_a4;
  }
  else {
    CMFCControlBarImpl::GetBackgroundFromParent((CMFCControlBarImpl *)((int)this + 0xb6c),this_01);
  }
  (**(code **)(*(int *)this + 0x3a4))(this_01);
  (**(code **)(*(int *)this_01 + 0x30))(DAT_10166ac0);
  CDC::SetBkMode(this_01,1);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)((int)this + 0x20),&local_24);
  if (local_c4 == 0) {
    local_24.right = (**(code **)(*(int *)this + 0x358))();
    local_24.right = local_24.right + local_24.left;
  }
  else {
    local_24.bottom = (**(code **)(*(int *)this + 0x354))();
    local_24.bottom = local_24.bottom + local_24.top;
  }
  iVar8 = DAT_10166e70;
  if (*(int *)((int)this + 0xb04) != 0) {
    iVar8 = *(int *)((int)this + 0xbbc);
  }
  local_bc = 1.0;
  if ((iVar8 == 0) && (DAT_10166c84 != 0)) {
    local_bc = _DAT_10166c7c;
  }
  pCVar6 = CMFCToolBar::GetImageList
                     (this,(CMFCToolBarImages *)&DAT_10166f30,
                      (CMFCToolBarImages *)((int)this + 0x2a4),(CMFCToolBarImages *)&DAT_101674a0,
                      (CMFCToolBarImages *)((int)this + 0x5c8));
  local_e0 = pCVar6;
  local_c8 = pCVar6;
  local_f4 = CMFCToolBar::GetImageList
                       (this,(CMFCToolBarImages *)&DAT_10167060,
                        (CMFCToolBarImages *)((int)this + 0x3b0),(CMFCToolBarImages *)&DAT_101675b0,
                        (CMFCToolBarImages *)((int)this + 0x6d4));
  local_e8 = CMFCToolBar::GetImageList
                       (this,(CMFCToolBarImages *)&DAT_10167280,
                        (CMFCToolBarImages *)((int)this + 0x4bc),(CMFCToolBarImages *)&DAT_101676c0,
                        (CMFCToolBarImages *)((int)this + 0x7e0));
  if (extraout_EDX == 0) {
    local_e4 = (CMFCToolBarImages *)&DAT_10167170;
    local_f0 = (CMFCToolBarImages *)&DAT_10167390;
  }
  else {
    local_e4 = (CMFCToolBarImages *)((int)this + 0x8ec);
    local_f0 = (CMFCToolBarImages *)((int)this + 0x9f8);
  }
  local_c0 = (uint)(*(int *)(pCVar6 + 0x88) != 0);
  CMFCToolBarImages::SetTransparentColor(pCVar6,DAT_10166ab4);
  pCVar5 = CMFCVisualManager::GetInstance();
  local_cc = *(undefined4 *)(pCVar5 + 0x78);
  if (*(int *)((int)this + 0xb38) == 0) {
    puVar7 = (ulonglong *)CMFCToolBar::GetImageSize(this);
  }
  else {
    puVar7 = (ulonglong *)&DAT_1016040c;
  }
  iVar8 = (int)*puVar7;
  fVar12 = (float10)1;
  pCVar11 = *(CFont **)((int)puVar7 + 4);
  uVar14 = *puVar7;
  local_b0 = pCVar11;
  if (fVar12 != (float10)local_bc) {
    local_b4 = iVar8;
    if (((*(int *)((int)this + 0xb38) != 0) && (iVar8 == -1)) && (pCVar11 == (CFont *)0xffffffff)) {
      uVar13 = CMFCToolBar::GetImageSize(this);
      pCVar11 = (CFont *)((ulonglong)uVar13 >> 0x20);
      iVar8 = *(int *)uVar13;
      local_b0 = (CFont *)((int *)uVar13)[1];
      local_b4 = iVar8;
      if ((1.0 < local_bc) && (*(int *)((int)this + 0xb08) != 0)) {
        local_b4 = DAT_101603f4;
        local_b0 = DAT_101603f8;
      }
    }
    uVar14 = FUN_100f8660(iVar8,pCVar11);
    local_d0 = (CFont *)uVar14;
    uVar14 = FUN_100f8660(extraout_ECX,(int)(uVar14 >> 0x20));
    local_b0 = local_d0;
    fVar12 = extraout_ST0;
  }
  local_b4 = (int)uVar14;
  if (local_c0 != 0) {
    if ((fVar12 != (float10)local_bc) && ((float10)*(double *)(pCVar6 + 0xb0) == fVar12)) {
      FUN_100823f8(pCVar6,(int)(uVar14 >> 0x20),SUB84(local_bc,0),
                   (uint)((ulonglong)local_bc >> 0x20));
    }
    iVar8 = CMFCToolBarImages::PrepareDrawImage(pCVar6,local_100,local_b4,local_b0,local_cc);
    if (iVar8 == 0) goto LAB_10027f95;
  }
  if (local_c4 == 0) {
    local_d0 = (CFont *)(**(code **)(*(int *)local_a4 + 0x28))();
  }
  else {
    local_d0 = CBasePane::SelectDefaultFont(this,local_a4);
  }
  if (0 < *(int *)(local_f4 + 4)) {
    pCVar5 = CMFCVisualManager::GetInstance();
    *(undefined4 *)(pCVar5 + 0x78) = 0;
  }
  local_dc = 0;
  puVar2 = *(undefined4 **)((int)this + 0xbcc);
  while (local_d8 = puVar2, puVar2 != (undefined4 *)0x0) {
    if (puVar2 == (undefined4 *)0x0) goto LAB_10027fac;
    local_d8 = (undefined4 *)*puVar2;
    local_ac = (int *)puVar2[2];
    if (local_ac == (int *)0x0) break;
    local_24.left = local_ac[0x15];
    local_24.top = local_ac[0x16];
    local_24.right = local_ac[0x17];
    local_24.bottom = local_ac[0x18];
    local_64.left = 0;
    local_64.top = 0;
    local_64.right = 0;
    local_64.bottom = 0;
    if ((*(byte *)(local_ac + 9) & 1) == 0) {
      BVar9 = IntersectRect(&local_64,&local_24,&local_44);
      if (BVar9 != 0) {
        local_ec = CMFCToolBar::IsButtonHighlighted(this,local_dc);
        if (((local_ac[9] & 0x40000U) == 0) || (DAT_10166e54 != 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        iVar8 = (**(code **)(*(int *)local_a4 + 0x58))();
        pCVar6 = local_f4;
        if (iVar8 != 0) {
          local_a8 = 0;
          if (local_c0 != 0) {
            if (local_ac[1] == 0) {
              if (*(int *)((int)this + 0xb38) == 0) {
                if ((bVar1) && (0 < *(int *)(local_e8 + 4))) {
                  local_a8 = 1;
                  this_00 = local_e8;
                }
                else {
                  local_a8 = 0;
                  this_00 = local_e0;
                }
                if ((((local_ec == 0) && (local_a8 == 0)) && ((local_ac[9] & 0x20000U) == 0)) &&
                   ((0 < *(int *)(local_f4 + 4) &&
                    (iVar8 = (**(code **)(*local_ac + 0x70))(), iVar8 == 0)))) {
                  this_00 = pCVar6;
                }
              }
              else if ((bVar1) && (this_00 = local_f0, 0 < *(int *)(local_f0 + 4))) {
LAB_10027d1f:
                local_a8 = 1;
              }
              else {
                this_00 = local_e4;
                if (*(int *)(local_e4 + 4) < 1) {
                  if ((bVar1) && (this_00 = local_e8, 0 < *(int *)(local_e8 + 4)))
                  goto LAB_10027d1f;
                  local_a8 = 0;
                  this_00 = local_e0;
                }
              }
            }
            else {
              this_00 = (CMFCToolBarImages *)0x0;
              if (-1 < local_ac[0xe]) {
                this_00 = DAT_10166e6c;
              }
            }
            if ((this_00 != local_c8) && (this_00 != (CMFCToolBarImages *)0x0)) {
              CMFCToolBarImages::EndDrawImage(local_c8,local_100);
              CMFCToolBarImages::SetTransparentColor(this_00,DAT_10166ab4);
              if ((local_bc != 1.0) && (*(double *)(this_00 + 0xb0) == 1.0)) {
                FUN_100823f8(this_00,extraout_EDX_00,SUB84(local_bc,0),
                             (uint)((ulonglong)local_bc >> 0x20));
              }
              CMFCToolBarImages::PrepareDrawImage(this_00,local_100,local_b4,local_b0,local_cc);
              local_c8 = this_00;
            }
          }
          (**(code **)(*(int *)this + 0x3bc))
                    (local_a4,local_ac,-(uint)(local_c0 != 0) & (uint)local_c8,local_ec);
        }
      }
    }
    else {
      local_34.left = 0;
      local_34.top = 0;
      local_34.right = 0;
      local_34.bottom = 0;
      local_a8 = local_c4;
      SetRectEmpty(&local_34);
      piVar10 = local_ac;
      (**(code **)(*(int *)this + 0x40c))(local_ac,&local_34);
      if ((piVar10[4] != 0) && (local_c4 != 0)) {
        local_a8 = 0;
      }
      BVar9 = IntersectRect(&local_64,&local_34,&local_44);
      if ((BVar9 != 0) && (piVar10[0x10] == 0)) {
        (**(code **)(*(int *)this + 0x3f4))(local_a4,&local_34);
      }
    }
    local_dc = local_dc + 1;
    puVar2 = local_d8;
  }
  if (*(int *)((int)this + 0xbd4) <= *(int *)((int)this + 0xb80)) {
    *(undefined4 *)((int)this + 0xb80) = 0xffffffff;
  }
  if ((DAT_10166e54 != 0) || (DAT_10166e58 != 0)) {
    if ((-1 < *(int *)((int)this + 0xb80)) &&
       ((*(int *)((int)this + 0xb04) == 0 && (DAT_10166e84 == this)))) {
      piVar10 = (int *)FUN_100261ef(this,*(int *)((int)this + 0xb80));
      if (piVar10 == (int *)0x0) {
LAB_10027fac:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      if ((piVar10 != (int *)0x0) && (iVar8 = (**(code **)(*piVar10 + 0x50))(), iVar8 != 0)) {
        local_34.left = piVar10[0x15];
        local_34.top = piVar10[0x16];
        local_34.right = piVar10[0x17];
        local_34.bottom = piVar10[0x18];
        CDC::Draw3dRect(local_a4,&local_34,DAT_10166ac0,DAT_10166ac0);
        InflateRect(&local_34,-1,-1);
        CDC::Draw3dRect(local_a4,&local_34,DAT_10166ac0,DAT_10166ac0);
      }
    }
    if (((DAT_10166e54 != 0) && (-1 < *(int *)((int)this + 0xb8c))) &&
       (*(int *)((int)this + 0xb04) == 0)) {
      (**(code **)(*(int *)this + 0x3c0))();
    }
  }
  (**(code **)(*(int *)local_a4 + 0x28))();
  if (local_c0 != 0) {
    CMFCToolBarImages::EndDrawImage(local_c8,local_100);
  }
  pCVar5 = CMFCVisualManager::GetInstance();
  *(undefined4 *)(pCVar5 + 0x78) = local_cc;
LAB_10027f95:
  local_8 = 0xffffffff;
  CMemDC::~CMemDC(local_a0);
  FUN_100f90cf();
  return;
}

