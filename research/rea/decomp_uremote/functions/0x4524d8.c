// rea decompile_all
// name: FUN_004524d8
// address: 0x4524d8
// body: available
// range: 0x4524d8-0x4525a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004524d8(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  undefined1 local_1c [8];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005df1a9;
  local_14 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xffffffd8;
  iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x80) + 0x7c) + 0x268);
  if (iVar1 == 0) {
    ExceptionList = &local_14;
    FUN_004e5a95(&DAT_0095d718,0);
  }
  else {
    if (iVar1 == 1) {
      ExceptionList = &local_14;
      FUN_0046537e(local_1c);
      local_c = 0;
    }
    else if (iVar1 == 2) {
      ExceptionList = &local_14;
      FUN_0046537e(local_1c);
      local_c = 1;
    }
    else {
      if (iVar1 != 3) {
        return;
      }
      ExceptionList = &local_14;
      FUN_0046537e(local_1c);
      local_c = 2;
    }
    FUN_004e5a95(local_1c,0);
    FUN_004652d6(uVar2);
  }
  ExceptionList = local_14;
  return;
}

