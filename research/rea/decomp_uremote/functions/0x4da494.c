// rea decompile_all
// name: FUN_004da494
// address: 0x4da494
// body: available
// range: 0x4da494-0x4da698 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004da494(void)

{
  char in_stack_00000018;
  char in_stack_0000001c;
  byte in_stack_00000020;
  undefined1 local_38 [32];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dfdc4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if ((in_stack_0000001c != '\0') || (in_stack_00000018 != '\0')) {
    FUN_0047604f();
    FUN_0047d23a();
  }
  FUN_0045151e();
  if ((in_stack_00000020 & 0x60) != 0) {
    FUN_0047888f();
    local_c = 0;
    FUN_00479368(local_38,0,0);
    FUN_0047604f();
    FUN_0047cda7();
    FUN_004f5bd0();
    FUN_004f5b59();
    FUN_0043bc2d();
    FUN_0047a5db();
    FUN_0047d2ae();
    local_c = 0xffffffff;
    FUN_004f7994();
  }
  FUN_004d076d();
  FUN_0047cda7();
  FUN_0049f51e();
  local_c = 1;
  FUN_0047ceaa();
  puStack_10 = (undefined1 *)0xffffffff;
  FUN_004c4d7a();
  FUN_0047d077();
  ExceptionList = pvStack_18;
  return;
}

