// rea decompile_all
// name: FUN_005110a0
// address: 0x5110a0
// body: available
// range: 0x5110a0-0x5111a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005110a0(void)

{
  char cVar1;
  int in_ECX;
  undefined1 local_24 [8];
  uint local_1c;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ceff5;
  local_10 = ExceptionList;
  local_1c = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x28))
            (local_1c);
  FUN_005017d0();
  local_8 = 1;
  cVar1 = FUN_005064b0(local_24);
  if (cVar1 != '\0') {
    FUN_00502d80(local_24,6);
  }
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x2c))();
  FUN_005018d0(local_18);
  local_8 = local_8 & 0xffffff00;
  FUN_00501900();
  ExceptionList = local_10;
  __security_check_cookie(local_1c ^ (uint)&stack0xfffffffc);
  return;
}

