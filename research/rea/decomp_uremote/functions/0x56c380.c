// rea decompile_all
// name: FUN_0056c380
// address: 0x56c380
// body: available
// range: 0x56c380-0x56c4d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0056c380(undefined4 param_1,undefined4 param_2,undefined2 *param_3,undefined4 *param_4,
                 undefined4 param_5,undefined2 param_6)

{
  int iVar1;
  uint uVar2;
  int local_28;
  bool local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d48b7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_11 = false;
  iVar1 = FUN_005af82d(0x110,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_0056af60(param_2,1,0xc1,1);
  }
  local_8 = 0xffffffff;
  if (local_28 != 0) {
    *(undefined2 *)(local_28 + 0x8a) = param_3[1];
    *(undefined2 *)(local_28 + 0x88) = *param_3;
    *(undefined2 *)(local_28 + 0x8c) = param_3[2];
    *(undefined2 *)(local_28 + 0x8e) = param_3[3];
    *(undefined2 *)(local_28 + 0x7c) = param_6;
    *(undefined4 *)(local_28 + 0xb8) = *param_4;
    *(undefined4 *)(local_28 + 0xbc) = param_4[1];
    *(undefined4 *)(local_28 + 0xc0) = param_4[2];
    FUN_00501f30(param_5);
    uVar2 = FUN_00521c70(param_1,local_28);
    local_11 = (uVar2 & 0x80) != 0;
    (**(code **)(*(int *)(local_28 + 0x28 + *(int *)(*(int *)(local_28 + 0x28) + 8)) + 4))();
  }
  ExceptionList = local_10;
  return local_11;
}

