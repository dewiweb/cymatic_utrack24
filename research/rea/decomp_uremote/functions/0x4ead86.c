// rea decompile_all
// name: FUN_004ead86
// address: 0x4ead86
// body: available
// range: 0x4ead86-0x4eae78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ead86(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined4 extraout_ECX;
  uint local_50;
  undefined1 local_4c [56];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e4e58;
  local_14 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xffffffa8;
  ExceptionList = &local_14;
  FUN_004c2c15(100);
  FUN_004e9764(uVar2);
  bVar1 = *(byte *)(in_ECX + 0x25);
  if (((char)bVar1 < '\0') || ((bVar1 & 0x20) == 0)) {
    if (((bVar1 & 0x10) == 0) || ((*(uint *)(param_1 + 0x10) >> 5 & 1) == 0)) {
      local_50 = CONCAT31(local_50._1_3_,*(undefined1 *)(param_1 + 0x10)) & 0xffffff01;
      uVar3 = FUN_004ea395(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
      FUN_004ea237(uVar3,local_50);
    }
    else {
      FUN_004e22ca();
      local_c = 0;
      thunk_FUN_004c1d58();
      FUN_004e2891();
      (**(code **)(*in_ECX + 0xb0))(local_4c,param_1);
      uVar3 = FUN_004f8d36();
      uVar4 = FUN_004e248e(extraout_ECX,uVar3);
      thunk_FUN_004e2732(local_4c,uVar4,uVar3);
      local_c = 0xffffffff;
      thunk_FUN_004f657d(local_4c);
    }
  }
  ExceptionList = local_14;
  return;
}

