// rea decompile_all
// name: FUN_00588860
// address: 0x588860
// body: available
// range: 0x588860-0x588981 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00588860(char param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
            undefined2 param_5,undefined2 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d5d80;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = CPNS::ISerializable::vftable;
  in_ECX[1] = CPG::CPListItem<CPG::CCPMessage_Generic>::vftable;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *in_ECX = CPG::CCPMessage_Generic::vftable;
  in_ECX[1] = CPG::CCPMessage_Generic::vftable;
  in_ECX[4] = 0x10002381 - (uint)(param_1 != '\0');
  local_8 = 0;
  *in_ECX = CPG::CCPMessage_SM_Signal::vftable;
  in_ECX[1] = CPG::CCPMessage_SM_Signal::vftable;
  FUN_005017d0(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00503bc0();
  *(undefined2 *)(in_ECX + 6) = param_2;
  *(undefined2 *)((int)in_ECX + 0x1a) = param_3;
  *(undefined2 *)(in_ECX + 7) = param_4;
  *(undefined2 *)((int)in_ECX + 0x1e) = param_5;
  *(undefined2 *)(in_ECX + 8) = param_6;
  FUN_00501f30(param_7);
  FUN_00503de0(param_8);
  ExceptionList = local_10;
  return in_ECX;
}

