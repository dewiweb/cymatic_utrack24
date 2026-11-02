// rea decompile_all
// name: FUN_100bcbd5
// address: 0x100bcbd5
// body: available
// range: 0x100bcbd5-0x100bd66f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bd40e to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100bcbd5(void *this,CDC *param_1)

{
  RECT *lprc;
  double dVar1;
  BOOL BVar2;
  int iVar3;
  CMFCVisualManager *pCVar4;
  CMFCRibbonBar *this_00;
  ulong uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined1 local_184 [8];
  int local_17c;
  int local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  uint local_164;
  uint local_160;
  RECT *local_15c;
  undefined4 local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  IMAGES_IDS local_144;
  CDC *local_140;
  CMFCToolBarMenuButton local_13c [32];
  undefined4 local_11c;
  uint local_118;
  undefined1 local_110 [64];
  undefined4 local_d0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_90;
  tagRECT local_54;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 uStack_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x174;
  local_8 = 0x100bcbe4;
  local_140 = param_1;
  local_15c = (RECT *)((int)this + 0x18);
  BVar2 = IsRectEmpty(local_15c);
  if (BVar2 == 0) {
    if (((*(int *)((int)this + 0x90) == 0) || (*(int *)((int)this + 0x68) != 0)) ||
       (*(int *)((int)this + 0x130) != 0)) {
      local_15c = *(RECT **)((int)this + 0x78);
      local_170 = *(undefined4 *)((int)this + 0x84);
      local_16c = *(undefined4 *)((int)this + 0x6c);
      local_168 = *(undefined4 *)((int)this + 0x114);
      local_174 = *(undefined4 *)((int)this + 0x118);
      local_150 = (**(code **)(*(int *)this + 0x1a0))();
      if ((*(int *)((int)this + 0x78) != 0) &&
         (iVar3 = (**(code **)(*(int *)this + 0x98))(), iVar3 != 0)) {
        if ((*(int *)((int)this + 0x108) == 0) &&
           ((*(int *)((int)this + 0x48) == 0 || (*(int *)((int)this + 0x48) == -1)))) {
          *(undefined4 *)((int)this + 0x78) = 0;
        }
        else {
          *(undefined4 *)((int)this + 0x6c) = 0;
        }
      }
      if (*(int *)((int)this + 0x128) != 0) {
        *(undefined4 *)((int)this + 0x84) = 0;
      }
      if (*(int *)((int)this + 0x70) != 0) {
        *(undefined4 *)((int)this + 0x6c) = 1;
        *(undefined4 *)((int)this + 0x114) = 1;
        *(undefined4 *)((int)this + 0x118) = 1;
      }
      local_34.left = 0;
      local_34.top = 0;
      local_34.right = 0;
      local_34.bottom = 0;
      SetRectEmpty(&local_34);
      iVar3 = (**(code **)(*(int *)this + 0x98))();
      if (iVar3 != 0) {
        iVar3 = *(int *)((int)this + 0xec);
        local_34.top = *(int *)((int)this + 0x1c);
        local_34.right = *(int *)((int)this + 0x20);
        local_34.left = (local_34.right - iVar3) - local_150;
        if ((*(int *)((int)this + 0xac) == 0) && (*(int *)((int)this + 0x68) == 0)) {
          local_34.left = local_34.left + -2;
        }
        local_34.bottom = *(int *)((int)this + 0x24) - iVar3;
        if (*(int *)((int)this + 0x108) != 0) {
          *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)((int)this + 0x18);
          *(undefined4 *)((int)this + 200) = *(undefined4 *)((int)this + 0x1c);
          *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)((int)this + 0x20);
          *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)((int)this + 0x24);
          *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)((int)this + 0x18);
          *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)((int)this + 0x1c);
          *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)((int)this + 0x20);
          iVar3 = ((*(int *)((int)this + 0xcc) - iVar3) - local_150) + -1;
          *(undefined4 *)((int)this + 0x110) = 0;
          *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)((int)this + 0x24);
          *(int *)((int)this + 0xc4) = iVar3;
          *(int *)((int)this + 0xdc) = iVar3;
        }
      }
      (**(code **)(*(int *)this + 0x70))(&local_17c,0);
      (**(code **)(*(int *)this + 0x70))(local_184,1);
      local_44 = *(int *)((int)this + 0x18);
      local_40 = *(int *)((int)this + 0x1c);
      local_3c = *(int *)((int)this + 0x20);
      uStack_38 = *(undefined4 *)((int)this + 0x24);
      iVar3 = (**(code **)(*(int *)this + 0x1ac))();
      if (((iVar3 != 0) || (*(int *)((int)this + 0x68) != 0)) ||
         (local_154 = 1, *(int *)((int)this + 100) != 0)) {
        local_154 = 0;
      }
      if (((*(int *)((int)this + 0x68) == 0) && (*(int *)((int)this + 100) == 0)) &&
         (*(int *)((int)this + 0x5c) == 0)) {
        if (((local_17c != 0) || (local_178 != 0)) &&
           ((*(int *)((int)this + 0x110) == 0 && (*(int *)((int)this + 0x130) != 0)))) {
          lprc = (RECT *)((int)this + 0xc4);
          BVar2 = IsRectEmpty(lprc);
          if (BVar2 == 0) {
            lprc->left = lprc->left - local_150;
            *(LONG *)((int)this + 0xdc) = lprc->left;
          }
          OffsetRect(&local_34,-(local_150 / 2),0);
        }
      }
      else {
        local_154 = 0;
      }
      local_160 = (uint)(*(int *)((int)this + 0x130) == 0);
      (**(code **)(*(int *)this + 0x70))(&local_14c,local_160);
      dVar1 = 1.0;
      local_144 = 0;
      if ((((*(int *)((int)this + 0x68) != 0) || (*(int *)((int)this + 100) != 0)) &&
          (local_14c == 0)) && (local_148 == 0)) {
        local_14c = 0x10;
        local_148 = 0x10;
        if (DAT_10166c84 != 0) {
          dVar1 = _DAT_10166c7c;
        }
        if (dVar1 != 1.0) {
          uVar9 = FUN_100f8660(0x10,extraout_EDX);
          local_14c = (int)uVar9;
          uVar9 = FUN_100f8660(extraout_ECX,(int)(uVar9 >> 0x20));
          local_148 = (int)uVar9;
        }
        local_144 = 1;
      }
      local_24.left = *(int *)((int)this + 0x18);
      local_24.top = *(int *)((int)this + 0x1c);
      local_24.right = *(int *)((int)this + 0x20);
      local_24.bottom = *(int *)((int)this + 0x24);
      InflateRect(&local_24,-*(int *)((int)this + 0xbc),-*(int *)((int)this + 0xc0));
      uVar10 = (**(code **)(*(int *)this + 0x1ac))();
      if ((int)uVar10 == 0) {
        if ((*(int *)((int)this + 0x130) == 0) || (*(int *)((int)this + 0x54) != 0)) {
          local_24.top = (local_24.top + local_24.bottom) / 2 - local_148 / 2;
        }
        else {
          local_24.left = (local_24.left + local_24.right) / 2 - local_14c / 2;
          local_24.top = local_24.top + 1 + *(int *)((int)this + 0xc0);
          if (local_154 == 0) {
            local_24.top = (local_24.bottom + local_24.top) / 2 - local_148 / 2;
          }
        }
      }
      else {
        dVar1 = _DAT_10166c7c;
        if (DAT_10166c84 == 0) {
          dVar1 = 1.0;
        }
        if (dVar1 != 1.0) {
          uVar9 = FUN_100f8660(extraout_ECX_00,(int)((ulonglong)uVar10 >> 0x20));
          local_14c = (int)uVar9;
          uVar9 = FUN_100f8660(extraout_ECX_01,(int)(uVar9 >> 0x20));
          local_148 = (int)uVar9;
        }
        local_24.left = local_24.left + ((local_24.right - local_24.left) - local_14c) / 2;
        local_24.top = local_24.top + ((local_24.bottom - local_24.top) - local_148) / 2;
        pCVar4 = CMFCVisualManager::GetInstance();
        OffsetRect(&local_24,*(int *)(pCVar4 + 200),*(int *)(pCVar4 + 0xcc));
      }
      local_24.right = local_24.left + local_14c;
      local_24.bottom = local_24.top + local_148;
      if (((*(int *)((int)this + 0x130) != 0) && (*(int *)((int)this + 0x54) == 0)) &&
         ((iVar3 = (**(code **)(*(int *)this + 0x98))(), iVar3 != 0 &&
          (*(int *)((int)this + 0x108) != 0)))) {
        *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)((int)this + 0x18);
        *(undefined4 *)((int)this + 200) = *(undefined4 *)((int)this + 0x1c);
        *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)((int)this + 0x20);
        *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)((int)this + 0x24);
        *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)((int)this + 0x18);
        *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)((int)this + 0x1c);
        *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)((int)this + 0x20);
        *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)((int)this + 0x24);
        *(LONG *)((int)this + 200) = local_24.bottom + 3;
        *(LONG *)((int)this + 0xe0) = local_24.bottom + 3;
        *(undefined4 *)((int)this + 0x110) = 1;
      }
      local_150 = -1;
      iVar3 = (**(code **)(*(int *)this + 0x1ac))();
      if (iVar3 == 0) {
        local_150 = (**(code **)(*(int *)this + 0x1cc))(local_140);
      }
      iVar3 = CMFCRibbonBaseElement::IsMenuMode(this);
      if (((iVar3 != 0) && (iVar3 = (**(code **)(*(int *)this + 0x3c))(), iVar3 != 0)) &&
         ((local_14c != 0 || (local_148 != 0)))) {
        pCVar4 = CMFCVisualManager::GetInstance();
        (**(code **)(*(int *)pCVar4 + 0x23c))
                  (local_140,this,local_24.left,local_24.top,local_24.right,local_24.bottom);
      }
      if (local_144 == 0) {
        local_144 = DAT_10166c84;
        iVar3 = CMFCRibbonBaseElement::IsMenuMode(this);
        if (((iVar3 != 0) && (*(int *)((int)this + 0x130) == 0)) &&
           ((*(CMFCRibbonPanelMenuBar **)((int)this + 0x38) == (CMFCRibbonPanelMenuBar *)0x0 ||
            (iVar3 = CMFCRibbonPanelMenuBar::IsMainPanel
                               (*(CMFCRibbonPanelMenuBar **)((int)this + 0x38)), iVar3 == 0)))) {
          DAT_10166c84 = 0;
        }
        (**(code **)(*(int *)this + 0x7c))
                  (local_140,local_160,local_24.left,local_24.top,local_24.right,local_24.bottom);
        DAT_10166c84 = local_144;
      }
      else {
        pCVar4 = CMFCVisualManager::GetInstance();
        (**(code **)(*(int *)pCVar4 + 0x260))
                  (local_140,local_24.left,local_24.top,local_24.right,local_24.bottom,
                   *(undefined4 *)((int)this + 0x78),*(undefined4 *)((int)this + 0x74),
                   *(undefined4 *)((int)this + 0x6c));
      }
      if (local_154 != 0) {
        local_44 = *(int *)((int)this + 0x18);
        local_40 = *(int *)((int)this + 0x1c);
        local_3c = *(int *)((int)this + 0x20);
        local_144 = 0;
        uStack_38 = *(undefined4 *)((int)this + 0x24);
        local_154 = -1;
        if ((local_15c == (RECT *)0x0) ||
           ((*(int *)((int)this + 0x108) == 0 &&
            ((*(int *)((int)this + 0x48) == 0 || (*(int *)((int)this + 0x48) == -1)))))) {
          if (local_150 != -1) {
            local_154 = (**(code **)(*(int *)local_140 + 0x30))(local_150);
          }
        }
        else if (*(int *)((int)this + 0x68) == 0) {
          iVar3 = local_150;
          if (local_150 == -1) {
            pCVar4 = CMFCVisualManager::GetInstance();
            iVar3 = (**(code **)(*(int *)pCVar4 + 0xc4))();
          }
          local_154 = (**(code **)(*(int *)local_140 + 0x30))(iVar3);
        }
        else {
          pCVar4 = CMFCVisualManager::GetInstance();
          (**(code **)(*(int *)pCVar4 + 0x254))(1);
        }
        if ((*(int *)((int)this + 0x130) == 0) || (*(int *)((int)this + 0x54) != 0)) {
          local_44 = local_24.right;
          if (*(int *)((int)this + 0x50) < 1) {
            if (local_14c != 0) {
              iVar3 = (**(code **)(*(int *)this + 0x1d4))();
              local_44 = local_44 + iVar3;
            }
          }
          else {
            local_44 = *(int *)((int)this + 0xbc) * 3 + *(int *)((int)this + 0x50) +
                       *(int *)((int)this + 0x18);
          }
          uVar6 = 0x8020;
          if ((*(int *)((int)this + 300) == 0) || (*(int *)(*(int *)((int)this + 0x14) + -0xc) == 0)
             ) {
            uVar6 = 0x8024;
          }
          else {
            local_144 = (**(code **)(*(int *)local_140 + 0x28))(&DAT_10166bc4);
            if (local_144 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_10009068();
            }
            iVar3 = ((*(int *)((int)this + 0x24) - *(int *)((int)this + 0x1c)) -
                    *(int *)((int)this + 0xb0)) / 2;
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            local_40 = local_40 + iVar3;
          }
          iVar3 = (**(code **)(*(int *)this + 0x1bc))
                            (local_140,(int)this + 4,local_44,local_40,local_3c,uStack_38,uVar6,
                             0xffffffff);
          if (local_144 != 0) {
            (**(code **)(*(int *)local_140 + 0x28))(local_144);
          }
          if ((*(int *)((int)this + 300) != 0) && (*(int *)(*(int *)((int)this + 0x14) + -0xc) != 0)
             ) {
            local_40 = local_40 + *(int *)((int)this + 0xc0) + iVar3;
            local_3c = *(int *)((int)this + 0x20) - *(int *)((int)this + 0xbc);
            (**(code **)(*(int *)local_140 + 0x68))
                      (*(int *)((int)this + 0x14),*(undefined4 *)(*(int *)((int)this + 0x14) + -0xc)
                       ,&local_44,0x8010);
          }
          if (((iVar3 == *(int *)((int)this + 0xb0)) && (*(int *)((int)this + 0x130) != 0)) &&
             (iVar3 = (**(code **)(*(int *)this + 0x98))(), iVar3 != 0)) {
            local_34.left = *(int *)((int)this + 0x18);
            local_34.top = *(LONG *)((int)this + 0x1c);
            local_34.right = *(int *)((int)this + 0x20);
            local_34.bottom = *(int *)((int)this + 0x24);
            InflateRect(&local_34,-*(int *)((int)this + 0xec),*(int *)((int)this + 0xec) * -2);
            local_34.right = local_34.right + -2;
            iVar3 = FUN_10037b18(&local_164);
            local_34.top = local_34.bottom - *(int *)(iVar3 + 4);
            iVar3 = FUN_10037b18(&local_164);
            local_34.bottom = *(int *)(iVar3 + 4) + local_34.top;
          }
        }
        else {
          FUN_100bc498(this,&local_164,local_140,0);
          SetRectEmpty(&local_34);
        }
        if (local_154 != -1) {
          (**(code **)(*(int *)local_140 + 0x30))(local_154);
        }
      }
      iVar3 = (**(code **)(*(int *)this + 0x1ac))();
      if (iVar3 == 0) {
        BVar2 = IsRectEmpty(&local_34);
        if (BVar2 == 0) {
          uVar7 = 0;
          local_144 = 0;
          iVar3 = CMFCRibbonBaseElement::IsMenuMode(this);
          if (iVar3 != 0) {
            this_00 = CMFCRibbonBaseElement::GetTopLevelRibbonBar(this);
            if ((this_00 != (CMFCRibbonBar *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
              uVar5 = CWnd::GetExStyle((CWnd *)this_00);
              uVar7 = uVar5 & 0x400000;
            }
            local_144 = (-(uint)(uVar7 != 0) & 3) + 0xe;
          }
          local_54.left = local_34.left;
          local_54.top = local_34.top;
          local_54.right = local_34.right;
          local_54.bottom = local_34.bottom;
          OffsetRect(&local_54,0,1);
          local_164 = 0;
          local_160 = 0;
          CMenuImages::Draw(local_140,local_144,(CRect *)&local_54,3,(CSize *)&local_164);
          local_158 = 0;
          local_154 = 0;
          CMenuImages::Draw(local_140,local_144,(CRect *)&local_34,
                            (uint)(*(int *)((int)this + 0x78) != 0),(CSize *)&local_158);
        }
        (**(code **)(*(int *)this + 0x1d0))(local_140);
      }
      *(RECT **)((int)this + 0x78) = local_15c;
      *(undefined4 *)((int)this + 0x84) = local_170;
      *(undefined4 *)((int)this + 0x6c) = local_16c;
      *(undefined4 *)((int)this + 0x114) = local_168;
      *(undefined4 *)((int)this + 0x118) = local_174;
    }
    else {
      CMFCToolBarMenuButton::CMFCToolBarMenuButton(local_13c);
      local_8 = 0;
      FUN_10007c90(local_110,(undefined4 *)((int)this + 4));
      local_11c = *(undefined4 *)((int)this + 0x48);
      iVar8 = 1;
      local_a8 = 1;
      local_d0 = (**(code **)(*(int *)this + 0x90))();
      local_90 = *(undefined4 *)((int)this + 0x80);
      iVar3 = (**(code **)(*(int *)this + 0x3c))();
      if (iVar3 != 0) {
        local_118 = local_118 | 0x10000;
      }
      iVar3 = (**(code **)(*(int *)this + 0x98))();
      if (iVar3 != 0) {
        local_ac = 1;
      }
      local_144 = *(IMAGES_IDS *)((int)this + 0x6c);
      iVar3 = (**(code **)(*(int *)this + 0x38))();
      if (iVar3 != 0) {
        local_118 = local_118 | 0x40000;
        local_144 = (**(code **)(*(int *)this + 0x30))();
      }
      if ((local_144 == 0) && (*(int *)((int)this + 0x70) == 0)) {
        iVar8 = 0;
      }
      CMFCToolBarMenuButton::OnDraw
                (local_13c,local_140,(CRect *)local_15c,(CMFCToolBarImages *)0x0,1,0,iVar8,1,1);
      local_8 = 0xffffffff;
      CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_13c);
    }
  }
  FUN_100f90cf();
  return;
}

