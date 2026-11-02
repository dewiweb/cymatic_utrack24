// rea decompile_all
// name: FUN_005537c0
// address: 0x5537c0
// body: available
// range: 0x5537c0-0x553890 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005537c0(void)

{
  int in_ECX;
  int local_18;
  int local_14;
  
  if (*(int *)(in_ECX + 0x90) == 0) {
    if (*(int *)(in_ECX + 0x94) != 0) {
      if (in_ECX == 0) {
        local_18 = 0;
      }
      else {
        local_18 = in_ECX + 0x60 + *(int *)(*(int *)(in_ECX + 0x60) + 4);
      }
      FUN_005033e0(&DAT_0095c848);
      FUN_005033e0(&DAT_0095c848);
      (**(code **)**(undefined4 **)(in_ECX + 0x94))(local_18,0x84);
    }
  }
  else {
    if (in_ECX == 0) {
      local_14 = 0;
    }
    else {
      local_14 = in_ECX + 0x60 + *(int *)(*(int *)(in_ECX + 0x60) + 4);
    }
    (**(code **)**(undefined4 **)(in_ECX + 0x90))(local_14,0x84,0,0);
  }
  return;
}

