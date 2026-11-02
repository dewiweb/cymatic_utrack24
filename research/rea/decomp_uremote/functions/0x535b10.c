// rea decompile_all
// name: FUN_00535b10
// address: 0x535b10
// body: available
// range: 0x535b10-0x535c65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00535b10(undefined2 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
            undefined2 param_17,undefined2 param_18,undefined4 param_19,undefined4 param_20,
            undefined2 param_21,undefined2 param_22,undefined1 param_23)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  undefined4 *local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d11af;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined2 *)(in_ECX + 0x4c) = 0x2340;
  *(undefined4 *)(in_ECX + 0x48) = param_16;
  FUN_00503650(param_2);
  iVar2 = FUN_005af82d(0x84,uVar1);
  local_8 = 0;
  if (iVar2 == 0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = (undefined4 *)
               FUN_00586060(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17,
                            param_18,param_19,param_20,param_21,param_22,param_23);
  }
  local_8 = 0xffffffff;
  if (local_2c == (undefined4 *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    iVar2 = FUN_0052f740(local_2c);
    if (iVar2 != 0) {
      if (local_2c != (undefined4 *)0x0) {
        (**(code **)*local_2c)(1);
      }
      local_2c = (undefined4 *)0x0;
    }
  }
  ExceptionList = local_10;
  return local_2c;
}

