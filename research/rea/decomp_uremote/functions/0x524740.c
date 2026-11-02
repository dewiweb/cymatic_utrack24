// rea decompile_all
// name: FUN_00524740
// address: 0x524740
// body: available
// range: 0x524740-0x5248c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00524740(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined1 local_70 [88];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d0136;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    cVar1 = FUN_0052bf70(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    if (cVar1 != '\0') {
      FUN_00512300();
      local_8 = 0;
      uVar2 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) +
                          0x98))(local_7c);
      FUN_005337f0(uVar2);
      FUN_00529f40(local_70,0);
      local_8 = 0xffffffff;
      FUN_005123f0();
    }
    local_18 = *(int *)(param_1 + 0x11c);
    local_14 = 0;
    while (local_18 != 0) {
      local_14 = *(int *)(local_18 + 0x120);
      FUN_00524740(local_18);
      local_18 = local_14;
    }
    FUN_00565fe0();
    *(undefined4 *)(in_ECX + 0x30) = 0;
    uVar2 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x98)
            )(local_88);
    FUN_00527610(uVar2);
    (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 8)) + 4))();
  }
  ExceptionList = local_10;
  return;
}

