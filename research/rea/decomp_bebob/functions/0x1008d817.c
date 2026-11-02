// rea decompile_all
// name: CDockingPanesRow::AddPaneFromRow
// address: 0x1008d817
// body: available
// range: 0x1008d817-0x1008d991 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingPanesRow::AddPaneFromRow(class CPane *,enum
   AFX_DOCK_METHOD)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDockingPanesRow::AddPaneFromRow(CDockingPanesRow *this,CPane *param_1,AFX_DOCK_METHOD param_2)

{
  int iVar1;
  LONG yTop;
  int iVar2;
  int xRight;
  tagPOINT local_44;
  uint local_3c;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  ::GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
  if (param_2 == 1) {
    local_44.x = 0;
    local_44.y = 0;
    GetCursorPos(&local_44);
    ScreenToClient(*(HWND *)(*(int *)(this + 0x44) + 0x20),&local_44);
    iVar1 = *(int *)(param_1 + 0x158);
    iVar2 = *(int *)(param_1 + 0x15c);
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    ::GetClientRect(*(HWND *)(param_1 + 0x20),&local_38);
    CWnd::ClientToScreen((CWnd *)param_1,&local_38);
    local_3c = *(uint *)(this + 0x40) & 0x2000;
    if ((local_3c == 0) && ((*(uint *)(this + 0x40) & 0x8000) == 0)) {
      iVar1 = local_44.y - iVar2;
    }
    else {
      iVar1 = local_44.x - iVar1;
    }
    yTop = iVar1 - (local_38.left - local_18.left);
  }
  else {
    CWnd::ScreenToClient(*(CWnd **)(this + 0x44),&local_18);
    local_3c = *(uint *)(this + 0x40) & 0x2000;
    if ((local_3c != 0) || (yTop = local_18.top, (*(uint *)(this + 0x40) & 0x8000) != 0)) {
      yTop = local_18.left;
    }
  }
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  if ((local_3c == 0) && ((*(uint *)(this + 0x40) & 0x8000) == 0)) {
    iVar1 = *(int *)(this + 0x18);
    iVar2 = (local_18.bottom - local_18.top) + yTop;
    xRight = (iVar1 - local_18.left) + local_18.right;
  }
  else {
    iVar2 = (*(int *)(this + 0x18) - local_18.top) + local_18.bottom;
    xRight = (local_18.right - local_18.left) + yTop;
    iVar1 = yTop;
    yTop = *(int *)(this + 0x18);
  }
  SetRect(&local_28,iVar1,yTop,xRight,iVar2);
  (**(code **)(*(int *)param_1 + 0x234))
            (0,local_28.left,local_28.top,local_28.right,local_28.bottom,0x15,0);
  (**(code **)(*(int *)this + 100))(param_1);
  CPane::UpdateVirtualRect(param_1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

