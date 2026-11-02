// rea decompile_all
// name: CMFCColorDialog::OnInitDialog
// address: 0x100eae58
// body: available
// range: 0x100eae58-0x100eb116 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100eafa2 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCColorDialog::OnInitDialog(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCColorDialog::OnInitDialog(CMFCColorDialog *this)

{
  CWnd *pCVar1;
  ulong uVar2;
  int iVar3;
  undefined4 *puVar4;
  CPropertySheet *pCVar5;
  undefined4 uVar6;
  AFX_MODULE_STATE *pAVar7;
  HCURSOR pHVar8;
  undefined **local_e0 [40];
  undefined4 local_40;
  CMFCStandardColorsPropertyPage *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xd0;
  local_8 = 0x100eae67;
  CDialog::OnInitDialog((CDialog *)this);
  pCVar1 = AfxGetMainWnd();
  if (pCVar1 != (CWnd *)0x0) {
    pCVar1 = AfxGetMainWnd();
    uVar2 = CWnd::GetExStyle(pCVar1);
    if ((uVar2 & 0x400000) != 0) {
      CWnd::ModifyStyleEx((CWnd *)this,0,0x400000,0);
    }
  }
  if (DAT_10166c4c < 8) {
    CColorDialog::CColorDialog((CColorDialog *)local_e0,*(ulong *)(this + 200),0x102,(CWnd *)0x0);
    local_8 = 0;
    iVar3 = CColorDialog::DoModal((CColorDialog *)local_e0);
    *(undefined4 *)(this + 0xcc) = local_40;
    CDialog::EndDialog((CDialog *)this,iVar3);
    local_8 = 0xffffffff;
    local_e0[0] = CCommonDialog::vftable;
    CDialog::~CDialog((CDialog *)local_e0);
  }
  else {
    if (*(int *)(this + 0xc4) == 0) {
      puVar4 = FUN_1000858a(8);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4[1] = 0;
        *puVar4 = CPalette::vftable;
      }
      *(undefined4 **)(this + 0xc4) = puVar4;
      RebuildPalette(this);
    }
    CMFCColorPickerCtrl::SetType((CMFCColorPickerCtrl *)(this + 0x8a0),0);
    CMFCColorPickerCtrl::SetPalette
              ((CMFCColorPickerCtrl *)(this + 0x8a0),*(CPalette **)(this + 0xc4));
    CMFCColorPickerCtrl::SetOriginalColor
              ((CMFCColorPickerCtrl *)(this + 0x8a0),*(ulong *)(this + 200));
    CMFCColorPickerCtrl::SetColor((CMFCColorPickerCtrl *)(this + 0x8a0),*(ulong *)(this + 0xcc));
    local_28 = FUN_1000858a(0xd0);
    local_8 = 1;
    if (local_28 == (void *)0x0) {
      pCVar5 = (CPropertySheet *)0x0;
    }
    else {
      pCVar5 = CMFCColorPropertySheet(local_28,(wchar_t *)&PTR_1011d390,(CWnd *)this,0);
    }
    local_8 = 0xffffffff;
    *(CPropertySheet **)(this + 0xb8) = pCVar5;
    if (pCVar5 == (CPropertySheet *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    local_28 = FUN_1000858a(0x228);
    local_8 = 2;
    if (local_28 == (CMFCStandardColorsPropertyPage *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = CMFCStandardColorsPropertyPage::CMFCStandardColorsPropertyPage(local_28);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(this + 0xbc) = uVar6;
    local_28 = FUN_1000858a(0x244);
    local_8 = 3;
    if (local_28 == (CMFCStandardColorsPropertyPage *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = CMFCCustomColorsPropertyPage::CMFCCustomColorsPropertyPage
                        ((CMFCCustomColorsPropertyPage *)local_28);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(this + 0xc0) = uVar6;
    *(CMFCColorDialog **)(*(int *)(this + 0xbc) + 0xa8) = this;
    *(CMFCColorDialog **)(*(int *)(this + 0xc0) + 0xa8) = this;
    CPropertySheet::AddPage(*(CPropertySheet **)(this + 0xb8),*(CPropertyPage **)(this + 0xbc));
    CPropertySheet::AddPage(*(CPropertySheet **)(this + 0xb8),*(CPropertyPage **)(this + 0xc0));
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x84c),&local_24);
    CWnd::ScreenToClient((CWnd *)this,&local_24);
    (**(code **)(**(int **)(this + 0xb8) + 0x160))(this,0x54000000,0);
    CWnd::SetWindowPos(*(CWnd **)(this + 0xb8),(CWnd *)0x0,local_24.left,local_24.top,
                       local_24.right - local_24.left,local_24.bottom - local_24.top,0x14);
    SetPageOne(this,(uchar)this[200],(uchar)this[0xc9],(uchar)this[0xca]);
    CMFCCustomColorsPropertyPage::Setup
              (*(CMFCCustomColorsPropertyPage **)(this + 0xc0),(uchar)this[200],(uchar)this[0xc9],
               (uchar)this[0xca]);
    CMFCButton::SetImage((CMFCButton *)(this + 0xdc),0x4296,0,0);
    AfxGetModuleState();
    pAVar7 = AfxGetModuleState();
    pHVar8 = LoadCursorW(*(HINSTANCE *)(pAVar7 + 0xc),(LPCWSTR)0x3f11);
    *(HCURSOR *)(this + 0xd0) = pHVar8;
  }
  iVar3 = FUN_100f90cf();
  return iVar3;
}

