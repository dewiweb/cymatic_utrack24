// rea decompile_all
// name: FUN_00553940
// address: 0x553940
// body: available
// range: 0x553940-0x553af9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00553940(undefined4 param_1,short param_2,short param_3,undefined4 param_4,
                 undefined2 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int in_ECX;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (*(int *)(in_ECX + 0x90) == 0) {
    if (*(int *)(in_ECX + 0x94) != 0) {
      if ((param_2 == -0x6df7) && (param_3 == 1)) {
        if (in_ECX == 0) {
          local_24 = 0;
        }
        else {
          local_24 = in_ECX + 0x60 + *(int *)(*(int *)(in_ECX + 0x60) + 4);
        }
        FUN_005033e0(param_8);
        FUN_005033e0(param_1);
        (**(code **)**(undefined4 **)(in_ECX + 0x94))(local_24,2);
        FUN_00544560();
        return;
      }
      if (in_ECX == 0) {
        local_28 = 0;
      }
      else {
        local_28 = in_ECX + 0x60 + *(int *)(*(int *)(in_ECX + 0x60) + 4);
      }
      FUN_005033e0(&DAT_0095c848);
      FUN_005033e0(&DAT_0095c848);
      (**(code **)**(undefined4 **)(in_ECX + 0x94))(local_28,0x80);
    }
  }
  else if (param_2 == -0x6dfe) {
    if (in_ECX == 0) {
      local_1c = 0;
    }
    else {
      local_1c = in_ECX + 0x60 + *(int *)(*(int *)(in_ECX + 0x60) + 4);
    }
    (**(code **)**(undefined4 **)(in_ECX + 0x90))(local_1c,0x81,param_3,param_5);
  }
  else {
    if (in_ECX == 0) {
      local_20 = 0;
    }
    else {
      local_20 = in_ECX + 0x60 + *(int *)(*(int *)(in_ECX + 0x60) + 4);
    }
    (**(code **)**(undefined4 **)(in_ECX + 0x90))(local_20,0x80,0,0);
  }
  FUN_00544580();
  return;
}

