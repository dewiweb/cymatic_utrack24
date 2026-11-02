// rea decompile_all
// name: FUN_005a3300
// address: 0x5a3300
// body: available
// range: 0x5a3300-0x5a3671 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005a3300(ushort param_1,undefined2 param_2,ushort param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  ushort local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  ushort local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [8];
  undefined2 local_24 [2];
  ushort local_20;
  int local_1c;
  ushort local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d74e5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  FUN_0054f6b0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  if (*(short *)(in_ECX + -0x44) == 2) {
    local_18 = param_1;
    if ((*(int *)(in_ECX + -0x38) != 0) && (param_1 != 0xffff)) {
      if (param_1 != 0) {
        local_18 = param_1 - 1;
      }
      uVar4 = (*(code *)**(undefined4 **)
                          (*(int *)(in_ECX + -0x38) + 0x28 +
                          *(int *)(*(int *)(*(int *)(in_ECX + -0x38) + 0x28) + 0xc)))();
      if (uVar4 <= local_18) {
        local_14 = 0x25;
      }
    }
    if (local_14 == 0) {
      FUN_005a3f40(local_18,param_2);
      local_1c = in_ECX + -0x8c;
      FUN_005017d0();
      local_8 = 0;
      local_20 = param_3;
      cVar3 = FUN_00518f40(param_2,local_2c,local_24);
      if (cVar3 == '\0') {
        local_30 = 0x4000;
        local_20 = local_20 | 0x4000;
      }
      cVar3 = FUN_00519120(param_2);
      if (cVar3 == '\0') {
        local_34 = 0x20;
        local_20 = local_20 | 0x20;
      }
      cVar3 = FUN_00519280(param_2);
      if (cVar3 == '\0') {
        local_38 = 0x40;
        local_20 = local_20 | 0x40;
      }
      local_3c = *(undefined2 *)(in_ECX + -0x40);
      local_40 = *(undefined2 *)(in_ECX + -0x44);
      local_3e = *(undefined2 *)(in_ECX + -0x42);
      local_3a = param_1;
      uVar1 = *(undefined4 *)(in_ECX + -0x60);
      iVar2 = *(int *)(in_ECX + -0x3c);
      uVar5 = FUN_00501d60(local_20,local_24[0]);
      cVar3 = FUN_0056c4e0(iVar2 + 0xa0,uVar1,&local_40,param_2,uVar5);
      if (cVar3 == '\0') {
        FUN_00578870();
        FUN_005787c0();
        local_44 = *(undefined2 *)(in_ECX + -0x40);
        local_48 = *(undefined2 *)(in_ECX + -0x44);
        local_46 = *(undefined2 *)(in_ECX + -0x42);
        local_42 = param_1;
        uVar1 = *(undefined4 *)(in_ECX + -0x60);
        iVar2 = *(int *)(in_ECX + -0x3c);
        uVar5 = FUN_00501d60(local_20,local_24[0]);
        FUN_0056c4e0(iVar2 + 0xa0,uVar1,&local_48,param_2,uVar5);
      }
      local_8 = 0xffffffff;
      FUN_00501900();
    }
  }
  else {
    local_14 = 0x11;
  }
  FUN_005a2ee0(param_1,param_3);
  FUN_0054f6f0();
  ExceptionList = local_10;
  return local_14;
}

