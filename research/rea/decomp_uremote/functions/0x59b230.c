// rea decompile_all
// name: FUN_0059b230
// address: 0x59b230
// body: available
// range: 0x59b230-0x59b31d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0059b230(undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_28;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d6fe9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  if (1 < (uint)((int)param_3 - (int)param_2)) {
    uVar1 = *param_2;
    iVar2 = FUN_005af82d(0x120,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    if (iVar2 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_0059ae30(param_1,uVar1,0,1);
    }
    local_8 = 0xffffffff;
    local_14 = local_28;
    if ((local_28 != 0) && (param_2 + 1 < param_3)) {
      uVar3 = FUN_0056ed50(param_2 + 1,param_3);
      *(undefined4 *)(local_28 + 0xf4) = uVar3;
      *(undefined1 *)(local_28 + 0xf8) = 1;
    }
  }
  ExceptionList = local_10;
  return local_14;
}

