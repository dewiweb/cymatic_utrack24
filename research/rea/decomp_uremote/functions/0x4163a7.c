// rea decompile_all
// name: FUN_004163a7
// address: 0x4163a7
// body: available
// range: 0x4163a7-0x4163f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004163a7(void *param_1,int param_2,int param_3)

{
  void *_Dst;
  size_t _Size;
  int local_8;
  
  local_8 = 0;
  _Size = param_2 - (int)param_1;
  if (*(int *)(param_3 + 0x50) == 0) {
    _Dst = (void *)FUN_00411912(_Size + 1,&local_8);
    *(void **)(param_3 + 0x50) = _Dst;
    if (local_8 == 0) {
      _memcpy(_Dst,param_1,_Size);
      *(undefined1 *)(_Size + *(int *)(param_3 + 0x50)) = 0;
    }
  }
  return local_8;
}

