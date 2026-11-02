// rea decompile_all
// name: CMFCMaskedEdit::GetGroupBounds
// address: 0x1004cd8a
// body: available
// range: 0x1004cd8a-0x1004cf05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004cdf4 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __thiscall CMFCMaskedEdit::GetGroupBounds(int &,int &,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCMaskedEdit::GetGroupBounds
          (CMFCMaskedEdit *this,int *param_1,int *param_2,int param_3,int param_4)

{
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  this_00 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0x7c);
  iVar4 = *(int *)this_00;
  iVar1 = *(int *)(iVar4 + -0xc);
  if (iVar1 == 0) {
    *param_1 = 0;
    param_3 = *(int *)(*(int *)(this + 0x74) + -0xc);
  }
  else {
    if (param_4 != 0) {
      if (0 < param_3) {
        iVar3 = param_3 + -1;
        if ((iVar3 < 0) || (iVar1 < iVar3)) goto LAB_1004cdef;
        if (*(short *)(iVar4 + iVar3 * 2) == 0x5f) {
          psVar2 = (short *)(iVar4 + param_3 * 2);
          do {
            param_3 = param_3 + -1;
            psVar2 = psVar2 + -1;
            if (param_3 < 1) break;
            if (iVar1 < param_3) goto LAB_1004cdef;
          } while (*psVar2 == 0x5f);
        }
      }
      if (param_3 != iVar1) {
        if ((param_3 < 0) || (iVar1 < param_3)) goto LAB_1004cdef;
        if ((*(short *)(iVar4 + param_3 * 2) == 0x5f) ||
           (param_3 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                                (this_00,L'_',param_3), param_3 != -1)) {
          *param_1 = param_3;
          iVar4 = *(int *)(*(int *)this_00 + -0xc);
          if (param_3 < iVar4) {
            psVar2 = (short *)(*(int *)this_00 + param_3 * 2);
            do {
              if ((param_3 < 0) || (iVar4 < param_3)) goto LAB_1004cdef;
              if (*psVar2 != 0x5f) break;
              param_3 = param_3 + 1;
              psVar2 = psVar2 + 1;
            } while (param_3 < iVar4);
          }
          goto LAB_1004cefd;
        }
      }
      *param_1 = -1;
      *param_2 = 0;
      return;
    }
    if (param_3 < *(int *)(*(int *)(this + 0x74) + -0xc)) {
      psVar2 = (short *)(iVar4 + param_3 * 2);
      do {
        if ((param_3 < 0) || (iVar1 < param_3)) goto LAB_1004cdef;
        if (*psVar2 != 0x5f) break;
        param_3 = param_3 + 1;
        psVar2 = psVar2 + 1;
      } while (param_3 < *(int *)(*(int *)(this + 0x74) + -0xc));
    }
    if (param_3 == 0) {
LAB_1004ce72:
      *param_1 = -1;
      *param_2 = 0;
      return;
    }
    iVar3 = param_3 + -1;
    if ((iVar3 < 0) || (iVar1 < iVar3)) {
LAB_1004cdef:
                    /* WARNING: Subroutine does not return */
      FUN_10001000((undefined4 *)0x80070057);
    }
    if (*(short *)(iVar4 + iVar3 * 2) != 0x5f) {
      psVar2 = (short *)(iVar4 + -2 + param_3 * 2);
      do {
        param_3 = param_3 + -1;
        psVar2 = psVar2 + -1;
        iVar3 = iVar3 + -1;
        if (param_3 < 1) break;
        if ((iVar3 < 0) || (iVar1 < iVar3)) goto LAB_1004cdef;
      } while (*psVar2 != 0x5f);
      if (param_3 == 0) goto LAB_1004ce72;
    }
    *param_2 = param_3;
    iVar4 = param_3 + -1;
    do {
      param_3 = param_3 + -1;
      iVar4 = iVar4 + -1;
      param_2 = param_1;
      if (param_3 < 1) break;
      if ((iVar4 < 0) || (*(int *)(*(int *)this_00 + -0xc) < iVar4)) goto LAB_1004cdef;
    } while (*(short *)(*(int *)this_00 + -2 + param_3 * 2) == 0x5f);
  }
LAB_1004cefd:
  *param_2 = param_3;
  return;
}

