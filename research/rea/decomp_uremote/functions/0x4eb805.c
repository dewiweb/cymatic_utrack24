// rea decompile_all
// name: FUN_004eb805
// address: 0x4eb805
// body: available
// range: 0x4eb805-0x4eb8a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb805(int param_1)

{
  undefined4 in_ECX;
  code *pcVar1;
  undefined1 local_1c [8];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005daf06;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004c3456(DAT_00955fd4 ^ (uint)&stack0xffffffe0);
  local_c = 0;
  if (param_1 == 0x10003001) {
    pcVar1 = FUN_004f9b3e;
  }
  else if (param_1 == 0x10003002) {
    pcVar1 = FUN_004f9c53;
  }
  else if (param_1 == 0x10003003) {
    pcVar1 = FUN_004f9d5b;
  }
  else {
    if (param_1 != 0x10003004) goto LAB_004eb886;
    FUN_004e9b63();
    pcVar1 = (code *)&LAB_0045f989;
  }
  FUN_004f894b(local_1c,pcVar1,in_ECX);
LAB_004eb886:
  FUN_00474d0f();
  ExceptionList = local_14;
  return;
}

