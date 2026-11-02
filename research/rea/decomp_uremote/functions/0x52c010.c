// rea decompile_all
// name: FUN_0052c010
// address: 0x52c010
// body: available
// range: 0x52c010-0x52c1bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0052c010(int param_1)

{
  int in_ECX;
  undefined4 *local_c;
  int local_8;
  
  if (*(uint *)(in_ECX + 0x98) < (uint)(param_1 - *(int *)(in_ECX + 0x90))) {
    *(int *)(in_ECX + 0x90) = param_1;
    *(undefined4 *)(in_ECX + 0x98) = 600;
    local_8 = 2;
    local_c = *(undefined4 **)(in_ECX + 0xa0);
    while ((local_c != (undefined4 *)0x0 && (local_8 != 0))) {
      (**(code **)(**(int **)(in_ECX + 8) + 4))(local_c[4]);
      FUN_0054d810(local_c);
      if (local_c != (undefined4 *)0x0) {
        (**(code **)*local_c)(1);
      }
      local_8 = local_8 + -1;
      local_c = *(undefined4 **)(in_ECX + 0xa0);
      if ((local_c == (undefined4 *)0x0) ||
         ((uint)(param_1 - local_c[3]) <= *(uint *)(in_ECX + 0x9c))) {
        if (100 < *(uint *)(in_ECX + 0x9c)) {
          *(int *)(in_ECX + 0x9c) = *(int *)(in_ECX + 0x9c) + -0x32;
        }
      }
      else {
        *(int *)(in_ECX + 0x9c) = *(int *)(in_ECX + 0x9c) + 0x32;
        FUN_005287e0(*(undefined4 *)(in_ECX + 0xa8));
      }
    }
    if (local_c != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x98) = 1;
    }
  }
  if ((*(int *)(in_ECX + 8) != 0) && (500 < (uint)(param_1 - *(int *)(in_ECX + 0x94)))) {
    *(int *)(in_ECX + 0x94) = param_1;
    (**(code **)(**(int **)(in_ECX + 8) + 0x28))();
  }
  return *(int *)(in_ECX + 0xa8) != 0;
}

