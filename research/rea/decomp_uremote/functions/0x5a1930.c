// rea decompile_all
// name: FUN_005a1930
// address: 0x5a1930
// body: available
// range: 0x5a1930-0x5a1a7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a1930(int param_1)

{
  void *_Dst;
  int *in_ECX;
  int local_c;
  int local_8;
  
  if (param_1 == 0) {
    *(undefined2 *)(in_ECX + 1) = 0;
    if (*in_ECX != 0) {
      FUN_005b13e8(*in_ECX);
    }
    *in_ECX = 0;
  }
  else {
    local_8 = -1;
    for (local_c = 0; local_c < (int)(uint)*(ushort *)(in_ECX + 1); local_c = local_c + 1) {
      if (*(int *)(*in_ECX + local_c * 4) == param_1) {
        return;
      }
      if ((local_8 < 0) && (*(int *)(*in_ECX + local_c * 4) == 0)) {
        local_8 = local_c;
      }
    }
    if (local_8 < 0) {
      _Dst = (void *)FUN_005b04d6((*(ushort *)(in_ECX + 1) + 1) * 4);
      if (_Dst != (void *)0x0) {
        if (*in_ECX != 0) {
          _memcpy(_Dst,(void *)*in_ECX,(uint)*(ushort *)(in_ECX + 1) << 2);
          FUN_005b13e8(*in_ECX);
        }
        *in_ECX = (int)_Dst;
        *(int *)(*in_ECX + (uint)*(ushort *)(in_ECX + 1) * 4) = param_1;
        *(short *)(in_ECX + 1) = (short)in_ECX[1] + 1;
      }
    }
    else {
      *(int *)(*in_ECX + local_8 * 4) = param_1;
    }
  }
  return;
}

