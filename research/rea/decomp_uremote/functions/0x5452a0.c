// rea decompile_all
// name: FUN_005452a0
// address: 0x5452a0
// body: available
// range: 0x5452a0-0x545416 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005452a0(undefined4 param_1,ushort param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,int param_11,undefined4 param_12)

{
  char cVar1;
  int iVar2;
  int local_48;
  int local_44;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d244d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_005af82d(0xd8,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar2 == 0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_00545190(param_11,1);
  }
  local_8 = 0xffffffff;
  if (local_44 != 0) {
    FUN_005560c0(param_10);
    if (local_44 == 0) {
      local_48 = 0;
    }
    else {
      local_48 = local_44 + 0xa8 + *(int *)(*(int *)(local_44 + 0xa8) + 4);
    }
    cVar1 = FUN_00595090(param_1,(param_2 & 1) != 0,(param_2 & 2) != 0,1,1,1,param_3,param_4,param_5
                         ,param_6,param_7,param_8,param_9,*(undefined4 *)(param_11 + 0xd8),0,
                         param_11 + 0x3f8,param_12,local_48);
    if (cVar1 != '\0') {
      ExceptionList = local_10;
      return local_44;
    }
    FUN_005442f0(0);
  }
  ExceptionList = local_10;
  return 0;
}

