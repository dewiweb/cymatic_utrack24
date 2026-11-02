// rea decompile_all
// name: CMFCListCtrl::OnEraseBkgnd
// address: 0x100cc9b2
// body: available
// range: 0x100cc9b2-0x100ccaaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCListCtrl::OnEraseBkgnd(class CDC *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCListCtrl::OnEraseBkgnd(CMFCListCtrl *this,CDC *param_1)

{
  WPARAM wParam;
  int iVar1;
  undefined **local_40;
  HBRUSH local_3c;
  RECT local_38;
  tagRECT local_28;
  tagPOINT local_18;
  LONG local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  CWnd::Default((CWnd *)this);
  if ((-1 < *(int *)(this + 0x124)) && (*(int *)(this + 300) != 0)) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_28);
    local_18.x = 0;
    local_18.y = 0;
    local_10 = 0;
    local_c = 0;
    wParam = *(WPARAM *)(this + 0x124);
    iVar1 = (**(code **)(*(int *)this + 0x164))();
    SendMessageW(*(HWND *)(iVar1 + 0x20),0x1207,wParam,(LPARAM)&local_18);
    iVar1 = (**(code **)(*(int *)this + 0x164))();
    MapWindowPoints(*(HWND *)(iVar1 + 0x20),*(HWND *)(this + 0x20),&local_18,2);
    local_38.top = local_28.top;
    local_38.bottom = local_28.bottom;
    local_38.left = local_18.x;
    local_38.right = local_10;
    CBrush::CBrush((CBrush *)&local_40,*(ulong *)(this + 0x120));
    FillRect(*(HDC *)(param_1 + 4),&local_38,local_3c);
    local_40 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_40);
  }
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

