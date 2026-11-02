// rea decompile_all
// name: FUN_0052e670
// address: 0x52e670
// body: available
// range: 0x52e670-0x52e6d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_0052e670(void)

{
  DWORD DVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  LARGE_INTEGER local_14 [2];
  
  if (DAT_0095c938 == '\0') {
    DVar1 = GetTickCount();
    uVar3 = (ulonglong)(DVar1 * 1000);
  }
  else {
    QueryPerformanceCounter(local_14);
    uVar2 = __allmul(local_14[0].s.LowPart,local_14[0].s.HighPart,1000000,0);
    uVar3 = __alldiv(uVar2,DAT_0095c940,DAT_0095c944);
  }
  return uVar3;
}

