// rea decompile_all
// name: FUN_0049e0d7
// address: 0x49e0d7
// body: available
// range: 0x49e0d7-0x49e1ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0049e0d7(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined1 *puVar4;
  undefined1 auStack_40 [36];
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de27b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0047888f(DAT_00955fd4 ^ (uint)&stack0xffffff88);
  local_c = 0;
  cVar1 = (**(code **)(*in_ECX + 0x1c))(param_1,extraout_ECX);
  if ((cVar1 == '\0') || (cVar1 = FUN_00478a60(), cVar1 != '\0')) {
    uVar3 = 0;
  }
  else {
    FUN_0049e6f4(param_3,auStack_40);
    iVar2 = FUN_005af82d(0x20);
    local_14 = (void *)CONCAT31(local_14._1_3_,1);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      puVar4 = auStack_40;
      FUN_00478ada(param_2);
      FUN_004a51ab(puVar4,param_2);
      uVar3 = FUN_00439b27();
      uVar3 = FUN_004776af(iVar2,uVar3,puVar4,param_2);
    }
  }
  FUN_004f7994();
  ExceptionList = pvStack_1c;
  return uVar3;
}

