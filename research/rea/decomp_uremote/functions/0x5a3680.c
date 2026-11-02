// rea decompile_all
// name: FUN_005a3680
// address: 0x5a3680
// body: available
// range: 0x5a3680-0x5a3893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005a3680(ushort param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  ushort uVar2;
  int in_ECX;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  ushort local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  ushort local_e;
  ushort local_c;
  int local_8;
  
  local_8 = 0;
  FUN_0054f6b0();
  if (*(short *)(in_ECX + -0x44) == 4) {
    local_c = param_1;
    if ((*(int *)(in_ECX + -0x38) != 0) && (param_1 != 0xffff)) {
      if (param_1 != 0) {
        local_c = param_1 - 1;
      }
      uVar2 = (*(code *)**(undefined4 **)
                          (*(int *)(in_ECX + -0x38) + 0x28 +
                          *(int *)(*(int *)(*(int *)(in_ECX + -0x38) + 0x28) + 0xc)))();
      if (uVar2 <= local_c) {
        local_8 = 0x25;
      }
    }
    if (local_8 == 0) {
      local_10 = *(undefined2 *)(in_ECX + -0x40);
      local_14 = *(undefined2 *)(in_ECX + -0x44);
      local_12 = *(undefined2 *)(in_ECX + -0x42);
      local_e = param_1;
      cVar1 = FUN_0056c650(*(int *)(in_ECX + -0x3c) + 0xa0,*(undefined4 *)(in_ECX + -0x60),&local_14
                           ,param_2,param_3);
      if (cVar1 == '\0') {
        FUN_00578870();
        FUN_005787c0();
        local_18 = *(undefined2 *)(in_ECX + -0x40);
        local_1c = *(undefined2 *)(in_ECX + -0x44);
        local_1a = *(undefined2 *)(in_ECX + -0x42);
        local_16 = param_1;
        FUN_0056c650(*(int *)(in_ECX + -0x3c) + 0xa0,*(undefined4 *)(in_ECX + -0x60),&local_1c,
                     param_2,param_3);
      }
    }
  }
  else {
    local_8 = 0x11;
  }
  FUN_005a2ee0(param_1,param_3);
  FUN_0054f6f0();
  return local_8;
}

