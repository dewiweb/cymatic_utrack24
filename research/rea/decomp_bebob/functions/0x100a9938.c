// rea decompile_all
// name: CMFCToolBarColorButton::OnDraw
// address: 0x100a9938
// body: available
// range: 0x100a9938-0x100a9d34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a9c92 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCToolBarColorButton::OnDraw(class CDC *,class CRect const
   &,class CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarColorButton::OnDraw
          (CMFCToolBarColorButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  CMFCVisualManager *pCVar2;
  CPen *pCVar3;
  CPen *pCVar4;
  uint uVar5;
  CDC *this_00;
  undefined4 uVar6;
  ulong uVar7;
  undefined **local_70 [2];
  uint local_68;
  undefined **local_64 [2];
  undefined **local_5c [2];
  uint local_54;
  CPalette *local_50;
  CRect *local_4c;
  CDC *local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  tagRECT local_34;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x60;
  local_8 = 0x100a9944;
  local_4c = param_2;
  local_48 = param_1;
  local_50 = (CPalette *)0x0;
  if (*(CMFCColorBar **)(this + 0x8c) != (CMFCColorBar *)0x0) {
    local_50 = CMFCColorBar::SelectPalette(*(CMFCColorBar **)(this + 0x8c),param_1);
  }
  local_68 = *(uint *)(this + 0x24);
  uVar5 = local_68 & 0x40000;
  if (*(int *)(this + 0x74) != 0) {
    *(uint *)(this + 0x24) = local_68 | 0x10000;
  }
  if ((param_6 == 0) || (*(int *)(this + 0x80) != 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  local_54 = uVar5;
  CMFCToolBarButton::FillInterior((CMFCToolBarButton *)this,local_48,local_4c,iVar1,0);
  if ((((uVar5 == 0) && (*(int *)(this + 0x80) == 0)) &&
      (iVar1 = (**(code **)(*(int *)this + 0x54))(), iVar1 != 0)) &&
     ((param_7 != 0 && (param_5 == 0)))) {
    if ((*(uint *)(this + 0x24) & 0x30000) == 0) {
      if ((param_6 == 0) || ((*(uint *)(this + 0x24) & 0x110000) != 0)) goto LAB_100a9a0c;
      pCVar2 = CMFCVisualManager::GetInstance();
      uVar6 = 2;
    }
    else {
      pCVar2 = CMFCVisualManager::GetInstance();
      uVar6 = 1;
    }
    (**(code **)(*(int *)pCVar2 + 0x88))
              (local_48,this,*(int *)local_4c,*(int *)(local_4c + 4),*(int *)(local_4c + 8),
               *(int *)(local_4c + 0xc),uVar6);
  }
LAB_100a9a0c:
  local_24.left = *(LONG *)local_4c;
  local_24.top = *(LONG *)(local_4c + 4);
  local_24.right = *(LONG *)(local_4c + 8);
  local_24.bottom = *(LONG *)(local_4c + 0xc);
  InflateRect(&local_24,-DAT_10164b30,-DAT_10164b34);
  if (((*(int *)(this + 0x7c) == 0) && (*(int *)(this + 0x78) == 0)) && (*(int *)(this + 0x80) == 0)
     ) {
    if (local_54 == 0) {
      CBrush::CBrush((CBrush *)local_5c,
                     (((byte)this[0x72] | 0x200) << 8 | (uint)(byte)this[0x71]) << 8 |
                     (uint)(byte)this[0x70]);
      local_8 = 2;
      pCVar3 = CDC::SelectObject(local_48,(CPen *)local_5c);
      pCVar4 = CDC::SelectObject(local_48,(CPen *)&DAT_10166b80);
      local_24.right = local_24.right + -1;
      local_24.bottom = local_24.bottom + -1;
      Rectangle(*(HDC *)(local_48 + 4),local_24.left,local_24.top,local_24.right,local_24.bottom);
      CDC::SelectObject(local_48,pCVar4);
      CDC::SelectObject(local_48,pCVar3);
      local_8 = 0xffffffff;
      local_5c[0] = CBrush::vftable;
      CImageList::~CImageList((CImageList *)local_5c);
    }
  }
  else {
    local_44 = *(int *)local_4c;
    iStack_40 = *(int *)(local_4c + 4);
    iStack_3c = *(int *)(local_4c + 8);
    iStack_38 = *(int *)(local_4c + 0xc);
    this_00 = local_48;
    if ((*(int *)(this + 0x78) != 0) && (*(int *)(this + 0x70) != -1)) {
      local_34.left = local_24.left;
      local_34.top = local_24.top;
      local_34.right = local_24.right;
      local_34.bottom = local_24.bottom;
      InflateRect(&local_34,-(DAT_10164b30 + 1),-(DAT_10164b34 + 1));
      local_34.right = (local_34.bottom - local_34.top) + local_34.left;
      if (local_54 == 0) {
        CBrush::CBrush((CBrush *)local_70,
                       (((byte)this[0x72] | 0x200) << 8 | (uint)(byte)this[0x71]) << 8 |
                       (uint)(byte)this[0x70]);
        local_8 = 0;
        CPen::CPen((CPen *)local_64,0,1,DAT_10166af0);
        this_00 = local_48;
        local_8._0_1_ = 1;
        pCVar3 = CDC::SelectObject(local_48,(CPen *)local_70);
        local_4c = (CRect *)CDC::SelectObject(this_00,(CPen *)local_64);
        Rectangle(*(HDC *)(this_00 + 4),local_34.left,local_34.top,local_34.right,local_34.bottom);
        CDC::SelectObject(this_00,(CPen *)local_4c);
        CDC::SelectObject(this_00,pCVar3);
        local_8 = (uint)local_8._1_3_ << 8;
        local_64[0] = CPen::vftable;
        CImageList::~CImageList((CImageList *)local_64);
        local_8 = 0xffffffff;
        local_70[0] = CBrush::vftable;
        CImageList::~CImageList((CImageList *)local_70);
      }
      else {
        CDC::Draw3dRect(local_48,&local_34,DAT_10166af4,DAT_10166af0);
        OffsetRect(&local_34,1,1);
        CDC::Draw3dRect(local_48,&local_34,DAT_10166af0,DAT_10166af4);
        this_00 = local_48;
      }
      local_44 = DAT_10164b30 + local_34.right;
    }
    if (((*(uint *)(this + 0x24) & 0x40000) == 0) ||
       (uVar6 = DAT_10166ad0, *(int *)(this + 0x80) != 0)) {
      uVar6 = DAT_10166b00;
    }
    (**(code **)(*(int *)this_00 + 0x30))(uVar6);
    iVar1 = 0;
    local_4c = (CRect *)0x8024;
    if (*(int *)(this + 0x80) == 0) {
      local_4c = (CRect *)0x8025;
    }
    if ((param_4 == 0) && (iVar1 = (**(code **)(*(int *)this_00 + 0x28))(&DAT_10166bb4), iVar1 == 0)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    (**(code **)(*(int *)this_00 + 0x68))
              (*(int *)(this + 0x2c),*(undefined4 *)(*(int *)(this + 0x2c) + -0xc),&local_44,
               local_4c);
    if (iVar1 != 0) {
      (**(code **)(*(int *)local_48 + 0x28))(iVar1);
    }
  }
  if ((*(int *)(this + 0x7c) == 0) && (*(int *)(this + 0x80) == 0)) {
    uVar7 = DAT_10166af0;
    if (local_54 != 0) {
      CDC::Draw3dRect(local_48,&local_24,DAT_10166af4,DAT_10166af0);
      OffsetRect(&local_24,1,1);
      uVar7 = DAT_10166af4;
    }
    CDC::Draw3dRect(local_48,&local_24,DAT_10166af0,uVar7);
  }
  if (local_50 != (CPalette *)0x0) {
    CDC::SelectPalette(local_48,local_50,0);
  }
  *(uint *)(this + 0x24) = local_68;
  FUN_100f90cf();
  return;
}

