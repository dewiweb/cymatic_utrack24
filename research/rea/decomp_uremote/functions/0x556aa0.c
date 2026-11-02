// rea decompile_all
// name: FUN_00556aa0
// address: 0x556aa0
// body: available
// range: 0x556aa0-0x556c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00556aa0(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                undefined4 param_5,undefined2 param_6,undefined1 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,int param_11,undefined4 param_12)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int local_2c;
  int local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d3940;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = FUN_005af82d(0xd0,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar4 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_00556930(1);
  }
  local_8 = 0xffffffff;
  if (local_28 != 0) {
    *(undefined4 *)(local_28 + 0xc0) = param_9;
    *(int *)(local_28 + 0xc4) = param_11;
    if (local_28 == 0) {
      local_2c = 0;
    }
    else {
      local_2c = local_28 + 0x60 + *(int *)(*(int *)(local_28 + 0x60) + 4);
    }
    cVar2 = FUN_00544180(0,&DAT_0095c848,param_11 + 0x3f8,param_12,
                         -(uint)(*(char *)(*(int *)(local_28 + 0xc4) + 0xad) != '\0') & 20000,0,
                         local_2c);
    if (cVar2 != '\0') {
      uVar1 = *(undefined4 *)(param_11 + 0xd8);
      uVar3 = FUN_00544700(param_2,param_1);
      iVar4 = FUN_00536aa0(uVar1,uVar3,param_2,param_1);
      if ((iVar4 != 0) &&
         (cVar2 = FUN_00588230(param_3,param_4,param_5,param_6,param_7,param_8), cVar2 != '\0')) {
        ExceptionList = local_10;
        return local_28;
      }
    }
    FUN_00544580();
  }
  ExceptionList = local_10;
  return 0;
}

