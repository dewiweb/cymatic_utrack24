// rea decompile_all
// name: CMFCImagePaintArea::SetBitmap
// address: 0x100e0d36
// body: available
// range: 0x100e0d36-0x100e0e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCImagePaintArea::SetBitmap(class CBitmap *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCImagePaintArea::SetBitmap(CMFCImagePaintArea *this,CBitmap *param_1)

{
  CGdiObject *this_00;
  int cWidth;
  HPEN pHVar1;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  *(CBitmap **)(this + 0xa0) = param_1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  if (param_1 == (CBitmap *)0x0) {
    *(undefined4 *)(this + 0x98) = 0;
    *(undefined4 *)(this + 0x9c) = 0;
  }
  else {
    GetObjectW(*(HANDLE *)(param_1 + 4),0x18,local_30);
    *(undefined4 *)(this + 0x98) = local_2c;
    *(undefined4 *)(this + 0x9c) = local_28;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    InflateRect(&local_18,-1,-1);
    this_00 = (CGdiObject *)(this + 0xcc);
    *(int *)(this + 0xbc) = (local_18.right - local_18.left) / *(int *)(this + 0x98);
    *(int *)(this + 0xc0) = (local_18.bottom - local_18.top) / *(int *)(this + 0x9c);
    if ((this_00 != (CGdiObject *)0x0) && (*(int *)(this + 0xd0) != 0)) {
      CGdiObject::DeleteObject(this_00);
    }
    cWidth = *(int *)(this + 0xbc);
    if (*(int *)(this + 0xc0) <= *(int *)(this + 0xbc)) {
      cWidth = *(int *)(this + 0xc0);
    }
    pHVar1 = CreatePen(0,cWidth,DAT_10166ac0);
    CMenu::Attach((CMenu *)this_00,(HMENU__ *)pHVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

