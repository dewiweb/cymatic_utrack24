// rea decompile_all
// name: FUN_00550cb0
// address: 0x550cb0
// body: available
// range: 0x550cb0-0x551028 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00550cb0(int param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  undefined1 local_38 [8];
  undefined2 local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 local_20 [16];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d32ed;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(int *)(in_ECX + 0xb8) != 0) && (param_1 != 0)) {
    FUN_00515830(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    puVar2 = *(undefined **)(param_1 + 0x28);
    if (puVar2 == (undefined *)0x20116) {
      FUN_005017d0();
      local_8 = 0;
      uVar3 = FUN_0054fed0(local_38);
      local_8._0_1_ = 1;
      FUN_00501e80(uVar3);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00501900();
      uVar1 = *(undefined2 *)(param_1 + 0xc0);
      uVar3 = FUN_00501d60();
      FUN_00598b00(1,in_ECX,0x81,uVar1,uVar3);
      local_8 = 0xffffffff;
      FUN_00501900();
    }
    else if (puVar2 == (undefined *)0x221a5) {
      local_30 = *(undefined2 *)(param_1 + 0xc0);
      FUN_0054fed0(local_20);
      local_8 = 2;
      uVar4 = *(uint *)(param_1 + 0xa4);
      local_28 = *(int *)(param_1 + 0xa8);
      local_24 = (uint)*(ushort *)(param_1 + 0xd0);
      local_2c = uVar4;
      if (local_28 == 0) {
        uVar3 = FUN_00501cb0(uVar4);
        uVar3 = FUN_005056d0(uVar3,uVar4);
        local_8._0_1_ = 3;
        FUN_005051f0(uVar3);
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_005052d0();
        if (*(int *)(in_ECX + 0xcc) == 0) {
          FUN_00544280(1);
          local_8 = 0xffffffff;
          FUN_00501900();
          ExceptionList = local_10;
          return 0;
        }
        if (local_2c < local_28 + local_24) {
          FUN_00544280(1);
          local_8 = 0xffffffff;
          FUN_00501900();
          ExceptionList = local_10;
          return 0;
        }
        _memcpy((void *)(*(int *)(in_ECX + 200) + local_28),*(void **)(param_1 + 0xe0),local_24);
      }
      local_28 = local_28 + local_24;
      if (local_28 == local_2c) {
        FUN_00598c60(1,in_ECX,0x81,local_30,in_ECX + 0xc4);
      }
      else {
        *(undefined4 *)(in_ECX + 0x78) = 0x728;
        *(undefined2 *)(in_ECX + 0x7c) = local_30;
        *(uint *)(in_ECX + 0x7e) = local_28;
        FUN_00544390();
      }
      local_8 = 0xffffffff;
      FUN_00501900();
    }
    else if (puVar2 == &DAT_00820017) {
      FUN_00598bb0(1,in_ECX,0x81,*(undefined2 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x30),
                   *(undefined4 *)(param_1 + 0x34));
    }
    else {
      FUN_00598b00(1,in_ECX,0x80,*(undefined2 *)(in_ECX + 0xc0),0);
    }
    FUN_00515860();
  }
  FUN_005560c0(0);
  ExceptionList = local_10;
  return 1;
}

