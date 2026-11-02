// rea decompile_all
// name: FUN_00596020
// address: 0x596020
// body: available
// range: 0x596020-0x5961b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00596020(undefined1 param_1,ushort param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  undefined4 local_7c;
  undefined2 local_78;
  char local_71;
  undefined1 local_70 [72];
  undefined4 local_28;
  ushort local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d6673;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_71 = '\0';
  FUN_00512300(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  cVar1 = FUN_00503fe0();
  if (cVar1 == '\0') {
    iVar2 = FUN_0052f3a0(1);
    if (iVar2 == 0) {
      FUN_0052f410(param_4);
    }
  }
  local_28 = *(undefined4 *)(in_ECX[0xb] + 0xd8);
  local_24 = param_2 | 0x3704;
  FUN_00503de0(param_3);
  local_78 = (**(code **)(*in_ECX + 0x10))();
  local_14 = FUN_00532540(local_78,param_1,param_5,*(byte *)(in_ECX + 0x1d) >> 1 & 1,
                          *(byte *)(in_ECX + 0x1d) & 1);
  if (local_14 != 0) {
    local_7c = *(undefined4 *)(local_14 + 0x1c);
    local_71 = (**(code **)(*in_ECX + 0x14))(&local_7c);
  }
  if (local_71 != '\0') {
    FUN_00529f40(local_70,0);
  }
  cVar1 = local_71;
  local_8 = 0xffffffff;
  FUN_005123f0();
  ExceptionList = local_10;
  return cVar1;
}

