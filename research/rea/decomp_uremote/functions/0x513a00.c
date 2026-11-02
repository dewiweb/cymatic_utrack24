// rea decompile_all
// name: FUN_00513a00
// address: 0x513a00
// body: available
// range: 0x513a00-0x513b36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00513a00(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005cf1c0;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = CPCHAI::CComputerCHAI::vftable;
  in_ECX[1] = CPCHAI::CComputerCHAI::vftable;
  in_ECX[2] = CPCHAI::CComputerCHAI::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 0xc) = CPCHAI::CComputerCHAI::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 8) = *(int *)(in_ECX[3] + 4) + -0xc68;
  local_8 = 3;
  FUN_005142c0(uVar1);
  FUN_00513ce0();
  FUN_0050a700(0);
  if ((undefined4 *)in_ECX[0x2da] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)in_ECX[0x2da])(1);
  }
  in_ECX[0x2da] = 0;
  local_8._0_1_ = 2;
  FUN_00514210(uVar1,uVar2);
  local_8._0_1_ = 1;
  FUN_00513c40();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0054d510();
  local_8 = 0xffffffff;
  FUN_0050a1d0();
  ExceptionList = local_10;
  return;
}

