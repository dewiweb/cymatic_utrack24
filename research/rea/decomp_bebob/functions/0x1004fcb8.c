// rea decompile_all
// name: CMFCEditBrowseCtrl::OnMouseMove
// address: 0x1004fcb8
// body: available
// range: 0x1004fcb8-0x1004fd39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCEditBrowseCtrl::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCEditBrowseCtrl::OnMouseMove
          (CMFCEditBrowseCtrl *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  
  if (*(int *)(this + 0x80) == 0) {
    if (*(int *)(this + 0x7c) != 0) {
      pt_00.y = param_4;
      pt_00.x = param_3;
      BVar1 = PtInRect((RECT *)(this + 0x88),pt_00);
      if (BVar1 == 0) {
        *(undefined4 *)(this + 0x7c) = 0;
        ReleaseCapture();
        RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x401);
      }
    }
    CWnd::Default((CWnd *)this);
  }
  else {
    pt.y = param_4;
    pt.x = param_3;
    BVar1 = PtInRect((RECT *)(this + 0x88),pt);
    if (BVar1 != *(int *)(this + 0x78)) {
      *(BOOL *)(this + 0x78) = BVar1;
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x401);
    }
  }
  return;
}

