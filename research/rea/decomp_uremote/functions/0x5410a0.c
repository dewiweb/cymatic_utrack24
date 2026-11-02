// rea decompile_all
// name: FUN_005410a0
// address: 0x5410a0
// body: available
// range: 0x5410a0-0x541279 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_005410a0(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  uint local_5c;
  undefined4 *puStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  int local_48;
  undefined4 *local_44;
  char local_3d;
  undefined4 *local_3c;
  int local_38;
  undefined4 *local_34;
  undefined1 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  uint local_24;
  undefined1 *local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d20e2;
  local_10 = ExceptionList;
  uStack_50 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_54 = 0x1bc;
  puStack_58 = (undefined4 *)0x5410cf;
  local_1c = FUN_005af82d();
  local_8 = 0;
  if (local_1c == 0) {
    local_3c = (undefined4 *)0x0;
  }
  else {
    uStack_54 = 1;
    puStack_58 = (undefined4 *)param_1;
    local_5c = 0x5410f0;
    local_3c = (undefined4 *)FUN_00540d80();
  }
  local_18 = local_3c;
  local_8 = 0xffffffff;
  local_14 = local_3c;
  if (local_3c != (undefined4 *)0x0) {
    local_5c = param_6 | 0x1000000;
    uStack_54 = param_8;
    puStack_58 = (undefined4 *)param_7;
    local_20 = (undefined1 *)&local_5c;
    local_30 = (undefined1 *)&local_5c;
    local_24 = local_5c;
    local_3d = FUN_0055c2d0(param_2,param_3,param_4,param_5);
    if (local_3d != '\0') {
      if (local_14 == (undefined4 *)0x0) {
        local_34 = (undefined4 *)0x0;
      }
      else {
        local_34 = local_14 + 0x5e;
      }
      local_14[0x44] = local_34;
      uStack_54 = 0;
      puStack_58 = (undefined4 *)0x5411b7;
      local_38 = (**(code **)(*(int *)((int)local_14 + *(int *)(local_14[10] + 0xc) + 0x28) + 0x154)
                 )();
      puStack_58 = (undefined4 *)0x5411df;
      uVar1 = (**(code **)(*(int *)(local_38 + 4 + *(int *)(*(int *)(local_38 + 4) + 4)) + 0x24))();
      local_14[0x61] = uVar1;
      if (local_14 == (undefined4 *)0x0) {
        local_44 = (undefined4 *)0x0;
      }
      else {
        local_44 = local_14 + 0x5d;
      }
      local_48 = local_14[0x61];
      puStack_58 = local_44;
      local_5c = 0x541238;
      (**(code **)(*(int *)(local_48 + 0x28 + *(int *)(*(int *)(local_48 + 0x28) + 0xc)) + 4))();
      ExceptionList = local_10;
      return local_14;
    }
    local_2c = local_14;
    local_28 = local_14;
    if (local_14 != (undefined4 *)0x0) {
      uStack_54 = 1;
      puStack_58 = (undefined4 *)0x54125d;
      (**(code **)*local_14)();
    }
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

