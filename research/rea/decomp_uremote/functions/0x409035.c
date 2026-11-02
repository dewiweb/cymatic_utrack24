// rea decompile_all
// name: FUN_00409035
// address: 0x409035
// body: available
// range: 0x409035-0x4090a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_00409035(undefined4 param_1)

{
  void *_Dst;
  size_t local_14;
  void *local_10;
  void *local_c;
  int local_8;
  
  local_10 = (void *)0x0;
  local_8 = FUN_00408ef1(param_1,&local_c,&local_14);
  if (local_8 == 0) {
    _Dst = (void *)FUN_00411912(local_14 + 1,&local_8);
    local_10 = _Dst;
    if (local_8 == 0) {
      _memcpy(_Dst,local_c,local_14);
      *(undefined1 *)(local_14 + (int)_Dst) = 0;
    }
    FUN_00409027();
  }
  return local_10;
}

