// rea decompile_all
// name: FUN_00596740
// address: 0x596740
// body: available
// range: 0x596740-0x59690c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00596740(void)

{
  uint uVar1;
  HANDLE pvVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d66ee;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = CPG::IVNMEnterBootloaderHandler::vftable;
  local_8 = 0;
  *in_ECX = CPG::CCLPCHAIMsgLinkTransportProtocol::vftable;
  in_ECX[0xb] = "CLPSendBufferMtx";
  FUN_005157a0(uVar1);
  in_ECX[4] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 5));
  local_8._0_1_ = 1;
  in_ECX[0x21] = "CLPSendMtx";
  FUN_005157a0();
  in_ECX[0x1a] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1b));
  local_8 = CONCAT31(local_8._1_3_,2);
  in_ECX[0x31] = "CLPAckEvent";
  FUN_005157a0();
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  in_ECX[0x30] = pvVar2;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x311] = 0;
  in_ECX[0x312] = 0;
  in_ECX[0x313] = 0;
  in_ECX[0x314] = 0;
  in_ECX[0x315] = 0;
  in_ECX[0x316] = 2;
  *(undefined1 *)(in_ECX + 0x317) = 0;
  *(undefined1 *)((int)in_ECX + 0xc5d) = 0;
  *(undefined1 *)((int)in_ECX + 0xc5e) = 0;
  *(undefined1 *)((int)in_ECX + 0xc5f) = 0;
  in_ECX[0x318] = 0;
  in_ECX[0x319] = 0;
  in_ECX[0x31a] = 500;
  *(undefined1 *)(in_ECX + 0x31b) = 0;
  ExceptionList = local_10;
  return in_ECX;
}

