// rea decompile_all
// name: CMFCRibbonPanel::HitTest
// address: 0x100b370f
// body: available
// range: 0x100b370f-0x100b37d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b37c4 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CMFCRibbonBaseElement * __thiscall CMFCRibbonPanel::HitTest(class
   CPoint,int)
   
   Library: Visual Studio 2010 Release */

CMFCRibbonBaseElement * __thiscall
CMFCRibbonPanel::HitTest(CMFCRibbonPanel *this,LONG param_2,LONG param_3,int param_4)

{
  int *piVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  BOOL BVar2;
  CMFCRibbonBaseElement *pCVar3;
  int iVar4;
  
  BVar2 = IsRectEmpty((RECT *)(this + 0xd0));
  if ((BVar2 == 0) &&
     (pt_01.y = param_3, pt_01.x = param_2, BVar2 = PtInRect((RECT *)(this + 0xd0),pt_01),
     BVar2 != 0)) {
    pCVar3 = (CMFCRibbonBaseElement *)(this + 0xb8);
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)(this + 0x25c)) {
      do {
        if ((iVar4 < 0) || (*(int *)(this + 0x25c) <= iVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        piVar1 = *(int **)(*(int *)(this + 600) + iVar4 * 4);
        BVar2 = IsRectEmpty((RECT *)(piVar1 + 6));
        if ((BVar2 == 0) &&
           (pt.y = param_3, pt.x = param_2, BVar2 = PtInRect((RECT *)(piVar1 + 6),pt), BVar2 != 0))
        {
          pCVar3 = (CMFCRibbonBaseElement *)(**(code **)(*piVar1 + 0x88))(param_2,param_3);
          return pCVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this + 0x25c));
    }
    if ((param_4 == 0) ||
       (pt_00.y = param_3, pt_00.x = param_2, BVar2 = PtInRect((RECT *)(this + 0x5c),pt_00),
       BVar2 == 0)) {
      pCVar3 = (CMFCRibbonBaseElement *)0x0;
    }
    else {
      pCVar3 = (CMFCRibbonBaseElement *)(this + 0xb8);
    }
  }
  return pCVar3;
}

