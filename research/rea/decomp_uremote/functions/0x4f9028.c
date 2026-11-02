// rea decompile_all
// name: FUN_004f9028
// address: 0x4f9028
// body: available
// range: 0x4f9028-0x4f9043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f9028(void)

{
  undefined4 *in_EAX;
  int in_ECX;
  undefined4 *puVar1;
  int *in_EDX;
  
  puVar1 = (undefined4 *)(in_ECX * 0x10 + *in_EDX);
  *in_EAX = *puVar1;
  in_EAX[1] = puVar1[1];
  in_EAX[2] = puVar1[2];
  in_EAX[3] = puVar1[3];
  return;
}

