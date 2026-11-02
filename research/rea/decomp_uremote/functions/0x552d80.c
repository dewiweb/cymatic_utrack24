// rea decompile_all
// name: FUN_00552d80
// address: 0x552d80
// body: available
// range: 0x552d80-0x552f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00552d80(undefined4 param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 local_28 [24];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d353a;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x10) != 0) {
    FUN_00501870(param_3);
    local_8 = 0;
    FUN_00501870(param_4);
    local_8._0_1_ = 1;
    if (param_2 == '\0') {
      *(undefined1 *)(in_ECX + 0x32) = 1;
      uVar2 = FUN_00503e20(local_28);
      local_8._0_1_ = 2;
      FUN_00501e80(uVar2);
      local_8._0_1_ = 1;
      FUN_00501900();
      FUN_00501f30("[Unreachable]");
    }
    FUN_00515830();
    if (param_2 == '\0') {
      local_38 = 0;
    }
    else {
      local_38 = *(int *)(in_ECX + 0x20);
    }
    if (local_38 == 0) {
      local_3c = 0;
    }
    else {
      if (param_2 == '\0') {
        local_40 = 0;
      }
      else {
        local_40 = *(int *)(in_ECX + 0x20);
      }
      local_3c = local_40 + 0x28 + *(int *)(*(int *)(local_40 + 0x28) + 0xc);
    }
    if (in_ECX == 0xa0) {
      local_44 = 0;
    }
    else {
      local_44 = in_ECX + 4 + *(int *)(*(int *)(in_ECX + 4) + 4);
    }
    uVar2 = FUN_00501d60();
    uVar2 = FUN_00501d60(uVar2);
    (**(code **)**(undefined4 **)(in_ECX + 0x10))
              (local_44,0x81,*(undefined2 *)(in_ECX + 0x18),*(undefined1 *)(in_ECX + 0x1a),
               *(undefined2 *)(in_ECX + 0x1c),in_ECX + 0x24,local_3c,uVar2);
    FUN_00515860();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00501900();
    local_8 = 0xffffffff;
    FUN_00501900();
  }
  if (*(int *)(in_ECX + 0x20) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x28 +
                         *(int *)(*(int *)(*(int *)(in_ECX + 0x20) + 0x28) + 8)) + 4))(uVar1);
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  FUN_00544580();
  ExceptionList = local_10;
  return;
}

