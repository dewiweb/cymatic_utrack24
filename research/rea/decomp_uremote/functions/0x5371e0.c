// rea decompile_all
// name: FUN_005371e0
// address: 0x5371e0
// body: available
// range: 0x5371e0-0x5372f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_005371e0(undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  int in_ECX;
  undefined4 local_5c;
  undefined4 *puStack_58;
  uint uStack_54;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined1 *local_40;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d14d5;
  local_10 = ExceptionList;
  uStack_54 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined2 *)(in_ECX + 0x4c) = 0x2344;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  puStack_58 = (undefined4 *)param_2;
  local_5c = 0x53722a;
  FUN_00522ac0();
  puStack_58 = (undefined4 *)0x80;
  local_5c = 0x537234;
  local_1c = FUN_005af82d();
  local_8 = 0;
  if (local_1c == 0) {
    local_4c = (undefined4 *)0x0;
  }
  else {
    puStack_58 = (undefined4 *)param_4;
    local_20 = (undefined1 *)&local_5c;
    local_40 = (undefined1 *)&local_5c;
    local_5c = param_4;
                    /* WARNING: Ignoring partial resolution of indirect */
    local_5c._0_2_ = param_3;
    local_4c = (undefined4 *)FUN_00589070(param_1,param_2);
    local_48 = local_4c;
  }
  local_18 = local_4c;
  local_8 = 0xffffffff;
  local_14 = local_4c;
  if (local_4c == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    puStack_58 = local_4c;
    local_5c = 0x5372aa;
    iVar1 = FUN_0052f740();
    if (iVar1 != 0) {
      local_28 = local_14;
      local_24 = local_14;
      if (local_14 != (undefined4 *)0x0) {
        puStack_58 = (undefined4 *)0x1;
        local_5c = 0x5372d3;
        (**(code **)*local_14)();
      }
      local_14 = (undefined4 *)0x0;
    }
  }
  ExceptionList = local_10;
  return local_14;
}

