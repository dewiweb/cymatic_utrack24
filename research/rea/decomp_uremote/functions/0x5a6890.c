// rea decompile_all
// name: FUN_005a6890
// address: 0x5a6890
// body: available
// range: 0x5a6890-0x5a699e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005a6890(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [12];
  undefined4 uStack_48;
  undefined1 *puStack_44;
  uint uStack_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 local_24 [16];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d78aa;
  local_10 = ExceptionList;
  uStack_40 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0x25;
  puStack_44 = (undefined1 *)0x5a68c7;
  FUN_00544560();
  puStack_44 = (undefined1 *)param_1;
  uStack_48 = 0x5a68d3;
  cVar1 = FUN_005a6e60();
  if (cVar1 != '\0') {
    local_14 = 0;
    puStack_44 = (undefined1 *)0x5a68ed;
    FUN_0056ebe0();
    local_8 = 0;
    puStack_44 = (undefined1 *)0x5a68fc;
    uVar2 = FUN_00544700();
    puStack_44 = (undefined1 *)(uVar2 & 0xffff);
    uStack_48 = 0x5a6908;
    FUN_0056f170();
    local_3c = *(int *)(local_38 + 0x60);
    local_30 = *(undefined4 **)(*(int *)(local_38 + 0x60) + 0x88);
    local_34 = *local_30;
    puStack_44 = local_24;
    uStack_48 = 0;
    local_28 = auStack_54;
    uStack_58 = param_1;
    uStack_5c = 0x5a693f;
    FUN_005033e0();
    local_2c = auStack_60;
    (**(code **)(*(int *)(local_3c + 0x28 + *(int *)(*(int *)(local_3c + 0x28) + 0xc)) + 0x98))
              (auStack_60);
    FUN_0059b0a0(local_34);
    local_8 = 0xffffffff;
    uStack_48 = 0x5a698b;
    FUN_0056ec30();
  }
  ExceptionList = local_10;
  return local_14;
}

