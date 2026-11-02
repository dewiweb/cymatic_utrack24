// rea decompile_all
// name: FUN_00552fa0
// address: 0x552fa0
// body: available
// range: 0x552fa0-0x553118 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00552fa0(void)

{
  int in_ECX;
  int local_14;
  int local_10;
  
  if (*(int *)(in_ECX + 0xc0) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0xc0) + 0x28 +
                         *(int *)(*(int *)(*(int *)(in_ECX + 0xc0) + 0x28) + 0xc)) + 4))();
  }
  FUN_00515830();
  if (*(int *)(in_ECX + 0xac) == 0) {
    if (*(int *)(in_ECX + 0xb0) != 0) {
      if (in_ECX == 0) {
        local_14 = 0;
      }
      else {
        local_14 = in_ECX + 0xa4 + *(int *)(*(int *)(in_ECX + 0xa4) + 4);
      }
      (**(code **)**(undefined4 **)(in_ECX + 0xb0))
                (local_14,0x84,*(undefined2 *)(in_ECX + 0xb8),*(undefined1 *)(in_ECX + 0xba),
                 *(undefined2 *)(in_ECX + 0xbc),&DAT_0095c854,0,0,0);
    }
  }
  else {
    if (in_ECX == 0) {
      local_10 = 0;
    }
    else {
      local_10 = in_ECX + 0xa4 + *(int *)(*(int *)(in_ECX + 0xa4) + 4);
    }
    (**(code **)**(undefined4 **)(in_ECX + 0xac))
              (local_10,0x84,*(undefined2 *)(in_ECX + 0xb8),*(undefined1 *)(in_ECX + 0xba),
               *(undefined2 *)(in_ECX + 0xbc),0,&DAT_0095c854);
  }
  FUN_00515860();
  return;
}

