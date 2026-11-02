// rea decompile_all
// name: FUN_004fe8af
// address: 0x4fe8af
// body: available
// range: 0x4fe8af-0x4fe922 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004fe8af(void)

{
  int *_Dst;
  int iVar1;
  int *in_ECX;
  uint in_EDX;
  int local_14;
  
  local_14 = 0;
  if (in_EDX < (uint)in_ECX[2]) {
    _Dst = (int *)(*in_ECX + in_EDX * 4);
    if (*_Dst != 0) {
      local_14 = *_Dst;
    }
    iVar1 = in_ECX[2] - 1;
    in_ECX[2] = iVar1;
    iVar1 = iVar1 - in_EDX;
    if (0 < iVar1) {
      _memmove(_Dst,_Dst + 1,iVar1 * 4);
    }
  }
  if ((in_ECX[2] * 2 < in_ECX[1]) && (in_ECX[2] < in_ECX[1])) {
    FUN_004f8197();
  }
  if (local_14 != 0) {
    FUN_00500e1c(local_14);
  }
  return;
}

