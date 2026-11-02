// rea decompile_all
// name: FUN_00511cf0
// address: 0x511cf0
// body: available
// range: 0x511cf0-0x511e20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00511cf0(int param_1)

{
  int in_ECX;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x28))();
  local_c = *(int *)(in_ECX + -0xa64);
  local_8 = 0;
  do {
    if (local_c == 0) {
LAB_00511de1:
      (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x2c))();
      return local_c != 0;
    }
    if (local_c == 0) {
      local_14 = 0;
    }
    else {
      local_14 = local_c + 0x28 + *(int *)(*(int *)(local_c + 0x28) + 0xc);
    }
    if (local_14 == param_1) {
      if (local_8 == 0) {
        *(undefined4 *)(in_ECX + -0xa64) = *(undefined4 *)(local_c + 0x5c);
      }
      else {
        *(undefined4 *)(local_8 + 0x5c) = *(undefined4 *)(local_c + 0x5c);
      }
      *(undefined4 *)(local_c + 0x5c) = 0;
      FUN_00518d40();
      (**(code **)(*(int *)(local_c + 0x28 + *(int *)(*(int *)(local_c + 0x28) + 8)) + 4))();
      goto LAB_00511de1;
    }
    local_8 = local_c;
    local_c = *(int *)(local_c + 0x5c);
  } while( true );
}

