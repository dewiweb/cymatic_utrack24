// rea decompile_all
// name: FUN_005a6770
// address: 0x5a6770
// body: available
// range: 0x5a6770-0x5a688a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a6770(void)

{
  uint uVar1;
  undefined1 auStack_64 [4];
  undefined4 uStack_60;
  int iStack_5c;
  undefined1 auStack_58 [16];
  uint uStack_48;
  uint uStack_44;
  undefined1 *puStack_40;
  uint uStack_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 local_20 [16];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d7887;
  local_10 = ExceptionList;
  uStack_3c = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_40 = (undefined1 *)0x5a67a0;
  FUN_0056ebe0();
  local_8 = 0;
  puStack_40 = (undefined1 *)0x5a67af;
  uVar1 = FUN_00544700();
  puStack_40 = (undefined1 *)(uVar1 & 0xffff);
  uStack_44 = 0x5a67bb;
  FUN_0056f170();
  puStack_40 = (undefined1 *)0x82;
  uStack_44 = 0x5a67c8;
  FUN_0056f170();
  puStack_40 = (undefined1 *)0x0;
  uStack_44 = 0x5a67d2;
  FUN_0056f170();
  local_38 = *(int *)(local_34 + 0x60);
  local_2c = *(undefined4 **)(*(int *)(local_34 + 0x60) + 0x88);
  local_30 = *local_2c;
  puStack_40 = local_20;
  uStack_44 = 0x81;
  uStack_48 = (uint)*(ushort *)(local_34 + 0x74);
  iStack_5c = local_34 + 100;
  local_24 = auStack_58;
  uStack_60 = 0x5a6817;
  FUN_00503c60();
  local_28 = auStack_64;
  (**(code **)(*(int *)(local_38 + 0x28 + *(int *)(*(int *)(local_38 + 0x28) + 0xc)) + 0x98))
            (auStack_64);
  FUN_0059b6a0(local_30);
  uStack_44 = 0x5a685c;
  uStack_44 = FUN_00544700();
  uStack_44 = uStack_44 & 0xffff;
  uStack_48 = 0x5a686b;
  FUN_005605f0();
  local_8 = 0xffffffff;
  uStack_44 = 0x5a687a;
  FUN_0056ec30();
  ExceptionList = local_10;
  return;
}

