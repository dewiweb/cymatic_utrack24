// rea decompile_all
// name: FUN_00535770
// address: 0x535770
// body: available
// range: 0x535770-0x535890 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00535770(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
            undefined4 param_9,undefined4 param_10)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  undefined4 *local_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d113d;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined2 *)(in_ECX + 0x4c) = 0x2384;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  FUN_00503650(param_2);
  FUN_00522ac0(param_3);
  iVar2 = FUN_005af82d(0x50,uVar1);
  local_8 = 0;
  if (iVar2 == 0) {
    local_40 = (undefined4 *)0x0;
  }
  else {
    local_40 = (undefined4 *)
               FUN_00582e80(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                           );
  }
  local_8 = 0xffffffff;
  if (local_40 == (undefined4 *)0x0) {
    local_40 = (undefined4 *)0x0;
  }
  else {
    iVar2 = FUN_0052f740(local_40);
    if (iVar2 != 0) {
      if (local_40 != (undefined4 *)0x0) {
        (**(code **)*local_40)(1);
      }
      local_40 = (undefined4 *)0x0;
    }
  }
  ExceptionList = local_10;
  return local_40;
}

