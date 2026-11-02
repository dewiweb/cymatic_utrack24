// rea decompile_all
// name: FUN_00472c5c
// address: 0x472c5c
// body: available
// range: 0x472c5c-0x472ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00472c5c(void)

{
  int *_Dst;
  undefined4 *unaff_EBX;
  
  if (unaff_EBX[2] != 0) {
    _Dst = (int *)*unaff_EBX;
    if (*_Dst != 0) {
      FUN_00473176();
    }
    unaff_EBX[2] = unaff_EBX[2] + -1;
    if (0 < (int)unaff_EBX[2]) {
      _memmove(_Dst,_Dst + 1,unaff_EBX[2] << 2);
    }
  }
  if ((unaff_EBX[2] * 2 < (int)unaff_EBX[1]) && ((int)unaff_EBX[2] < (int)unaff_EBX[1])) {
    FUN_004f8197();
  }
  FUN_00473176();
  return;
}

