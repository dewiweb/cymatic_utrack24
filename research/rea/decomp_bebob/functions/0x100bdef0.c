// rea decompile_all
// name: CMFCCaptionBar::OnMouseMove
// address: 0x100bdef0
// body: available
// range: 0x100bdef0-0x100bdffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCCaptionBar::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCCaptionBar::OnMouseMove(CMFCCaptionBar *this,uint param_1,LONG param_3,LONG param_4)

{
  RECT *lprc;
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  CPane::OnMouseMove((CPane *)this,param_1,param_3,param_4);
  if ((*(int *)(this + 0x438) != 0) && (*(int *)(this + 0x460) != 0)) {
    pt.y = param_4;
    pt.x = param_3;
    BVar1 = PtInRect((RECT *)(this + 0x440),pt);
    if (*(int *)(this + 0x454) != BVar1) {
      *(BOOL *)(this + 0x454) = BVar1;
      if (((param_1 & 1) == 0) || (BVar1 == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(undefined4 *)(this + 0x450) = uVar2;
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0x440),1);
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  lprc = (RECT *)(this + 0x48c);
  BVar1 = IsRectEmpty(lprc);
  if (BVar1 == 0) {
    pt_00.y = param_4;
    pt_00.x = param_3;
    BVar1 = PtInRect(lprc,pt_00);
    if (*(int *)(this + 0x484) != BVar1) {
      *(BOOL *)(this + 0x484) = BVar1;
      if (((param_1 & 1) == 0) || (BVar1 == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(undefined4 *)(this + 0x480) = uVar2;
      InvalidateRect(*(HWND *)(this + 0x20),lprc,1);
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  if (*(int *)(this + 0x45c) == 0) {
    local_c = *(undefined4 *)(this + 0x20);
    local_8 = 0xffffffff;
    *(undefined4 *)(this + 0x45c) = 1;
    local_14 = 0x10;
    local_10 = 2;
    AFXTrackMouse((tagTRACKMOUSEEVENT *)&local_14);
  }
  return;
}

