// rea decompile_all
// name: CMFCImageEditorDialog::OnInitDialog
// address: 0x100e238f
// body: available
// range: 0x100e238f-0x100e2759 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCImageEditorDialog::OnInitDialog(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCImageEditorDialog::OnInitDialog(CMFCImageEditorDialog *this)

{
  LPRECT lpRect;
  int iVar1;
  CWnd *pCVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined ***pppuVar7;
  int iVar8;
  CPalette *pCVar9;
  undefined1 local_60 [4];
  int local_5c;
  CMFCImagePaintArea *local_58;
  undefined **local_54;
  undefined4 local_50;
  LPRECT local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x100e239b;
  CDialog::OnInitDialog((CDialog *)this);
  pCVar2 = AfxGetMainWnd();
  if (pCVar2 != (CWnd *)0x0) {
    pCVar2 = AfxGetMainWnd();
    uVar3 = CWnd::GetExStyle(pCVar2);
    if ((uVar3 & 0x400000) != 0) {
      CWnd::ModifyStyleEx((CWnd *)this,0,0x400000,0);
    }
  }
  local_58 = (CMFCImagePaintArea *)(this + 0x214);
  CMFCImagePaintArea::SetBitmap(local_58,*(CBitmap **)(this + 0x300));
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x14c),&local_34);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x14c),&local_24);
  MapWindowPoints(*(HWND *)(this + 0x14c),*(HWND *)(this + 0x20),(LPPOINT)&local_24,2);
  InflateRect(&local_24,-2,-2);
  CMFCToolBar::EnableLargeIcons((CMFCToolBar *)(this + 0x1120),0);
  (**(code **)(*(int *)(this + 0x1120) + 800))(this,0x50402808,0xe800);
  iVar4 = AFX_GLOBAL_DATA::Is32BitIcons((AFX_GLOBAL_DATA *)&DAT_10166aa0);
  (**(code **)(*(int *)(this + 0x1120) + 0x330))(0x3f0a,0,0,1,0,0,-(uint)(iVar4 != 0) & 0x3f0b);
  local_48 = *(LPRECT *)(this + 0x1120);
  uVar5 = (**(code **)((int)local_48 + 0x1bc))();
  (**(code **)((int)local_48 + 0x1e0))(uVar5 | 0x30);
  local_48 = *(LPRECT *)(this + 0x1120);
  uVar5 = (**(code **)((int)local_48 + 0x1bc))();
  (**(code **)((int)local_48 + 0x1e0))(uVar5 & 0xffbff0ff);
  CPane::SetBorders((CPane *)(this + 0x1120),10,5,10,5);
  piVar6 = (int *)CMFCToolBar::GetButtonSize((CMFCToolBar *)(this + 0x1120));
  CMFCToolBar::WrapToolBar((CMFCToolBar *)(this + 0x1120),*piVar6 * 3,0x7fff,(CDC *)0x0,-1,-1);
  (**(code **)(*(int *)(this + 0x1120) + 0x2a4))(local_60,0);
  local_24.bottom = local_5c + 10 + local_24.top;
  (**(code **)(*(int *)(this + 0x1120) + 0x230))(&local_24,1,0);
  if (local_34.bottom - local_34.top < local_24.bottom - local_24.top) {
    CWnd::SetWindowPos((CWnd *)(this + 300),(CWnd *)0x0,-1,-1,local_34.right - local_34.left,
                       (local_24.bottom - local_24.top) + 7,0x16);
  }
  pCVar9 = (CPalette *)&DAT_101665c0;
  (**(code **)(*(int *)(this + 0x1120) + 0x234))
            (&DAT_101665c0,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x13,0);
  *(undefined4 *)(this + 0x1174) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(this + 0x1c60) = 0;
  local_44.left = 0;
  local_44.top = 0;
  local_44.right = 0;
  local_44.bottom = 0;
  GetClientRect(*(HWND *)(this + 0xd8),&local_44);
  MapWindowPoints(*(HWND *)(this + 0xd8),*(HWND *)(this + 0x20),(LPPOINT)&local_44,2);
  InflateRect(&local_44,-2,-2);
  *(undefined4 *)(this + 0x10b8) = 1;
  local_48 = (LPRECT)0x4;
  local_50 = 0;
  local_54 = CPalette::vftable;
  local_8 = 0;
  if (*(int *)(this + 0x30c) < 9) {
    Create16ColorsStdPalette(pCVar9);
  }
  else {
    EnableOtherButton(this + 0x330,(undefined **)L"Other",1,1);
    local_48 = (LPRECT)0x5;
    FID_conflict_SetVertMargin(this + 0x330,1);
    FID_conflict_SetVertMargin(this + 0x330,1);
  }
  if (*(int *)(this + 0x30c) < 9) {
    pppuVar7 = &local_54;
  }
  else {
    pppuVar7 = (undefined ***)0x0;
  }
  (**(code **)(*(int *)(this + 0x330) + 0x450))(this,&local_44,0x4084,local_48,pppuVar7);
  FUN_100a8956(this + 0x330,0);
  local_8 = 0xffffffff;
  local_54 = CPalette::vftable;
  CImageList::~CImageList((CImageList *)&local_54);
  lpRect = (LPRECT)(this + 800);
  local_48 = lpRect;
  GetClientRect(*(HWND *)(this + 0x1c0),lpRect);
  CWnd::MapWindowPoints((CWnd *)(this + 0x1a0),(CWnd *)this,lpRect);
  iVar4 = *(int *)(this + 0x304);
  iVar1 = *(int *)(this + 0x308);
  iVar8 = ((*(int *)(this + 0x328) - iVar4) + lpRect->left) / 2;
  lpRect->left = iVar8;
  *(int *)(this + 0x328) = iVar8 + iVar4;
  iVar4 = ((*(int *)(this + 0x32c) - iVar1) + *(int *)(this + 0x324)) / 2;
  *(int *)(this + 0x324) = iVar4;
  *(int *)(this + 0x32c) = iVar4 + iVar1;
  ((LPRECT)(this + 0x310))->left = lpRect->left;
  *(undefined4 *)(this + 0x314) = *(undefined4 *)(this + 0x324);
  *(undefined4 *)(this + 0x318) = *(undefined4 *)(this + 0x328);
  *(undefined4 *)(this + 0x31c) = *(undefined4 *)(this + 0x32c);
  InflateRect((LPRECT)(this + 0x310),4,4);
  *(LONG *)(this + 0x288) = local_48->left;
  *(LONG *)(this + 0x28c) = local_48->top;
  *(LONG *)(this + 0x290) = local_48->right;
  *(LONG *)(this + 0x294) = local_48->bottom;
  CWnd::ModifyStyle((CWnd *)local_58,0x10000,0,0);
  iVar4 = FUN_100f90cf();
  return iVar4;
}

