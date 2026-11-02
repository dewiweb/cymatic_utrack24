// rea decompile_all
// name: FUN_004e9bcf
// address: 0x4e9bcf
// body: available
// range: 0x4e9bcf-0x4e9c5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e9bcf(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  undefined1 local_2c [4];
  undefined1 local_28 [20];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e3b88;
  local_14 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_14;
  piVar3 = (int *)(*(int *)(in_ECX + 0x11c) + 4);
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = *piVar3;
  UNLOCK();
  if (1 < iVar1) {
    FUN_004718a7(local_28);
    local_c = 0;
    FUN_00461769(local_2c);
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_004e99ff(local_2c,1);
    FUN_004652d6(uVar2);
    FUN_004615f7();
  }
  ExceptionList = local_14;
  return;
}

