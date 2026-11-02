// rea decompile_all
// name: CMFCPropertyGridCtrl::OnLButtonUp
// address: 0x10049000
// body: available
// range: 0x10049000-0x100491b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCPropertyGridCtrl::OnLButtonUp
          (CMFCPropertyGridCtrl *this,undefined4 param_1,int param_3,int param_4)

{
  HWND pHVar1;
  HWND pHVar2;
  int iVar3;
  int iVar4;
  undefined4 local_4c;
  int local_48;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  CWnd::Default((CWnd *)this);
  if (*(int *)(this + 0x348) != 0) {
    TrackHeader(this,-1);
    pHVar1 = *(HWND *)(this + 0x20);
    *(undefined4 *)(this + 0x348) = 0;
    pHVar2 = GetCapture();
    if (pHVar2 == pHVar1) {
      ReleaseCapture();
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    local_1c = *(int *)(this + 0x314);
    if (local_1c <= param_3) {
      local_1c = param_3;
    }
    iVar4 = local_18.right - local_18.left;
    iVar3 = GetSystemMetrics(0x15);
    if (local_1c < (iVar4 - iVar3) + -5) {
      local_48 = *(int *)(this + 0x314);
      if (*(int *)(this + 0x314) <= param_3) {
        local_48 = param_3;
      }
    }
    else {
      iVar4 = local_18.right - local_18.left;
      iVar3 = GetSystemMetrics(0x15);
      local_48 = (iVar4 - iVar3) + -5;
    }
    *(int *)(this + 0x318) = local_48;
    local_48 = local_48 + 2;
    local_4c = 1;
    iVar3 = (**(code **)(*(int *)this + 0x160))();
    SendMessageW(*(HWND *)(iVar3 + 0x20),0x120c,0,(LPARAM)&local_4c);
    local_48 = (local_18.right - local_18.left) + 10;
    iVar3 = (**(code **)(*(int *)this + 0x160))();
    SendMessageW(*(HWND *)(iVar3 + 0x20),0x120c,1,(LPARAM)&local_4c);
  }
  if (*(int *)(this + 0x34c) != 0) {
    TrackDescr(this,-0x80000000);
    pHVar1 = *(HWND *)(this + 0x20);
    *(undefined4 *)(this + 0x34c) = 0;
    pHVar2 = GetCapture();
    if (pHVar2 == pHVar1) {
      ReleaseCapture();
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    iVar3 = *(int *)(this + 0x314);
    if (param_4 <= *(int *)(this + 0x310) + iVar3) {
      param_4 = *(int *)(this + 0x310) + iVar3;
    }
    iVar4 = ((local_18.bottom - local_18.top) - param_4) + 2;
    *(int *)(this + 0x2f8) = iVar4;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    *(int *)(this + 0x2f8) = iVar3;
    (**(code **)(*(int *)this + 0x16c))();
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

