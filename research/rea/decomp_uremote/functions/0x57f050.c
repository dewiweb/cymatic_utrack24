// rea decompile_all
// name: FUN_0057f050
// address: 0x57f050
// body: available
// range: 0x57f050-0x57f1f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0057f050(ushort param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int in_ECX;
  uint *local_3c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d5592;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(int *)(in_ECX + 0x2c) != 0) &&
     (puVar1 = *(undefined4 **)(in_ECX + 0x2c), puVar1 != (undefined4 *)0x0)) {
    if (puVar1[-1] == 0) {
      FUN_005b13e8(puVar1 + -1,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  *(ushort *)(in_ECX + 0x28) = param_1;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  if (*(short *)(in_ECX + 0x28) != 0) {
    uVar2 = (uint)*(ushort *)(in_ECX + 0x28);
    local_3c = (uint *)FUN_005b04d6(-(uint)(0xfffffffb < uVar2 * 0x210) | uVar2 * 0x210 + 4);
    local_8 = 0;
    if (local_3c == (uint *)0x0) {
      local_3c = (uint *)0x0;
    }
    else {
      *local_3c = uVar2;
      _eh_vector_constructor_iterator_(local_3c + 1,0x210,uVar2,FUN_00581550,FUN_00581570);
      local_3c = local_3c + 1;
    }
    local_8 = 0xffffffff;
    *(uint **)(in_ECX + 0x2c) = local_3c;
  }
  if (*(int *)(in_ECX + 0x2c) != 0) {
    for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
      _memset((void *)(*(int *)(in_ECX + 0x2c) + 6 + local_14 * 0x210),0,0x20a);
    }
  }
  ExceptionList = local_10;
  return *(undefined4 *)(in_ECX + 0x2c);
}

