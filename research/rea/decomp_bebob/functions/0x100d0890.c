// rea decompile_all
// name: CMFCToolBarComboBoxButton::OnDraw
// address: 0x100d0890
// body: available
// range: 0x100d0890-0x100d0bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarComboBoxButton::OnDraw(class CDC *,class CRect const
   &,class CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarComboBoxButton::OnDraw
          (CMFCToolBarComboBoxButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  ulong uVar2;
  CMFCVisualManager *pCVar3;
  LRESULT LVar4;
  COLORREF CVar5;
  undefined4 uVar6;
  int local_70;
  undefined4 local_68;
  undefined4 local_64;
  WPARAM local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  LONG LStack_48;
  LONG LStack_44;
  LONG LStack_40;
  LRESULT local_3c;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (((*(int *)(this + 0xb4) == 0) || (*(int *)(*(int *)(this + 0xb4) + 0x20) == 0)) ||
     (param_4 == 0)) {
    CMFCToolBarButton::OnDraw
              ((CMFCToolBarButton *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
               param_8);
    goto LAB_100d0bcf;
  }
  if (param_5 == 0) {
    if ((*(uint *)(this + 0x24) & 0x40000) == 0) goto LAB_100d08e8;
LAB_100d0900:
    local_70 = 1;
    uVar2 = DAT_10166ad0;
  }
  else {
    iVar1 = (**(code **)(*(int *)this + 0x60))();
    if (iVar1 == 0) goto LAB_100d0900;
LAB_100d08e8:
    local_70 = 0;
    uVar2 = DAT_10166b00;
    if (param_6 != 0) {
      uVar2 = CMFCToolBar::GetHotTextColor();
    }
  }
  (**(code **)(*(int *)param_1 + 0x30))(uVar2);
  if (DAT_101624d4 != 0) {
    if (*(int *)(this + 0x80) != 0) {
      param_6 = 1;
    }
    local_28.left = *(LONG *)(this + 0x90);
    local_28.top = *(LONG *)(this + 0x94);
    local_28.right = *(LONG *)(this + 0x98);
    local_28.bottom = *(LONG *)(this + 0x9c);
    pCVar3 = CMFCVisualManager::GetInstance();
    LVar4 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x157,0,0);
    (**(code **)(*(int *)pCVar3 + 0x70))
              (param_1,local_28.left,local_28.top,local_28.right,local_28.bottom,local_70,LVar4,
               param_6,this);
    InflateRect(&local_28,-2,-2);
    CVar5 = GetTextColor(*(HDC *)(param_1 + 8));
    uVar2 = DAT_10166ab4;
    if (local_70 == 0) {
      uVar2 = DAT_10166b04;
    }
    CDC::FillSolidRect(param_1,&local_28,uVar2);
    if (local_70 != 0) {
      CDC::Draw3dRect(param_1,&local_28,DAT_10166af4,DAT_10166af4);
    }
    local_18.left = *(LONG *)(this + 0xa0);
    local_18.top = *(LONG *)(this + 0xa4);
    local_18.right = *(LONG *)(this + 0xa8);
    local_18.bottom = *(LONG *)(this + 0xac);
    if (DAT_10166c24 != 0) {
      InflateRect(&local_18,-1,-1);
    }
    if (local_28.left + 1 < local_18.left) {
      pCVar3 = CMFCVisualManager::GetInstance();
      LVar4 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x157,0,0);
      (**(code **)(*(int *)pCVar3 + 0x6c))
                (param_1,local_18.left,local_18.top,local_18.right,local_18.bottom,local_70,LVar4,
                 param_6,this);
    }
    (**(code **)(*(int *)param_1 + 0x30))(CVar5);
    if (*(int *)(*(int *)(this + 0xb8) + -0xc) != 0) {
      local_38.right = *(LONG *)(this + 0xa0);
      local_38.left = local_28.left;
      local_38.top = local_28.top;
      local_38.bottom = local_28.bottom;
      InflateRect(&local_38,-2,-2);
      if (*(int *)(this + 0xb0) == 0) {
        uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 0xb4));
        if ((uVar2 & 0x30) == 0) {
          uVar6 = (**(code **)(*(int *)param_1 + 0x30))(DAT_10166b08);
          (**(code **)(*(int *)param_1 + 0x68))
                    (*(int *)(this + 0xb8),*(undefined4 *)(*(int *)(this + 0xb8) + -0xc),&local_38,
                     0x24);
          (**(code **)(*(int *)param_1 + 0x30))(uVar6);
        }
        else {
          _memset(&local_68,0,0x30);
          local_50 = *(undefined4 *)(param_1 + 4);
          local_64 = *(undefined4 *)(this + 0x20);
          local_4c = local_38.left;
          LStack_48 = local_38.top;
          LStack_44 = local_38.right;
          LStack_40 = local_38.bottom;
          local_60 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x147,0,0);
          iVar1 = *(int *)(this + 0xb4);
          if (iVar1 == 0) {
            local_54 = 0;
          }
          else {
            local_54 = *(undefined4 *)(iVar1 + 0x20);
          }
          local_58 = local_58 | 0x1000;
          local_68 = 3;
          local_3c = SendMessageW(*(HWND *)(iVar1 + 0x20),0x150,local_60,0);
          if (local_70 != 0) {
            local_58 = local_58 | 4;
          }
          (**(code **)(**(int **)(this + 0xb4) + 0x164))(&local_68);
        }
      }
    }
    (**(code **)(*(int *)param_1 + 0x30))(CVar5);
  }
  if ((*(int *)(this + 0x18) != 0) && (*(int *)(*(int *)(this + 0x2c) + -0xc) != 0)) {
    local_18.left = *(LONG *)param_2;
    local_18.right = *(LONG *)(param_2 + 8);
    local_18.top = ((*(int *)(this + 0x9c) - *(int *)(this + 0x68)) + *(int *)(param_2 + 0xc)) / 2;
    local_18.bottom = *(LONG *)(param_2 + 0xc);
    (**(code **)(*(int *)param_1 + 0x68))
              (*(int *)(this + 0x2c),*(undefined4 *)(*(int *)(this + 0x2c) + -0xc),&local_18,0x11);
  }
LAB_100d0bcf:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

