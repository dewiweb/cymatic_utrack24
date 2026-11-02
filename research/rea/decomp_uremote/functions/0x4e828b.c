// rea decompile_all
// name: FUN_004e828b
// address: 0x4e828b
// body: available
// range: 0x4e828b-0x4e8381 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e828b(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e10db;
  local_14 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_14;
  local_2c = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + local_2c * 4);
      local_24 = *(int *)(iVar1 + 8) + iVar4;
      if (param_3 < local_24) {
        if (param_4 <= iVar4) {
          ExceptionList = local_14;
          return;
        }
        local_1c = FUN_00439b5a(0,uVar2);
        uVar3 = FUN_00439b5a(param_3 - iVar4);
        FUN_00440367(uVar3);
        iVar4 = FUN_00439b5a(param_3 - iVar4);
        iVar5 = FUN_00439b5a(iVar4);
        if (iVar4 != iVar5) {
          FUN_0046642b(iVar1,local_28,iVar5);
          local_c = 0;
          FUN_00465cf5();
          local_c = 0xffffffff;
          FUN_004652d6();
        }
      }
      local_2c = local_2c + 1;
      iVar4 = local_24;
    } while (local_2c < *(int *)(param_1 + 0x10));
  }
  ExceptionList = local_14;
  return;
}

