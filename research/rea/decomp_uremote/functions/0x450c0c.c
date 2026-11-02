// rea decompile_all
// name: FUN_00450c0c
// address: 0x450c0c
// body: available
// range: 0x450c0c-0x450d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00450c0c(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 *puStack_50;
  undefined1 *local_4c;
  undefined1 *puStack_48;
  uint uStack_44;
  undefined1 local_34 [4];
  undefined1 *local_30;
  undefined1 *local_2c [5];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e094f;
  local_14 = ExceptionList;
  uStack_44 = DAT_00955fd4 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_14;
  local_2c[0] = (undefined1 *)&puStack_48;
  puStack_50 = (undefined1 *)&puStack_48;
  local_4c = (undefined1 *)0x3f666666;
  FUN_0047607f(0x30,0x30);
  FUN_0047620f();
  local_4c = (undefined1 *)0x450c6b;
  FUN_0047d23a();
  local_2c[0] = (undefined1 *)&puStack_48;
  local_4c = (undefined1 *)0x450c7c;
  FUN_004d076d();
  local_4c = (undefined1 *)0x450c83;
  FUN_0047cda7();
  puStack_48 = local_34;
  local_4c = (undefined1 *)0x450c94;
  FUN_0046537e();
  local_c = 0;
  local_30 = *(undefined1 **)(in_ECX + 0x18);
  puStack_48 = *(undefined1 **)(in_ECX + 0x1c);
  local_4c = (undefined1 *)0x450cb3;
  local_4c = (undefined1 *)FUN_005b3fb0();
  puStack_50 = local_34;
  puStack_48 = (undefined1 *)FUN_0043a9ae();
  local_c = CONCAT31(local_c._1_3_,1);
  local_4c = (undefined1 *)0x450cd0;
  FUN_0047ceaa();
  local_4c = (undefined1 *)0x450cd9;
  FUN_004c4d7a();
  puStack_10 = (undefined1 *)0xffffffff;
  local_4c = (undefined1 *)0x450ce7;
  FUN_004652d6();
  local_4c = local_34;
  puStack_50 = (undefined1 *)0x450cf3;
  FUN_0046537e();
  local_4c = (undefined1 *)0x1;
  local_30 = (undefined1 *)&puStack_50;
  puStack_10 = (undefined1 *)0x2;
  puStack_50 = (undefined1 *)0x24;
  uVar1 = FUN_004c2047(local_2c);
  FUN_0047cffd(param_1,local_34,uVar1);
  local_4c = (undefined1 *)0x450d2b;
  FUN_004652d6();
  ExceptionList = pvStack_18;
  return;
}

