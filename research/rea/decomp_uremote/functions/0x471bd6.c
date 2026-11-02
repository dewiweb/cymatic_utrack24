// rea decompile_all
// name: FUN_00471bd6
// address: 0x471bd6
// body: available
// range: 0x471bd6-0x471c58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00471bd6(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_28 [20];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d85a6;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00472214(DAT_00955fd4 ^ (uint)&stack0xffffffc8);
  local_c = 0;
  iVar1 = *(int *)(in_ECX + 0x20);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    iVar2 = FUN_00472d66();
    if (iVar2 != 0) {
      FUN_00471bd6();
    }
  }
  FUN_00473329(in_ECX,local_28);
  FUN_004722b6();
  ExceptionList = local_14;
  return;
}

