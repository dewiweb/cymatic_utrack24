// rea decompile_all
// name: FUN_0051b300
// address: 0x51b300
// body: available
// range: 0x51b300-0x51b4e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0051b300(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [12];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cf9a4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x98))
                    (local_1c,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  FUN_00503650(uVar1);
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  local_20 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0xa0) = local_20;
  local_24 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x88) = local_24;
  local_28 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x8c) = local_28;
  local_2c = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x90) = local_2c;
  local_30 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x94) = local_30;
  local_34 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x98) = local_34;
  local_38 = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x9c) = local_38;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  uVar1 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0xbc))
                    (local_40,1);
  local_8 = 0;
  FUN_00501e80(uVar1);
  local_8 = 0xffffffff;
  FUN_00501900();
  FUN_00501e80(*(int *)(in_ECX + 0x2c) + 0xb8);
  FUN_005063a0(*(int *)(in_ECX + 0x2c) + 0x100);
  *(byte *)(in_ECX + 0xd8) = *(byte *)(in_ECX + 0xd8) | 1;
  ExceptionList = local_10;
  return 1;
}

