// rea decompile_all
// name: FUN_005a8ec0
// address: 0x5a8ec0
// body: available
// range: 0x5a8ec0-0x5a9135 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005a8ec0(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 *puVar5;
  undefined1 local_a0 [12];
  int local_94;
  undefined1 local_80 [16];
  undefined1 local_70 [95];
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d7bcd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((*(uint *)(in_ECX + 0x70) & 0x8000) == 0) && ((*(uint *)(in_ECX + 0x70) & 0x80000) == 0)) {
    uVar3 = 7;
  }
  else {
    if (*(int *)(in_ECX + 0x124) != 0) {
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x124) + 4 +
                           *(int *)(*(int *)(*(int *)(in_ECX + 0x124) + 4) + 4)) + 0x24))
                (DAT_00955fd4 ^ (uint)&stack0xfffffffc);
      uVar3 = param_3;
      uVar4 = FUN_00568670(local_80);
      FUN_00577ec0(param_1,uVar4,uVar3);
    }
    sVar2 = FUN_00558f30(1);
    if (sVar2 == 0) {
      uVar3 = 0x15;
    }
    else {
      local_11 = param_2;
      if ((*(uint *)(in_ECX + 0x70) & 0x8000) != 0) {
        local_11 = 0;
      }
      FUN_00512300();
      local_8 = 0;
      local_94 = FUN_005686d0();
      puVar5 = local_a0;
      uVar3 = (**(code **)(*(int *)(local_94 + 0x28 + *(int *)(*(int *)(local_94 + 0x28) + 0xc)) +
                          0x98))(puVar5,*(undefined2 *)(in_ECX + 0xfa),in_ECX + 0x48,
                                 *(undefined4 *)(in_ECX + 0x2c),param_1,local_11,param_3,0);
      uVar3 = FUN_00503c30(uVar3,puVar5);
      cVar1 = FUN_0056b9e0(local_70,uVar3);
      if (cVar1 != '\0') {
        FUN_00529f40(local_70,0);
      }
      local_8 = 0xffffffff;
      FUN_005123f0();
      uVar3 = 0;
    }
  }
  ExceptionList = local_10;
  return uVar3;
}

