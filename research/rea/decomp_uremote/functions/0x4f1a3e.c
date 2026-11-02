// rea decompile_all
// name: FUN_004f1a3e
// address: 0x4f1a3e
// body: available
// range: 0x4f1a3e-0x4f1a78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f1a3e(int *param_1)

{
  int in_ECX;
  RECT local_14;
  
  local_14.left = *param_1;
  local_14.top = param_1[1];
  local_14.bottom = param_1[3] + local_14.top;
  local_14.right = param_1[2] + local_14.left;
  InvalidateRect(*(HWND *)(in_ECX + 0x38),&local_14,0);
  return;
}

