// rea decompile_all
// name: CMFCToolBarButtonCustomizeDialog::OnAddImage
// address: 0x1008ba19
// body: available
// range: 0x1008ba19-0x1008bc55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008ba64 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarButtonCustomizeDialog::OnAddImage(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarButtonCustomizeDialog::OnAddImage(CMFCToolBarButtonCustomizeDialog *this)

{
  int cx;
  HDC pHVar1;
  HBITMAP pHVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  uint uStack_1e6c;
  undefined1 local_1e5c [18];
  ushort local_1e4a;
  CClientDC local_1e44 [4];
  HDC local_1e40;
  CWnd *local_1e30;
  CGdiObject *local_1e2c;
  CDC local_1e28 [4];
  HDC__ *local_1e24;
  undefined **local_1e18;
  HBITMAP__ *local_1e14;
  CMFCImageEditorDialog local_1e10 [7656];
  RECT local_28;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1011413c;
  local_10 = ExceptionList;
  uStack_1e6c = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_1e6c;
  ExceptionList = &local_10;
  iVar5 = *(int *)(this + 0x480);
  local_18 = uStack_1e6c;
  if (iVar5 == 0) {
    local_14 = (undefined1 *)&uStack_1e6c;
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  cx = *(int *)(iVar5 + 0x50);
  iVar5 = *(int *)(iVar5 + 0x54);
  local_8 = 0;
  local_1e30 = (CWnd *)(this + 0x2d8);
  CClientDC::CClientDC(local_1e44,local_1e30);
  local_1e14 = (HBITMAP__ *)0x0;
  local_1e18 = CBitmap::vftable;
  local_8._0_1_ = 2;
  FUN_1001714b((undefined4 *)local_1e28);
  local_8._0_1_ = 3;
  pHVar1 = CreateCompatibleDC(local_1e40);
  CDC::Attach(local_1e28,pHVar1);
  pHVar2 = CreateCompatibleBitmap(local_1e40,cx,iVar5);
  iVar3 = CMenu::Attach((CMenu *)&local_1e18,(HMENU__ *)pHVar2);
  if (iVar3 != 0) {
    local_1e2c = CDC::SelectGdiObject(local_1e24,local_1e14);
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = cx;
    local_28.bottom = iVar5;
    FillRect(local_1e24,&local_28,DAT_10166b34);
    pvVar4 = (void *)0x0;
    if (local_1e2c != (CGdiObject *)0x0) {
      pvVar4 = *(void **)(local_1e2c + 4);
    }
    CDC::SelectGdiObject(local_1e24,pvVar4);
    GetObjectW(*(HANDLE *)(*(int *)(this + 0x480) + 0x88),0x18,local_1e5c);
    if (DAT_10168b9c == (int *)0x0) {
      CMFCImageEditorDialog::CMFCImageEditorDialog
                (local_1e10,(CBitmap *)&local_1e18,(CWnd *)this,(uint)local_1e4a);
      local_8._0_1_ = 4;
      iVar5 = FUN_1001bf3c((CDialog *)local_1e10);
      local_8._0_1_ = 3;
      if (iVar5 != 1) {
        CMFCImageEditorDialog::~CMFCImageEditorDialog(local_1e10);
        goto LAB_1008bc05;
      }
      CMFCImageEditorDialog::~CMFCImageEditorDialog(local_1e10);
    }
    else {
      iVar5 = (**(code **)(*DAT_10168b9c + 0x18c))(this,&local_1e18,local_1e4a);
      if (iVar5 == 0) goto LAB_1008bc05;
    }
    iVar5 = CMFCToolBarImages::AddImage(*(CMFCToolBarImages **)(this + 0x480),local_1e14,0);
    if (-1 < iVar5) {
      RebuildImageList(this);
      CMFCToolBarButtonsListButton::SelectButton((CMFCToolBarButtonsListButton *)local_1e30,iVar5);
      goto LAB_1008bc05;
    }
  }
  AfxMessageBox(0x3e83,0,0xffffffff);
LAB_1008bc05:
  local_8._0_1_ = 2;
  CDC::~CDC(local_1e28);
  local_8._0_1_ = 1;
  local_1e18 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_1e18);
  local_8 = (uint)local_8._1_3_ << 8;
  CClientDC::~CClientDC(local_1e44);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

