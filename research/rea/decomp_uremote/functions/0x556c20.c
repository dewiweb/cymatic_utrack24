// rea decompile_all
// name: FUN_00556c20
// address: 0x556c20
// body: available
// range: 0x556c20-0x556d31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00556c20(int param_1)

{
  int in_ECX;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_00515830();
  if ((*(uint *)(param_1 + 0x10) & 0xff) == 0x71) {
    if (in_ECX == 0) {
      local_1c = 0;
    }
    else {
      local_1c = in_ECX + 0x60 + *(int *)(*(int *)(in_ECX + 0x60) + 4);
    }
    (**(code **)**(undefined4 **)(in_ECX + 0xc0))
              (local_1c,*(undefined1 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30));
  }
  else {
    if (in_ECX == 0) {
      local_20 = 0;
    }
    else {
      local_20 = in_ECX + 0x60 + *(int *)(*(int *)(in_ECX + 0x60) + 4);
    }
    (**(code **)**(undefined4 **)(in_ECX + 0xc0))(local_20,1,0,0);
  }
  FUN_00515860();
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  FUN_00544580();
  return;
}

