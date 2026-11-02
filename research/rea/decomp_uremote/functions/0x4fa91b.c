// rea decompile_all
// name: FUN_004fa91b
// address: 0x4fa91b
// body: available
// range: 0x4fa91b-0x4faa4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004fa91b(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_30;
  undefined4 local_2c [6];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005db4ce;
  local_14 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_14;
  iVar2 = FUN_004fab98(*in_ECX);
  if (iVar2 == 0) {
    iVar2 = FUN_004fcade(uVar1);
    if (iVar2 != 0) {
      local_2c[0] = FUN_004fa673();
      local_2c[1] = FUN_0047e366();
      local_2c[2] = FUN_0047e371();
      local_2c[3] = 0x3f800000;
      local_2c[4] = 0x3f800000;
      puVar3 = local_2c;
      puVar4 = param_1;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      ExceptionList = local_14;
      return param_1;
    }
    iVar2 = FUN_005af82d(0x28);
    local_c = 0;
    if (iVar2 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_004faa4f(iVar2,unaff_EBX);
    }
    local_c = 0xffffffff;
    if (*(int *)(unaff_EBX + 0x14) < *(int *)(unaff_EBX + 0x18) + 1) {
      FUN_004f8197();
    }
    iVar2 = *(int *)(unaff_EBX + 0x18);
    *(int *)(unaff_EBX + 0x18) = iVar2 + 1;
    *(int *)(*(int *)(unaff_EBX + 0x10) + iVar2 * 4) = local_30;
    *(int *)(unaff_EBX + 0x1c) = *(int *)(unaff_EBX + 0x1c) + *(int *)(local_30 + 0x20);
    while (((*(uint *)(unaff_EBX + 0x20) < *(uint *)(unaff_EBX + 0x1c) &&
            (1 < *(int *)(unaff_EBX + 0x18))) && (*(int *)(unaff_EBX + 0x1c) != 0))) {
      FUN_004fabc0();
    }
  }
  FUN_004faaa8();
  ExceptionList = local_14;
  return param_1;
}

