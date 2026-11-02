// rea decompile_all
// name: CMFCToolBarButton::OnDraw
// address: 0x10086bc4
// body: available
// range: 0x10086bc4-0x10087653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarButton::OnDraw(class CDC *,class CRect const &,class
   CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarButton::OnDraw
          (CMFCToolBarButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  bool bVar1;
  CMFCToolBarButton *pCVar2;
  CMFCVisualManager *pCVar3;
  undefined ***pppuVar4;
  int iVar5;
  CUserTool *pCVar6;
  LONG LVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  COLORREF CVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined **local_c0;
  int local_bc;
  CMFCToolBarImages *local_b8;
  int local_b4;
  int local_b0;
  undefined1 local_ac [4];
  int local_a8;
  CUserTool *local_a4;
  int *local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int *local_90;
  int local_8c;
  CPen *local_88;
  CMFCToolBarButton *local_84;
  tagTEXTMETRICW local_80;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xb8;
  local_8 = 0x10086bd3;
  *(int *)(this + 0x4c) = param_4;
  local_b8 = param_3;
  local_84 = this;
  FillInterior(this,param_1,param_2,param_6,0);
  if (param_3 == (CMFCToolBarImages *)0x0) {
    local_b0 = 0;
    local_b4 = 0;
  }
  else {
    local_b4 = *(int *)(param_3 + 0x60);
    local_b0 = *(int *)(param_3 + 100);
  }
  local_a4 = (CUserTool *)0x0;
  if ((DAT_101685b0 != (void *)0x0) && (*(int *)(this + 4) == 0)) {
    local_a4 = (CUserTool *)FUN_1006a40b(DAT_101685b0,*(uint *)(this + 0x20));
  }
  local_44.left = *(int *)param_2;
  local_44.top = (LONG)*(int **)(param_2 + 4);
  local_44.right = (LONG)*(CUserTool **)(param_2 + 8);
  local_44.bottom = *(int *)(param_2 + 0xc);
  if (*(int *)(local_84 + 0x48) == 0) {
    local_c0 = (undefined **)0x0;
    local_bc = 0;
    pppuVar4 = &local_c0;
  }
  else {
    pCVar3 = CMFCVisualManager::GetInstance();
    pppuVar4 = (undefined ***)(**(code **)(*(int *)pCVar3 + 0x13c))(local_ac);
  }
  InflateRect(&local_44,-((int)*pppuVar4 / 2),-((int)pppuVar4[1] / 2));
  pCVar2 = local_84;
  local_9c = local_44.left;
  local_90 = (int *)local_44.top;
  uVar14 = 0;
  local_88 = (CPen *)0x0;
  local_a0 = FUN_10005e30((int *)(*(int *)(local_84 + 0x2c) + -0x10));
  local_a0 = local_a0 + 4;
  local_8 = 0;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_a0,L"&&",
             DAT_101689a8);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_a0,L'&');
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_a0,
             DAT_101689a8,L"&");
  CDC::GetTextExtent(param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_c0);
  if (((*(int *)(pCVar2 + 8) != 0) && (*(int *)(*(int *)(pCVar2 + 0x2c) + -0xc) != 0)) &&
     ((*(int *)(pCVar2 + 0x18) == 0 || (param_4 == 0)))) {
    iVar5 = IsDrawImage(pCVar2);
    local_88 = (CPen *)((int)local_c0 + (-(uint)(iVar5 != 0) & 0xfffffffd) + 3);
  }
  pCVar6 = (CUserTool *)local_44.right;
  if (*(int *)(pCVar2 + 0x18) == 0) {
    if (param_4 != 0) {
      pCVar6 = (CUserTool *)(local_44.right + -(int)local_88);
    }
LAB_10086d98:
    local_8c = (int)pCVar6 - local_44.left;
    LVar7 = local_44.bottom;
    if (param_4 == 0) {
      LVar7 = local_44.bottom - (int)local_88;
    }
    local_88 = (CPen *)(LVar7 - local_44.top);
  }
  else {
    if (param_4 == 0) goto LAB_10086d98;
    local_8c = local_44.right - local_44.left;
    local_88 = (CPen *)(local_b0 + 6);
  }
  iVar5 = (local_8c - local_b4) / 2;
  local_a8 = ((int)local_88 - local_b0) / 2;
  local_34.right = 3;
  local_34.bottom = 3;
  if (((*(int *)(local_84 + 8) != 0) && (*(int *)(*(int *)(local_84 + 0x2c) + -0xc) != 0)) &&
     ((*(int *)(pCVar2 + 0x18) == 0 || (param_4 == 0)))) {
    GetTextMetricsW(*(HDC *)(param_1 + 8),&local_80);
    if (param_4 == 0) {
      local_a8 = local_a8 + -3;
      local_34.right = ((local_8c - local_80.tmHeight) + 1) / 2;
    }
    else {
      iVar5 = iVar5 + -3;
      local_34.bottom = (((int)local_88 - local_80.tmHeight) + -1) / 2;
    }
  }
  if ((((param_6 == 0) || (param_5 != 0)) ||
      (iVar8 = (**(code **)(*(int *)local_84 + 0x70))(), iVar8 != 0)) ||
     (((pCVar3 = CMFCVisualManager::GetInstance(), *(int *)(pCVar3 + 0x70) == 0 ||
       (DAT_10166c28 != 0)) ||
      ((DAT_10166c24 != 0 || (local_8c = 1, (*(uint *)(local_84 + 0x24) & 0x70000) != 0)))))) {
    local_8c = 0;
  }
  if ((((*(uint *)(local_84 + 0x24) & 0x30000) != 0) && (param_5 == 0)) &&
     (pCVar3 = CMFCVisualManager::GetInstance(), *(int *)(pCVar3 + 0x70) == 0)) {
    pCVar3 = CMFCVisualManager::GetInstance();
    iVar8 = (**(code **)(*(int *)pCVar3 + 0x2e0))();
    if (iVar8 != 0) {
      iVar5 = iVar5 + 1;
      local_a8 = local_a8 + 1;
      local_34.bottom = local_34.bottom + 1;
      if (param_4 == 0) {
        local_34.right = local_34.right + -1;
      }
      else {
        local_34.right = local_34.right + 1;
      }
    }
  }
  if (param_6 == 0) {
    pCVar3 = CMFCVisualManager::GetInstance();
    local_88 = (CPen *)0x1;
    if (*(int *)(pCVar3 + 0x78) == 0) goto LAB_10086ef0;
  }
  else {
LAB_10086ef0:
    local_88 = (CPen *)0x0;
  }
  bVar1 = false;
  if ((((*(uint *)(local_84 + 0x24) & 0x20000) == 0) &&
      ((*(uint *)(local_84 + 0x24) & 0x40000) != 0)) && (param_5 == 0)) {
LAB_100870d9:
    if ((*(uint *)(local_84 + 0x24) & 0x40000) != 0) goto LAB_100870e9;
LAB_1008705e:
    local_94 = 0;
  }
  else {
    iVar8 = IsDrawImage(local_84);
    if ((iVar8 != 0) && (local_b8 != (CMFCToolBarImages *)0x0)) {
      if (local_a4 == (CUserTool *)0x0) {
        local_94 = local_a8;
        local_98 = iVar5;
        if (local_8c != 0) {
          local_94 = local_a8 + 1;
          local_98 = iVar5 + 1;
          if (*(int *)(local_84 + 4) == 0) {
            iVar8 = *(int *)(local_84 + 0x34);
          }
          else {
            iVar8 = *(int *)(local_84 + 0x38);
          }
          CMFCToolBarImages::Draw
                    (local_b8,param_1,local_98 + local_9c,local_94 + (int)local_90,iVar8,0,0,0,1,0,
                     0xff);
          local_98 = local_98 + -2;
          local_94 = local_94 + -2;
        }
        if (*(int *)(local_84 + 4) == 0) {
          iVar8 = *(int *)(local_84 + 0x34);
        }
        else {
          iVar8 = *(int *)(local_84 + 0x38);
        }
        CMFCToolBarImages::Draw
                  (local_b8,param_1,local_98 + local_9c,local_94 + (int)local_90,iVar8,0,0,0,0,
                   (int)local_88,0xff);
      }
      else {
        local_24.top = local_a8 + (int)local_90;
        local_24.left = local_9c + iVar5;
        local_24.right = local_24.left + local_b4;
        local_24.bottom = local_b0 + local_24.top;
        CUserTool::DrawToolIcon(local_a4,param_1,(CRect *)&local_24);
      }
    }
    bVar1 = true;
    if (param_5 == 0) goto LAB_100870d9;
    iVar8 = (**(code **)(*(int *)local_84 + 0x60))();
    if (iVar8 != 0) goto LAB_1008705e;
LAB_100870e9:
    local_94 = 1;
  }
  if (((!bVar1) && (iVar8 = IsDrawImage(local_84), iVar8 != 0)) &&
     (local_b8 != (CMFCToolBarImages *)0x0)) {
    if (local_a4 == (CUserTool *)0x0) {
      if (local_8c != 0) {
        local_a8 = local_a8 + 1;
        if (*(int *)(local_84 + 4) == 0) {
          iVar8 = *(int *)(local_84 + 0x34);
        }
        else {
          iVar8 = *(int *)(local_84 + 0x38);
        }
        CMFCToolBarImages::Draw
                  (local_b8,param_1,local_9c + iVar5 + 1,local_a8 + (int)local_90,iVar8,0,0,0,1,0,
                   0xff);
        iVar5 = iVar5 + -1;
        local_a8 = local_a8 + -2;
      }
      if ((local_94 == 0) || (param_8 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar8 = 1;
      }
      if (*(int *)(local_84 + 4) == 0) {
        iVar9 = *(int *)(local_84 + 0x34);
      }
      else {
        iVar9 = *(int *)(local_84 + 0x38);
      }
      CMFCToolBarImages::Draw
                (local_b8,param_1,iVar5 + local_9c,local_a8 + (int)local_90,iVar9,0,iVar8,0,0,
                 (int)local_88,0xff);
    }
    else {
      local_24.top = local_a8 + (int)local_90;
      local_24.left = local_9c + iVar5;
      local_24.right = local_24.left + local_b4;
      local_24.bottom = local_b0 + local_24.top;
      CUserTool::DrawToolIcon(local_a4,param_1,(CRect *)&local_24);
    }
  }
  if (((*(int *)(local_84 + 0x18) != 0) && (param_4 != 0)) ||
     ((*(int *)(local_84 + 8) != 0 && (*(int *)(*(int *)(local_84 + 0x2c) + -0xc) != 0)))) {
    if (param_6 == 0) {
      if ((*(uint *)(local_84 + 0x24) & 0x30000) != 0) {
        uVar14 = 1;
      }
    }
    else {
      uVar14 = 2;
    }
    pCVar3 = CMFCVisualManager::GetInstance();
    pCVar2 = local_84;
    uVar14 = (**(code **)(*(int *)pCVar3 + 0xb4))(local_84,uVar14);
    (**(code **)(*(int *)param_1 + 0x30))(uVar14);
    local_90 = FUN_10005e30((int *)(*(int *)(pCVar2 + 0x2c) + -0x10));
    local_90 = local_90 + 4;
    local_24.left = local_44.left;
    local_24.top = local_44.top;
    local_24.right = local_44.right;
    local_24.bottom = local_44.bottom;
    iVar5 = *(int *)(local_84 + 0x18);
    local_8._0_1_ = 1;
    if ((iVar5 == 0) || (param_4 == 0)) {
      iVar8 = IsDrawImage(local_84);
      if (iVar8 == 0) {
        local_24.left = local_9c + 4;
      }
      else {
        uVar10 = -(uint)(DAT_10166e5c != 0) & 6;
        if (param_4 == 0) {
          local_34.bottom = local_34.bottom + local_b0 + uVar10;
        }
        else {
          local_34.right = local_34.right + local_b4 + uVar10;
        }
        local_24.left = local_34.right + local_9c + 3;
      }
      local_8c = 0x20;
    }
    else {
      local_34.bottom = local_34.bottom + 3 + local_b0;
      local_8c = 1;
      if (DAT_10161568 != 0) {
        local_8c = 0x11;
      }
      local_24.left =
           local_34.right + (int)(local_44.right + (local_44.left - *(int *)(local_84 + 100))) / 2;
      local_24.right = (int)(local_44.right + local_44.left + *(int *)(local_84 + 100)) / 2;
    }
    if (param_4 == 0) {
      local_24.bottom = local_44.bottom;
      iVar5 = local_bc / 2;
      local_24.right = (int)(local_44.right + local_44.left) / 2 - iVar5;
      local_24.left = local_24.right + local_bc;
      local_24.top = ((local_44.bottom - (local_34.bottom + local_44.top)) - (int)local_c0) / 2;
      if (local_24.top < 0) {
        local_24.top = 0;
      }
      local_24.top = local_34.bottom + local_44.top + local_24.top;
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_90,
                 L"&&",DAT_101689a8);
      local_88 = (CPen *)ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                         Find((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_90,L'&',0);
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_90,
                 L'&');
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_90,
                 DAT_101689a8,L"&&");
      if ((((int)local_88 < 0) || (DAT_10166c40 == 0)) || (DAT_10166e54 != 0)) {
        piVar13 = local_a0;
        iVar5 = 0x120;
        goto LAB_100875bf;
      }
      local_34.left = 0;
      local_34.top = 0;
      local_34.right = 0;
      local_34.bottom = 0;
      SetRectEmpty(&local_34);
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_90,
                 (int)&local_8c);
      local_8._0_1_ = 2;
      (**(code **)(*(int *)param_1 + 0x68))
                (local_8c,*(undefined4 *)(local_8c + -0xc),&local_34,0x520);
      local_a4 = (CUserTool *)local_34.right;
      SetRectEmpty(&local_34);
      puVar11 = (undefined4 *)
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                          ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_90,(int)&local_94);
      local_8._0_1_ = 3;
      FUN_10007c90(&local_8c,puVar11);
      local_8._0_1_ = 2;
      FUN_10001030((undefined4 *)(local_94 + -0x10));
      (**(code **)(*(int *)param_1 + 0x68))
                (local_8c,*(undefined4 *)(local_8c + -0xc),&local_34,0x520);
      LVar7 = local_34.right;
      (**(code **)(*(int *)param_1 + 0x68))(local_a0,local_a0[-3],&local_24,0x120);
      local_88 = (CPen *)0x0;
      local_94 = (*(int *)(param_2 + 8) + *(int *)param_2) / 2 - iVar5;
      CVar12 = GetTextColor(*(HDC *)(param_1 + 8));
      CPen::CPen((CPen *)&local_c0,0,1,CVar12);
      local_8 = CONCAT31(local_8._1_3_,4);
      CVar12 = GetTextColor(*(HDC *)(param_1 + 8));
      if (CVar12 != 0) {
        local_88 = CDC::SelectObject(param_1,(CPen *)&local_c0);
      }
      CDC::MoveTo(param_1,(int)&local_b4,local_94);
      CDC::LineTo(param_1,local_94,(int)(LVar7 + local_24.top));
      if (local_88 != (CPen *)0x0) {
        CDC::SelectObject(param_1,local_88);
      }
      local_8._0_1_ = 2;
      local_c0 = CPen::vftable;
      CImageList::~CImageList((CImageList *)&local_c0);
      FUN_10001030((undefined4 *)(local_8c + -0x10));
    }
    else {
      local_24.top = local_24.top + local_34.bottom;
      if ((iVar5 != 0) && (*(int *)(local_84 + 0x48) != 0)) {
        pCVar3 = CMFCVisualManager::GetInstance();
        iVar5 = (**(code **)(*(int *)pCVar3 + 0x13c))(&local_c0);
        OffsetRect(&local_24,0,*(int *)(iVar5 + 4) / 2);
      }
      piVar13 = local_90;
      iVar5 = local_8c;
      if ((DAT_10166c40 == 0) && (DAT_10166e54 == 0)) {
        FUN_10007c90(&local_90,&local_a0);
        piVar13 = local_90;
        iVar5 = local_8c;
      }
LAB_100875bf:
      (**(code **)(*(int *)param_1 + 0x68))(piVar13,piVar13[-3],&local_24,iVar5);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_10001030(local_90 + -4);
  }
  pCVar2 = local_84;
  if (((param_5 == 0) && (iVar5 = (**(code **)(*(int *)local_84 + 0x54))(), iVar5 != 0)) &&
     (param_7 != 0)) {
    if ((*(uint *)(pCVar2 + 0x24) & 0x30000) == 0) {
      if ((param_6 == 0) || ((*(uint *)(pCVar2 + 0x24) & 0x150000) != 0)) goto LAB_1008763e;
      pCVar3 = CMFCVisualManager::GetInstance();
      uVar14 = 2;
    }
    else {
      pCVar3 = CMFCVisualManager::GetInstance();
      uVar14 = 1;
    }
    (**(code **)(*(int *)pCVar3 + 0x88))
              (param_1,local_84,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
               *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),uVar14);
  }
LAB_1008763e:
  FUN_10001030(local_a0 + -4);
  FUN_100f90cf();
  return;
}

