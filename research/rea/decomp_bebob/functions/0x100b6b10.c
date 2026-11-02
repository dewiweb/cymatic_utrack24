// rea decompile_all
// name: CMFCRibbonPanel::ReposPalette
// address: 0x100b6b10
// body: available
// range: 0x100b6b10-0x100b7627 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b6da3 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonPanel::ReposPalette(class CDC *,class CRect const
   &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonPanel::ReposPalette(CMFCRibbonPanel *this,CDC *param_1,CRect *param_2)

{
  bool bVar1;
  tagSIZE tVar2;
  tagSIZE tVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  CSize *pCVar7;
  CMFCVisualManager *pCVar8;
  int *piVar9;
  CObject *pCVar10;
  CObject *pCVar11;
  undefined4 extraout_ECX;
  RECT *pRVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  LONG LVar16;
  undefined1 local_d0 [8];
  CObject *local_c8;
  CObject *local_c4;
  CObject *local_c0;
  CObject *local_bc;
  undefined1 local_b8 [4];
  int local_b4;
  int local_b0;
  undefined1 local_ac [4];
  CObject *local_a8;
  CObject *local_a4;
  undefined1 local_a0 [4];
  CObject *local_9c;
  uint local_98;
  int local_94;
  int local_90;
  int local_8c;
  CObject *local_88;
  CObject *local_84;
  CObject *local_80;
  CObject *local_7c;
  CObject *local_78;
  CObject *local_74;
  int local_70;
  CObject *local_6c;
  int local_68;
  CDC *local_64;
  int local_60;
  CObject *local_5c;
  CObject *local_58;
  int local_54;
  RECT local_50;
  tagSCROLLINFO local_40;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc0;
  local_8 = 0x100b6b1f;
  local_64 = param_1;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  BVar4 = EqualRect((RECT *)param_2,&local_24);
  if (BVar4 != 0) goto LAB_100b7620;
  local_5c = (CObject *)
             CObject::IsKindOf(*(CObject **)(this + 0xb0),
                               (CRuntimeClass *)&PTR_s_CMFCRibbonUndoButton_1013f824);
  *(undefined4 *)(this + 0x58) = 0;
  local_80 = *(CObject **)param_2;
  local_7c = *(CObject **)(param_2 + 4);
  local_78 = *(CObject **)(param_2 + 8);
  local_74 = *(CObject **)(param_2 + 0xc);
  bVar1 = (int)local_74 < 1;
  if (bVar1) {
    local_74 = local_7c + 0x7fa4;
  }
  local_98 = (uint)bVar1;
  local_8c = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  if ((local_98 == 0) || (*(int *)(*(int *)(this + 0xb0) + 0x2f0) != 0)) {
    local_8c = GetSystemMetrics(2);
  }
  local_a4 = (CObject *)0x0;
  *(CObject **)(this + 0x6c) = local_80;
  *(CObject **)(this + 0x70) = local_7c;
  *(CObject **)(this + 0x74) = local_78;
  *(CObject **)(this + 0x78) = local_74;
  local_88 = local_80;
  local_58 = local_7c;
  if (*(int *)(this + 0x38) == 0) {
    *(int *)(this + 0x74) = *(int *)(this + 0x74) + local_8c;
  }
  else {
    local_78 = local_78 + -local_8c;
  }
  local_54 = 0;
  local_94 = 0;
  local_90 = 0;
  local_84 = (CObject *)0x0;
  local_68 = 0;
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(this + 0x6c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(this + 0x70);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(this + 0x74);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x78);
  if (*(int *)(this + 0x38) == 0) {
    if (*(int *)(this + 0x25c) < 1) {
LAB_100b6ea2:
      if (local_5c == (CObject *)0x0) {
        pCVar8 = CMFCVisualManager::GetInstance();
        uVar13 = (**(code **)(*(int *)pCVar8 + 0x2d0))();
        uVar14 = FUN_10026c8e(extraout_ECX,(int)((ulonglong)uVar13 >> 0x20),&local_70);
        local_68 = *(int *)uVar14 + (int)uVar13 * 2;
        if (*(CMFCRibbonCategory **)(this + 0xa8) != (CMFCRibbonCategory *)0x0) {
          piVar9 = (int *)CMFCRibbonCategory::GetImageSize
                                    (*(CMFCRibbonCategory **)(this + 0xa8),(int)&local_70);
          local_68 = *piVar9;
        }
      }
    }
    else {
      do {
        if ((local_54 < 0) || (*(int *)(this + 0x25c) <= local_54)) goto LAB_100b6da3;
        pCVar10 = *(CObject **)(*(int *)(this + 600) + local_54 * 4);
        iVar5 = CObject::IsKindOf(pCVar10,(CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734);
        if ((iVar5 == 0) &&
           (iVar5 = CObject::IsKindOf(pCVar10,(CRuntimeClass *)&PTR_s_CMFCRibbonLabel_1013aaa0),
           iVar5 == 0)) {
          (**(code **)(*(int *)pCVar10 + 0xe0))(local_64);
          (**(code **)(*(int *)pCVar10 + 0x48))(1);
          LVar16 = 0;
          puVar15 = local_b8;
          pCVar7 = (CSize *)(**(code **)(*(int *)pCVar10 + 0x70))(puVar15,0,0,0);
          tVar3.cy = LVar16;
          tVar3.cx = (LONG)puVar15;
          iVar5 = CSize::operator==(pCVar7,tVar3);
          if (iVar5 != 0) {
            (**(code **)(*(int *)pCVar10 + 0x48))(0);
          }
          (**(code **)(*(int *)pCVar10 + 0x18))(1);
          (**(code **)(*(int *)pCVar10 + 0x50))(&local_70,local_64);
          local_70 = local_70 + 6;
          if ((int)local_84 <= (int)local_6c) {
            local_84 = local_6c;
          }
          piVar9 = (int *)(**(code **)(*(int *)pCVar10 + 0x70))(local_ac,1);
          if (local_68 <= *piVar9) {
            piVar9 = (int *)(**(code **)(*(int *)pCVar10 + 0x70))(local_a0,1);
            local_68 = *piVar9;
          }
        }
        local_54 = local_54 + 1;
      } while (local_54 < *(int *)(this + 0x25c));
      if (local_68 == 0) goto LAB_100b6ea2;
    }
    local_54 = 0;
    if (0 < *(int *)(this + 0x25c)) {
      do {
        if ((local_54 < 0) || (*(int *)(this + 0x25c) <= local_54)) goto LAB_100b6da3;
        pCVar10 = *(CObject **)(*(int *)(this + 600) + local_54 * 4);
        iVar5 = CObject::IsKindOf(pCVar10,(CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734);
        if ((iVar5 == 0) &&
           ((iVar5 = CObject::IsKindOf(pCVar10,(CRuntimeClass *)&PTR_s_CMFCRibbonLabel_1013aaa0),
            iVar5 == 0 && (*(int *)(pCVar10 + 0x9c) != 0)))) {
          (**(code **)(*(int *)pCVar10 + 0x50))(&local_60,local_64);
          if ((local_60 == 0) && (local_5c == (CObject *)0x0)) {
            local_24.left = 0;
            local_24.top = 0;
            local_24.right = 0;
            local_24.bottom = 0;
            *(undefined4 *)(pCVar10 + 0x18) = 0;
            *(undefined4 *)(pCVar10 + 0x1c) = 0;
            *(undefined4 *)(pCVar10 + 0x20) = 0;
            *(undefined4 *)(pCVar10 + 0x24) = 0;
          }
          else {
            *(int *)(pCVar10 + 0x50) = local_68;
            local_60 = *(int *)(this + 0x74) - *(int *)(this + 0x6c);
            local_5c = local_84;
            local_50.right = (LONG)(local_80 + local_60);
            local_50.top = (LONG)(local_7c + (int)local_58);
            local_50.bottom = local_50.top + (int)local_84;
            local_50.left = (LONG)local_80;
            *(CObject **)(pCVar10 + 0x18) = local_80;
            *(LONG *)(pCVar10 + 0x1c) = local_50.top;
            *(LONG *)(pCVar10 + 0x20) = local_50.right;
            *(LONG *)(pCVar10 + 0x24) = local_50.bottom;
            local_58 = local_58 + (int)local_84;
          }
        }
        local_54 = local_54 + 1;
      } while (local_54 < *(int *)(this + 0x25c));
    }
    *(CObject **)(this + 0x88) = local_58;
  }
  else {
    *(undefined4 *)(this + 0x8c) = *(undefined4 *)(this + 0x6c);
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(this + 0x70);
    *(undefined4 *)(this + 0x94) = *(undefined4 *)(this + 0x74);
    local_a8 = local_7c;
    local_9c = local_74;
    *(undefined4 *)(this + 0x98) = *(undefined4 *)(this + 0x78);
    if (0 < *(int *)(this + 0x25c)) {
      do {
        if ((local_54 < 0) || (*(int *)(this + 0x25c) <= local_54)) goto LAB_100b6da3;
        pCVar10 = *(CObject **)(*(int *)(this + 600) + local_54 * 4);
        local_5c = pCVar10;
        iVar5 = CObject::IsKindOf(pCVar10,(CRuntimeClass *)&PTR_s_CMFCRibbonLabel_1013aaa0);
        iVar6 = CObject::IsKindOf(pCVar10,(CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734);
        if ((iVar6 == 0) && (iVar5 == 0)) {
          if (*(int *)(pCVar10 + 0x9c) == 0) {
            local_94 = 1;
          }
          else {
            local_90 = 1;
          }
          (**(code **)(*(int *)pCVar10 + 0xe0))(local_64);
          (**(code **)(*(int *)pCVar10 + 0x48))(1);
          LVar16 = 0;
          puVar15 = local_b8;
          pCVar7 = (CSize *)(**(code **)(*(int *)pCVar10 + 0x70))(puVar15,0,0,0);
          tVar2.cy = LVar16;
          tVar2.cx = (LONG)puVar15;
          iVar5 = CSize::operator==(pCVar7,tVar2);
          if (iVar5 != 0) {
            (**(code **)(*(int *)pCVar10 + 0x48))(0);
          }
          (**(code **)(*(int *)pCVar10 + 0x18))(1);
          (**(code **)(*(int *)pCVar10 + 0x50))(&local_70,local_64);
          local_70 = *(int *)(this + 0x74) - *(int *)(this + 0x6c);
          if (*(int *)(pCVar10 + 0x9c) == 0) {
            local_9c = local_9c + -(int)local_6c;
            local_50.right = (LONG)(local_80 + local_70);
            local_50.bottom = (LONG)(local_9c + (int)local_6c);
            local_74 = local_9c + -4;
            local_50.left = (LONG)local_80;
            local_50.top = (LONG)local_9c;
            pRVar12 = &local_50;
            *(CObject **)(this + 0x90) = local_9c;
          }
          else {
            local_24.right = (LONG)(local_80 + local_70);
            local_24.left = (LONG)local_80;
            local_24.top = (LONG)local_a8;
            local_a8 = local_a8 + (int)local_6c;
            local_58 = local_58 + (int)local_6c;
            local_7c = local_a8 + 4;
            local_24.bottom = (LONG)local_a8;
            pRVar12 = &local_24;
            *(CObject **)(this + 0x88) = local_a8;
          }
          local_40.nMax = (int)pRVar12->left;
          local_40.nPage = pRVar12->top;
          local_40.nPos = pRVar12->right;
          local_40.nTrackPos = pRVar12->bottom;
          *(CObject **)(local_5c + 0x18) = (CObject *)pRVar12->left;
          *(UINT *)(local_5c + 0x1c) = local_40.nPage;
          *(int *)(local_5c + 0x20) = local_40.nPos;
          *(int *)(local_5c + 0x24) = local_40.nTrackPos;
        }
        local_54 = local_54 + 1;
      } while (local_54 < *(int *)(this + 0x25c));
    }
  }
  local_a8 = *(CObject **)(this + 0x78);
  local_b0 = 1;
  if (*(int *)(this + 0x38) == 0) {
    *(CObject **)(this + 0x78) = local_58;
  }
  local_54 = 0;
  if (0 < *(int *)(this + 0x25c)) {
    do {
      if ((local_54 < 0) || (*(int *)(this + 0x25c) <= local_54)) goto LAB_100b6da3;
      pCVar10 = *(CObject **)(*(int *)(this + 600) + local_54 * 4);
      local_9c = pCVar10;
      local_b4 = CObject::IsKindOf(pCVar10,(CRuntimeClass *)&PTR_s_CMFCRibbonLabel_1013aaa0);
      iVar5 = CObject::IsKindOf(pCVar10,(CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734);
      if (iVar5 == 0) {
        if (local_b4 != 0) goto LAB_100b7087;
        if (*(int *)(pCVar10 + 0x9c) == 0) {
          local_94 = 1;
          goto LAB_100b707b;
        }
        local_90 = 1;
      }
      else {
LAB_100b707b:
        if (local_b4 == 0) {
          if (iVar5 != 0) {
            local_b0 = 0;
            (**(code **)(*(int *)pCVar10 + 0x48))(0);
            piVar9 = (int *)(**(code **)(*(int *)pCVar10 + 0x50))(&local_50.right,local_64);
            local_70 = *piVar9;
            if (((int)local_78 < (int)(local_88 + local_70)) && (local_88 != local_80)) {
              local_58 = local_58 + piVar9[1];
              local_88 = local_80;
            }
            local_40.nPos = (int)(local_88 + *piVar9);
            local_40.nMax = (int)local_88;
            local_40.nPage = (UINT)local_58;
            local_a8 = local_58 + piVar9[1];
            *(CObject **)(local_9c + 0x18) = local_88;
            *(CObject **)(local_9c + 0x1c) = local_58;
            *(int *)(local_9c + 0x20) = local_40.nPos;
            *(CObject **)(local_9c + 0x24) = local_a8;
            if (*(int *)(this + 0x38) == 0) {
              *(CObject **)(this + 0x78) = local_a8;
            }
            local_88 = local_88 + local_70;
            local_a4 = local_a8;
            local_40.nTrackPos = (int)local_a8;
          }
        }
        else {
LAB_100b7087:
          if ((int)local_80 < (int)local_88) {
            local_58 = local_a8;
          }
          if (0 < local_54) {
            local_58 = local_58 + 1;
          }
          FUN_10006ce0(&local_5c,*(short **)(pCVar10 + 4));
          pCVar10 = local_9c;
          local_8 = 0;
          local_24.left = 0;
          local_24.top = 0;
          local_24.right = 0;
          local_24.bottom = 0;
          if (*(int *)(local_5c + -0xc) == 0) {
            if (local_b0 == 0) {
              iVar5 = (**(code **)(**(int **)(this + 0xb0) + 0x1f8))();
              local_58 = local_58 + iVar5;
            }
          }
          else {
            (**(code **)(*(int *)local_9c + 0xe0))(local_64);
            piVar9 = (int *)(**(code **)(*(int *)pCVar10 + 0x50))(local_d0,local_64);
            local_70 = *piVar9;
            local_6c = (CObject *)piVar9[1];
            local_c0 = local_78;
            local_c8 = local_80;
            local_c4 = local_58;
            local_bc = local_6c + (int)local_58;
            local_24.left = (LONG)local_80;
            local_24.top = (LONG)local_58;
            local_24.right = (LONG)local_c0;
            local_24.bottom = (LONG)local_bc;
            iVar5 = (**(code **)(**(int **)(this + 0xb0) + 0x1f8))();
            local_58 = local_58 + (int)(local_6c + iVar5);
            local_b0 = 0;
          }
          *(LONG *)(local_9c + 0x18) = local_24.left;
          *(LONG *)(local_9c + 0x1c) = local_24.top;
          *(LONG *)(local_9c + 0x20) = local_24.right;
          *(LONG *)(local_9c + 0x24) = local_24.bottom;
          if (*(int *)(this + 0x38) == 0) {
            *(LONG *)(this + 0x78) = local_24.bottom;
          }
          local_8 = 0xffffffff;
          local_a8 = (CObject *)local_24.bottom;
          local_a4 = (CObject *)local_24.bottom;
          local_88 = local_80;
          FUN_10001030((undefined4 *)(local_5c + -0x10));
        }
      }
      local_54 = local_54 + 1;
    } while (local_54 < *(int *)(this + 0x25c));
  }
  if (*(int *)(this + 0x38) == 0) {
    pCVar10 = *(CObject **)(this + 0x78);
    if ((int)local_74 <= (int)*(CObject **)(this + 0x78)) {
      pCVar10 = local_74;
    }
    *(CObject **)(this + 0x78) = pCVar10;
  }
  *(int *)(this + 0x48) = *(int *)(this + 0x74) - *(int *)(this + 0x6c);
  if (local_94 == 0) {
    SetRectEmpty((LPRECT)(this + 0x8c));
  }
  else if (*(int *)(this + 0x38) == 0) {
    *(int *)(this + 0x8c) = *(int *)(this + 0x6c);
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(this + 0x70);
    *(undefined4 *)(this + 0x94) = *(undefined4 *)(this + 0x74);
    local_58 = (CObject *)(*(int *)(this + 0x78) + 4);
    *(undefined4 *)(this + 0x98) = *(undefined4 *)(this + 0x78);
    *(CObject **)(this + 0x90) = local_58;
    local_54 = 0;
    if (0 < *(int *)(this + 0x25c)) {
      do {
        if ((local_54 < 0) || (*(int *)(this + 0x25c) <= local_54)) goto LAB_100b6da3;
        pCVar10 = *(CObject **)(*(int *)(this + 600) + local_54 * 4);
        iVar5 = CObject::IsKindOf(pCVar10,(CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734);
        if ((iVar5 == 0) &&
           ((iVar5 = CObject::IsKindOf(pCVar10,(CRuntimeClass *)&PTR_s_CMFCRibbonLabel_1013aaa0),
            iVar5 == 0 && (*(int *)(pCVar10 + 0x9c) == 0)))) {
          (**(code **)(*(int *)pCVar10 + 0x50))(&local_60,local_64);
          if ((local_60 == 0) && (local_5c == (CObject *)0x0)) {
            local_40.nMax = 0;
            local_40.nPage = 0;
            local_40.nPos = 0;
            local_40.nTrackPos = 0;
            *(undefined4 *)(pCVar10 + 0x18) = 0;
            *(undefined4 *)(pCVar10 + 0x1c) = 0;
            *(undefined4 *)(pCVar10 + 0x20) = 0;
            *(undefined4 *)(pCVar10 + 0x24) = 0;
          }
          else {
            *(int *)(pCVar10 + 0x50) = local_68;
            local_60 = *(int *)(this + 0x74) - *(int *)(this + 0x6c);
            local_5c = local_84;
            local_c0 = local_80 + local_60;
            local_c4 = local_7c + (int)local_58;
            local_bc = local_c4 + (int)local_84;
            local_c8 = local_80;
            *(CObject **)(this + 0x78) = local_bc;
            *(CObject **)(pCVar10 + 0x18) = local_80;
            *(CObject **)(pCVar10 + 0x1c) = local_c4;
            *(CObject **)(pCVar10 + 0x20) = local_c0;
            *(CObject **)(pCVar10 + 0x24) = local_bc;
            local_58 = local_58 + (int)local_84;
          }
        }
        local_54 = local_54 + 1;
      } while (local_54 < *(int *)(this + 0x25c));
    }
    *(CObject **)(this + 0x98) = local_58;
  }
  if (local_90 == 0) {
    SetRectEmpty((LPRECT)(this + 0x7c));
  }
  local_54 = 0;
  if (0 < *(int *)(this + 0x25c)) {
    do {
      if ((local_54 < 0) || (*(int *)(this + 0x25c) <= local_54)) {
LAB_100b6da3:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      local_5c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734,
                                    *(CObject **)(*(int *)(this + 600) + local_54 * 4));
      if (local_5c != (CObject *)0x0) {
        *(undefined4 *)(local_5c + 0x16c) = 0;
        *(undefined4 *)(local_5c + 0x170) = 0;
        *(undefined4 *)(local_5c + 0x174) = 0;
        *(undefined4 *)(local_5c + 0x178) = 0;
        local_50.left = *(LONG *)(local_5c + 0x18);
        local_50.top = *(LONG *)(local_5c + 0x1c);
        local_50.right = *(LONG *)(local_5c + 0x20);
        local_50.bottom = *(LONG *)(local_5c + 0x24);
        BVar4 = IsRectEmpty(&local_50);
        if (BVar4 == 0) {
          pCVar10 = (CObject *)
                    (**(code **)(*(int *)this + 0x14))
                              ((CObject *)(local_50.left + -2),
                               (int)(local_50.top + local_50.bottom) / 2,0);
          pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734,
                                       pCVar10);
          pCVar10 = local_5c;
          *(uint *)(local_5c + 0x16c) = (uint)(pCVar11 == (CObject *)0x0);
          pCVar11 = (CObject *)
                    (**(code **)(*(int *)this + 0x14))
                              ((CObject *)(local_50.right + 2),
                               (int)(local_50.top + local_50.bottom) / 2,0);
          pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734,
                                       pCVar11);
          *(uint *)(pCVar10 + 0x170) = (uint)(pCVar11 == (CObject *)0x0);
          pCVar11 = (CObject *)
                    (**(code **)(*(int *)this + 0x14))
                              ((int)(local_50.left + local_50.right) / 2,
                               (CObject *)(local_50.top + -2),0);
          pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734,
                                       pCVar11);
          *(uint *)(pCVar10 + 0x174) = (uint)(pCVar11 == (CObject *)0x0);
          pCVar11 = (CObject *)
                    (**(code **)(*(int *)this + 0x14))
                              ((int)(local_50.left + local_50.right) / 2,
                               (CObject *)(local_50.bottom + 2),0);
          pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734,
                                       pCVar11);
          *(uint *)(pCVar10 + 0x178) = (uint)(pCVar11 == (CObject *)0x0);
        }
      }
      local_54 = local_54 + 1;
    } while (local_54 < *(int *)(this + 0x25c));
  }
  if ((local_98 == 0) || (*(int *)(*(int *)(this + 0xb0) + 0x2f0) != 0)) {
    pCVar10 = local_7c;
    if (local_90 != 0) {
      pCVar10 = (CObject *)(*(int *)(this + 0x88) + 1);
    }
    if (local_94 == 0) {
      iVar5 = *(int *)(this + 0x78);
    }
    else {
      iVar5 = *(int *)(this + 0x90) + -1;
    }
    CWnd::SetWindowPos(*(CWnd **)(this + 0xa4),(CWnd *)0x0,*(int *)(this + 0x74) - local_8c,
                       (int)pCVar10,local_8c,(iVar5 - (int)pCVar10) + -1,0x14);
    _memset(&local_40,0,0x1c);
    local_40.cbSize = 0x1c;
    local_40.fMask = 7;
    local_40.nMin = 0;
    if ((int)(local_74 + -(int)local_7c) <
        (int)(local_a4 + (*(int *)(this + 0x80) - *(int *)(this + 0x88)))) {
      local_40.nMax = (int)(local_a4 + (*(int *)(this + 0x80) - *(int *)(this + 0x88)));
      local_40.nPage = (UINT)(local_74 + -(int)local_7c);
      CWnd::SetScrollInfo(*(CWnd **)(this + 0xa4),2,&local_40,1);
      EnableScrollBar(*(HWND *)(*(int *)(this + 0xa4) + 0x20),2,0);
      CWnd::EnableWindow(*(CWnd **)(this + 0xa4),1);
    }
    else if (local_98 == 0) {
      EnableScrollBar(*(HWND *)(*(int *)(this + 0xa4) + 0x20),2,3);
    }
  }
LAB_100b7620:
  FUN_100f90cf();
  return;
}

