// rea decompile_all
// name: FUN_00505f80
// address: 0x505f80
// body: available
// range: 0x505f80-0x506079 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00505f80(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int local_28;
  int local_24;
  undefined2 local_18 [2];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ce33b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18[0] = 0;
  FUN_005150d0(local_18,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  iVar2 = FUN_005af82d(0xc78);
  local_8 = 0;
  if (iVar2 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_00513530(param_1,local_18[0],1);
  }
  local_8 = 0xffffffff;
  local_14 = local_24;
  if (local_24 != 0) {
    cVar1 = FUN_0050a570();
    if (cVar1 == '\0') {
      (*(code *)**(undefined4 **)(local_14 + 0xc + *(int *)(*(int *)(local_14 + 0xc) + 4)))();
      local_14 = 0;
    }
  }
  if (local_14 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = local_14 + 0xc + *(int *)(*(int *)(local_14 + 0xc) + 4);
  }
  ExceptionList = local_10;
  return local_28;
}

