// rea decompile_all
// name: CMFCRibbonPanel::Highlight
// address: 0x100b2973
// body: available
// range: 0x100b2973-0x100b2b5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonPanel::Highlight(int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCRibbonPanel::Highlight(CMFCRibbonPanel *this,int param_1,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  CMFCRibbonBar *this_00;
  bool bVar2;
  bool bVar3;
  SHORT SVar4;
  int iVar5;
  CWnd *pCVar6;
  int *piVar7;
  RECT *lprcUpdate;
  HRGN hrgnUpdate;
  UINT flags;
  
  iVar1 = *(int *)(this + 0xc);
  SVar4 = GetAsyncKeyState(1);
  piVar7 = (int *)0x0;
  *(int *)(this + 0xc) = param_1;
  if (((param_1 != 0) &&
      (piVar7 = (int *)(**(code **)(*(int *)this + 0x14))(param_3,param_4,0), piVar7 != (int *)0x0))
     && ((-1 < SVar4 || (iVar5 = (**(code **)(*piVar7 + 0x34))(), iVar5 != 0)))) {
    (**(code **)(*piVar7 + 0x178))(param_3,param_4);
  }
  bVar2 = false;
  bVar3 = false;
  if (piVar7 != *(int **)(this + 0xb4)) {
    if (((*(int *)(this + 0xa8) != 0) &&
        (this_00 = *(CMFCRibbonBar **)(*(int *)(this + 0xa8) + 0x3c0),
        this_00 != (CMFCRibbonBar *)0x0)) && (piVar7 != (int *)0x0)) {
      CMFCRibbonBar::PopTooltip(this_00);
    }
    if (*(int *)(this + 0xac) != 0) {
      PopTooltip(*(int *)(this + 0xac));
    }
    if (*(int *)(this + 0xb4) != 0) {
      *(undefined4 *)(*(int *)(this + 0xb4) + 0x6c) = 0;
      (**(code **)(**(int **)(this + 0xb4) + 0x180))(0);
      if ((*(int *)(this + 0x1c) != 0) && (*(int *)(*(int *)(this + 0xb4) + 0x70) != 0)) {
        *(undefined4 *)(*(int *)(this + 0xb4) + 0x70) = 0;
        bVar3 = true;
        (**(code **)(**(int **)(this + 0xb4) + 0x184))(0);
      }
      (**(code **)(*(int *)this + 100))(*(undefined4 *)(this + 0xb4));
      *(undefined4 *)(this + 0xb4) = 0;
    }
    bVar2 = true;
  }
  if ((piVar7 != (int *)0x0) &&
     ((((*(int *)(this + 0x1c) != 0 || (-1 < SVar4)) ||
       (iVar5 = (**(code **)(*piVar7 + 0x34))(), iVar5 != 0)) &&
      (*(int **)(this + 0xb4) = piVar7, piVar7[0x1b] == 0)))) {
    (**(code **)(*piVar7 + 0x180))(1);
    *(undefined4 *)(*(int *)(this + 0xb4) + 0x6c) = 1;
    if (bVar3) {
      *(undefined4 *)(*(int *)(this + 0xb4) + 0x70) = 1;
      (**(code **)(**(int **)(this + 0xb4) + 0x184))(1);
    }
    (**(code **)(*(int *)this + 100))(*(undefined4 *)(this + 0xb4));
  }
  if (((iVar1 != param_1) && (*(int *)(this + 0xa8) != 0)) &&
     (pCVar6 = GetParentWnd(this), pCVar6 != (CWnd *)0x0)) {
    flags = 0x105;
    hrgnUpdate = (HRGN)0x0;
    lprcUpdate = (RECT *)(this + 0x6c);
    pCVar6 = GetParentWnd(this);
    RedrawWindow(*(HWND *)(pCVar6 + 0x20),lprcUpdate,hrgnUpdate,flags);
  }
  if ((*(int *)(this + 0x24) != 0) && (iVar1 != param_1)) {
    CMFCRibbonPanelMenuBar::SetActive
              (*(CMFCRibbonPanelMenuBar **)(this + 0xac),*(int *)(this + 0xc));
  }
  if ((bVar2) && (*(int **)(this + 0xac) != (int *)0x0)) {
    (**(code **)(**(int **)(this + 0xac) + 0x450))(*(undefined4 *)(this + 0xb4));
  }
  return;
}

