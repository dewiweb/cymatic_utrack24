// rea decompile_all
// name: FUN_00503080
// address: 0x503080
// body: available
// range: 0x503080-0x503159 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00503080(undefined4 param_1,undefined4 param_2,char param_3,undefined1 param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 *in_ECX;
  undefined1 *local_24;
  undefined1 local_20 [8];
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cdef9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005017d0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 1;
  cVar2 = FUN_005032b0(*in_ECX,param_2,param_4,&local_18,&local_14);
  if (cVar2 != '\0') {
    if (param_3 == '\0') {
      local_24 = local_18;
    }
    else {
      local_24 = local_14;
    }
    uVar1 = *local_24;
    *local_24 = 0;
    FUN_00501f30(*in_ECX);
    *local_24 = uVar1;
  }
  FUN_005018d0(local_20);
  local_8 = local_8 & 0xffffff00;
  FUN_00501900();
  ExceptionList = local_10;
  return param_1;
}

