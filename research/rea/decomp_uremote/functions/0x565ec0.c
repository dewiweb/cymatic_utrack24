// rea decompile_all
// name: FUN_00565ec0
// address: 0x565ec0
// body: available
// range: 0x565ec0-0x565fdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00565ec0(int param_1)

{
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  
  *(int *)(in_ECX + 0x114) = param_1;
  if (param_1 == 0) {
    if (*(int *)(*(int *)(in_ECX + 0x88) + 0xc) == 0) {
      *(int *)(*(int *)(in_ECX + 0x88) + 0xc) = in_ECX;
    }
    else {
      for (local_8 = *(int *)(*(int *)(in_ECX + 0x88) + 0xc); *(int *)(local_8 + 0x120) != 0;
          local_8 = *(int *)(local_8 + 0x120)) {
      }
      *(int *)(local_8 + 0x120) = in_ECX;
    }
    *(undefined4 *)(in_ECX + 0x118) = 0;
  }
  else {
    if (*(int *)(*(int *)(in_ECX + 0x114) + 0x11c) == 0) {
      *(int *)(*(int *)(in_ECX + 0x114) + 0x11c) = in_ECX;
    }
    else {
      for (local_c = *(int *)(*(int *)(in_ECX + 0x114) + 0x11c); *(int *)(local_c + 0x120) != 0;
          local_c = *(int *)(local_c + 0x120)) {
      }
      *(int *)(local_c + 0x120) = in_ECX;
    }
    if (*(int *)(param_1 + 0x118) == 0) {
      *(int *)(in_ECX + 0x118) = param_1;
    }
    else {
      *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
    }
  }
  return;
}

