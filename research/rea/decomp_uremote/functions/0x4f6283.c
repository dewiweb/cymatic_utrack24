// rea decompile_all
// name: FUN_004f6283
// address: 0x4f6283
// body: available
// range: 0x4f6283-0x4f62c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f6283(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_EAX;
  
  if (in_EAX[1] < in_EAX[2] + 1) {
    FUN_004f8197();
  }
  iVar2 = in_EAX[2];
  in_EAX[2] = iVar2 + 1;
  puVar1 = (undefined4 *)(*in_EAX + iVar2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  return;
}

