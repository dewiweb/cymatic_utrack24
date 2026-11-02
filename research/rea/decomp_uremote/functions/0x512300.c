// rea decompile_all
// name: FUN_00512300
// address: 0x512300
// body: available
// range: 0x512300-0x5123cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00512300(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cf03e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0054d7e0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  *(undefined2 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined2 *)(in_ECX + 0x12) = 0;
  *(undefined2 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined2 *)(in_ECX + 0x1a) = 0;
  local_8 = 2;
  FUN_00503bc0();
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined1 *)(in_ECX + 0x51) = 1;
  FUN_0052f300();
  ExceptionList = local_10;
  return in_ECX;
}

