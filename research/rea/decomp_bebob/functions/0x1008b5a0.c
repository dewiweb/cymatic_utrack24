// rea decompile_all
// name: CMFCToolBarButtonCustomizeDialog::OnEditImage
// address: 0x1008b5a0
// body: available
// range: 0x1008b5a0-0x1008b857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008b5eb to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarButtonCustomizeDialog::OnEditImage(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarButtonCustomizeDialog::OnEditImage(CMFCToolBarButtonCustomizeDialog *this)

{
  HDC pHVar1;
  HBITMAP pHVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uStack_1e80;
  undefined1 local_1e70 [18];
  ushort local_1e5e;
  tagAFXDrawState local_1e58 [16];
  int local_1e48;
  CClientDC local_1e44 [4];
  HDC local_1e40;
  CGdiObject *local_1e30;
  ulong local_1e2c;
  CDC local_1e28 [4];
  HDC__ *local_1e24;
  undefined **local_1e18;
  HBITMAP__ *local_1e14;
  CMFCImageEditorDialog local_1e10 [7656];
  tagRECT local_28;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101140bd;
  local_10 = ExceptionList;
  uStack_1e80 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_1e80;
  ExceptionList = &local_10;
  iVar4 = *(int *)(this + 0x480);
  local_18 = uStack_1e80;
  if ((iVar4 == 0) || (*(int *)(this + 0x488) < 0)) {
    local_14 = (undefined1 *)&uStack_1e80;
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  iVar3 = *(int *)(iVar4 + 0x54);
  iVar4 = *(int *)(iVar4 + 0x50);
  local_8 = 0;
  local_1e48 = iVar3;
  CClientDC::CClientDC(local_1e44,(CWnd *)(this + 0x2d8));
  local_1e14 = (HBITMAP__ *)0x0;
  local_1e18 = CBitmap::vftable;
  local_8._0_1_ = 2;
  FUN_1001714b((undefined4 *)local_1e28);
  local_8._0_1_ = 3;
  pHVar1 = CreateCompatibleDC(local_1e40);
  CDC::Attach(local_1e28,pHVar1);
  pHVar2 = CreateCompatibleBitmap(local_1e40,iVar4,iVar3);
  iVar3 = CMenu::Attach((CMenu *)&local_1e18,(HMENU__ *)pHVar2);
  if (iVar3 != 0) {
    local_1e30 = CDC::SelectGdiObject(local_1e24,local_1e14);
    local_1e2c = CMFCToolBarImages::SetTransparentColor
                           (*(CMFCToolBarImages **)(this + 0x480),0xc0c0c0);
    local_28.left = 0;
    local_28.top = 0;
    local_28.bottom = local_1e48;
    local_28.right = iVar4;
    CDC::FillSolidRect(local_1e28,&local_28,0xc0c0c0);
    iVar4 = CMFCToolBarImages::PrepareDrawImage
                      (*(CMFCToolBarImages **)(this + 0x480),local_1e58,0,0,0);
    if (iVar4 != 0) {
      CMFCToolBarImages::Draw
                (*(CMFCToolBarImages **)(this + 0x480),local_1e28,0,0,*(int *)(this + 0x488),0,0,0,0
                 ,0,0xff);
      CMFCToolBarImages::EndDrawImage(*(CMFCToolBarImages **)(this + 0x480),local_1e58);
      CMFCToolBarImages::SetTransparentColor(*(CMFCToolBarImages **)(this + 0x480),local_1e2c);
      if (local_1e30 == (CGdiObject *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = *(void **)(local_1e30 + 4);
      }
      CDC::SelectGdiObject(local_1e24,pvVar5);
      GetObjectW(*(HANDLE *)(*(int *)(this + 0x480) + 0x88),0x18,local_1e70);
      if (DAT_10168b9c == (int *)0x0) {
        CMFCImageEditorDialog::CMFCImageEditorDialog
                  (local_1e10,(CBitmap *)&local_1e18,(CWnd *)this,(uint)local_1e5e);
        local_8._0_1_ = 4;
        iVar4 = FUN_1001bf3c((CDialog *)local_1e10);
        local_8._0_1_ = 3;
        if (iVar4 != 1) {
          CMFCImageEditorDialog::~CMFCImageEditorDialog(local_1e10);
          goto LAB_1008b807;
        }
        CMFCImageEditorDialog::~CMFCImageEditorDialog(local_1e10);
      }
      else {
        iVar4 = (**(code **)(*DAT_10168b9c + 0x18c))(this,&local_1e18,local_1e5e);
        if (iVar4 == 0) goto LAB_1008b807;
      }
      CMFCToolBarImages::UpdateImage
                (*(CMFCToolBarImages **)(this + 0x480),*(int *)(this + 0x488),local_1e14);
      InvalidateRect(*(HWND *)(this + 0x2f8),(RECT *)0x0,1);
    }
  }
LAB_1008b807:
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

