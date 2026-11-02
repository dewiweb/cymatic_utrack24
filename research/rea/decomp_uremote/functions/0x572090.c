// rea decompile_all
// name: FUN_00572090
// address: 0x572090
// body: available
// range: 0x572090-0x5722cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00572090(ushort param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                undefined2 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined1 local_80 [16];
  undefined1 local_70 [92];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4ca2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  if ((param_1 & 0x1000) == 0) {
    local_14 = 0x14;
  }
  else {
    FUN_0054f6b0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    FUN_00512300();
    local_8 = 0;
    puVar4 = local_8c;
    uVar2 = (**(code **)(*(int *)(*(int *)(in_ECX + -0xbc) + 0x28 +
                                 *(int *)(*(int *)(*(int *)(in_ECX + -0xbc) + 0x28) + 0xc)) + 0x98))
                      (puVar4,*(undefined2 *)(in_ECX + -0x20));
    FUN_00503c30(uVar2,puVar4);
    local_14 = FUN_00559640(local_70,0x2300,local_80,
                            *(undefined4 *)(*(int *)(in_ECX + -0xe4) + 0xd8));
    if (local_14 == 0x17) {
      uVar3 = (uint)*(ushort *)(in_ECX + -0x20);
      uVar2 = (**(code **)(*(int *)(*(int *)(in_ECX + -0xbc) + 0x28 +
                                   *(int *)(*(int *)(*(int *)(in_ECX + -0xbc) + 0x28) + 0xc)) + 0x98
                          ))(local_98,uVar3);
      FUN_00528280(0,uVar2,uVar3);
    }
    if ((local_14 == 0) || (local_14 == 0xd)) {
      FUN_00536cb0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      cVar1 = FUN_00529f40(local_70,0);
      if (cVar1 == '\0') {
        local_14 = 1;
      }
    }
    FUN_0054f6f0();
    local_8 = 0xffffffff;
    FUN_005123f0();
  }
  ExceptionList = local_10;
  return local_14;
}

