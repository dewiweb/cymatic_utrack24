// rea decompile_all
// name: FUN_004dfb1c
// address: 0x4dfb1c
// body: available
// range: 0x4dfb1c-0x4dfb8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dfb1c(int param_1)

{
  int in_ECX;
  int local_10;
  int local_c;
  
  local_10 = in_ECX;
  local_c = in_ECX;
  FUN_004c3360(in_ECX,&local_10);
  FUN_004df993(local_10,local_c);
  if (*(int *)(in_ECX + 0xb0) == *(int *)(in_ECX + 0xb4)) {
    FUN_004df959();
  }
  if ((param_1 != 0) && (*(int *)(in_ECX + 0x88) != 0)) {
    (**(code **)(**(int **)(in_ECX + 0x88) + 0x10))(param_1,*(undefined4 *)(in_ECX + 0xb4));
  }
  return;
}

