// rea decompile_all
// name: FUN_00560c20
// address: 0x560c20
// body: available
// range: 0x560c20-0x560d62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00560c20(ushort param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
            undefined2 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int in_ECX;
  undefined1 local_70 [92];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d40ea;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  FUN_0054f6b0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  if ((param_1 & 0x2000) == 0) {
    local_14 = 0x14;
  }
  else {
    FUN_00512300();
    local_8 = 0;
    FUN_00536ec0(*(undefined4 *)(**(int **)(in_ECX + -0x104) + 0xd8),in_ECX + -0x144,param_1,param_2
                 ,param_3,param_4,param_5,param_6,param_7);
    cVar1 = FUN_00529f40(local_70,1);
    if (cVar1 == '\0') {
      local_14 = 1;
    }
    local_8 = 0xffffffff;
    FUN_005123f0();
  }
  FUN_0054f6f0();
  ExceptionList = local_10;
  return local_14;
}

