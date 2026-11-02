// rea decompile_all
// name: CMFCToolBar::OnHelpHitTest
// address: 0x1002c5a4
// body: available
// range: 0x1002c5a4-0x1002c660 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMFCToolBar::OnHelpHitTest(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall CMFCToolBar::OnHelpHitTest(CMFCToolBar *this,uint param_1,long param_2)

{
  int iVar1;
  CObject *pCVar2;
  long lVar3;
  
  FUN_1002809e((CPane *)this);
  iVar1 = (**(code **)(*(int *)this + 0x390))
                    ((int)(short)param_2,(int)(short)((uint)param_2 >> 0x10));
  if (iVar1 < 0) {
    MessageBeep(0xffffffff);
  }
  else {
    pCVar2 = (CObject *)FUN_100261ef(this,iVar1);
    if ((pCVar2 != (CObject *)0x0) &&
       (iVar1 = (**(code **)(*(int *)pCVar2 + 100))(this), iVar1 == 0)) {
      lVar3 = CBasePane::OnHelpHitTest((CBasePane *)this,param_1,param_2);
      if (*(int *)(pCVar2 + 0x20) - 0xf000U < 0x1f0) {
        lVar3 = (*(int *)(pCVar2 + 0x20) - 0xf000U >> 4) + 0x1ef00;
      }
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButtonsButton_1012ec78,
                                  pCVar2);
      if (pCVar2 != (CObject *)0x0) {
        lVar3 = (*(int *)(pCVar2 + 0x70) - 0xf000U >> 4) + 0x1ef00;
      }
      if (lVar3 < 1) {
        return lVar3;
      }
      FUN_1002bb68(0);
      return lVar3;
    }
  }
  return -1;
}

