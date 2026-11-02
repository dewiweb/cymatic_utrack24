// rea decompile_all
// name: FUN_005535c0
// address: 0x5535c0
// body: available
// range: 0x5535c0-0x5537b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005535c0(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int local_3c;
  int local_34;
  undefined1 local_28 [12];
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d360c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = FUN_005af82d(0xa8,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (local_1c == 0) {
    local_34 = 0;
  }
  else {
    local_34 = FUN_00553200(1);
  }
  local_18 = local_34;
  local_8 = 0xffffffff;
  local_14 = local_34;
  if (local_34 != 0) {
    *(int *)(local_34 + 0x68) = param_1;
    *(undefined4 *)(local_34 + 0x90) = 0;
    *(undefined4 *)(local_34 + 0x94) = param_3;
    (*(code *)**(undefined4 **)
                (*(int *)(local_34 + 0x68) + 0x28 +
                *(int *)(*(int *)(*(int *)(local_34 + 0x68) + 0x28) + 8)))();
    *(undefined2 *)(local_14 + 0x6c) = 21000;
    *(undefined2 *)(local_14 + 0x6e) = param_2;
    *(undefined2 *)(local_14 + 0x70) = 0;
    *(undefined2 *)(local_14 + 0x72) = 0;
    *(undefined2 *)(local_14 + 0x74) = 0;
    FUN_00503de0(&DAT_0095c854);
    *(undefined2 *)(local_14 + 0x98) = 0x9209;
    *(undefined2 *)(local_14 + 0x9a) = 0;
    *(undefined1 *)(local_14 + 0x9c) = 0;
    *(undefined1 *)(local_14 + 0x9d) = 1;
    if (local_14 == 0) {
      local_3c = 0;
    }
    else {
      local_3c = local_14 + 0x60 + *(int *)(*(int *)(local_14 + 0x60) + 4);
    }
    uVar6 = 1;
    uVar4 = -(uint)(*(char *)(*(int *)(param_1 + 0x2c) + 0xad) != '\0') & 500;
    iVar2 = *(int *)(param_1 + 0x2c) + 0x3f8;
    puVar5 = local_28;
    uVar3 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 8))
                      (puVar5,iVar2,param_4,uVar4,1,local_3c);
    cVar1 = FUN_00544180(param_1,uVar3,puVar5,iVar2,param_4,uVar4,uVar6);
    if (cVar1 != '\0') {
      ExceptionList = local_10;
      return local_14;
    }
    FUN_005442f0(0);
  }
  ExceptionList = local_10;
  return 0;
}

