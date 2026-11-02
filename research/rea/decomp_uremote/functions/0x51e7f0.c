// rea decompile_all
// name: FUN_0051e7f0
// address: 0x51e7f0
// body: available
// range: 0x51e7f0-0x51eacf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051e7f0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  char cVar1;
  int in_ECX;
  int local_60;
  int local_5c;
  
  if (param_2 == 0x81) {
    cVar1 = FUN_00507ef0(param_11,*(undefined4 *)(*(int *)(in_ECX + 0x2c) + 0xd8));
    if (cVar1 != '\0') {
      FUN_00503650(param_3);
      *(undefined4 *)(in_ECX + 0xa0) = param_10;
      *(undefined4 *)(in_ECX + 0x88) = param_6;
      *(undefined4 *)(in_ECX + 0x90) = param_4;
      *(undefined4 *)(in_ECX + 0x8c) = param_5;
      *(undefined4 *)(in_ECX + 0x94) = param_9;
      *(undefined4 *)(in_ECX + 0x98) = param_8;
      *(undefined4 *)(in_ECX + 0x9c) = param_7;
      *(undefined4 *)(in_ECX + 0xa4) = param_11;
      FUN_00501f30(param_12);
      FUN_00501f30(param_13);
      FUN_0051e7d0(param_14);
      *(byte *)(in_ECX + 0xd8) = *(byte *)(in_ECX + 0xd8) | 1;
      goto LAB_0051e957;
    }
  }
  *(byte *)(in_ECX + 0xd8) = *(byte *)(in_ECX + 0xd8) | 2;
LAB_0051e957:
  (*(code *)**(undefined4 **)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 8)))();
  if (*(int *)(in_ECX + 0x48) == 0) {
    if (*(int *)(in_ECX + 0x4c) != 0) {
      FUN_00515830();
      if (in_ECX == 0) {
        local_60 = 0;
      }
      else {
        local_60 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
      }
      (**(code **)**(undefined4 **)(in_ECX + 0x4c))(local_60,param_2 == 0x81,param_12,param_13);
      FUN_00515860();
    }
  }
  else {
    FUN_00515830();
    if (in_ECX == 0) {
      local_5c = 0;
    }
    else {
      local_5c = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
    }
    (**(code **)**(undefined4 **)(in_ECX + 0x48))(local_5c,param_2 == 0x81);
    FUN_00515860();
  }
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 8)) + 4))();
  return;
}

