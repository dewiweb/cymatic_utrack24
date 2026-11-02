// rea decompile_all
// name: CMFCToolBar::OnCtlColor
// address: 0x10028e48
// body: available
// range: 0x10028e48-0x10028ec8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10028ea9 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: struct HBRUSH__ * __thiscall CMFCToolBar::OnCtlColor(class CDC *,class CWnd
   *,unsigned int)
   
   Library: Visual Studio 2010 Release */

HBRUSH__ * __thiscall
CMFCToolBar::OnCtlColor(CMFCToolBar *this,CDC *param_1,CWnd *param_2,uint param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  HBRUSH__ *pHVar3;
  undefined4 uVar4;
  int iVar5;
  HBRUSH__ *pHVar6;
  undefined4 *puVar7;
  
  pHVar3 = CWnd::OnCtlColor((CWnd *)this,param_1,param_2,param_3);
  pHVar6 = pHVar3;
  if ((DAT_10166e54 != 0) && (*(int *)(this + 0xb04) == 0)) {
    puVar7 = *(undefined4 **)(this + 0xbcc);
    do {
      if (puVar7 == (undefined4 *)0x0) goto LAB_10028ebf;
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = (undefined4 *)*puVar7;
      piVar2 = (int *)puVar7[2];
      if (param_2 == (CWnd *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_2 + 0x20);
      }
      iVar5 = (**(code **)(*piVar2 + 0xa0))(uVar4);
      puVar7 = puVar1;
    } while (iVar5 == 0);
    pHVar6 = (HBRUSH__ *)(**(code **)(*piVar2 + 0x48))(param_1,param_3);
    if (pHVar6 == (HBRUSH__ *)0x0) {
LAB_10028ebf:
      pHVar6 = pHVar3;
    }
  }
  return pHVar6;
}

