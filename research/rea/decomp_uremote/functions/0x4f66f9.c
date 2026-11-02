// rea decompile_all
// name: FUN_004f66f9
// address: 0x4f66f9
// body: available
// range: 0x4f66f9-0x4f6771 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004f66f9(uint param_1)

{
  int *_Dst;
  int *in_ECX;
  
  if (param_1 < (uint)in_ECX[2]) {
    _Dst = (int *)(*in_ECX + param_1 * 4);
    if (*_Dst != 0) {
      FUN_004f807b();
    }
    in_ECX[2] = in_ECX[2] + -1;
    if (0 < (int)(in_ECX[2] - param_1)) {
      _memmove(_Dst,_Dst + 1,(in_ECX[2] - param_1) * 4);
    }
  }
  if ((in_ECX[2] * 2 < in_ECX[1]) && (in_ECX[2] < in_ECX[1])) {
    FUN_004f8197();
  }
  FUN_004f807b();
  return;
}

