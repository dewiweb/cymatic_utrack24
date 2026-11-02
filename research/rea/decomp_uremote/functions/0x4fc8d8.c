// rea decompile_all
// name: FUN_004fc8d8
// address: 0x4fc8d8
// body: available
// range: 0x4fc8d8-0x4fc95f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004fc8d8(void *param_1,int param_2)

{
  void *_Dst;
  int in_ECX;
  size_t _Size;
  int iVar1;
  undefined4 local_14;
  
  _Size = param_2 * 4;
  _Dst = _malloc(_Size);
  if (0 < in_ECX / 2) {
    iVar1 = param_2 * -4;
    local_14 = param_1;
    param_1 = (void *)((in_ECX * 4 + -4) * param_2 + (int)param_1);
    param_2 = in_ECX / 2;
    do {
      _memcpy(_Dst,local_14,_Size);
      _memcpy(local_14,param_1,_Size);
      _memcpy(param_1,_Dst,_Size);
      local_14 = (void *)((int)local_14 + _Size);
      param_1 = (void *)((int)param_1 + iVar1);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  _free(_Dst);
  return;
}

