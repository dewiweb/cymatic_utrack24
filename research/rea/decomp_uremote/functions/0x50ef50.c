// rea decompile_all
// name: FUN_0050ef50
// address: 0x50ef50
// body: available
// range: 0x50ef50-0x50f090 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0050ef50(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int in_ECX;
  undefined1 local_78 [12];
  undefined4 local_6c;
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ceeca;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x28))
            (DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_6c = 0;
  FUN_00512300();
  local_8 = 0;
  FUN_0052dce0(local_78);
  FUN_00536770(*(undefined4 *)(in_ECX + -0xa84),param_1,2,0,local_78);
  cVar2 = FUN_00529f40(local_68,0);
  if (cVar2 == '\0') {
    local_6c = 1;
  }
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x2c))();
  uVar1 = local_6c;
  local_8 = 0xffffffff;
  FUN_005123f0();
  ExceptionList = local_10;
  return uVar1;
}

