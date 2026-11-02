// rea decompile_all
// name: FUN_00519c70
// address: 0x519c70
// body: available
// range: 0x519c70-0x519d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00519c70(int param_1)

{
  int *in_ECX;
  ushort local_8;
  
  if (param_1 != 0) {
    for (local_8 = 0; local_8 < *(ushort *)((int)in_ECX + 6); local_8 = local_8 + 1) {
      if (param_1 == *(int *)(*in_ECX + (uint)local_8 * 4)) {
        for (; (int)(uint)local_8 < (int)(*(ushort *)((int)in_ECX + 6) - 1); local_8 = local_8 + 1)
        {
          *(undefined4 *)(*in_ECX + (uint)local_8 * 4) =
               *(undefined4 *)(*in_ECX + 4 + (uint)local_8 * 4);
        }
        *(short *)((int)in_ECX + 6) = *(short *)((int)in_ECX + 6) + -1;
        *(undefined4 *)(*in_ECX + (uint)*(ushort *)((int)in_ECX + 6) * 4) = 0;
        return;
      }
    }
  }
  return;
}

