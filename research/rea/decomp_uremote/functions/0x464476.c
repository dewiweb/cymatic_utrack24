// rea decompile_all
// name: FUN_00464476
// address: 0x464476
// body: available
// range: 0x464476-0x4644bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00464476(undefined4 *param_1)

{
  size_t _Size;
  void *_Dst;
  undefined4 *unaff_EBX;
  
  *param_1 = 0;
  _Size = unaff_EBX[1];
  param_1[1] = _Size;
  if (_Size != 0) {
    _free((void *)0x0);
    _Dst = _malloc(_Size);
    *param_1 = _Dst;
    _memcpy(_Dst,(void *)*unaff_EBX,param_1[1]);
  }
  return param_1;
}

