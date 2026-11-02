// rea decompile_all
// name: FUN_005563e0
// address: 0x5563e0
// body: available
// range: 0x5563e0-0x556542 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005563e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined2 param_6,undefined4 param_7,undefined4 param_8,
                int param_9,undefined4 param_10)

{
  char cVar1;
  int iVar2;
  int local_24;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d388d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_005af82d(0xa0,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar2 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_005562a0(1);
  }
  local_8 = 0xffffffff;
  if (local_20 != 0) {
    *(undefined4 *)(local_20 + 0x90) = param_7;
    *(int *)(local_20 + 0x94) = param_9;
    FUN_00503650(param_1);
    FUN_00503650(param_2);
    *(undefined4 *)(local_20 + 0x80) = param_3;
    *(undefined4 *)(local_20 + 0x84) = param_4;
    *(undefined4 *)(local_20 + 0x88) = param_5;
    *(undefined2 *)(local_20 + 0x8c) = param_6;
    if (local_20 == 0) {
      local_24 = 0;
    }
    else {
      local_24 = local_20 + 0x60 + *(int *)(*(int *)(local_20 + 0x60) + 4);
    }
    cVar1 = FUN_00544180(0,&DAT_0095c848,param_9 + 0x3f8,param_10,
                         -(uint)(*(char *)(*(int *)(local_20 + 0x94) + 0xad) != '\0') & 20000,0,
                         local_24);
    if (cVar1 != '\0') {
      ExceptionList = local_10;
      return local_20;
    }
    FUN_005442f0(0);
  }
  ExceptionList = local_10;
  return 0;
}

