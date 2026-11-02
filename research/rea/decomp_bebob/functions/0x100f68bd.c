// rea decompile_all
// name: CMFCColorPropertySheet::ResizeControl
// address: 0x100f68bd
// body: available
// range: 0x100f68bd-0x100f69c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCColorPropertySheet::ResizeControl(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCColorPropertySheet::ResizeControl(CMFCColorPropertySheet *this)

{
  CTabCtrl *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  CPropertyPage *this_01;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  this_00 = CPropertySheet::GetTabControl((CPropertySheet *)this);
  if (this_00 != (CTabCtrl *)0x0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    CWnd::SetWindowPos((CWnd *)this_00,(CWnd *)0x0,0,0,local_18.right - local_18.left,
                       local_18.bottom - local_18.top,0x14);
    iVar1 = CPropertySheet::GetPageCount((CPropertySheet *)this);
    iVar2 = GetSystemMetrics(0x2d);
    iVar3 = GetSystemMetrics(0x2e);
    local_2c = 0;
    if (-1 < iVar1 + -1) {
      do {
        this_01 = CPropertySheet::GetPage((CPropertySheet *)this,local_2c);
        if ((this_01 != (CPropertyPage *)0x0) && (*(HWND *)(this_01 + 0x20) != (HWND)0x0)) {
          local_28.left = 0;
          local_28.top = 0;
          local_28.right = 0;
          local_28.bottom = 0;
          GetWindowRect(*(HWND *)(this_01 + 0x20),&local_28);
          CWnd::ScreenToClient((CWnd *)this_00,&local_28);
          CWnd::SetWindowPos((CWnd *)this_01,(CWnd *)0x0,local_28.left,local_28.top,
                             (local_18.right + iVar2 * -3) - local_18.left,
                             ((local_18.bottom - local_18.top) - local_28.top) - iVar3,0x14);
        }
        local_2c = local_2c + 1;
      } while (local_2c <= iVar1 + -1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

