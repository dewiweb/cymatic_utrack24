// rea decompile_all
// name: FUN_0046e342
// address: 0x46e342
// body: available
// range: 0x46e342-0x46e3cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0046e342(undefined4 param_1)

{
  undefined4 extraout_ECX;
  uint unaff_EBX;
  int *unaff_ESI;
  void *_Dst;
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x46e34e;
  local_14[0] = 0;
  if (unaff_EBX < (uint)unaff_ESI[2]) {
    FUN_004652e4(*unaff_ESI + unaff_EBX * 4);
    local_8 = 0;
    unaff_ESI[2] = unaff_ESI[2] + -1;
    _Dst = (void *)(*unaff_ESI + unaff_EBX * 4);
    FUN_004611cb(_Dst,0);
    if (0 < (int)(unaff_ESI[2] - unaff_EBX)) {
      _memmove(_Dst,(void *)((int)_Dst + 4),(unaff_ESI[2] - unaff_EBX) * 4);
    }
    FUN_0046ea44();
    FUN_004652e4(local_14);
    FUN_004652d6();
  }
  else {
    FUN_004652cd();
    param_1 = extraout_ECX;
  }
  return param_1;
}

