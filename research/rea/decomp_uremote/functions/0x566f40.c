// rea decompile_all
// name: FUN_00566f40
// address: 0x566f40
// body: available
// range: 0x566f40-0x5670f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00566f40(undefined4 param_1)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  undefined1 local_a0 [12];
  int local_94;
  undefined1 local_80 [16];
  undefined1 local_70 [92];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d452f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  FUN_0054f6b0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  sVar2 = FUN_00558f30(1);
  if (sVar2 == 0) {
    local_14 = 0x15;
  }
  else {
    uVar3 = FUN_00558f30(1);
    if (uVar3 < 2) {
      FUN_00512300();
      local_8 = 0;
      local_94 = FUN_005686d0();
      uVar5 = *(undefined4 *)(in_ECX + -0xfc);
      uVar4 = FUN_00559900(local_80,0);
      uVar6 = (uint)*(ushort *)(in_ECX + -0x2e);
      uVar5 = (**(code **)(*(int *)(local_94 + 0x28 + *(int *)(*(int *)(local_94 + 0x28) + 0xc)) +
                          0x98))(local_a0,uVar6,uVar4,uVar5,param_1);
      uVar5 = FUN_00503c30(uVar5,uVar6);
      cVar1 = FUN_0056bdf0(local_70,uVar5);
      if (cVar1 != '\0') {
        FUN_00529f40(local_70,0);
      }
      local_8 = 0xffffffff;
      FUN_005123f0();
    }
    else {
      local_14 = 0x17;
    }
  }
  FUN_0054f6f0();
  ExceptionList = local_10;
  return local_14;
}

