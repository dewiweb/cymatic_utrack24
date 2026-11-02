// rea decompile_all
// name: FUN_10006200
// address: 0x10006200
// body: available
// range: 0x10006200-0x1000627c inclusive
// range: 0x10006280-0x100062d8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000624b to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100062b1 to 0x10009030 FUN_10009030 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100062b6 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_10006200(void *this,HMODULE param_1,uint param_2)

{
  wchar_t wVar1;
  HRSRC pHVar2;
  ushort *puVar3;
  rsize_t _N;
  wchar_t *pwVar4;
  errno_t eVar5;
  uint _N1;
  
  pHVar2 = FindResourceW(param_1,(LPCWSTR)((param_2 >> 4) + 1 & 0xffff),(LPCWSTR)0x6);
  if ((pHVar2 != (HRSRC)0x0) &&
     (puVar3 = (ushort *)FUN_10004e10(param_1,pHVar2,param_2), puVar3 != (ushort *)0x0)) {
    _N1 = (uint)*puVar3;
    if ((int)(1U - *(int *)(*(int *)this + -4) | *(int *)(*(int *)this + -8) - _N1) < 0) {
      FUN_10001f40(this,_N1);
    }
    _N = (rsize_t)*puVar3;
    if (_N == 0xffffffff) {
      pwVar4 = (wchar_t *)(puVar3 + 1);
      do {
        wVar1 = *pwVar4;
        pwVar4 = pwVar4 + 1;
      } while (wVar1 != L'\0');
      _N = ((int)pwVar4 - (int)(puVar3 + 2) >> 1) + 1;
    }
    eVar5 = _wmemcpy_s(*(wchar_t **)this,_N1,(wchar_t *)(puVar3 + 1),_N);
    switch(eVar5) {
    case 0:
    case 0x50:
      goto switchD_100062aa_caseD_0;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    case 0xc:
                    /* WARNING: Subroutine does not return */
      FUN_10009030();
    }
  }
  return 0;
switchD_100062aa_caseD_0:
  if (*(int *)(*(int *)this + -8) < (int)_N1) {
                    /* WARNING: Subroutine does not return */
    FUN_10001000((undefined4 *)0x80070057);
  }
  *(uint *)(*(int *)this + -0xc) = _N1;
  *(undefined2 *)(*(int *)this + _N1 * 2) = 0;
  return 1;
}

