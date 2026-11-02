// rea decompile_all
// name: FUN_10002180
// address: 0x10002180
// body: available
// range: 0x10002180-0x1000222c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100021ac to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100021c6 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10002180(void *this,void *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  rsize_t _DstSize;
  rsize_t _MaxCount;
  uint uVar3;
  
  if (param_2 == 0) {
    ATL::CSimpleStringT<wchar_t,0>::Empty(this);
    return;
  }
  if (param_1 != (void *)0x0) {
    iVar1 = *(int *)this;
    uVar2 = *(uint *)(iVar1 + -0xc);
    uVar3 = (int)param_1 - iVar1 >> 1;
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10001000((undefined4 *)0x80070057);
    }
    if ((int)(1U - *(int *)(iVar1 + -4) | *(int *)(iVar1 + -8) - param_2) < 0) {
      FUN_10001f40(this,param_2);
    }
    _Dst = *(void **)this;
    _MaxCount = param_2 * 2;
    _DstSize = *(int *)((int)_Dst + -8) * 2;
    if (uVar2 < uVar3) {
      _memcpy_s(_Dst,_DstSize,param_1,_MaxCount);
    }
    else {
      _memmove_s(_Dst,_DstSize,(void *)((int)_Dst + uVar3 * 2),_MaxCount);
    }
    if (param_2 <= *(int *)(*(int *)this + -8)) {
      *(int *)(*(int *)this + -0xc) = param_2;
      *(undefined2 *)(_MaxCount + *(int *)this) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10001000((undefined4 *)0x80070057);
}

