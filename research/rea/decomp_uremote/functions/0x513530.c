// rea decompile_all
// name: FUN_00513530
// address: 0x513530
// body: available
// range: 0x513530-0x513783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00513530(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined4 local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cf0fc;
  local_10 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_3 != 0) {
    in_ECX[3] = &DAT_005e96f0;
    in_ECX[0x31d] = CPNS::ICHAI::vftable;
    local_8 = 0;
  }
  FUN_00508c90(0,in_ECX + 0x2dc,param_1,0);
  local_8 = 1;
  *in_ECX = CPCHAI::CComputerCHAI::vftable;
  in_ECX[1] = CPCHAI::CComputerCHAI::vftable;
  in_ECX[2] = CPCHAI::CComputerCHAI::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 0xc) = CPCHAI::CComputerCHAI::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[3] + 4) + 8) = *(int *)(in_ECX[3] + 4) + -0xc68;
  FUN_0054d480(uVar2);
  local_8._0_1_ = 2;
  FUN_00513bc0(in_ECX);
  local_8._0_1_ = 3;
  FUN_00514170(in_ECX);
  local_8._0_1_ = 4;
  in_ECX[0x2d6] = FUN_00513f00;
  in_ECX[0x2d7] = 0;
  in_ECX[0x2d8] = FUN_00513b40;
  in_ECX[0x2d9] = in_ECX;
  iVar3 = FUN_005af82d(0xd10);
  local_8._0_1_ = 5;
  if (iVar3 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_0054d8d0();
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  in_ECX[0x2da] = local_30;
  if (in_ECX[0x2da] != 0) {
    sVar1 = FUN_0054dad0(in_ECX + 0xee,in_ECX + 0x2d6,0,10000,0);
    if (sVar1 == 0) {
      FUN_00514270();
      FUN_00513ca0();
      FUN_0050a700(in_ECX[0x2da]);
    }
    else {
      if ((undefined4 *)in_ECX[0x2da] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)in_ECX[0x2da])(1);
      }
      in_ECX[0x2da] = 0;
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}

