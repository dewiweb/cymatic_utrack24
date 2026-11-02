// rea decompile_all
// name: FUN_00405d14
// address: 0x405d14
// body: available
// range: 0x405d14-0x405d67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00405d14(void *param_1)

{
  size_t in_EAX;
  int iVar1;
  void *_Dst;
  int unaff_ESI;
  int local_8;
  
  local_8 = 0;
  iVar1 = FUN_00411976(1,*(undefined4 *)(unaff_ESI + 0x54),&local_8);
  *(int *)(unaff_ESI + 0x54) = iVar1;
  if (local_8 == 0) {
    _Dst = (void *)(*(int *)(unaff_ESI + 0x58) + iVar1);
    _memcpy(_Dst,param_1,in_EAX);
    *(undefined1 *)((int)_Dst + in_EAX) = 10;
    *(int *)(unaff_ESI + 0x58) = *(int *)(unaff_ESI + 0x58) + in_EAX + 1;
  }
  return local_8;
}

