// rea decompile_all
// name: FUN_00402d99
// address: 0x402d99
// body: available
// range: 0x402d99-0x402dec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00402d99(void)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  int in_EDX;
  int *piVar2;
  int local_8;
  
  local_8 = 0x62;
  if (0 < in_ECX) {
    piVar2 = (int *)(in_EDX + 4);
    do {
      iVar1 = in_EAX - *piVar2;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < local_8) {
        local_8 = iVar1;
      }
      piVar2 = piVar2 + 3;
      in_ECX = in_ECX + -1;
    } while (in_ECX != 0);
  }
  return;
}

