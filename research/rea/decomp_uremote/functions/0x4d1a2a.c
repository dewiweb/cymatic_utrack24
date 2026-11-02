// rea decompile_all
// name: FUN_004d1a2a
// address: 0x4d1a2a
// body: available
// range: 0x4d1a2a-0x4d1abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d1a2a(int param_1)

{
  int in_ECX;
  int iVar1;
  
  if (*(char *)(in_ECX + 0xe4) == '\0') {
    iVar1 = *(int *)(param_1 + 8);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  if ((*(char *)(in_ECX + 0xe5) != '\0') && (*(int *)(in_ECX + 0xd4) != iVar1)) {
    if (*(int *)(in_ECX + 0xcc) < *(int *)(in_ECX + 0xc4)) {
      FUN_004d1299(((double)(iVar1 - *(int *)(in_ECX + 0xd0)) *
                   ((*(double *)(in_ECX + 0x98) - *(double *)(in_ECX + 0x90)) -
                   (*(double *)(in_ECX + 0xa8) - *(double *)(in_ECX + 0xa0)))) /
                   (double)(*(int *)(in_ECX + 0xc4) - *(int *)(in_ECX + 0xcc)) +
                   *(double *)(in_ECX + 0xb8));
    }
  }
  *(int *)(in_ECX + 0xd4) = iVar1;
  return;
}

