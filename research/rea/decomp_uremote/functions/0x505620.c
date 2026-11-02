// rea decompile_all
// name: FUN_00505620
// address: 0x505620
// body: available
// range: 0x505620-0x5056c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00505620(undefined4 param_1,void *param_2,size_t param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ce13a;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00505130(2,param_1);
  local_8 = 0;
  *in_ECX = CPNS::DynamicBinaryData::vftable;
  uVar2 = FUN_005b04d6(param_3,uVar1);
  in_ECX[1] = uVar2;
  if (in_ECX[1] != 0) {
    _memcpy((void *)in_ECX[1],param_2,param_3);
    in_ECX[2] = param_3;
  }
  ExceptionList = local_10;
  return in_ECX;
}

