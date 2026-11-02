// rea decompile_all
// name: FUN_0044d691
// address: 0x44d691
// body: available
// range: 0x44d691-0x44d7b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0044d691(undefined4 param_1)

{
  int in_ECX;
  undefined4 uStack_6c;
  undefined1 *local_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined1 *local_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [4];
  int iStack_50;
  uint uStack_4c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dd8ed;
  local_14 = ExceptionList;
  uStack_4c = DAT_00955fd4 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_14;
  local_5c = *(undefined1 **)(in_ECX + 0x24);
  iStack_50 = in_ECX + 0x34;
  uStack_58 = 1;
  puStack_60 = (undefined1 *)0x44d6ed;
  local_5c = (undefined1 *)FUN_004658d9();
  local_c = 0;
  local_68 = *(undefined1 **)(in_ECX + 0x20);
  puStack_60 = (undefined1 *)&uStack_58;
  puStack_64 = (undefined1 *)0x1;
  uStack_6c = 0x44d71f;
  local_68 = (undefined1 *)FUN_004658d9();
  local_c = CONCAT31(local_c._1_3_,1);
  FUN_004652e4(in_ECX + 0x10);
  FUN_00465c6b(&uStack_6c);
  FUN_00465c30();
  uStack_6c = 0x44d76d;
  local_68 = (undefined1 *)&puStack_60;
  FUN_00465c6b();
  local_68 = (undefined1 *)0x44d777;
  puStack_64 = (undefined1 *)&uStack_58;
  FUN_00465c30();
  puStack_60 = (undefined1 *)0x44d785;
  local_5c = auStack_54;
  FUN_00465c6b();
  uStack_58 = param_1;
  local_5c = (undefined1 *)0x44d78d;
  FUN_00465c30();
  iStack_50 = 0x44d796;
  FUN_004652d6();
  iStack_50 = 0x44d79f;
  FUN_004652d6();
  ExceptionList = local_14;
  return param_1;
}

