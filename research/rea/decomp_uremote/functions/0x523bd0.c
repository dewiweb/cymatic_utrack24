// rea decompile_all
// name: FUN_00523bd0
// address: 0x523bd0
// body: available
// range: 0x523bd0-0x523e61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00523bd0(int param_1)

{
  undefined1 auStack_84 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [4];
  undefined4 uStack_74;
  undefined1 *puStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  uint uStack_60;
  uint local_5c;
  int local_58;
  undefined1 *local_54;
  undefined4 local_50;
  ushort local_4a;
  undefined4 local_48;
  ushort local_42;
  undefined1 *local_40;
  undefined1 local_3c [16];
  undefined1 *local_2c;
  int local_28;
  undefined1 local_24 [16];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d0078;
  local_10 = ExceptionList;
  uStack_60 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(ushort *)(param_1 + 0xf0) & 0x8000) == 0) {
    local_28 = 0;
    uStack_68._4_4_ = (undefined1 *)0x523c62;
    FUN_0056ebe0();
    local_8 = 0;
    local_5c = (uint)*(ushort *)(param_1 + 0xf0);
    if (local_5c == 1) {
      local_28 = 0x8001;
      uStack_68._4_4_ = (undefined1 *)0x1;
      uStack_68._0_4_ = 0x523c92;
      FUN_0056f170();
      uStack_68._4_4_ = (undefined1 *)0x0;
      uStack_68._0_4_ = 0x523c9c;
      FUN_0056f170();
      uStack_68._4_4_ = (undefined1 *)0x0;
      uStack_68._0_4_ = 0x523ca6;
      FUN_0056f170();
      uStack_68._4_4_ = (undefined1 *)0x0;
      uStack_68._0_4_ = 0x523cb0;
      FUN_0056f170();
      uStack_68._4_4_ = (undefined1 *)0x523cb5;
      uStack_68 = FUN_0052e670();
      iStack_6c = 0x523cbf;
      FUN_0056f210();
      local_48 = *(undefined4 *)(local_58 + 0x424);
      uStack_68._4_4_ = (undefined1 *)0x523cd9;
      uStack_68 = FUN_0052cee0();
      iStack_6c = 0x523ce3;
      FUN_0056f210();
      uStack_68._4_4_ = *(undefined1 **)(*(int *)(local_58 + 0x424) + 0x424);
      uStack_68._0_4_ = *(undefined4 *)(*(int *)(local_58 + 0x424) + 0x420);
      iStack_6c = 0x523d02;
      FUN_0056f210();
      uStack_68._4_4_ = *(undefined1 **)(*(int *)(local_58 + 0x424) + 0x42c);
      uStack_68._0_4_ = *(undefined4 *)(*(int *)(local_58 + 0x424) + 0x428);
      iStack_6c = 0x523d21;
      FUN_0056f210();
      uStack_68._4_4_ = *(undefined1 **)(*(int *)(local_58 + 0x424) + 0x434);
      uStack_68._0_4_ = *(undefined4 *)(*(int *)(local_58 + 0x424) + 0x430);
      iStack_6c = 0x523d40;
      FUN_0056f210();
      uStack_68._4_4_ = *(undefined1 **)(*(int *)(local_58 + 0x424) + 0x43c);
      uStack_68._0_4_ = *(undefined4 *)(*(int *)(local_58 + 0x424) + 0x438);
      iStack_6c = 0x523d5f;
      FUN_0056f210();
      uStack_68._4_4_ = *(undefined1 **)(local_58 + 0xc);
      uStack_68._0_4_ = *(undefined4 *)(local_58 + 8);
      iStack_6c = 0x523d72;
      FUN_0056f210();
      uStack_68._4_4_ = *(undefined1 **)(local_58 + 0x14);
      uStack_68._0_4_ = *(undefined4 *)(local_58 + 0x10);
      iStack_6c = 0x523d85;
      FUN_0056f210();
      uStack_68._4_4_ = *(undefined1 **)(local_58 + 0x1c);
      uStack_68._0_4_ = *(undefined4 *)(local_58 + 0x18);
      iStack_6c = 0x523d98;
      FUN_0056f210();
      uStack_68._4_4_ = *(undefined1 **)(local_58 + 0x24);
      uStack_68._0_4_ = *(uint *)(local_58 + 0x20);
      iStack_6c = 0x523dab;
      FUN_0056f210();
    }
    if (local_28 != 0) {
      local_4a = *(ushort *)(param_1 + 0xf2);
      uStack_68._4_4_ = local_24;
      uStack_68._0_4_ = (uint)local_4a;
      iStack_6c = local_28;
      puStack_70 = local_3c;
      uStack_74 = 0x523df9;
      uStack_7c = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) +
                              0x24))();
      local_2c = auStack_78;
      uStack_80 = 0x523e07;
      FUN_005033e0();
      local_40 = auStack_84;
      local_54 = auStack_84;
      local_50 = *(undefined4 *)(local_58 + 0x424);
      FUN_0052dce0(auStack_84);
      FUN_0056feb0(*(undefined4 *)(local_58 + 0x424));
    }
    local_8 = 0xffffffff;
    uStack_68._4_4_ = (undefined1 *)0x523e51;
    FUN_0056ec30();
  }
  else {
    local_42 = *(ushort *)(param_1 + 0xf2);
    uStack_68._4_4_ = (undefined1 *)(uint)local_42;
    uStack_68._0_4_ = 0x523c31;
    local_14 = FUN_0052c9b0();
    if (local_14 != 0) {
      uStack_68._4_4_ = (undefined1 *)param_1;
      uStack_68._0_4_ = 0x523c46;
      FUN_00557790();
      uStack_68._4_4_ = (undefined1 *)0x523c4e;
      FUN_00544620();
    }
  }
  ExceptionList = local_10;
  return;
}

