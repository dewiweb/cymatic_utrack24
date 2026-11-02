// rea decompile_all
// name: FUN_00472bd2
// address: 0x472bd2
// body: available
// range: 0x472bd2-0x472c5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00472bd2(undefined4 param_1)

{
  undefined4 *_Src;
  int iVar1;
  int in_EAX;
  int *in_ECX;
  
  iVar1 = in_ECX[2];
  if (in_EAX < 0) {
    if (in_ECX[1] < iVar1 + 1) {
      FUN_004f8197();
    }
    iVar1 = in_ECX[2];
    in_ECX[2] = iVar1 + 1;
    *(undefined4 *)(*in_ECX + iVar1 * 4) = param_1;
  }
  else {
    if (iVar1 < in_EAX) {
      in_EAX = iVar1;
    }
    if (in_ECX[1] < iVar1 + 1) {
      FUN_004f8197();
    }
    _Src = (undefined4 *)(*in_ECX + in_EAX * 4);
    if (0 < in_ECX[2] - in_EAX) {
      _memmove(_Src + 1,_Src,(in_ECX[2] - in_EAX) * 4);
    }
    *_Src = param_1;
    in_ECX[2] = in_ECX[2] + 1;
  }
  return param_1;
}

