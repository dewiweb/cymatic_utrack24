// rea decompile_all
// name: FUN_0057c210
// address: 0x57c210
// body: available
// range: 0x57c210-0x57c29a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057c210(int param_1)

{
  int in_ECX;
  undefined4 local_8;
  
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined2 *)(in_ECX + 0x28) = *(undefined2 *)(param_1 + 0x28);
  for (local_8 = 0; local_8 < (int)(uint)*(ushort *)(in_ECX + 0x28); local_8 = local_8 + 1) {
    *(undefined2 *)(in_ECX + 0x38 + local_8 * 0x10) =
         *(undefined2 *)(param_1 + 0x38 + local_8 * 0x10);
    *(undefined4 *)(in_ECX + 0x30 + local_8 * 0x10) =
         *(undefined4 *)(param_1 + 0x30 + local_8 * 0x10);
    *(undefined4 *)(in_ECX + 0x34 + local_8 * 0x10) =
         *(undefined4 *)(param_1 + 0x34 + local_8 * 0x10);
  }
  return;
}

