// rea decompile_all
// name: CRibbonCategoryScroll::OnMouseMove
// address: 0x100aaeeb
// body: available
// range: 0x100aaeeb-0x100aaf55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: virtual void __thiscall CRibbonCategoryScroll::OnMouseMove(class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CRibbonCategoryScroll::OnMouseMove(CRibbonCategoryScroll *this,LONG param_2,LONG param_3)

{
  int iVar1;
  CMFCRibbonBar *this_00;
  POINT pt;
  BOOL BVar2;
  
  BVar2 = IsRectEmpty((RECT *)(this + 0x18));
  if (BVar2 == 0) {
    iVar1 = *(int *)(this + 0x6c);
    pt.y = param_3;
    pt.x = param_2;
    BVar2 = PtInRect((RECT *)(this + 0x18),pt);
    *(BOOL *)(this + 0x6c) = BVar2;
    if (iVar1 != BVar2) {
      iVar1 = *(int *)(*(int *)(this + 0x2c) + 0x3c4);
      if (iVar1 == 0) {
        this_00 = *(CMFCRibbonBar **)(*(int *)(this + 0x2c) + 0x3c0);
        if (this_00 != (CMFCRibbonBar *)0x0) {
          CMFCRibbonBar::PopTooltip(this_00);
        }
      }
      else {
        PopTooltip(iVar1);
      }
      (**(code **)(*(int *)this + 0x118))();
    }
  }
  else {
    *(undefined4 *)(this + 0x6c) = 0;
  }
  return;
}

