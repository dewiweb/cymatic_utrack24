// rea decompile_all
// name: FUN_00515af0
// address: 0x515af0
// body: available
// range: 0x515af0-0x515b98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00515af0(void)

{
  undefined4 *in_ECX;
  int local_8;
  
  FUN_00508340();
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    if (in_ECX[local_8 + 1] != 0) {
      (**(code **)(*(int *)in_ECX[local_8 + 1] + 8))();
      if ((undefined4 *)in_ECX[local_8 + 1] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)in_ECX[local_8 + 1])(1);
      }
      in_ECX[local_8 + 1] = 0;
    }
  }
  *in_ECX = 0;
  return;
}

