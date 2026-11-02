// rea decompile_all
// name: CPropertyPage::MapWizardResult
// address: 0x100d6787
// body: available
// range: 0x100d6787-0x100d67fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    protected: long __thiscall CPropertyPage::MapWizardResult(long)
   
   Library: Visual Studio 2010 Release */

long __thiscall CPropertyPage::MapWizardResult(CPropertyPage *this,long param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  CObject *this_00;
  CPropertyPage *pCVar3;
  int iVar4;
  int *piVar5;
  
  if ((param_1 != -1) && (iVar4 = 0, param_1 != 0)) {
    pHVar1 = GetParent(*(HWND *)(this + 0x20));
    pCVar2 = CWnd::FromHandle(pHVar1);
    this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPropertySheet_10138ac8,(CObject *)pCVar2);
    if ((this_00 != (CObject *)0x0) &&
       (piVar5 = *(int **)(this_00 + 0x94), 0 < *(int *)(this_00 + 0xb0))) {
      do {
        pCVar3 = CPropertySheet::GetPage((CPropertySheet *)this_00,iVar4);
        if (*(int *)(*(int *)(pCVar3 + 0x94) + 0xc) == param_1) {
          return piVar5[3];
        }
        piVar5 = (int *)((int)piVar5 + *piVar5);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this_00 + 0xb0));
    }
  }
  return param_1;
}

