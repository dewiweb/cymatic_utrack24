// rea decompile_all
// name: FUN_004cff22
// address: 0x4cff22
// body: available
// range: 0x4cff22-0x4d000d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cff22(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *local_2c;
  undefined1 local_28 [20];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dc09b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_004d00cb(DAT_00955fd4 ^ (uint)&stack0xffffffc0);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004d0176(param_2);
    FUN_004cfe60(&local_2c);
    local_c = 0;
    if ((piVar2 == (int *)0x0) || (*local_2c == '\0')) {
      piVar2 = (int *)FUN_0047231e(local_28);
      iVar1 = *piVar2;
      FUN_004722b6();
      if (iVar1 != 0) {
        uVar3 = FUN_0047231e(local_28);
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_004cff22(param_1,uVar3);
        FUN_004722b6();
      }
    }
    else {
      iVar1 = FUN_004cfeab(iVar1,&local_2c);
      if (iVar1 != 0) {
        (**(code **)(*piVar2 + 8))(iVar1,param_2);
      }
    }
    FUN_004652d6();
  }
  ExceptionList = local_14;
  return;
}

