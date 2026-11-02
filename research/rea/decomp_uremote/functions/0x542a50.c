// rea decompile_all
// name: FUN_00542a50
// address: 0x542a50
// body: available
// range: 0x542a50-0x542be6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00542a50(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *local_30;
  undefined4 *local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d21e2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_005af82d(0x1b8,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar2 == 0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = (undefined4 *)FUN_00542740(param_1,1);
  }
  local_8 = 0xffffffff;
  if (local_2c != (undefined4 *)0x0) {
    cVar1 = FUN_0055c2d0(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*(int *)((int)local_2c + *(int *)(local_2c[10] + 0xc) + 0x28) + 0x154))
                        (0);
      uVar3 = (**(code **)(*(int *)(iVar2 + 4 + *(int *)(*(int *)(iVar2 + 4) + 4)) + 0x24))();
      local_2c[0x60] = uVar3;
      if (local_2c == (undefined4 *)0x0) {
        local_30 = (undefined4 *)0x0;
      }
      else {
        local_30 = local_2c + 0x5d;
      }
      (**(code **)(*(int *)(local_2c[0x60] + 0x28 + *(int *)(*(int *)(local_2c[0x60] + 0x28) + 0xc))
                  + 4))(local_30);
      ExceptionList = local_10;
      return local_2c;
    }
    if (local_2c != (undefined4 *)0x0) {
      (**(code **)*local_2c)(1);
    }
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

