// rea decompile_all
// name: CMFCToolBarMenuButton::OnDraw
// address: 0x1007f6c2
// body: available
// range: 0x1007f6c2-0x1007fad6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarMenuButton::OnDraw(class CDC *,class CRect const
   &,class CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarMenuButton::OnDraw
          (CMFCToolBarMenuButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  byte bVar1;
  CMFCVisualManager *pCVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  IMAGES_IDS IVar7;
  undefined4 uVar8;
  CMFCToolBarMenuButton *pCVar9;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  CMFCToolBarMenuButton *local_30;
  CDC *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_2c = param_1;
  local_30 = (CMFCToolBarMenuButton *)param_2;
  SetRectEmpty((LPRECT)(this + 200));
  SetRectEmpty((LPRECT)(this + 0xd8));
  if (*(int *)(this + 0x94) != 0) {
    FUN_1007e626(this,local_2c,(int *)local_30,param_3,param_5,param_6,param_8,0);
    goto LAB_1007fac6;
  }
  pCVar2 = CMFCVisualManager::GetInstance();
  local_34 = *(int *)(pCVar2 + 0x6c);
  if (*(int *)(this + 0xb0) != 0) {
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) & 0xfffeffff;
  }
  if (param_6 == 0) {
    iVar3 = (**(code **)(*(int *)this + 0x70))();
    iVar4 = 0;
    if (iVar3 != 0) goto LAB_1007f754;
  }
  else {
LAB_1007f754:
    iVar4 = 1;
  }
  pCVar9 = local_30;
  CMFCToolBarButton::FillInterior((CMFCToolBarButton *)this,local_2c,(CRect *)local_30,iVar4,0);
  FUN_10037b18(&local_3c);
  if (DAT_10166e5c != 0) {
    local_3c = local_3c * 2;
    local_38 = local_38 * 2;
  }
  local_28.left = *(LONG *)pCVar9;
  local_28.top = *(LONG *)(pCVar9 + 4);
  local_28.right = *(LONG *)(pCVar9 + 8);
  local_28.bottom = *(LONG *)(pCVar9 + 0xc);
  if (*(int *)(this + 0x48) == 0) {
    local_4c = 0;
    local_48 = 0;
    piVar5 = &local_4c;
  }
  else {
    pCVar2 = CMFCVisualManager::GetInstance();
    piVar5 = (int *)(**(code **)(*(int *)pCVar2 + 0x13c))(&local_4c);
  }
  local_44 = *piVar5;
  local_40 = piVar5[1];
  if ((local_44 != 0) || (local_40 != 0)) {
    InflateRect(&local_28,-1 - local_44 / 2,-1 - (int)local_40 / 2);
  }
  local_18.left = *(LONG *)local_30;
  local_18.top = *(LONG *)(local_30 + 4);
  local_18.right = *(LONG *)(local_30 + 8);
  local_18.bottom = *(LONG *)(local_30 + 0xc);
  *(LONG *)(this + 200) = local_28.left;
  *(LONG *)(this + 0xcc) = local_28.top;
  *(LONG *)(this + 0xd0) = local_28.right;
  *(LONG *)(this + 0xd4) = local_28.bottom;
  pCVar2 = CMFCVisualManager::GetInstance();
  uVar6 = (**(code **)(*(int *)pCVar2 + 0x2d0))();
  InflateRect(&local_18,-(-(uint)(param_4 != 0) & uVar6),-(~-(uint)(param_4 != 0) & uVar6));
  if (*(int *)(this + 0x90) != 0) {
    if (param_4 == 0) {
      local_18.bottom = local_18.bottom + (-1 - local_38);
      *(LONG *)(this + 0xcc) = local_18.bottom;
    }
    else {
      local_18.right = local_18.right - (local_3c + local_44);
      ((LPRECT)(this + 200))->left = local_18.right + 1;
      if ((local_44 != 0) || (local_40 != 0)) {
        OffsetRect((LPRECT)(this + 200),1 - local_44 / 2,1 - (int)local_40 / 2);
      }
    }
  }
  local_40 = *(uint *)(this + 0x24);
  if (local_34 == 0) {
    if ((((*(int *)(this + 0x9c) == 0) || (*(int *)(this + 0x20) == 0)) ||
        (*(int *)(this + 0x20) == -1)) || (*(int *)(this + 0xa8) != 0)) {
      if (*(int *)(this + 0x8c) != 0) {
        *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 0x20000;
      }
    }
    else {
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) & 0xfffdffff;
    }
  }
  else {
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) & 0xfffcffff;
  }
  uVar8 = *(undefined4 *)(this + 0x44);
  *(undefined4 *)(this + 0x44) = 1;
  CMFCToolBarButton::OnDraw
            ((CMFCToolBarButton *)this,local_2c,(CRect *)&local_18,param_3,param_4,param_5,param_6,
             param_7,param_8);
  *(undefined4 *)(this + 0x44) = uVar8;
  if (*(int *)(this + 0x90) != 0) {
    if (((*(uint *)(this + 0x24) & 0x30000) != 0) && (local_34 == 0)) {
      OffsetRect((LPRECT)(this + 200),1,1);
    }
    if ((((param_6 != 0) || ((*(uint *)(this + 0x24) & 0x20000) != 0)) ||
        (*(int *)(this + 0x8c) != 0)) &&
       (((*(int *)(this + 0x20) != 0 && (*(int *)(this + 0x20) != -1)) &&
        (*(int *)(this + 0xa8) == 0)))) {
      iVar4 = *(int *)(this + 200);
      iVar3 = *(int *)(this + 0xcc);
      local_4c = *(int *)(this + 0xd0);
      local_48 = *(int *)(this + 0xd4);
      if (param_4 == 0) {
        local_48 = iVar3 + 2;
      }
      else {
        local_4c = iVar4 + 2;
      }
      uVar8 = 0;
      if ((param_6 != 0) || ((*(uint *)(this + 0x24) & 0x30000) != 0)) {
        uVar8 = 1;
      }
      if (*(int *)(this + 0x9c) == 0) {
        pCVar2 = CMFCVisualManager::GetInstance();
        (**(code **)(*(int *)pCVar2 + 0x8c))
                  (local_2c,this,iVar4,iVar3,local_4c,local_48,uVar8,param_4);
      }
    }
    if (param_5 == 0) {
      if ((*(uint *)(this + 0x24) & 0x40000) == 0) goto LAB_1007f9da;
LAB_1007f9f6:
      bVar1 = 1;
    }
    else {
      iVar4 = (**(code **)(*(int *)this + 0x60))();
      if (iVar4 == 0) goto LAB_1007f9f6;
LAB_1007f9da:
      bVar1 = 0;
    }
    if ((param_4 == 0) || (*(int *)(this + 0xa8) != 0)) {
      IVar7 = 1;
    }
    else {
      IVar7 = 0;
    }
    CMenuImages::Draw(local_2c,IVar7,(CRect *)(this + 200),(uint)bVar1,(CSize *)&local_3c);
  }
  *(uint *)(this + 0x24) = local_40;
  if (param_5 == 0) {
    if (((local_40 & 0x30000) == 0) && (*(int *)(this + 0x8c) == 0)) {
      if ((param_6 == 0) || ((local_40 & 0x150000) != 0)) goto LAB_1007fac6;
      pCVar2 = CMFCVisualManager::GetInstance();
      uVar8 = 2;
      pCVar9 = local_30;
    }
    else if ((local_34 == 0) &&
            ((((*(int *)(this + 0x9c) != 0 && (*(int *)(this + 0x20) != 0)) &&
              (*(int *)(this + 0x20) != -1)) && (*(int *)(this + 0xa8) == 0)))) {
      local_18.right = local_18.right + 1;
      pCVar2 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar2 + 0x88))
                (local_2c,this,local_18.left,local_18.top,local_18.right,local_18.bottom,2);
      pCVar2 = CMFCVisualManager::GetInstance();
      uVar8 = 1;
      pCVar9 = this + 200;
    }
    else {
      pCVar2 = CMFCVisualManager::GetInstance();
      uVar8 = 1;
      pCVar9 = local_30;
    }
    (**(code **)(*(int *)pCVar2 + 0x88))
              (local_2c,this,*(undefined4 *)pCVar9,*(undefined4 *)(pCVar9 + 4),
               *(undefined4 *)(pCVar9 + 8),*(undefined4 *)(pCVar9 + 0xc),uVar8);
  }
LAB_1007fac6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

