// rea decompile_all
// name: FUN_004e6a17
// address: 0x4e6a17
// body: available
// range: 0x4e6a17-0x4e6a73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e6a17(void)

{
  void **ppvVar1;
  void *pvVar2;
  void **in_EAX;
  void **unaff_ESI;
  void *local_10;
  void *local_c;
  void *local_8;
  
  if (unaff_ESI != in_EAX) {
    FUN_0043e81a(&local_10);
    if (unaff_ESI != &local_10) {
      pvVar2 = *unaff_ESI;
      *unaff_ESI = local_10;
      local_10 = pvVar2;
    }
    ppvVar1 = unaff_ESI + 1;
    if (ppvVar1 != &local_c) {
      pvVar2 = *ppvVar1;
      *ppvVar1 = local_c;
      local_c = pvVar2;
    }
    ppvVar1 = unaff_ESI + 2;
    if (ppvVar1 != &local_8) {
      pvVar2 = *ppvVar1;
      *ppvVar1 = local_8;
      local_8 = pvVar2;
    }
    _free(local_10);
  }
  return;
}

