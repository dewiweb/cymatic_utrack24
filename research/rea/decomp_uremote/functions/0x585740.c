// rea decompile_all
// name: FUN_00585740
// address: 0x585740
// body: available
// range: 0x585740-0x585858 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00585740(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d5b3b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00583530(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  uVar1 = FUN_005b04d6(0x28);
  *(undefined4 *)(in_ECX + 0xdc) = uVar1;
  if (*(int *)(in_ECX + 0xdc) != 0) {
    *(undefined2 *)(in_ECX + 0xd4) = 10;
    iVar2 = FUN_005af82d(8);
    local_8 = 0;
    if (iVar2 == 0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_00501870(param_3);
    }
    **(undefined4 **)(in_ECX + 0xdc) = local_24;
    if (**(int **)(in_ECX + 0xdc) != 0) {
      *(undefined4 *)(in_ECX + 0x28) = 0x80060023;
      *(undefined2 *)(in_ECX + 0xc0) = param_1;
      *(undefined2 *)(in_ECX + 0xc2) = param_2;
      *(undefined2 *)(in_ECX + 0xce) = 1;
      *(undefined1 *)(in_ECX + 0x114) = 1;
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}

