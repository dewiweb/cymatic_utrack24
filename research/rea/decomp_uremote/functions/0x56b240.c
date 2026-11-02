// rea decompile_all
// name: FUN_0056b240
// address: 0x56b240
// body: available
// range: 0x56b240-0x56b36e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0056b240(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *local_30;
  undefined1 local_1c [4];
  int *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d46c9;
  local_10 = ExceptionList;
  uVar3 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_11 = 0;
  uVar1 = *(undefined4 *)(param_4 + 0xd8);
  *(undefined2 *)(param_1 + 0x4c) = 0x37c4;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  FUN_00503de0(param_2);
  cVar2 = FUN_00503fe0(uVar3);
  if (cVar2 == '\0') {
    iVar4 = FUN_0052f3a0(1);
    if (iVar4 == 0) {
      FUN_0052f410(param_3);
    }
  }
  iVar4 = FUN_005af82d(0x110);
  local_8 = 0;
  if (iVar4 == 0) {
    local_30 = (int *)0x0;
  }
  else {
    local_30 = (int *)FUN_0056af60(param_4,0,6,1);
  }
  local_8 = 0xffffffff;
  local_18 = local_30;
  if (local_30 != (int *)0x0) {
    local_11 = (**(code **)(*local_30 + 0x18))(param_1,local_1c,0);
    (**(code **)(*(int *)((int)local_18 + *(int *)(local_18[10] + 8) + 0x28) + 4))();
  }
  ExceptionList = local_10;
  return local_11;
}

