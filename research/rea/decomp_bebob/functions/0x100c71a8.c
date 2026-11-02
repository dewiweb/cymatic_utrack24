// rea decompile_all
// name: CMultiPaneFrameWnd::OnPaneRecalcLayout
// address: 0x100c71a8
// body: available
// range: 0x100c71a8-0x100c72ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMultiPaneFrameWnd::OnPaneRecalcLayout(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMultiPaneFrameWnd::OnPaneRecalcLayout(CMultiPaneFrameWnd *this)

{
  int iVar1;
  int iVar2;
  HDWP local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  local_3c = BeginDeferWindowPos(0x14);
  (**(code **)(*(int *)(this + 0x180) + 0x38))
            (local_18.left,local_18.top,local_18.right,local_18.bottom,&local_3c);
  EndDeferWindowPos(local_3c);
  if (DAT_101689e0 != 0) {
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    (**(code **)(*(int *)(this + 0x180) + 0x2c))(&local_38);
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_28);
    iVar1 = ((local_30 - local_18.right) - local_38) + local_18.left;
    iVar2 = ((local_2c - local_34) - local_18.bottom) + local_18.top;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if ((iVar1 != 0) || (iVar2 != 0)) {
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,-1,-1,(local_28.right - local_28.left) + iVar1,
                         (local_28.bottom - local_28.top) + iVar2,0x16);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

