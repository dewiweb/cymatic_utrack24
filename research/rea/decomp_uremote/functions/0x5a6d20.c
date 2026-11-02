// rea decompile_all
// name: FUN_005a6d20
// address: 0x5a6d20
// body: available
// range: 0x5a6d20-0x5a6e5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005a6d20(ushort param_1)

{
  uint uVar1;
  undefined1 auStack_6c [4];
  undefined4 uStack_68;
  int iStack_64;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  undefined1 *puStack_48;
  uint uStack_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 local_20 [16];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d7936;
  local_10 = ExceptionList;
  uStack_44 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  puStack_48 = (undefined1 *)0x5a6d57;
  FUN_00544560();
  puStack_48 = (undefined1 *)0x5a6d5f;
  FUN_0056ebe0();
  local_8 = 0;
  puStack_48 = (undefined1 *)0x5a6d6e;
  uVar1 = FUN_00544700();
  puStack_48 = (undefined1 *)(uVar1 & 0xffff);
  uStack_4c = 0x5a6d7a;
  FUN_0056f170();
  puStack_48 = (undefined1 *)0x81;
  uStack_4c = 0x5a6d87;
  FUN_0056f170();
  puStack_48 = (undefined1 *)(uint)param_1;
  uStack_4c = 0x5a6d94;
  FUN_0056f170();
  local_40 = *(int *)(local_3c + 0x60);
  local_34 = *(undefined4 **)(*(int *)(local_3c + 0x60) + 0x88);
  local_38 = *local_34;
  puStack_48 = local_20;
  uStack_4c = 0x81;
  uStack_50 = (uint)*(ushort *)(local_3c + 0x74);
  iStack_64 = local_3c + 100;
  local_28 = auStack_60;
  uStack_68 = 0x5a6dd9;
  FUN_00503c60();
  local_2c = auStack_6c;
  (**(code **)(*(int *)(local_40 + 0x28 + *(int *)(*(int *)(local_40 + 0x28) + 0xc)) + 0x98))
            (auStack_6c);
  FUN_0059b6a0(local_38);
  uStack_4c = 0x5a6e1e;
  uStack_4c = FUN_00544700();
  uStack_4c = uStack_4c & 0xffff;
  uStack_50 = 0x5a6e2d;
  FUN_005605f0();
  uStack_4c = 0x5a6e35;
  FUN_00544580();
  local_30 = local_24;
  local_8 = 0xffffffff;
  uStack_4c = 0x5a6e4a;
  FUN_0056ec30();
  ExceptionList = local_10;
  return local_30;
}

