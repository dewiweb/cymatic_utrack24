// rea decompile_all
// name: FUN_005171d0
// address: 0x5171d0
// body: available
// range: 0x5171d0-0x5172f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_005171d0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cf3e4;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = CPG::IThreadNotificationHandler::vftable;
  local_8 = 0;
  *in_ECX = CPCHAI::TimerThread::vftable;
  in_ECX[1] = param_1;
  FUN_0052def0(uVar1);
  local_8._0_1_ = 1;
  FUN_00516340(param_1);
  local_8._0_1_ = 2;
  FUN_0054d7e0();
  *(undefined2 *)(in_ECX + 0x1d) = 0;
  in_ECX[0x1c] = param_1;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x19] = 0;
  *(undefined2 *)(in_ECX + 0x1d) = 0x4000;
  local_8 = CONCAT31(local_8._1_3_,3);
  in_ECX[0x1e] = 0x28;
  FUN_0052eb20(in_ECX,1,0,"Timer Thread",*(undefined4 *)(in_ECX[1] + 0x70));
  in_ECX[0xb] = 0xfa;
  ExceptionList = local_10;
  return in_ECX;
}

