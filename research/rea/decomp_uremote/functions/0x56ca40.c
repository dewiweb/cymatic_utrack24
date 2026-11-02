// rea decompile_all
// name: FUN_0056ca40
// address: 0x56ca40
// body: available
// range: 0x56ca40-0x56cb6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0056ca40(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int *local_30;
  undefined1 local_20 [4];
  int *local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4975;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_11 = 0;
  local_18 = FUN_0055a590(param_1,0x3700,param_2,*(undefined4 *)(param_4 + 0xd8),0,0);
  if (local_18 == 0x17) {
    FUN_00528280(0,param_2,*(undefined2 *)(param_2 + 0xc));
  }
  if ((local_18 == 0) || (local_18 == 0xd)) {
    iVar2 = FUN_005af82d(0x110,uVar1);
    local_8 = 0;
    if (iVar2 == 0) {
      local_30 = (int *)0x0;
    }
    else {
      local_30 = (int *)FUN_0056af60(param_4,1,0x46,1);
    }
    local_8 = 0xffffffff;
    local_1c = local_30;
    if (local_30 != (int *)0x0) {
      local_11 = (**(code **)(*local_30 + 0x18))(param_1,local_20,0);
      (**(code **)(*(int *)((int)local_1c + *(int *)(local_1c[10] + 8) + 0x28) + 4))();
    }
  }
  ExceptionList = local_10;
  return local_11;
}

