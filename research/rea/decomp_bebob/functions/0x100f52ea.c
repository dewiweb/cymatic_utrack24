// rea decompile_all
// name: CMFCColorPickerCtrl::DrawLuminanceBar
// address: 0x100f52ea
// body: available
// range: 0x100f52ea-0x100f53aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCColorPickerCtrl::DrawLuminanceBar(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCColorPickerCtrl::DrawLuminanceBar(CMFCColorPickerCtrl *this,CDC *param_1)

{
  uint uVar1;
  LONG LVar2;
  double dVar3;
  double dVar4;
  undefined **local_30;
  HBRUSH local_2c;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  InflateRect(&local_18,0,-5);
  LVar2 = local_18.top;
  while (LVar2 <= local_18.bottom) {
    dVar4 = *(double *)(this + 0x80);
    dVar3 = LumFromPoint(this,LVar2);
    uVar1 = FUN_1009c879(*(double *)(this + 0x88),dVar3,dVar4);
    CBrush::CBrush((CBrush *)&local_30,uVar1);
    local_28.right = *(LONG *)(this + 0x98);
    local_28.left = 0;
    local_28.top = LVar2;
    local_28.bottom = LVar2 + 1;
    FillRect(*(HDC *)(param_1 + 4),&local_28,local_2c);
    local_30 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_30);
    LVar2 = LVar2 + 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

