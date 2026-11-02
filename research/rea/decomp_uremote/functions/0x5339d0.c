// rea decompile_all
// name: FUN_005339d0
// address: 0x5339d0
// body: available
// range: 0x5339d0-0x533ab4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_005339d0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  undefined4 *local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d0cc9;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined2 *)(in_ECX + 0x4c) = 0x42c8;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  iVar2 = FUN_005af82d(0x28,uVar1);
  local_8 = 0;
  if (iVar2 == 0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = (undefined4 *)FUN_0057d5b0(param_1,param_2);
  }
  local_8 = 0xffffffff;
  if (local_2c == (undefined4 *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    iVar2 = FUN_0052f740(local_2c);
    if (iVar2 != 0) {
      if (local_2c != (undefined4 *)0x0) {
        (**(code **)*local_2c)(1);
      }
      local_2c = (undefined4 *)0x0;
    }
  }
  ExceptionList = local_10;
  return local_2c;
}

