// rea decompile_all
// name: CMFCButton::OnMouseMove
// address: 0x1005252d
// body: available
// range: 0x1005252d-0x1005266c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCButton::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCButton::OnMouseMove(CMFCButton *this,uint param_1,LONG param_3,LONG param_4)

{
  POINT pt;
  BOOL BVar1;
  HWND pHVar2;
  bool bVar3;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  param_1 = param_1 & 1;
  *(undefined4 *)(this + 0xb0) = 0;
  if (((param_1 == 0) && (*(int *)(this + 0x74) == 0)) &&
     ((DAT_10168378 == 0 || (*(int *)(this + 0x98) != 0)))) goto LAB_10052655;
  bVar3 = false;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  pt.y = param_4;
  pt.x = param_3;
  BVar1 = PtInRect(&local_18,pt);
  if (BVar1 == 0) {
    if (param_1 == 0) {
      if (*(int *)(this + 0xa8) != 0) {
        *(undefined4 *)(this + 0xa8) = 0;
        goto LAB_1005261d;
      }
    }
    else if (*(int *)(this + 0xa0) != 0) {
      *(undefined4 *)(this + 0xa0) = 0;
LAB_1005261d:
      bVar3 = true;
    }
    if ((*(int *)(this + 0xac) != 0) && (param_1 == 0)) {
      ReleaseCapture();
      *(undefined4 *)(this + 0xac) = 0;
      goto LAB_10052639;
    }
  }
  else {
    *(undefined4 *)(this + 0xb0) = 1;
    bVar3 = *(int *)(this + 0xa8) == 0;
    if (bVar3) {
      *(undefined4 *)(this + 0xa8) = 1;
    }
    if (((param_1 != 0) && (*(int *)(this + 0xa0) == 0)) && (*(int *)(this + 0xa4) != 0)) {
      *(undefined4 *)(this + 0xa0) = 1;
      bVar3 = true;
    }
    if (*(int *)(this + 0xac) == 0) {
      pHVar2 = SetCapture(*(HWND *)(this + 0x20));
      CWnd::FromHandle(pHVar2);
      *(undefined4 *)(this + 0xac) = 1;
LAB_10052639:
      bVar3 = true;
    }
  }
  if (bVar3) {
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(this + 0x20));
  }
LAB_10052655:
  CWnd::Default((CWnd *)this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

