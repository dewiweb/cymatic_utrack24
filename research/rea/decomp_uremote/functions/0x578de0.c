// rea decompile_all
// name: FUN_00578de0
// address: 0x578de0
// body: available
// range: 0x578de0-0x578f92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00578de0(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 local_8c [16];
  undefined1 local_7c [12];
  undefined1 local_70 [92];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d508f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0x29;
  FUN_0054f6b0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  cVar2 = FUN_00503fe0();
  if (cVar2 == '\0') {
    cVar2 = FUN_0055a4b0(param_1);
    if (cVar2 != '\0') {
      local_14 = 0;
      FUN_00512300();
      local_8 = 0;
      FUN_0052dce0(local_7c);
      uVar1 = *(undefined4 *)(*(int *)(in_ECX + -0x104) + 0xd8);
      puVar5 = local_7c;
      puVar4 = &DAT_0095c854;
      uVar3 = (**(code **)(*(int *)(in_ECX + -0x108 + *(int *)(*(int *)(in_ECX + -0x108) + 0xc)) +
                          0x48))(local_8c,&DAT_0095c854,puVar5);
      FUN_00536470(uVar1,param_1,0x307,*(undefined2 *)(param_1 + 0xc),uVar3,puVar4,puVar5);
      cVar2 = FUN_00529f40(local_70,0);
      if (cVar2 == '\0') {
        local_14 = 1;
      }
      local_8 = 0xffffffff;
      FUN_005123f0();
    }
  }
  FUN_0054f6f0();
  ExceptionList = local_10;
  return local_14;
}

