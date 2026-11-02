// rea decompile_all
// name: FUN_00518da0
// address: 0x518da0
// body: available
// range: 0x518da0-0x518f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00518da0(undefined4 param_1,undefined2 *param_2)

{
  short sVar1;
  int in_ECX;
  int local_34;
  ushort local_28;
  undefined1 local_24 [8];
  ushort local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cf6da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + -0x28) == 0) {
    FUN_00501870(param_1);
    local_8 = 0;
    for (local_1c = 0; local_1c < *(ushort *)(in_ECX + -0x30); local_1c = local_1c + 1) {
      if ((*(int *)(in_ECX + -0x2c) != 0) &&
         (sVar1 = FUN_00502b40(*(undefined4 *)(*(int *)(in_ECX + -0x2c) + (uint)local_1c * 8)),
         sVar1 == 0)) {
        *param_2 = *(undefined2 *)(*(int *)(in_ECX + -0x2c) + 4 + (uint)local_1c * 8);
        local_8 = 0xffffffff;
        FUN_00501900();
        ExceptionList = local_10;
        return 1;
      }
    }
    local_8 = 0xffffffff;
    FUN_00501900();
  }
  else {
    FUN_005017d0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    local_8 = 1;
    for (local_28 = 0; local_28 < *(ushort *)(in_ECX + -0x30); local_28 = local_28 + 1) {
      if (in_ECX == 0x78) {
        local_34 = 0;
      }
      else {
        local_34 = in_ECX + -0x50 + *(int *)(*(int *)(in_ECX + -0x50) + 0xc);
      }
      (**(code **)**(undefined4 **)(in_ECX + -0x28))(local_34,local_28,local_24,param_2);
      sVar1 = FUN_00502b40(param_1);
      if (sVar1 == 0) {
        local_8 = 0xffffffff;
        FUN_00501900();
        ExceptionList = local_10;
        return 1;
      }
    }
    local_8 = 0xffffffff;
    FUN_00501900();
  }
  ExceptionList = local_10;
  return 0;
}

