// rea decompile_all
// name: FUN_0051b810
// address: 0x51b810
// body: available
// range: 0x51b810-0x51b9a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0051b810(undefined4 param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  undefined1 uVar4;
  undefined1 local_70 [96];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cf9cf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = (*(code *)**(undefined4 **)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)))
                    (DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  if (cVar1 == '\0') {
    uVar4 = 0x1b;
  }
  else {
    FUN_00501870(param_1);
    local_8 = 0;
    cVar1 = FUN_00503020();
    if (cVar1 == '\0') {
      local_8 = 0xffffffff;
      FUN_00501900();
      uVar4 = 0x2a;
    }
    else {
      FUN_0054f6b0();
      *(undefined4 *)(in_ECX + -0x5c) = param_4;
      FUN_00512300();
      local_8._0_1_ = 1;
      uVar3 = (uint)param_2;
      uVar2 = FUN_00501d60(uVar3,param_3,param_4);
      FUN_00536580(0,in_ECX + -0x94,uVar2,uVar3,param_3,param_4);
      cVar1 = FUN_00529f40(local_70,0);
      uVar4 = cVar1 == '\0';
      FUN_0054f6f0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_005123f0();
      local_8 = 0xffffffff;
      FUN_00501900();
    }
  }
  ExceptionList = local_10;
  return uVar4;
}

