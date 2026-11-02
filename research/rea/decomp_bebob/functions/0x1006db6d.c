// rea decompile_all
// name: CMFCRibbonBar::SetPrintPreviewMode
// address: 0x1006db6d
// body: available
// range: 0x1006db6d-0x1006dcdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006dc59 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonBar::SetPrintPreviewMode(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonBar::SetPrintPreviewMode(CMFCRibbonBar *this,int param_1)

{
  int iVar1;
  CMFCRibbonCategory *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_EDX;
  int iVar5;
  
  if (*(int *)(this + 0x2dc) != 0) {
    *(int *)(this + 0x2f0) = param_1;
    if (param_1 == 0) {
      iVar5 = 0;
      if (0 < *(int *)(this + 0x764)) {
        do {
          if ((iVar5 < 0) || (*(int *)(this + 0x764) <= iVar5)) goto LAB_1006dc59;
          ShowCategory(this,*(int *)(*(int *)(this + 0x760) + iVar5 * 4),1);
          iVar5 = extraout_EDX + 1;
        } while (iVar5 < *(int *)(this + 0x764));
      }
      CArray<int,int>::SetSize((CArray<int,int> *)(this + 0x75c),0,-1);
      *(undefined4 *)(*(int *)(this + 0x71c) + 0xc) = 0;
      this_00 = *(CMFCRibbonCategory **)(this + 0x714);
      *(CMFCRibbonCategory **)(this + 0x710) = this_00;
      if (this_00 != (CMFCRibbonCategory *)0x0) {
        CMFCRibbonCategory::SetActive(this_00,1);
      }
    }
    else {
      iVar5 = *(int *)this;
      uVar2 = FUN_100ab3c5(*(void **)(this + 0x71c),2);
      uVar3 = FUN_100ab3c5(*(void **)(this + 0x71c),1);
      uVar4 = FUN_100ab3c5(*(void **)(this + 0x71c),0);
      (**(code **)(iVar5 + 0x35c))(uVar4,uVar3,uVar2);
      CArray<int,int>::SetSize((CArray<int,int> *)(this + 0x75c),0,-1);
      iVar5 = 0;
      if (0 < *(int *)(this + 0x73c)) {
        do {
          if ((iVar5 < 0) || (*(int *)(this + 0x73c) <= iVar5)) {
LAB_1006dc59:
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          iVar1 = *(int *)(*(int *)(this + 0x738) + iVar5 * 4);
          if (*(int *)(iVar1 + 0xc) != 0) {
            CArray<int,int>::SetAtGrow
                      ((CArray<int,int> *)(this + 0x75c),*(int *)(this + 0x764),iVar5);
            *(undefined4 *)(iVar1 + 0xc) = 0;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(this + 0x73c));
      }
      *(undefined4 *)(*(int *)(this + 0x71c) + 0xc) = 1;
      if (*(CMFCRibbonCategory **)(this + 0x710) != (CMFCRibbonCategory *)0x0) {
        CMFCRibbonCategory::SetActive(*(CMFCRibbonCategory **)(this + 0x710),0);
      }
      *(undefined4 *)(this + 0x714) = *(undefined4 *)(this + 0x710);
      *(CMFCRibbonCategory **)(this + 0x710) = *(CMFCRibbonCategory **)(this + 0x71c);
      CMFCRibbonCategory::SetActive(*(CMFCRibbonCategory **)(this + 0x71c),1);
    }
    (**(code **)(*(int *)this + 0x20c))();
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  return;
}

