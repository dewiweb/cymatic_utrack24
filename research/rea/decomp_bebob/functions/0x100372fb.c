// rea decompile_all
// name: CKeyboardManager::IsKeyHandled
// address: 0x100372fb
// body: available
// range: 0x100372fb-0x10037386 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003734e to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static int __stdcall CKeyboardManager::IsKeyHandled(unsigned short,unsigned char,class
   CFrameWnd *,int)
   
   Library: Visual Studio 2010 Release */

int CKeyboardManager::IsKeyHandled(ushort param_1,uchar param_2,CFrameWnd *param_3,int param_4)

{
  HACCEL__ *pHVar1;
  tagACCEL *ptVar2;
  HACCEL__ **ppHVar3;
  int iVar4;
  tagACCEL **pptVar5;
  int *piVar6;
  
  if ((param_3 != (CFrameWnd *)0x0) &&
     (pHVar1 = (HACCEL__ *)(**(code **)(*(int *)param_3 + 0x1a4))(), pHVar1 != (HACCEL__ *)0x0)) {
    piVar6 = (int *)&DAT_10167898;
    if (param_4 == 0) {
      piVar6 = &DAT_1016789c;
    }
    pptVar5 = (tagACCEL **)&DAT_10167894;
    if (param_4 == 0) {
      pptVar5 = (tagACCEL **)&DAT_10167890;
      ppHVar3 = (HACCEL__ **)&DAT_101678a4;
    }
    else {
      ppHVar3 = (HACCEL__ **)&DAT_101678a0;
    }
    SetAccelTable(pptVar5,ppHVar3,piVar6,pHVar1);
    ptVar2 = *pptVar5;
    if (ptVar2 == (tagACCEL *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    iVar4 = 0;
    if (0 < *piVar6) {
      do {
        if ((ptVar2->key == param_1) && (ptVar2->fVirt == param_2)) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        ptVar2 = ptVar2 + 1;
      } while (iVar4 < *piVar6);
    }
  }
  return 0;
}

