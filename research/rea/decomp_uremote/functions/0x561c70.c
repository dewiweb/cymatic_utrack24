// rea decompile_all
// name: FUN_00561c70
// address: 0x561c70
// body: available
// range: 0x561c70-0x561dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00561c70(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 *puVar5;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d416a;
  local_10 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005017d0(uVar2);
  local_8 = 1;
  local_1c = in_ECX + -0x18c;
  do {
    cVar1 = FUN_00501bd0();
    if (cVar1 == '\0') {
      uVar3 = (**(code **)(*(int *)(local_1c + 0x28 + *(int *)(*(int *)(local_1c + 0x28) + 0xc)) +
                          0xbc))(local_2c,1);
      local_8._0_1_ = 3;
      puVar5 = local_18;
      FUN_00502720(&DAT_009114f0);
      uVar4 = FUN_005026d0(puVar5);
      FUN_00501d80(uVar4);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00501900(uVar2,uVar3);
    }
    else {
      uVar3 = (**(code **)(*(int *)(local_1c + 0x28 + *(int *)(*(int *)(local_1c + 0x28) + 0xc)) +
                          0xbc))(local_24,1);
      local_8._0_1_ = 2;
      FUN_00501d80(uVar3);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00501900();
    }
    local_1c = *(int *)(local_1c + 0x114);
  } while (local_1c != 0);
  FUN_005018d0(local_18);
  local_8 = local_8 & 0xffffff00;
  FUN_00501900();
  ExceptionList = local_10;
  return param_1;
}

