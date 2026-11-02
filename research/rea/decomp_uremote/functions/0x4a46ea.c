// rea decompile_all
// name: FUN_004a46ea
// address: 0x4a46ea
// body: available
// range: 0x4a46ea-0x4a47be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a46ea(int param_1,HDC param_2,float param_3)

{
  DWORD _Count;
  int *piVar1;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  int local_18;
  LPKERNINGPAIR local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_14 = (LPKERNINGPAIR)0x0;
  local_8 = 0;
  _Count = GetKerningPairsW(param_2,0,(LPKERNINGPAIR)0x0);
  _free((void *)0x0);
  local_14 = _calloc(_Count,8);
  GetKerningPairsW(param_2,_Count,local_14);
  FUN_004a8ced();
  if (_Count != 0) {
    piVar1 = &local_14->iKernAmount;
    do {
      local_24 = FUN_004a47bf(param_2,((tagKERNINGPAIR *)(piVar1 + -1))->wFirst);
      local_20 = FUN_004a47bf(param_2,*(WORD *)((int)piVar1 + -2));
      local_18 = FUN_004a4804(param_2,local_24);
      local_1c = (float)(*piVar1 + local_18) / param_3;
      FUN_004a6b3f(param_1 + 0x88,&local_24);
      local_20 = 0xffffffff;
      local_1c = (float)local_18 / param_3;
      FUN_004a6b3f(param_1 + 0x88,&local_24);
      piVar1 = piVar1 + 2;
      _Count = _Count - 1;
    } while (_Count != 0);
  }
  local_8 = 0xffffffff;
  _free(local_14);
  return;
}

