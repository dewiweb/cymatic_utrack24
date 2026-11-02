// rea decompile_all
// name: CMFCColorPickerCtrl::DrawItem
// address: 0x100f572f
// body: available
// range: 0x100f572f-0x100f5a49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f5753 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorPickerCtrl::DrawItem(struct tagDRAWITEMSTRUCT *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCColorPickerCtrl::DrawItem(CMFCColorPickerCtrl *this,tagDRAWITEMSTRUCT *param_1)

{
  CDC *this_00;
  HDC pHVar1;
  int iVar2;
  HBITMAP pHVar3;
  undefined4 uVar4;
  COLORREF CVar5;
  void *pvVar6;
  CDC *this_01;
  ulong uVar7;
  CDC local_94 [4];
  HDC__ *local_90;
  CPalette *local_84;
  undefined **local_80;
  void *local_7c;
  int local_78;
  CPalette *local_74;
  CGdiObject *local_70;
  undefined4 *local_6c;
  CDC *local_68;
  tagRECT local_44;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  tagRECT local_24;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x88;
  local_8 = 0x100f573e;
  local_70 = (CGdiObject *)param_1;
  if ((param_1 == (tagDRAWITEMSTRUCT *)0x0) || (*(int *)param_1 != 4)) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  this_00 = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  local_84 = CDC::SelectPalette(this_00,*(CPalette **)(this + 0x9c),0);
  RealizePalette(*(HDC *)(this_00 + 4));
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  (**(code **)(*(int *)this_00 + 0x50))(&local_34);
  CopyRect(&local_24,(RECT *)(local_70 + 0x1c));
  local_78 = 0;
  local_68 = this_00;
  FUN_1001714b((undefined4 *)local_94);
  local_7c = (void *)0x0;
  local_80 = CBitmap::vftable;
  local_8 = 1;
  local_70 = (CGdiObject *)0x0;
  local_74 = (CPalette *)0x0;
  pHVar1 = CreateCompatibleDC(*(HDC *)(this_00 + 4));
  iVar2 = CDC::Attach(local_94,pHVar1);
  if (iVar2 != 0) {
    pHVar3 = CreateCompatibleBitmap
                       (*(HDC *)(this_00 + 4),local_24.right - local_24.left,
                        local_24.bottom - local_24.top);
    iVar2 = CMenu::Attach((CMenu *)&local_80,(HMENU__ *)pHVar3);
    if (iVar2 != 0) {
      local_78 = 1;
      local_70 = CDC::SelectGdiObject(local_90,local_7c);
      local_68 = local_94;
      local_74 = CDC::SelectPalette(local_68,*(CPalette **)(this + 0x9c),0);
      RealizePalette(local_90);
      AFX_GLOBAL_DATA::DrawParentBackground
                ((AFX_GLOBAL_DATA *)&DAT_10166aa0,(CWnd *)this,local_94,(tagRECT *)0x0);
    }
  }
  iVar2 = *(int *)(this + 0x74);
  if (iVar2 == 0) {
    CVar5 = GetTextColor(*(HDC *)(local_68 + 8));
    local_6c = (undefined4 *)((local_24.bottom - local_24.top) / 2);
    CDC::FillSolidRect(local_68,0,0,local_24.right - local_24.left,(int)local_6c,
                       *(ulong *)(this + 0x90));
    this_01 = local_68;
    CDC::FillSolidRect(local_68,0,(int)local_6c,local_24.right - local_24.left,(int)local_6c,
                       *(ulong *)(this + 0x94));
    (**(code **)(*(int *)this_01 + 0x30))(CVar5);
    uVar7 = DAT_10166ac8;
  }
  else {
    if (iVar2 == 1) {
      DrawLuminanceBar(this,local_68);
      local_44.left = *(LONG *)(this + 0x98);
      local_44.bottom = local_24.bottom - local_24.top;
      local_44.right = (local_24.right - local_24.left) - local_44.left;
      local_44.top = 0;
      AFX_GLOBAL_DATA::DrawParentBackground
                ((AFX_GLOBAL_DATA *)&DAT_10166aa0,(CWnd *)this,local_68,&local_44);
      local_6c = (undefined4 *)(*(int *)this + 0x168);
      uVar4 = GetCursorRect(this);
      (*(code *)*local_6c)(local_68,uVar4);
      goto LAB_100f59b1;
    }
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        CreateHexagon(this);
      }
      else {
        if (iVar2 != 4) goto LAB_100f59b1;
        CreateHexGreyScaleBar(this);
      }
      FUN_100f509e(this,local_68);
      goto LAB_100f59b1;
    }
    DrawPicker(this,local_68);
    local_6c = (undefined4 *)(*(int *)this + 0x168);
    uVar4 = GetCursorRect(this);
    (*(code *)*local_6c)(local_68,uVar4);
    this_01 = local_68;
    uVar7 = DAT_10166abc;
  }
  CDC::Draw3dRect(this_01,&local_24,DAT_10166ac8,uVar7);
LAB_100f59b1:
  if (local_78 != 0) {
    CDC::BitBlt(this_00,local_34,local_30,local_2c - local_34,local_28 - local_30,local_94,local_34,
                local_30,0xcc0020);
    if (local_74 != (CPalette *)0x0) {
      CDC::SelectPalette(local_94,local_74,0);
    }
    if (local_70 == (CGdiObject *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = *(void **)(local_70 + 4);
    }
    CDC::SelectGdiObject(local_90,pvVar6);
  }
  if (local_84 != (CPalette *)0x0) {
    CDC::SelectPalette(this_00,local_84,0);
  }
  local_8 = local_8 & 0xffffff00;
  local_80 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_80);
  local_8 = 0xffffffff;
  CDC::~CDC(local_94);
  FUN_100f90cf();
  return;
}

