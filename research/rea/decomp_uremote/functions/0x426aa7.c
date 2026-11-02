// rea decompile_all
// name: FUN_00426aa7
// address: 0x426aa7
// body: available
// range: 0x426aa7-0x426b15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00426aa7(undefined4 param_1)

{
  int unaff_ESI;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  FUN_00426a56(param_1,&local_8,&local_c);
  FUN_00426a75(param_1);
  *(int *)(unaff_ESI + 0x34) = (int)(short)local_8;
  *(undefined4 *)(unaff_ESI + 0xb0) = 0;
  *(uint *)(unaff_ESI + 0x38) = local_c & 0xffff;
  *(undefined4 *)(unaff_ESI + 0xb4) = 0;
  if (*(char *)(unaff_ESI + 0x40) == '\0') {
    *(undefined1 *)(unaff_ESI + 0x40) = 1;
    *(uint *)(unaff_ESI + 0x3c) = local_c & 0xffff;
  }
  return;
}

