// rea decompile_all
// name: FUN_00512790
// address: 0x512790
// body: available
// range: 0x512790-0x512811 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00512790(void)

{
  char cVar1;
  int in_ECX;
  int local_c;
  int local_8;
  
  for (local_8 = 0; local_8 < (int)(uint)*(ushort *)(in_ECX + 0x14); local_8 = local_8 + 1) {
    cVar1 = FUN_00512900(local_8,&local_c);
    if (cVar1 != '\0') {
      FUN_00508420(local_c);
      *(int *)(local_c + 0xc) = *(int *)(local_c + 0xc) + -1;
      if (*(int *)(local_c + 0xc) == 0) {
        *(undefined4 *)(local_c + 4) = 0;
      }
    }
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}

