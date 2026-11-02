// rea decompile_all
// name: FUN_0054d8d0
// address: 0x54d8d0
// body: available
// range: 0x54d8d0-0x54d9eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0054d8d0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d2e6c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00597fc0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  in_ECX[7] = CPG::IMessageLinkTransportProtocolHandler::vftable;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  *in_ECX = CPG::CCLPMessageLinkCHAI::vftable;
  in_ECX[7] = CPG::CCLPMessageLinkCHAI::vftable;
  FUN_00596740();
  local_8._0_1_ = 2;
  FUN_0054d7e0();
  local_8 = CONCAT31(local_8._1_3_,3);
  in_ECX[0x32f] = "CLPLnkFIFOMtx";
  FUN_005157a0();
  in_ECX[0x328] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x329));
  in_ECX[0x33f] = 0;
  *(undefined1 *)(in_ECX + 0x340) = 0;
  in_ECX[0x33e] = 0;
  in_ECX[0x341] = 0;
  in_ECX[0x342] = 0;
  in_ECX[0x343] = 0;
  ExceptionList = local_10;
  return in_ECX;
}

