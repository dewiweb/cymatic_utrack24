// rea decompile_all
// name: CMFCOutlookBarPaneButton::OnDraw
// address: 0x100b9798
// body: available
// range: 0x100b9798-0x100b9bb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCOutlookBarPaneButton::OnDraw(class CDC *,class CRect const
   &,class CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCOutlookBarPaneButton::OnDraw
          (CMFCOutlookBarPaneButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  CMFCVisualManager *pCVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int local_80;
  int local_7c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  CDC *local_58;
  int local_54;
  int iStack_50;
  LONG LStack_4c;
  LONG LStack_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x70;
  local_8 = 0x100b97a4;
  local_58 = param_1;
  local_80 = 0;
  local_7c = 0;
  if (((param_5 == 0) && (param_6 != 0)) && ((*(uint *)(this + 0x24) & 0x20000) != 0)) {
    local_80 = 1;
    local_7c = 1;
  }
  local_34.left = *(LONG *)param_2;
  local_34.top = *(LONG *)(param_2 + 4);
  local_34.right = *(LONG *)(param_2 + 8);
  local_34.bottom = *(LONG *)(param_2 + 0xc);
  local_24.left = *(LONG *)param_2;
  local_24.top = *(LONG *)(param_2 + 4);
  local_24.right = *(LONG *)(param_2 + 8);
  local_24.bottom = *(LONG *)(param_2 + 0xc);
  if (*(int *)(this + 0x48) != 0) {
    pCVar1 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar1 + 0x13c))(&local_60);
    if ((local_60 != 0) || (local_5c != 0)) {
      InflateRect(&local_34,-(local_60 / 2 + 1),-(local_5c / 2 + 1));
      if (param_4 == 0) {
        local_60 = 0;
        iVar2 = local_5c;
      }
      else {
        iVar2 = 0;
      }
      OffsetRect(&local_24,local_60,iVar2);
    }
  }
  iVar2 = local_24.top + 5;
  local_44.left = local_34.left;
  local_44.top = local_34.top;
  local_44.right = local_34.right;
  local_44.bottom = local_34.bottom;
  if (param_3 == (CMFCToolBarImages *)0x0) {
LAB_100b9a32:
    local_24.top = iVar2;
    if ((param_6 == 0) || (*(int *)(*(int *)(this + 0x70) + 0x1c9c) == 0)) goto LAB_100b9a85;
    if (param_5 == 0) {
      CDrawingManager::CDrawingManager((CDrawingManager *)&local_68,local_58);
      local_8 = 1;
      CDrawingManager::HighlightRect
                ((CDrawingManager *)&local_68,local_44.left,local_44.top,local_44.right,
                 local_44.bottom,0x55,0xffffffff,0,0xffffffff);
      local_8 = 0xffffffff;
      FUN_1009c588(&local_68);
      goto LAB_100b9a85;
    }
  }
  else {
    if (*(int *)(this + 4) == 0) {
      iVar4 = *(int *)(this + 0x34);
    }
    else {
      iVar4 = *(int *)(this + 0x38);
    }
    if (iVar4 < 0) goto LAB_100b9a32;
    local_68 = *(int *)(param_3 + 0x50);
    local_64 = *(int *)(param_3 + 0x54);
    if (param_4 == 0) {
      local_5c = ((local_34.right - local_34.left) - local_68) / 2 + local_34.left;
      iVar4 = local_34.top + 5;
      local_24.top = local_24.top + 7 + local_64;
    }
    else {
      iVar4 = ((local_34.bottom - local_64) - local_34.top) / 2 + local_34.top;
      local_54 = local_24.left + 10 + local_68;
      LStack_4c = local_24.right;
      LStack_48 = local_24.bottom;
      local_5c = local_34.left + 5;
      iStack_50 = iVar2;
      local_24.left = local_54;
      local_24.top = iVar2;
      iVar2 = (**(code **)(*(int *)local_58 + 0x68))
                        (*(int *)(this + 0x2c),*(undefined4 *)(*(int *)(this + 0x2c) + -0xc),
                         &local_54,0x410);
      local_24.top = ((local_34.bottom - iVar2) - local_34.top) / 2 + local_34.top;
    }
    local_64 = local_64 + iVar4;
    local_68 = local_5c + local_68;
    local_44.left = local_5c;
    local_44.top = iVar4;
    local_44.right = local_68;
    local_44.bottom = local_64;
    InflateRect(&local_44,2,2);
    if (*(int *)(*(int *)(this + 0x70) + 0x1c9c) == 0) {
      if (*(int *)(this + 0x48) != 0) {
        pCVar1 = CMFCVisualManager::GetInstance();
        (**(code **)(*(int *)pCVar1 + 0x13c))(&local_68);
        if ((local_68 != 0) || (local_64 != 0)) {
          InflateRect(&local_44,local_68 / 2 + -1,local_64 / 2 + -1);
        }
      }
      CMFCToolBarButton::FillInterior
                ((CMFCToolBarButton *)this,local_58,(CRect *)&local_44,param_6,0);
    }
    else if ((param_6 != 0) && (param_5 == 0)) {
      CDrawingManager::CDrawingManager((CDrawingManager *)&local_68,local_58);
      local_8 = 0;
      CDrawingManager::HighlightRect
                ((CDrawingManager *)&local_68,local_44.left,local_44.top,local_44.right,
                 local_44.bottom,0x55,0xffffffff,0,0xffffffff);
      local_8 = 0xffffffff;
      FUN_1009c588(&local_68);
    }
    if (*(int *)(this + 4) == 0) {
      iVar2 = *(int *)(this + 0x34);
    }
    else {
      iVar2 = *(int *)(this + 0x38);
    }
    CMFCToolBarImages::Draw
              (param_3,local_58,local_80 + local_5c,local_7c + iVar4,iVar2,0,
               *(uint *)(this + 0x24) & 0x40000,0,0,0,0xff);
LAB_100b9a85:
    if ((param_5 == 0) && ((param_6 != 0 || ((*(uint *)(this + 0x24) & 0x30000) != 0)))) {
      if ((((*(uint *)(this + 0x24) & 0x20000) == 0) || (param_6 == 0)) &&
         ((*(uint *)(this + 0x24) & 0x10000) == 0)) {
        pCVar1 = CMFCVisualManager::GetInstance();
        uVar5 = 2;
      }
      else {
        pCVar1 = CMFCVisualManager::GetInstance();
        uVar5 = 1;
      }
      (**(code **)(*(int *)pCVar1 + 0x88))
                (local_58,this,local_44.left,local_44.top,local_44.right,local_44.bottom,uVar5);
    }
  }
  uVar5 = 0;
  if ((*(int *)(this + 0x18) == 0) || (*(int *)(*(int *)(this + 0x2c) + -0xc) == 0))
  goto LAB_100b9baa;
  if (param_6 == 0) {
    if ((*(uint *)(this + 0x24) & 0x30000) != 0) {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 2;
  }
  iVar2 = *(int *)(this + 0x70);
  if ((*(uint *)(this + 0x24) & 0x40000) == 0) {
    iVar4 = *(int *)(iVar2 + 0xcc8);
LAB_100b9b29:
    if ((iVar4 == -1) && (iVar4 = DAT_10166b08, *(int *)(iVar2 + 0xcd8) == 0)) goto LAB_100b9b3e;
  }
  else {
    iVar4 = DAT_10166ad0;
    if (*(int *)(iVar2 + 0xcd8) != 0) goto LAB_100b9b29;
LAB_100b9b3e:
    pCVar1 = CMFCVisualManager::GetInstance();
    iVar4 = (**(code **)(*(int *)pCVar1 + 0xb4))(this,uVar5);
  }
  (**(code **)(*(int *)local_58 + 0x30))(iVar4);
  iVar2 = *(int *)(this + 0x2c);
  if (*(int *)(this + 0x7c) == 0) {
    piVar3 = FUN_10005e30((int *)(iVar2 + -0x10));
    local_8 = 2;
    (**(code **)(*(int *)local_58 + 0x68))(piVar3 + 4,piVar3[1],&local_24,0x8010);
    FUN_10001030(piVar3);
  }
  else {
    (**(code **)(*(int *)local_58 + 0x68))(iVar2,*(undefined4 *)(iVar2 + -0xc),&local_24,0x11);
  }
LAB_100b9baa:
  FUN_100f90cf();
  return;
}

