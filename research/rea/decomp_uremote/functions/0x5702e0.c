// rea decompile_all
// name: FUN_005702e0
// address: 0x5702e0
// body: available
// range: 0x5702e0-0x5703e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005702e0(undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_2c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4ba9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  if (1 < (uint)((int)param_3 - (int)param_2)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    iVar3 = FUN_005af82d(0x120,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    if (iVar3 == 0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_0056ffa0(param_1,uVar1,uVar2,0,1);
    }
    local_8 = 0xffffffff;
    local_14 = local_2c;
    if ((local_2c != 0) && (param_2 + 2 < param_3)) {
      uVar4 = FUN_0056ed50(param_2 + 2,param_3);
      *(undefined4 *)(local_2c + 0xf4) = uVar4;
      *(undefined1 *)(local_2c + 0xf8) = 1;
    }
  }
  ExceptionList = local_10;
  return local_14;
}

