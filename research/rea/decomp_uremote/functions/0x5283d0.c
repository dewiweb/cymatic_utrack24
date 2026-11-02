// rea decompile_all
// name: FUN_005283d0
// address: 0x5283d0
// body: available
// range: 0x5283d0-0x5284b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005283d0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_5c [4];
  undefined4 uStack_58;
  char *pcStack_54;
  char *pcStack_50;
  uint uStack_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined1 local_3c [28];
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d01f9;
  local_10 = ExceptionList;
  uStack_4c = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pcStack_50 = "Task number seems to be growing out of control (";
  pcStack_54 = (char *)0x528405;
  FUN_00501870();
  local_8 = 0;
  pcStack_50 = (char *)0x52841c;
  uVar1 = FUN_0052c900();
  pcStack_50 = (char *)(uVar1 & 0xffff);
  pcStack_54 = (char *)0x528428;
  FUN_00502ce0();
  pcStack_50 = " tasks). Please check application source code for missing Reply to Request!";
  pcStack_54 = (char *)0x528435;
  FUN_00502720();
  local_20 = 0x3001;
  pcStack_50 = (char *)0x528444;
  pcStack_50 = (char *)FUN_00501d60();
  pcStack_54 = "Task issue";
  uStack_58 = 0x2000;
  local_1c = local_5c;
  local_40 = local_5c;
  local_44 = *local_48;
  FUN_0052dce0(local_3c);
  uVar2 = FUN_00503c30(local_3c,0);
  FUN_00528070(uVar2);
  local_8 = 0xffffffff;
  pcStack_50 = (char *)0x5284a2;
  FUN_00501900();
  ExceptionList = local_10;
  return;
}

