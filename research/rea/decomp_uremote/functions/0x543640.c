// rea decompile_all
// name: FUN_00543640
// address: 0x543640
// body: available
// range: 0x543640-0x543716 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00543640(int param_1)

{
  bool bVar1;
  int *in_ECX;
  undefined4 local_18;
  uint local_c;
  
  if (param_1 == 0) {
    *(undefined2 *)(in_ECX + 1) = 0;
    if (*in_ECX != 0) {
      FUN_005b13e8(*in_ECX);
    }
    *in_ECX = 0;
  }
  else {
    bVar1 = false;
    for (local_c = 0; local_c < *(ushort *)(in_ECX + 1); local_c = local_c + 1) {
      if (*(int *)(*in_ECX + local_c * 4) == param_1) {
        bVar1 = true;
      }
      if (bVar1) {
        if (local_c < *(ushort *)(in_ECX + 1) - 1) {
          local_18 = *(undefined4 *)(*in_ECX + 4 + local_c * 4);
        }
        else {
          local_18 = 0;
        }
        *(undefined4 *)(*in_ECX + local_c * 4) = local_18;
      }
    }
    if (bVar1) {
      *(short *)(in_ECX + 1) = (short)in_ECX[1] + -1;
    }
  }
  return;
}

