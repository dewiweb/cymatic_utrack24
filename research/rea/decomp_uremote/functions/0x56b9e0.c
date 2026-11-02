// rea decompile_all
// name: FUN_0056b9e0
// address: 0x56b9e0
// body: available
// range: 0x56b9e0-0x56bb3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0056b9e0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined1 param_6,undefined4 param_7,undefined1 param_8)

{
  uint uVar1;
  int iVar2;
  int local_2c;
  bool local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d47ad;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_11 = false;
  iVar2 = FUN_00559640(param_1,0x3700,param_2,*(undefined4 *)(param_4 + 0xd8));
  if (iVar2 == 0x17) {
    FUN_00528280(0,param_2,*(undefined2 *)(param_2 + 0xc));
  }
  if ((iVar2 == 0) || (iVar2 == 0xd)) {
    iVar2 = FUN_005af82d(0x110,uVar1);
    local_8 = 0;
    if (iVar2 == 0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_0056af60(param_4,param_8,0x84,1);
    }
    local_8 = 0xffffffff;
    if (local_2c != 0) {
      *(undefined4 *)(local_2c + 0x80) = param_5;
      *(undefined1 *)(local_2c + 0x84) = param_6;
      *(undefined4 *)(local_2c + 0x7c) = param_7;
      uVar1 = FUN_00521c70(param_1,local_2c);
      local_11 = (uVar1 & 0x80) != 0;
      (**(code **)(*(int *)(local_2c + 0x28 + *(int *)(*(int *)(local_2c + 0x28) + 8)) + 4))();
    }
  }
  ExceptionList = local_10;
  return local_11;
}

