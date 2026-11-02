// rea decompile_all
// name: FUN_00448c17
// address: 0x448c17
// body: available
// range: 0x448c17-0x448d47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00448c17(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  int iStack_40;
  uint uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e10db;
  local_14 = ExceptionList;
  uStack_3c = DAT_00955fd4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_14;
  iStack_40 = 0x448c4a;
  iStack_40 = FUN_0044bfc5();
  iStack_40 = iStack_40 + 0x84;
  local_20 = (undefined1 *)&iStack_40;
  puStack_44 = (undefined4 *)0x448c5e;
  FUN_004d076d();
  puStack_44 = (undefined4 *)0x448c68;
  FUN_0047d23a();
  iStack_40 = 0x448c6d;
  iVar1 = FUN_0044bfc5();
  local_24 = (undefined1 *)(float)*(int *)(iVar1 + 8);
  iStack_40 = 0x448c79;
  iVar1 = FUN_0044bfc5();
  iVar1 = *(int *)(iVar1 + 0xc);
  iStack_40 = in_ECX + 0x608;
  puStack_44 = (undefined4 *)0x448c88;
  FUN_0047ceaa();
  local_24 = (undefined1 *)&puStack_44;
  uStack_48 = 0x448c99;
  FUN_004d076d();
  uStack_48 = 0x448ca0;
  FUN_0047cda7();
  puStack_44 = &uStack_2c;
  uStack_48 = 0x448caf;
  FUN_0046537e();
  puStack_10 = (undefined1 *)0x0;
  puStack_44 = (undefined4 *)0x1;
  local_24 = (undefined1 *)&uStack_48;
  uStack_48 = 0x21;
  uStack_4c = 0x448ccc;
  uStack_4c = FUN_005b3fb0();
  uStack_28 = uStack_4c;
  FUN_0047d02d(param_1,&uStack_2c,iVar1,0,*(undefined4 *)(in_ECX + 0x18));
  puStack_10 = (undefined1 *)0xffffffff;
  puStack_44 = (undefined4 *)0x448cf0;
  FUN_004652d6();
  local_24 = (undefined1 *)(*(int *)(in_ECX + 0x18) + iVar1 * -4);
  puStack_44 = (undefined4 *)(in_ECX + 0x60c);
  uStack_48 = 0x448d0a;
  FUN_0047ceaa();
  uStack_48 = 1;
  local_24 = (undefined1 *)&uStack_4c;
  uStack_4c = 0x21;
  FUN_0047d02d(param_1,in_ECX + 0x604,iVar1 * 2,uStack_2c,uStack_28,uStack_2c);
  ExceptionList = pvStack_1c;
  return;
}

