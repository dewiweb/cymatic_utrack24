// rea decompile_all
// name: FUN_00585210
// address: 0x585210
// body: available
// range: 0x585210-0x5853e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00585210(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint in_ECX;
  undefined4 local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d5aef;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00583530(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  uVar1 = FUN_005b04d6(0x14);
  *(undefined4 *)(in_ECX + 0xd8) = uVar1;
  uVar1 = FUN_005b04d6(0x28);
  *(undefined4 *)(in_ECX + 0xdc) = uVar1;
  uVar3 = in_ECX;
  if ((*(int *)(in_ECX + 0xd8) == 0) || (*(int *)(in_ECX + 0xdc) == 0)) {
    if (*(int *)(in_ECX + 0xd8) != 0) {
      uVar3 = FUN_005af7b6(*(undefined4 *)(in_ECX + 0xd8));
      *(undefined4 *)(in_ECX + 0xd8) = 0;
    }
    if (*(int *)(in_ECX + 0xdc) != 0) {
      FUN_005af7b6(*(undefined4 *)(in_ECX + 0xdc));
      *(undefined4 *)(in_ECX + 0xdc) = 0;
      uVar3 = in_ECX;
    }
  }
  else {
    *(undefined2 *)(in_ECX + 0xd4) = 10;
    *(undefined2 *)(in_ECX + 0xd2) = 10;
    **(undefined2 **)(in_ECX + 0xd8) = param_3;
    iVar2 = FUN_005af82d(8);
    local_8 = 0;
    if (iVar2 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_00501870(param_4);
    }
    **(undefined4 **)(in_ECX + 0xdc) = local_30;
    if (**(int **)(in_ECX + 0xdc) != 0) {
      *(undefined4 *)(in_ECX + 0x28) = 0xc0060022;
      *(undefined2 *)(in_ECX + 0xc0) = param_1;
      *(undefined2 *)(in_ECX + 0xc2) = param_2;
      *(undefined2 *)(in_ECX + 0xce) = 1;
      *(undefined2 *)(in_ECX + 0xcc) = 1;
      *(undefined1 *)(in_ECX + 0x114) = 1;
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return uVar3 & 0xffffff00;
}

