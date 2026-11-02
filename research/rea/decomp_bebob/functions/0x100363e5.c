// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonCategoryTab
// address: 0x100363e5
// body: available
// range: 0x100363e5-0x100366e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100364af to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::OnDrawRibbonCategoryTab(class CDC
   *,class CMFCRibbonTab *,int)
   
   Library: Visual Studio 2010 Release */

ulong __thiscall
CMFCVisualManager::OnDrawRibbonCategoryTab
          (CMFCVisualManager *this,CDC *param_1,CMFCRibbonTab *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  CDC *this_00;
  int iVar3;
  int iVar4;
  ulong uVar5;
  HRGN pHVar6;
  undefined *puVar7;
  undefined1 local_98 [8];
  CMFCVisualManager *local_90;
  CMFCRibbonTab *local_8c;
  undefined **local_88 [2];
  CPen *local_80;
  undefined **local_7c;
  undefined4 local_78;
  int local_74;
  undefined **local_70;
  HBRUSH local_6c;
  CDC *local_68;
  RECT local_64;
  POINT local_54;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x88;
  local_8 = 0x100363f4;
  local_68 = param_1;
  iVar4 = *(int *)(*(int *)(param_2 + 0x2c) + 0x3c0);
  local_8c = param_2;
  local_90 = this;
  if ((param_3 == 0) ||
     (((*(byte *)(iVar4 + 0x31c) & 1) != 0 &&
      (iVar3 = (**(code **)(*(int *)param_2 + 0x124))(), iVar3 == 0)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iVar3 = (**(code **)(*(int *)param_2 + 0x30))();
  if ((iVar3 == 0) || ((*(byte *)(iVar4 + 0x31c) & 1) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar4 = (**(code **)(*(int *)param_2 + 0x2c))();
  if ((iVar4 != 0) || (bVar1)) {
    iVar4 = (**(code **)(*(int *)param_2 + 0x40))();
    local_74 = 1;
    if (iVar4 == 0) goto LAB_1003647b;
  }
  local_74 = 0;
LAB_1003647b:
  CPen::CPen((CPen *)local_88,0,1,DAT_10166af0);
  local_8 = 0;
  local_80 = CDC::SelectObject(local_68,(CPen *)local_88);
  if (local_80 != (CPen *)0x0) {
    local_64.left = *(LONG *)(param_2 + 0x18);
    local_64.right = *(LONG *)(param_2 + 0x20);
    local_64.bottom = *(LONG *)(param_2 + 0x24);
    local_64.top = *(int *)(param_2 + 0x1c) + 3;
    iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 0x2c) + 0x3c0) + 0x2b8);
    if (0 < iVar4) {
      iVar4 = 100 - iVar4 / 2;
      if (iVar4 < 10) {
        iVar4 = 10;
      }
      uVar5 = CDrawingManager::PixelAlpha(DAT_10166aec,iVar4);
      CPen::CPen((CPen *)&local_70,0,1,uVar5);
      local_8._0_1_ = 1;
      CDC::SelectObject(local_68,(CPen *)&local_70);
      CDC::MoveTo(local_68,(int)local_98,local_64.right + -1);
      CDC::LineTo(local_68,local_64.right + -1,local_64.bottom);
      local_8 = (uint)local_8._1_3_ << 8;
      local_70 = CPen::vftable;
      CImageList::~CImageList((CImageList *)&local_70);
    }
    if ((bVar2) || (local_74 != 0)) {
      local_4c = local_64.left + 1;
      local_44 = local_64.left + 1;
      local_1c = local_64.right + -2;
      local_54.x = local_64.left;
      local_40 = local_64.top + 2;
      local_3c = local_64.left + 3;
      local_48 = local_64.bottom + -1;
      local_54.y = local_64.bottom;
      local_2c = local_64.right + -3;
      local_18 = local_64.bottom;
      local_34 = local_64.right + -5;
      local_78 = 0;
      local_7c = CRgn::vftable;
      local_8 = CONCAT31(local_8._1_3_,2);
      local_64.right = local_1c;
      local_38 = local_64.top;
      local_30 = local_64.top;
      local_28 = local_40;
      local_24 = local_2c;
      local_20 = local_48;
      pHVar6 = CreatePolygonRgn(&local_54,8,2);
      CMenu::Attach((CMenu *)&local_7c,(HMENU__ *)pHVar6);
      this_00 = local_68;
      if (bVar2) {
        CDC::SelectClipRgn(local_68,(CRgn *)&local_7c);
        iVar4 = FUN_100aae41((int)local_8c);
        uVar5 = DAT_10166af4;
        if (iVar4 == 0) {
          uVar5 = (**(code **)(*(int *)local_90 + 0x27c))
                            (*(undefined4 *)(*(int *)(local_8c + 0x2c) + 0xe0));
        }
        if (uVar5 == 0xffffffff) {
          puVar7 = &DAT_10166b60;
          if (local_74 == 0) {
            puVar7 = &DAT_10166b68;
          }
          FillRect(*(HDC *)(this_00 + 4),&local_64,*(HBRUSH *)(puVar7 + 4));
        }
        else {
          CBrush::CBrush((CBrush *)&local_70,uVar5);
          FillRect(*(HDC *)(this_00 + 4),&local_64,local_6c);
          local_70 = CBrush::vftable;
          CImageList::~CImageList((CImageList *)&local_70);
        }
        CDC::SelectClipRgn(this_00,(CRgn *)0x0);
      }
      Polyline(*(HDC *)(this_00 + 4),&local_54,8);
      CDC::SelectObject(this_00,local_80);
      local_8 = local_8 & 0xffffff00;
      local_7c = CRgn::vftable;
      CImageList::~CImageList((CImageList *)&local_7c);
    }
    else {
      CDC::SelectObject(local_68,local_80);
    }
    local_88[0] = CPen::vftable;
    local_8 = 0xffffffff;
    CImageList::~CImageList((CImageList *)local_88);
    uVar5 = FUN_100f90cf();
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

