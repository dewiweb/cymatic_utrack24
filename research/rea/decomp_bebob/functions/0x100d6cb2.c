// rea decompile_all
// name: CPropertySheet::OnInitDialog
// address: 0x100d6cb2
// body: available
// range: 0x100d6cb2-0x100d6ec4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPropertySheet::OnInitDialog(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CPropertySheet::OnInitDialog(CPropertySheet *this)

{
  HWND pHVar1;
  int iVar2;
  ulong uVar3;
  uint local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xc4) == 0) {
    pHVar1 = GetDlgItem(*(HWND *)(this + 0x20),0x3020);
    if (pHVar1 != (HWND)0x0) {
      CWnd::ModifyStyle(pHVar1,0x200,0,0);
    }
  }
  if ((*(uint *)(this + 0x78) & 0x1000020) == 0) {
    pHVar1 = GetDlgItem(*(HWND *)(this + 0x20),0x3020);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(pHVar1,&local_18);
    CWnd::ScreenToClient((CWnd *)this,&local_18);
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0x20;
    MapDialogRect(*(HWND *)(this + 0x20),&local_28);
    if (local_28.bottom < local_18.bottom) {
      iVar2 = (local_18.bottom - local_18.top) - local_28.bottom;
      SetWindowPos(pHVar1,(HWND)0x0,0,0,local_18.right - local_18.left,local_28.bottom,0x16);
      local_2c = 0;
      do {
        pHVar1 = GetDlgItem(*(HWND *)(this + 0x20),*(int *)(&DAT_101626fc + local_2c));
        if (pHVar1 != (HWND)0x0) {
          GetWindowRect(pHVar1,&local_18);
          CWnd::ScreenToClient((CWnd *)this,&local_18);
          SetWindowPos(pHVar1,(HWND)0x0,local_18.left,local_18.top - iVar2,0,0,0x15);
        }
        local_2c = local_2c + 4;
      } while (local_2c < 0x10);
      GetWindowRect(*(HWND *)(this + 0x20),&local_18);
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,local_18.right - local_18.left,
                         (local_18.bottom - local_18.top) - iVar2,0x16);
    }
  }
  CWnd::Default((CWnd *)this);
  if ((*(int *)(this + 200) != 0) && ((*(uint *)(this + 0x78) & 0x1000020) == 0)) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_28);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    pHVar1 = GetDlgItem(*(HWND *)(this + 0x20),1);
    if (pHVar1 != (HWND)0x0) {
      GetWindowRect(pHVar1,&local_18);
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,local_28.right - local_28.left,
                         local_18.top - local_28.top,0x16);
    }
    local_2c = 0;
    do {
      pHVar1 = GetDlgItem(*(HWND *)(this + 0x20),*(int *)(&DAT_101626fc + local_2c));
      if (pHVar1 != (HWND)0x0) {
        ShowWindow(pHVar1,0);
        EnableWindow(pHVar1,0);
      }
      local_2c = local_2c + 4;
    } while (local_2c < 0x10);
  }
  uVar3 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar3 & 0x40000000) == 0) {
    CWnd::CenterWindow((CWnd *)this,(CWnd *)0x0);
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

