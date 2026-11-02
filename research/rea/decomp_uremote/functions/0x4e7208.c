// rea decompile_all
// name: FUN_004e7208
// address: 0x4e7208
// body: available
// range: 0x4e7208-0x4e7261 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e7208(void)

{
  int in_ECX;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(in_ECX + 0x80) == 0) {
    local_14 = 0;
  }
  else {
    local_14 = *(int *)(*(int *)(in_ECX + 0x80) + 0x1c);
  }
  local_10 = *(int *)(in_ECX + 0x94);
  local_14 = local_14 + local_10;
  local_c = local_10;
  local_8 = local_10;
  FUN_004c0ccc(*(undefined4 *)(in_ECX + 0x7c),&local_14);
  FUN_004d291d();
  FUN_004e6b72(0);
  return;
}

