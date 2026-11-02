// rea decompile_all
// name: FUN_005a3070
// address: 0x5a3070
// body: available
// range: 0x5a3070-0x5a32f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005a3070(ushort param_1,undefined4 param_2,undefined4 param_3,ushort param_4)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  int in_ECX;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  ushort local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  ushort local_1a;
  undefined4 local_18;
  undefined4 local_14;
  ushort local_10;
  ushort local_c;
  int local_8;
  
  local_8 = 0;
  FUN_0054f6b0();
  if (*(short *)(in_ECX + -0x44) == 1) {
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
      uVar3 = FUN_00504120();
      FUN_005a3f40(local_c,uVar3);
      local_10 = param_4;
      sVar4 = FUN_00504120();
      if (sVar4 != 0) {
        local_14 = 0x20;
        local_10 = local_10 | 0x20;
      }
      sVar4 = FUN_00504120();
      if (sVar4 != -1) {
        local_18 = 0x40;
        local_10 = local_10 | 0x40;
      }
      local_1c = *(undefined2 *)(in_ECX + -0x40);
      local_20 = *(undefined2 *)(in_ECX + -0x44);
      local_1e = *(undefined2 *)(in_ECX + -0x42);
      local_1a = param_1;
      cVar1 = FUN_0056c380(*(int *)(in_ECX + -0x3c) + 0xa0,*(undefined4 *)(in_ECX + -0x60),&local_20
                           ,param_2,param_3,local_10);
      if (cVar1 == '\0') {
        FUN_00578870();
        FUN_005787c0();
        local_24 = *(undefined2 *)(in_ECX + -0x40);
        local_28 = *(undefined2 *)(in_ECX + -0x44);
        local_26 = *(undefined2 *)(in_ECX + -0x42);
        local_22 = param_1;
        FUN_0056c380(*(int *)(in_ECX + -0x3c) + 0xa0,*(undefined4 *)(in_ECX + -0x60),&local_28,
                     param_2,param_3,local_10);
      }
    }
  }
  else {
    local_8 = 0x11;
  }
  FUN_005a2ee0(param_1,param_4);
  FUN_0054f6f0();
  return local_8;
}

