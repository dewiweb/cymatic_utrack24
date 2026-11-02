// rea decompile_all
// name: FUN_00426b90
// address: 0x426b90
// body: available
// range: 0x426b90-0x426bb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00426b90(void)

{
  uint in_EAX;
  uint uVar1;
  int *piVar2;
  int in_ECX;
  int in_EDX;
  int unaff_EDI;
  
  if ((in_EDX != 0) && (uVar1 = 0, in_EAX != 0)) {
    do {
      piVar2 = (int *)(in_ECX + uVar1 * 8);
      *piVar2 = *piVar2 + in_EDX;
      uVar1 = uVar1 + 1;
    } while (uVar1 < in_EAX);
  }
  if ((unaff_EDI != 0) && (in_EAX != 0)) {
    piVar2 = (int *)(in_ECX + 4);
    do {
      *piVar2 = *piVar2 + unaff_EDI;
      piVar2 = piVar2 + 2;
      in_EAX = in_EAX - 1;
    } while (in_EAX != 0);
  }
  return;
}

