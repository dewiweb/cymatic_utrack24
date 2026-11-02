// rea decompile_all
// name: CKeyboardManager::FindDefaultAccelerator
// address: 0x100375d2
// body: available
// range: 0x100375d2-0x10037711 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037640 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static int __stdcall CKeyboardManager::FindDefaultAccelerator(unsigned int,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &,class
   CFrameWnd *,int)
   
   Library: Visual Studio 2010 Release */

int CKeyboardManager::FindDefaultAccelerator
              (uint param_1,
              CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2,
              CFrameWnd *param_3,int param_4)

{
  HACCEL__ *pHVar1;
  undefined **ppuVar2;
  HACCEL__ **ppHVar3;
  tagACCEL **pptVar4;
  int iVar5;
  CMFCAcceleratorKey local_20 [8];
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x100375de;
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)param_2);
  if ((param_3 == (CFrameWnd *)0x0) ||
     (pHVar1 = (HACCEL__ *)(**(code **)(*(int *)param_3 + 0x1a4))(), pHVar1 == (HACCEL__ *)0x0)) {
    local_18 = 0;
  }
  else {
    param_3 = (CFrameWnd *)&DAT_10167898;
    if (param_4 == 0) {
      param_3 = (CFrameWnd *)&DAT_1016789c;
      pptVar4 = (tagACCEL **)&DAT_10167890;
    }
    else {
      pptVar4 = (tagACCEL **)&DAT_10167894;
    }
    ppHVar3 = (HACCEL__ **)&DAT_101678a0;
    if (param_4 == 0) {
      ppHVar3 = (HACCEL__ **)&DAT_101678a4;
    }
    SetAccelTable(pptVar4,ppHVar3,(int *)param_3,pHVar1);
    if (*pptVar4 == (tagACCEL *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    local_18 = 0;
    local_14 = 0;
    if (0 < *(int *)param_3) {
      iVar5 = 0;
      do {
        if (((tagACCEL *)(&(*pptVar4)->fVirt + iVar5))->cmd == param_1) {
          local_18 = 1;
          CMFCAcceleratorKey::CMFCAcceleratorKey(local_20,(tagACCEL *)(&(*pptVar4)->fVirt + iVar5));
          local_8 = 0;
          ppuVar2 = FUN_1000ad47();
          FUN_10005e00(&param_4,(int *)ppuVar2);
          local_8 = CONCAT31(local_8._1_3_,1);
          CMFCAcceleratorKey::Format
                    (local_20,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &param_4);
          if (*(int *)(*(int *)param_2 + -0xc) != 0) {
            ATL::CSimpleStringT<wchar_t,0>::Append
                      ((CSimpleStringT<wchar_t,0> *)param_2,DAT_101678b4,*(int *)(DAT_101678b4 + -6)
                      );
          }
          ATL::CSimpleStringT<wchar_t,0>::Append
                    ((CSimpleStringT<wchar_t,0> *)param_2,(wchar_t *)param_4,
                     *(int *)(param_4 + -0xc));
          if (DAT_101678a8 == 0) {
            FUN_10001030((undefined4 *)(param_4 + -0x10));
            local_8 = 0xffffffff;
            FUN_100c185e((undefined4 *)local_20);
            return local_18;
          }
          FUN_10001030((undefined4 *)(param_4 + -0x10));
          local_8 = 0xffffffff;
          FUN_100c185e((undefined4 *)local_20);
        }
        local_14 = local_14 + 1;
        iVar5 = iVar5 + 6;
      } while (local_14 < *(int *)param_3);
    }
  }
  return local_18;
}

