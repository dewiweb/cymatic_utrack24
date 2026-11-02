// rea decompile_all
// name: FUN_005370d0
// address: 0x5370d0
// body: available
// range: 0x5370d0-0x5371dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_005370d0(undefined2 param_1,undefined4 *param_2)

{
  int iVar1;
  int in_ECX;
  undefined4 *local_44;
  uint uStack_40;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined1 *local_2c;
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
  puStack_c = &LAB_005d14af;
  local_10 = ExceptionList;
  uStack_40 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined2 *)(in_ECX + 0x4c) = 0x2340;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  local_44 = param_2;
  FUN_00503650();
  local_44 = (undefined4 *)0x40;
  local_1c = FUN_005af82d();
  local_8 = 0;
  if (local_1c == 0) {
    local_38 = (undefined4 *)0x0;
  }
  else {
    local_20 = (undefined1 *)&local_44;
    local_2c = (undefined1 *)&local_44;
    local_38 = (undefined4 *)FUN_00588d50(param_1,param_2);
    local_34 = local_38;
  }
  local_18 = local_38;
  local_8 = 0xffffffff;
  local_14 = local_38;
  if (local_38 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_44 = local_38;
    iVar1 = FUN_0052f740();
    if (iVar1 != 0) {
      local_28 = local_14;
      local_24 = local_14;
      if (local_14 != (undefined4 *)0x0) {
        local_44 = (undefined4 *)0x1;
        (**(code **)*local_14)();
      }
      local_14 = (undefined4 *)0x0;
    }
  }
  ExceptionList = local_10;
  return local_14;
}

