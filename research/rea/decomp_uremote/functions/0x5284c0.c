// rea decompile_all
// name: FUN_005284c0
// address: 0x5284c0
// body: available
// range: 0x5284c0-0x528610 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005284c0(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  char *pcStack_68;
  undefined4 uStack_64;
  char *pcStack_60;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined1 local_44 [28];
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 local_20 [16];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d0224;
  local_10 = ExceptionList;
  uStack_5c = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pcStack_60 = "The task ";
  uStack_64 = 0x5284f5;
  FUN_00501870();
  local_8 = 0;
  pcStack_60 = (char *)0x528504;
  pcStack_60 = (char *)FUN_00544720();
  uStack_64 = 0x52850d;
  FUN_00502720();
  pcStack_60 = " (TID:";
  uStack_64 = 0x52851a;
  FUN_00502720();
  pcStack_60 = (char *)0x528522;
  uVar1 = FUN_00544700();
  pcStack_60 = (char *)(uVar1 & 0xffff);
  uStack_64 = 0x52852e;
  FUN_00502e10();
  pcStack_60 = ") is running for ";
  uStack_64 = 0x52853b;
  FUN_00502720();
  pcStack_60 = (char *)(param_2 / 1000);
  uStack_64 = 0x528550;
  FUN_00502ce0();
  pcStack_60 = "seconds. ";
  uStack_64 = 0x52855d;
  FUN_00502720();
  pcStack_60 = local_20;
  uStack_64 = 0x52856e;
  uStack_64 = (**(code **)(*param_1 + 0x14))();
  local_8._0_1_ = 1;
  pcStack_68 = (char *)0x528587;
  local_58 = uStack_64;
  local_54 = uStack_64;
  FUN_005026d0();
  local_8 = (uint)local_8._1_3_ << 8;
  uStack_64 = 0x528593;
  FUN_00501900();
  local_28 = 0x3010;
  uStack_64 = 0x5285a2;
  uStack_64 = FUN_00501d60();
  pcStack_68 = "Task issue";
  uStack_6c = 0x2000;
  local_24 = auStack_70;
  local_48 = auStack_70;
  local_4c = *local_50;
  FUN_0052dce0(local_44);
  uVar2 = FUN_00503c30(local_44,0);
  FUN_00528070(uVar2);
  local_8 = 0xffffffff;
  uStack_64 = 0x528600;
  FUN_00501900();
  ExceptionList = local_10;
  return;
}

