// rea decompile_all
// name: FUN_00519060
// address: 0x519060
// body: available
// range: 0x519060-0x5190b3 inclusive
// range: 0x5190b6-0x519111 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00519060(ushort param_1,undefined4 param_2,undefined2 *param_3)

{
  int in_ECX;
  int local_c;
  
  if (param_1 < *(ushort *)(in_ECX + -0x30)) {
    if (*(int *)(in_ECX + -0x2c) != 0) {
      FUN_00501f30(*(undefined4 *)(*(int *)(in_ECX + -0x2c) + (uint)param_1 * 8));
      *param_3 = *(undefined2 *)(*(int *)(in_ECX + -0x2c) + 4 + (uint)param_1 * 8);
      return 1;
    }
    if (*(int *)(in_ECX + -0x28) != 0) {
      if (in_ECX == 0x78) {
        local_c = 0;
      }
      else {
        local_c = in_ECX + -0x50 + *(int *)(*(int *)(in_ECX + -0x50) + 0xc);
      }
      (**(code **)**(undefined4 **)(in_ECX + -0x28))(local_c,param_1,param_2,param_3);
      return 1;
    }
  }
  return 0;
}

