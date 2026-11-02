// rea decompile_all
// name: FUN_0052e190
// address: 0x52e190
// body: available
// range: 0x52e190-0x52e1e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052e190(void)

{
  HANDLE pvVar1;
  int *in_ECX;
  
  FUN_0052ebb0();
  if (in_ECX[0xb] == -1) {
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_0052e090,in_ECX,4,(LPDWORD)0x0);
    in_ECX[0xb] = (int)pvVar1;
    (**(code **)(*in_ECX + 0x10))();
  }
  ResumeThread((HANDLE)in_ECX[0xb]);
  return;
}

