// rea decompile_all
// name: FUN_0054e720
// address: 0x54e720
// body: available
// range: 0x54e720-0x54e7ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_0054e720(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d2f3b;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = CPG::ITCPIPSocket::vftable;
  local_8 = 0;
  FUN_00598040(uVar1);
  *in_ECX = CPG::CWin32TCPIPSocket::vftable;
  in_ECX[1] = CPG::CWin32TCPIPSocket::vftable;
  _memset(in_ECX + 4,0,0x10);
  in_ECX[2] = param_1;
  in_ECX[8] = param_2;
  in_ECX[9] = param_3;
  in_ECX[10] = param_4;
  in_ECX[0xb] = param_5;
  *(bool *)(in_ECX + 3) = in_ECX[2] != -1;
  in_ECX[0xc] = 1;
  in_ECX[0xd] = 0;
  ExceptionList = local_10;
  return in_ECX;
}

