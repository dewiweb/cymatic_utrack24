// rea decompile_all
// name: CMFCBaseTabCtrl::OnLButtonDown
// address: 0x10094213
// body: available
// range: 0x10094213-0x100943b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCBaseTabCtrl::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCBaseTabCtrl::OnLButtonDown(CMFCBaseTabCtrl *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  POINT pt;
  BOOL BVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CWnd *this_00;
  bool bVar5;
  
  *(undefined4 *)(this + 0x1e4) = 0;
  CWnd::Default((CWnd *)this);
  pt.y = param_4;
  pt.x = param_3;
  BVar1 = PtInRect((RECT *)(this + 0x1f0),pt);
  if (BVar1 == 0) {
    iVar2 = (**(code **)(*(int *)this + 0x214))(&param_3);
    *(int *)(this + 0xf4) = iVar2;
    if (-1 < iVar2) {
      bVar5 = false;
      iVar3 = (**(code **)(*(int *)this + 0x2c8))();
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*(int *)this + 0x214))(&param_3);
        if ((iVar3 < 0) || (iVar3 == *(int *)(this + 0xa0))) {
          if ((iVar3 == *(int *)(this + 0xa0)) &&
             ((this_00 = (CWnd *)(**(code **)(*(int *)this + 0x1ac))(iVar3), this_00 != (CWnd *)0x0
              && (*(int *)(this_00 + 0x20) != 0)))) {
            CWnd::SetFocus(this_00);
          }
        }
        else {
          *(undefined4 *)(this + 0x1dc) = 0;
          *(int *)(this + 0x1d4) = *(int *)(this + 0xa0);
          *(undefined4 *)(this + 0x1e0) = 1;
          *(undefined4 *)(this + 0x200) = 1;
          iVar4 = (**(code **)(*(int *)this + 0x210))(iVar3);
          if (iVar4 == 0) {
            *(undefined4 *)(this + 0x1dc) = 1;
            *(undefined4 *)(this + 0x1e0) = 0;
            *(undefined4 *)(this + 0x200) = 0;
            *(undefined4 *)(this + 0x1e4) = 0;
            return;
          }
          *(undefined4 *)(this + 0x1e0) = 0;
          *(undefined4 *)(this + 0x200) = 0;
          if (*(int *)(this + 0x1dc) == 0) {
            (**(code **)(*(int *)this + 0x26c))(*(undefined4 *)(this + 0xa0));
          }
          *(undefined4 *)(this + 0x1dc) = 0;
        }
        iVar4 = (**(code **)(*(int *)this + 0x214))(&param_3);
        bVar5 = iVar3 != iVar4;
        *(undefined4 *)(this + 0xf4) = 0xffffffff;
        ReleaseCapture();
      }
      else {
        *(undefined4 *)(this + 0xf8) = *(undefined4 *)(this + 0xf4);
      }
      if (iVar2 != *(int *)(this + 0xa0)) {
        InvalidateTab(this,iVar2);
      }
      if ((!bVar5) && (*(int *)(this + 0x1e4) == 0)) {
        EnterDragMode(this);
      }
    }
    *(undefined4 *)(this + 0x1e4) = 0;
  }
  else {
    *(undefined4 *)(this + 0x1ec) = 1;
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)(this + 0x1f0),(HRGN)0x0,0x105);
  }
  return;
}

